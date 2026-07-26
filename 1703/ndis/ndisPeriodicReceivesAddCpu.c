/*
 * XREFs of ndisPeriodicReceivesAddCpu @ 0x1C0050B8C
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00D92E0 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C00145E0 (NdisInitializeTimer.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     ndisCreateThread @ 0x1C00B00C4 (ndisCreateThread.c)
 */

LONG __fastcall ndisPeriodicReceivesAddCpu(ULONG a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  int Thread; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  v2 = (unsigned __int64)(unsigned int)v1 << 7;
  NdisInitializeTimer(
    (PNDIS_TIMER)((char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next + v2),
    (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
    0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[8] + v2), &ProcNumber);
  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    Thread = ndisCreateThread(
               ndisReceiveWorkerThread,
               (unsigned int)v1,
               LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink),
               (char *)WPP_MAIN_CB.Dpc.DeferredContext + 8 * v1);
    if ( Thread < 0 && (unsigned __int8)byte_1C0092613 >= 2u )
      WPP_SF_dd(0x50u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v1, Thread);
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}

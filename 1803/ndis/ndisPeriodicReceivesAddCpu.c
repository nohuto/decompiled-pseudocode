/*
 * XREFs of ndisPeriodicReceivesAddCpu @ 0x1C00500A8
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00E4E00 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001DEA0 (NdisInitializeTimer.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     ndisCreateThread @ 0x1C00C879C (ndisCreateThread.c)
 */

LONG __fastcall ndisPeriodicReceivesAddCpu(ULONG a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  int Thread; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  v2 = (unsigned __int64)(unsigned int)v1 << 7;
  NdisInitializeTimer((PNDIS_TIMER)((char *)qword_1C0098DF0 + v2), (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer, 0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C0098DF0 + v2 + 64), &ProcNumber);
  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( byte_1C0098DC1 )
  {
    Thread = ndisCreateThread(v3, (unsigned int)v1, (unsigned int)dword_1C0098DC8, (char *)P + 8 * v1);
    if ( Thread < 0 && (unsigned __int8)byte_1C0099613 >= 2u )
      WPP_SF_dd(0x4Du, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v1, Thread);
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}

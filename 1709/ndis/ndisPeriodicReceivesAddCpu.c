/*
 * XREFs of ndisPeriodicReceivesAddCpu @ 0x1C004F75C
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00E36A0 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C0011550 (NdisInitializeTimer.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     ndisCreateThread @ 0x1C00C7E60 (ndisCreateThread.c)
 */

LONG __fastcall ndisPeriodicReceivesAddCpu(ULONG a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  int Thread; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  v2 = (unsigned __int64)(unsigned int)v1 << 7;
  NdisInitializeTimer((PNDIS_TIMER)((char *)qword_1C0097F30 + v2), (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer, 0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C0097F30 + v2 + 64), &ProcNumber);
  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( byte_1C0097F01 )
  {
    Thread = ndisCreateThread(v3, (unsigned int)v1, (unsigned int)dword_1C0097F08, (char *)qword_1C0097F48 + 8 * v1);
    if ( Thread < 0 && (unsigned __int8)byte_1C0098753 >= 2u )
      WPP_SF_dd(0x4Du, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v1, Thread);
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}

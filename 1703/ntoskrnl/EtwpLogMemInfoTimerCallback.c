/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x140254310
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14003AAC0 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x1402541D0 (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140254804 (EtwpQueuePerfMemInfoWorkItem.c)
 */

void EtwpLogMemInfoTimerCallback()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // ecx
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  MmQuerySystemMemoryInformation(v3);
  v2 = DWORD1(PerfGlobalGroupMask);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    EtwpLogMemInfo(0LL, (__int64)v3, v0, v1);
    v2 = DWORD1(PerfGlobalGroupMask);
  }
  if ( (v2 & 0x800000) != 0 )
    EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v3[0]);
}

/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x14027C490
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14012F138 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x14027C33C (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14027CBE8 (EtwpQueuePerfMemInfoWorkItem.c)
 */

void EtwpLogMemInfoTimerCallback()
{
  __int64 v0; // r8
  __int64 v1; // r9
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  MmQuerySystemMemoryInformation(v2);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
    EtwpLogMemInfo(0LL, (__int64)v2, v0, v1);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v2[0]);
}

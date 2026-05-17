/*
 * XREFs of RtlpFreeDebugInfo @ 0x180061594
 * Callers:
 *     RtlInitializeResource @ 0x180009AF0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180009BDC (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlDeleteResource @ 0x180061430 (RtlDeleteResource.c)
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeDebugInfo(unsigned __int64 a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && ((unsigned __int64)&RtlpStaticDebugInfo > a1 || a1 >= (unsigned __int64)&SRWLockSpinCount) )
  {
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
}

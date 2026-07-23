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

LOGICAL __fastcall RtlpFreeDebugInfo(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && (&RtlpStaticDebugInfo > (_UNKNOWN *)a1 || a1 >= &SRWLockSpinCount) )
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1, a3, a4);
  }
}

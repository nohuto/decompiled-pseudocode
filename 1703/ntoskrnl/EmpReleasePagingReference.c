/*
 * XREFs of EmpReleasePagingReference @ 0x1404049B8
 * Callers:
 *     EmClientQueryRuleState @ 0x140404750 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140404840 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 EmpReleasePagingReference()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  dword_14036AA88 ^= (dword_14036AA88 ^ (dword_14036AA88 - 1)) & 0x7FFFFFFF;
  if ( (dword_14036AA88 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}

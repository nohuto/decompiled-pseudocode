/*
 * XREFs of EmpAcquirePagingReference @ 0x140404948
 * Callers:
 *     EmClientQueryRuleState @ 0x140404750 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140404840 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // bl

  v0 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( dword_14036AA88 < 0 )
  {
    v0 = 1;
    dword_14036AA88 ^= (dword_14036AA88 ^ (dword_14036AA88 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}

/*
 * XREFs of EmpReleasePagingReference @ 0x14046FD18
 * Callers:
 *     EmClientQueryRuleState @ 0x14046FAB0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14046FBA0 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char EmpReleasePagingReference()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rdx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  v2 = 0x7FFFFFFFLL;
  dword_1403C9F48 ^= (dword_1403C9F48 ^ (dword_1403C9F48 - 1)) & 0x7FFFFFFF;
  if ( (dword_1403C9F48 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock, v2, v0, v1);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}

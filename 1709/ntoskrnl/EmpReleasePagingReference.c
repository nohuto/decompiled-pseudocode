/*
 * XREFs of EmpReleasePagingReference @ 0x140424520
 * Callers:
 *     EmClientQueryRuleState @ 0x140424330 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140424420 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

char EmpReleasePagingReference()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  dword_140386A28 ^= (dword_140386A28 ^ (dword_140386A28 - 1)) & 0x7FFFFFFF;
  if ( (dword_140386A28 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}

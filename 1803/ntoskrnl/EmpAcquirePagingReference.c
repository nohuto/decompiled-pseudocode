/*
 * XREFs of EmpAcquirePagingReference @ 0x14046FCA8
 * Callers:
 *     EmClientQueryRuleState @ 0x14046FAB0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14046FBA0 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // bl
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rdx

  v0 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( dword_1403C9F48 < 0 )
  {
    v0 = 1;
    dword_1403C9F48 ^= (dword_1403C9F48 ^ (dword_1403C9F48 + 1)) & 0x7FFFFFFF;
  }
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v3) = v3 & 6;
  if ( (_BYTE)v3 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock, v3, v1, v2);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}

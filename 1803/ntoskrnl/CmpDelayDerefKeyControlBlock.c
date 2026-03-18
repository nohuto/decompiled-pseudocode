/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1404A9930
 * Callers:
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1406F517C (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1406FFD38 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     CmpArmDelayDerefKCBWorker @ 0x140574F50 (CmpArmDelayDerefKCBWorker.c)
 */

void __fastcall CmpDelayDerefKeyControlBlock(__int64 a1)
{
  unsigned __int32 v1; // eax
  unsigned __int32 v3; // r8d
  char v4; // di
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  bool v7; // zf

  v1 = *(_DWORD *)a1;
  while ( v1 > 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v1 - 1, v1);
    if ( v1 == v3 )
      return;
  }
  v4 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  *(_BYTE *)(a1 + 56) |= 1u;
  v5 = (_QWORD *)qword_1403CA598;
  v6 = (_QWORD *)(a1 + 216);
  if ( *(__int64 **)qword_1403CA598 != &CmpDelayDerefKCBListHead )
    __fastfail(3u);
  v7 = CmpDelayDerefKCBWorkItemActive == 0;
  *v6 = &CmpDelayDerefKCBListHead;
  v6[1] = v5;
  *v5 = v6;
  qword_1403CA598 = (__int64)v6;
  if ( v7 )
  {
    CmpDelayDerefKCBWorkItemActive = 1;
    v4 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  if ( v4 )
    CmpArmDelayDerefKCBWorker();
}

/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x14044CC04
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14066742C (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14044CCA8 (CmpArmDelayDerefKCBWorker.c)
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
  v5 = (_QWORD *)qword_14036B0B8;
  v6 = (_QWORD *)(a1 + 216);
  if ( *(__int64 **)qword_14036B0B8 != &CmpDelayDerefKCBListHead )
    __fastfail(3u);
  v7 = CmpDelayDerefKCBWorkItemActive == 0;
  *v6 = &CmpDelayDerefKCBListHead;
  v6[1] = v5;
  *v5 = v6;
  qword_14036B0B8 = (__int64)v6;
  if ( v7 )
  {
    CmpDelayDerefKCBWorkItemActive = 1;
    v4 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  if ( v4 )
    CmpArmDelayDerefKCBWorker();
}

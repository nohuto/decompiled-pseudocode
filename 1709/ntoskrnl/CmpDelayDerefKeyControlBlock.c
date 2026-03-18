/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x140478AA0
 * Callers:
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140691B68 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14069B148 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1405851A8 (CmpArmDelayDerefKCBWorker.c)
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
  v5 = (_QWORD *)qword_140387058;
  v6 = (_QWORD *)(a1 + 216);
  if ( *(__int64 **)qword_140387058 != &CmpDelayDerefKCBListHead )
    __fastfail(3u);
  v7 = CmpDelayDerefKCBWorkItemActive == 0;
  *v6 = &CmpDelayDerefKCBListHead;
  v6[1] = v5;
  *v5 = v6;
  qword_140387058 = (__int64)v6;
  if ( v7 )
  {
    CmpDelayDerefKCBWorkItemActive = 1;
    v4 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  if ( v4 )
    CmpArmDelayDerefKCBWorker();
}

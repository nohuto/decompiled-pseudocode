/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1400A94E0
 * Callers:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401DE608 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401DE7D8 (CcReferenceFileOffset.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  return ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}

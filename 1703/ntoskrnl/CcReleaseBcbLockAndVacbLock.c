/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1400A9478
 * Callers:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401DE608 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401DE7D8 (CcReferenceFileOffset.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}

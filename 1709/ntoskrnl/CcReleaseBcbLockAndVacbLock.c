/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1400F8C0C
 * Callers:
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1401E15A4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401E1870 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}

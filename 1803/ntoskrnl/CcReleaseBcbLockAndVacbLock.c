/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1400C4DA8
 * Callers:
 *     CcExtendVacbArray @ 0x1400C48A4 (CcExtendVacbArray.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceFileOffset @ 0x140220A9C (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140220AF4 (CcReferenceFileOffset.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}

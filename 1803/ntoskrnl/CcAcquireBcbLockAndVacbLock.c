/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1400C4DE8
 * Callers:
 *     CcExtendVacbArray @ 0x1400C48A4 (CcExtendVacbArray.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceFileOffset @ 0x140220A9C (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140220AF4 (CcReferenceFileOffset.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  return ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}

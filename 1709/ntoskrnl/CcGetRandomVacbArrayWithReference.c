/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x1401E17A4
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x1400A4114 (CcReferenceVacbArray.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1401E1844 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandomEx @ 0x140597790 (RtlRandomEx.c)
 */

_DWORD *CcGetRandomVacbArrayWithReference()
{
  ULONG v0; // ebx
  KIRQL v1; // di
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  while ( 1 )
  {
    do
      v0 = RtlRandomEx(&CcRandomSeed) % (CcVacbArraysHighestUsedIndex + 1);
    while ( !*(_QWORD *)(CcVacbArrays + 8LL * v0) );
    v1 = KeAcquireQueuedSpinLock(4uLL);
    v2 = CcReferenceVacbArray(v0);
    v3 = v2;
    if ( v2 )
      break;
    KeReleaseQueuedSpinLock(4uLL, v1);
  }
  CcRecalculateVacbArrayHighwaterMark(v2);
  KeReleaseQueuedSpinLock(4uLL, v1);
  return v3;
}

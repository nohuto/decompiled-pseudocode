/*
 * XREFs of CcDereferenceVacbArray @ 0x1401E15FC
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcRemoveVacbArray @ 0x1401E191C (CcRemoveVacbArray.c)
 *     CcFreeVacbArray @ 0x1406875A4 (CcFreeVacbArray.c)
 */

void __fastcall CcDereferenceVacbArray(__int64 a1, char a2)
{
  KIRQL v4; // si
  int v5; // eax
  int v6; // eax
  KIRQL v7; // [rsp+48h] [rbp+10h]

  if ( a2 )
    v4 = v7;
  else
    v4 = KeAcquireQueuedSpinLock(4uLL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x153uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = v5 - 1;
  *(_DWORD *)(a1 + 4) = v6;
  if ( v6 )
  {
    if ( !a2 )
      KeReleaseQueuedSpinLock(4uLL, v4);
  }
  else if ( !a2 )
  {
    CcRemoveVacbArray(a1);
    KeReleaseQueuedSpinLock(4uLL, v4);
    CcFreeVacbArray(a1);
  }
}

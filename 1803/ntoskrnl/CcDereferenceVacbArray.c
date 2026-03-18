/*
 * XREFs of CcDereferenceVacbArray @ 0x14015C4B4
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcRemoveVacbArray @ 0x140220BA0 (CcRemoveVacbArray.c)
 *     CcFreeVacbArray @ 0x1406EB3F4 (CcFreeVacbArray.c)
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

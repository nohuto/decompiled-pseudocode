/*
 * XREFs of CcDereferenceVacbArray @ 0x1401DE660
 * Callers:
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcRemoveVacbArray @ 0x1401DE884 (CcRemoveVacbArray.c)
 *     CcFreeVacbArray @ 0x14065E720 (CcFreeVacbArray.c)
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
    KeBugCheckEx(0x34u, 0x149uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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

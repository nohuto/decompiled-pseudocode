/*
 * XREFs of IopMountInitializeVpb @ 0x14012CA70
 * Callers:
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 * Callees:
 *     IopIncrementVpbRefCount @ 0x1400A9314 (IopIncrementVpbRefCount.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

ULONG_PTR __fastcall IopMountInitializeVpb(__int64 a1, __int64 a2, int a3, char a4)
{
  KIRQL v8; // al
  ULONG_PTR v9; // rbx
  KIRQL v10; // r14

  v8 = KeAcquireQueuedSpinLock(9uLL);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = v8;
  *(_WORD *)(v9 + 4) = 1;
  if ( a3 )
    *(_WORD *)(v9 + 4) = 17;
  if ( a4 )
    *(_WORD *)(v9 + 4) |= 0x20u;
  *(_BYTE *)(*(_QWORD *)(v9 + 8) + 76LL) = *(_BYTE *)(a2 + 76) + 1;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 312LL) + 72LL) = v9;
  IopIncrementVpbRefCount(v9, 0);
  KeReleaseQueuedSpinLock(9uLL, v10);
  return v9;
}

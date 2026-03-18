/*
 * XREFs of IopSetLegacyResourcesFlag @ 0x1401F8E38
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopSetLegacyResourcesFlag(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(a1 + 16) |= 0x40u;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}

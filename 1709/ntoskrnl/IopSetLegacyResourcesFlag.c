/*
 * XREFs of IopSetLegacyResourcesFlag @ 0x1401FED3C
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall IopSetLegacyResourcesFlag(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(a1 + 16) |= 0x40u;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}

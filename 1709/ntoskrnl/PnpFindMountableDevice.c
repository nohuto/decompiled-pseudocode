/*
 * XREFs of PnpFindMountableDevice @ 0x1400FF2B4
 * Callers:
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14055E96C (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1406D4B78 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall PnpFindMountableDevice(__int64 a1)
{
  KIRQL v2; // dl

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 && ((*(_DWORD *)(a1 + 48) & 0x40) == 0 || !*(_QWORD *)(a1 + 56)) )
    a1 = *(_QWORD *)(a1 + 24);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return a1;
}

/*
 * XREFs of PnpFindMountableDevice @ 0x14014523C
 * Callers:
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14073A3B0 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14073E2DC (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
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

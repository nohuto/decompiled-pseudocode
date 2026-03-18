/*
 * XREFs of PnpUnlockMountableDevice @ 0x140158E70
 * Callers:
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14055E96C (PiIrpQueryRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x1406D4754 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x1406D6150 (PipProcessRestartPhase1.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall PnpUnlockMountableDevice(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( *(_QWORD *)(v1 + 56) )
        KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = *(_QWORD *)(v1 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}

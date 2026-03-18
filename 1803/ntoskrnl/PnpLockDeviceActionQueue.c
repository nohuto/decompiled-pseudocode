/*
 * XREFs of PnpLockDeviceActionQueue @ 0x1400C89A8
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x1400C88F0 (IoControlPnpDeviceActionQueue.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140274C18 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopUpdateWakeSourceWorker @ 0x140278980 (PopUpdateWakeSourceWorker.c)
 *     IoBuildPoDeviceNotifyList @ 0x140475C10 (IoBuildPoDeviceNotifyList.c)
 *     PopDisengageDirectedDrips @ 0x140761FD4 (PopDisengageDirectedDrips.c)
 *     PipInitializeCoreDriversByGroup @ 0x1408B5658 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 */

void PnpLockDeviceActionQueue()
{
  unsigned __int64 v0; // rbx

  while ( 1 )
  {
    PpDevNodeLockTree(1LL);
    v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    if ( !PnpEnumerationInProgress )
      break;
    KxReleaseSpinLock(&PnpSpinLock);
    __writecr8(v0);
    PpDevNodeUnlockTree(1LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  }
  PnpEnumerationInProgress = 1;
  KeResetEvent(&PnpEnumerationLock);
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v0);
}

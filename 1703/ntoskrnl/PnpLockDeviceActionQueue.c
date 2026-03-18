/*
 * XREFs of PnpLockDeviceActionQueue @ 0x140031DD4
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140031D28 (IoControlPnpDeviceActionQueue.c)
 *     PopUpdateWakeSourceWorker @ 0x14022DE30 (PopUpdateWakeSourceWorker.c)
 *     IoBuildPoDeviceNotifyList @ 0x14040AEEC (IoBuildPoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 */

__int64 PnpLockDeviceActionQueue()
{
  KIRQL v0; // bl
  __int64 result; // rax

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
  result = v0;
  __writecr8(v0);
  return result;
}

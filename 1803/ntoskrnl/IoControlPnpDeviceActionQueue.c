/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1400C88F0
 * Callers:
 *     PopDiagDeviceRundownWorker @ 0x140577E20 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x1406045B0 (WmipRegistrationWorker.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14075F754 (PopFxDestroyDripsBlockingDeviceList.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1400C8910 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}

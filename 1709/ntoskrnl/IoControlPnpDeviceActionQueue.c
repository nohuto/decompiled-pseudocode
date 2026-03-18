/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x14012914C
 * Callers:
 *     PopDiagDeviceRundownWorker @ 0x14044C920 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x14058E000 (WmipRegistrationWorker.c)
 *     PopFxChildDevicesActive @ 0x1406F8134 (PopFxChildDevicesActive.c)
 *     PopFxFreeChildDevicesActiveList @ 0x1406F82A4 (PopFxFreeChildDevicesActiveList.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x14012916C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140129204 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}

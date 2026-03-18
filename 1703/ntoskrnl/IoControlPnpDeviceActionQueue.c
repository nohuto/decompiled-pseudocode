/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140031D28
 * Callers:
 *     PopDiagDeviceRundownWorker @ 0x14044D890 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x1405C6890 (WmipRegistrationWorker.c)
 *     PopFxChildDevicesActive @ 0x1406C7620 (PopFxChildDevicesActive.c)
 *     PopFxFreeChildDevicesActiveList @ 0x1406C7804 (PopFxFreeChildDevicesActiveList.c)
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}

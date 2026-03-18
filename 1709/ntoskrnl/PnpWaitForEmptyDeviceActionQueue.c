/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x1405C92D0
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x1408454A4 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140845614 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}

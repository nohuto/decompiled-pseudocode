/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x14059CE50
 * Callers:
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x1407F870C (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}

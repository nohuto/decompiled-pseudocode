/*
 * XREFs of PnpWaitForDevicesToStart @ 0x1407F870C
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14059CE50 (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}

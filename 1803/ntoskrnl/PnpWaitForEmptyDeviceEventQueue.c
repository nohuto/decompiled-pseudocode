/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x140634424
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x1408B5658 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}

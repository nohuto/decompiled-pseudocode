/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x1405C92A4
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140845614 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}

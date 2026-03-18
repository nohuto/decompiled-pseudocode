/*
 * XREFs of PnpInitializeProcessor @ 0x1401FD6EC
 * Callers:
 *     KeStartDynamicProcessor @ 0x1406D8330 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 6, 0, 1LL, 0LL, 0LL, 0LL);
  return 0LL;
}

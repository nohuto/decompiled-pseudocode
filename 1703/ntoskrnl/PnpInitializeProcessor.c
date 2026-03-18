/*
 * XREFs of PnpInitializeProcessor @ 0x1401F7808
 * Callers:
 *     KeStartDynamicProcessor @ 0x1406AD030 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 6, 0, 1LL, 0LL, 0LL, 0LL);
  return 0LL;
}

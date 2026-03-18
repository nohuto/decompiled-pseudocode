/*
 * XREFs of PnpInitializeProcessor @ 0x14023A4E8
 * Callers:
 *     KeStartDynamicProcessor @ 0x1407421B0 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 6, 0, 1LL, 0LL, 0LL, 0LL);
  return 0LL;
}

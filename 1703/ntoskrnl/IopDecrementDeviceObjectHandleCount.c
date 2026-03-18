/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1401EF730
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14059AA20 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0);
}

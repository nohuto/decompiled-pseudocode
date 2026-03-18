/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x14015D6AC
 * Callers:
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14055E96C (PiIrpQueryRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1400858D0 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}

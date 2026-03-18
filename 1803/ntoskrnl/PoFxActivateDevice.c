/*
 * XREFs of PoFxActivateDevice @ 0x140146BA0
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1405C9A7C (PnpDeleteLockedDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1405D4790 (PiProcessQueryDeviceState.c)
 *     PiProcessResourceRequirementsChanged @ 0x140739660 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x14073E2DC (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140760A40 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}

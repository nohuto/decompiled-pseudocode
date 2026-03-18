/*
 * XREFs of PoFxActivateDevice @ 0x14006815C
 * Callers:
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1404A79A4 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x14057015C (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406A6C40 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x1406A9C98 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL);
}

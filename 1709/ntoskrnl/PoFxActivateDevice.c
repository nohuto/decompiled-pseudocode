/*
 * XREFs of PoFxActivateDevice @ 0x1400FC934
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x140553034 (PipEnumerateDevice.c)
 *     PnpDeleteLockedDeviceNode @ 0x14055D620 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406D1B54 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x1406D4B78 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1406F9580 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}

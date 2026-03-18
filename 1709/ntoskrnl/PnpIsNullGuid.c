/*
 * XREFs of PnpIsNullGuid @ 0x14054CECC
 * Callers:
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}

/*
 * XREFs of PnpIsNullGuid @ 0x140523858
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}

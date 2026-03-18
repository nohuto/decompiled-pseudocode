/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x14011C4F8
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14052F3A8 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14011C510 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}

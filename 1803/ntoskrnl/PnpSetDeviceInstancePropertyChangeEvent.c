/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1401641E8
 * Callers:
 *     PnpSetDevicePropertyData @ 0x1406061E8 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140164200 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}

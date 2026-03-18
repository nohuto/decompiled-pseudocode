/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x140159470
 * Callers:
 *     PnpSetDevicePropertyData @ 0x1405B8E08 (PnpSetDevicePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}

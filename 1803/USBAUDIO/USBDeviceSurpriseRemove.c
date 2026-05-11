/*
 * XREFs of USBDeviceSurpriseRemove @ 0x1C001FA80
 * Callers:
 *     <none>
 * Callees:
 *     USBDeviceStop @ 0x1C001F9B0 (USBDeviceStop.c)
 */

__int64 __fastcall USBDeviceSurpriseRemove(__int64 a1)
{
  return USBDeviceStop(a1);
}

/*
 * XREFs of USBDeviceSurpriseRemove @ 0x1C001B720
 * Callers:
 *     <none>
 * Callees:
 *     USBDeviceStop @ 0x1C001B650 (USBDeviceStop.c)
 */

__int64 __fastcall USBDeviceSurpriseRemove(__int64 a1)
{
  return USBDeviceStop(a1);
}

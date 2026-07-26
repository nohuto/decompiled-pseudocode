/*
 * XREFs of NdisIMInitializeDeviceInstance @ 0x1C00E5640
 * Callers:
 *     <none>
 * Callees:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E5660 (NdisIMInitializeDeviceInstanceEx.c)
 */

NDIS_STATUS __fastcall NdisIMInitializeDeviceInstance(void *a1, UNICODE_STRING *a2)
{
  return NdisIMInitializeDeviceInstanceEx(a1, a2, 0LL);
}

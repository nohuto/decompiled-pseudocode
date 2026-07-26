/*
 * XREFs of NdisIMInitializeDeviceInstance @ 0x1C00D9DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __fastcall NdisIMInitializeDeviceInstance(void *a1, UNICODE_STRING *a2)
{
  return NdisIMInitializeDeviceInstanceEx(a1, a2, 0LL);
}

/*
 * XREFs of NdisWdfPnPAddDevice @ 0x1C00E9D50
 * Callers:
 *     <none>
 * Callees:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 */

__int64 __fastcall NdisWdfPnPAddDevice(struct _DRIVER_OBJECT *a1, _DEVICE_OBJECT *a2, __int64 a3, void *a4)
{
  return ndisPnPAddDevice(a1, a2, a4, a3);
}

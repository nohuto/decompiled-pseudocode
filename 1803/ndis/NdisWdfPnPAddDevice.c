/*
 * XREFs of NdisWdfPnPAddDevice @ 0x1C00EC290
 * Callers:
 *     <none>
 * Callees:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 */

__int64 __fastcall NdisWdfPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2, __int64 a3, void *a4)
{
  return ndisPnPAddDevice(a1, a2, a4, a3);
}

/*
 * XREFs of ndisDeviceControlIrpHandler @ 0x1C00B0020
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 */

__int64 __fastcall ndisDeviceControlIrpHandler(__int64 a1, struct _IRP *a2)
{
  return ndisDeviceControlHandler(a1, *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 64), a2);
}

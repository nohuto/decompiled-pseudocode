/*
 * XREFs of NdisWdfDeviceControlIrpHandler @ 0x1C00E9C40
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceControlHandler @ 0x1C00B74EC (ndisDeviceControlHandler.c)
 */

__int64 __fastcall NdisWdfDeviceControlIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisDeviceControlHandler(*(_QWORD *)(a1 + 3848), (struct _NDIS_MINIPORT_BLOCK *)a1, a2);
}

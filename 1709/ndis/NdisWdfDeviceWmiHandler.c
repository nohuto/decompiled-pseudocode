/*
 * XREFs of NdisWdfDeviceWmiHandler @ 0x1C00E9C70
 * Callers:
 *     <none>
 * Callees:
 *     ndisWMIDispatch @ 0x1C00B7BFC (ndisWMIDispatch.c)
 */

NTSTATUS __fastcall NdisWdfDeviceWmiHandler(__int64 a1, _IRP *a2)
{
  return ndisWMIDispatch(*(_QWORD *)(a1 + 3848), (struct _NDIS_MINIPORT_BLOCK *)a1, a2);
}

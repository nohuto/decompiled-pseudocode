/*
 * XREFs of NdisWdfDeviceWmiHandler @ 0x1C00DFDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisWdfDeviceWmiHandler(__int64 a1, _IRP *a2)
{
  return ndisWMIDispatch(*(_QWORD *)(a1 + 3848), (struct _NDIS_MINIPORT_BLOCK *)a1, a2);
}

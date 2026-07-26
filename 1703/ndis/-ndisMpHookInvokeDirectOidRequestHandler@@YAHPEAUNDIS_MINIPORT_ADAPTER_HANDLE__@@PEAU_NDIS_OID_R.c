/*
 * XREFs of ?ndisMpHookInvokeDirectOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0078320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ndisMpHookInvokeDirectOidRequestHandler(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2)
{
  return ndisMRawInvokeDirectOidRequest(a1, a2);
}

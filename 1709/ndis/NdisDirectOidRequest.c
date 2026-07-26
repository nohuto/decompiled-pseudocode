/*
 * XREFs of NdisDirectOidRequest @ 0x1C0042660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisDirectOidRequest(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  return (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 103))(
           NdisBindingHandle,
           OidRequest);
}

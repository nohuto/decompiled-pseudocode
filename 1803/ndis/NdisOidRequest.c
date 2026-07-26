/*
 * XREFs of NdisOidRequest @ 0x1C000A050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisOidRequest(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  return (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 24))(
           NdisBindingHandle,
           OidRequest);
}

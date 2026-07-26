/*
 * XREFs of NdisCancelOidRequest @ 0x1C00436B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelOidRequestInternal @ 0x1C00441CC (ndisCancelOidRequestInternal.c)
 */

void __stdcall NdisCancelOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  ndisCancelOidRequestInternal(*((_QWORD *)NdisBindingHandle + 2), 0LL, RequestId, 0LL);
}

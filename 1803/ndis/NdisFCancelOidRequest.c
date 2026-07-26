/*
 * XREFs of NdisFCancelOidRequest @ 0x1C0058F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFCancelOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD v2[9]; // [rsp+30h] [rbp-48h] BYREF

  v2[1] = NdisFilterHandle;
  v2[3] = RequestId;
  KeExpandKernelStackAndCalloutEx(ndisFCancelOidRequestInternal, v2, 0x4CCCuLL, 0, 0LL);
}

/*
 * XREFs of NdisMOidRequestComplete @ 0x1C00457E0
 * Callers:
 *     NdisMCoOidRequestComplete @ 0x1C0053080 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x1C0109090 (NdisMCoRequestComplete.c)
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C1E4 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C0016AF4 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  NdisWatchdogState *v4; // rcx
  PNDIS_OID_REQUEST v6; // rdi
  __int64 v7; // r10
  PNDIS_OID_REQUEST v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = OidRequest;
  v4 = (NdisWatchdogState *)*((_QWORD *)MiniportAdapterHandle + 699);
  v6 = OidRequest;
  if ( v4 != (NdisWatchdogState *)-1LL )
    NdisWatchdogState::CancelTimer(v4);
  if ( (*(_DWORD *)&v6->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)MiniportAdapterHandle, (__int64)v6, 1, (KSPIN_LOCK *)&v8);
    v6 = v8;
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 279) )
    *((_QWORD *)MiniportAdapterHandle + 279) = 0LL;
  v7 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 473) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v7
                                                                                      + 48))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v7 + 24),
    *((_QWORD *)MiniportAdapterHandle + 663),
    MiniportAdapterHandle,
    v6,
    Status);
}

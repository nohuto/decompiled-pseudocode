/*
 * XREFs of NdisMOidRequestComplete @ 0x1C00437C0
 * Callers:
 *     NdisMCoOidRequestComplete @ 0x1C0052830 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x1C01140D0 (NdisMCoRequestComplete.c)
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C000E4F8 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001A7D4 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  __int64 v3; // rax
  PNDIS_OID_REQUEST v5; // rdi
  NdisWatchdogState *v7; // rcx
  __int64 v8; // r10
  PNDIS_OID_REQUEST v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)MiniportAdapterHandle + 473);
  v5 = OidRequest;
  v9 = OidRequest;
  if ( *(_DWORD *)(v3 + 904) != 1 )
  {
    v7 = (NdisWatchdogState *)*((_QWORD *)MiniportAdapterHandle + 688);
    if ( v7 != (NdisWatchdogState *)-1LL )
      NdisWatchdogState::CancelTimer(v7);
  }
  if ( (*(_DWORD *)&v5->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)MiniportAdapterHandle, (__int64)v5, 1, (KSPIN_LOCK *)&v9);
    v5 = v9;
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 279) )
    *((_QWORD *)MiniportAdapterHandle + 279) = 0LL;
  v8 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 473) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v8
                                                                                      + 48))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v8 + 24),
    *((_QWORD *)MiniportAdapterHandle + 663),
    MiniportAdapterHandle,
    v5,
    Status);
}

/*
 * XREFs of NdisOffloadTcpDisconnect @ 0x1C0067F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisOffloadTcpDisconnect(
        PNDIS_OFFLOAD_HANDLE NdisOffloadHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG Flags)
{
  void *v4; // rcx
  PNET_BUFFER_LIST i; // rax

  v4 = NdisOffloadHandle->NdisReserved[0];
  for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
    i->SourceHandle = v4;
  return (*(__int64 (__fastcall **)(_QWORD, void *, PNET_BUFFER_LIST, _QWORD))(*(_QWORD *)(*((_QWORD *)v4 + 2) + 3784LL)
                                                                             + 616LL))(
           *((_QWORD *)v4 + 7),
           NdisOffloadHandle->MiniportOffloadContext,
           NetBufferList,
           Flags);
}

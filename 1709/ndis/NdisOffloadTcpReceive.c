/*
 * XREFs of NdisOffloadTcpReceive @ 0x1C0067430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisOffloadTcpReceive(PNDIS_OFFLOAD_HANDLE NdisOffloadHandle, PNET_BUFFER_LIST NetBufferList)
{
  void *v3; // rcx
  PNET_BUFFER_LIST i; // rax

  v3 = NdisOffloadHandle->NdisReserved[0];
  for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
    i->SourceHandle = v3;
  return (*(__int64 (__fastcall **)(_QWORD, void *, PNET_BUFFER_LIST))(*(_QWORD *)(*((_QWORD *)v3 + 2) + 3784LL) + 608LL))(
           *((_QWORD *)v3 + 7),
           NdisOffloadHandle->MiniportOffloadContext,
           NetBufferList);
}

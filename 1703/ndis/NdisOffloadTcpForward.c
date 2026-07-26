/*
 * XREFs of NdisOffloadTcpForward @ 0x1C0066C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisOffloadTcpForward(PNDIS_OFFLOAD_HANDLE NdisOffloadHandle, PNET_BUFFER_LIST NetBufferList)
{
  void *v3; // rcx
  PNET_BUFFER_LIST i; // rax

  v3 = NdisOffloadHandle->NdisReserved[0];
  for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
    i->SourceHandle = v3;
  return (*(__int64 (__fastcall **)(_QWORD, void *, PNET_BUFFER_LIST))(*(_QWORD *)(*((_QWORD *)v3 + 2) + 3784LL) + 624LL))(
           *(_QWORD *)(*((_QWORD *)v3 + 2) + 24LL),
           NdisOffloadHandle->MiniportOffloadContext,
           NetBufferList);
}

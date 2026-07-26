/*
 * XREFs of NdisOffloadTcpSend @ 0x1C00674B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ?ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0067190 (-ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z.c)
 */

NDIS_STATUS __stdcall NdisOffloadTcpSend(PNDIS_OFFLOAD_HANDLE NdisOffloadHandle, PNET_BUFFER_LIST NetBufferList)
{
  void *v2; // rbp
  unsigned int Number; // ebx
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // r14
  KIRQL v9; // r10
  unsigned __int64 v10; // rax
  PNET_BUFFER_LIST i; // rax

  v2 = NdisOffloadHandle->NdisReserved[0];
  Number = -1;
  v6 = *((_QWORD *)NdisOffloadHandle->NdisReserved[0] + 2);
  v7 = *(_DWORD *)(v6 + 48);
  v8 = *(_QWORD *)(v6 + 40);
  if ( (v7 & 0x50000) != 0 )
  {
    v9 = KfRaiseIrql(2u);
    if ( (v7 & 0x10000) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v8 + ndisPcwPerCpuDataStride * Number + 256);
    }
    if ( (v7 & 0x40000) != 0 )
    {
      v10 = ndisNumDataBytesInNblChain(NetBufferList);
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v8 + ndisPcwPerCpuDataStride * Number + 272) += v10;
    }
    if ( v9 != 2 )
      KeLowerIrql(v9);
  }
  for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
    i->SourceHandle = v2;
  return (*(__int64 (__fastcall **)(_QWORD, void *, PNET_BUFFER_LIST))(*(_QWORD *)(*((_QWORD *)v2 + 2) + 3784LL) + 600LL))(
           *((_QWORD *)v2 + 7),
           NdisOffloadHandle->MiniportOffloadContext,
           NetBufferList);
}

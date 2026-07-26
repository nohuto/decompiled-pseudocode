/*
 * XREFs of NdisAllocateNetBufferPool @ 0x1C0013860
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     ndisPplCreatePool @ 0x1C001A268 (ndisPplCreatePool.c)
 *     WPP_SF_PP @ 0x1C002819C (WPP_SF_PP.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  __int64 v4; // rbx
  unsigned int DataSize; // esi
  int v6; // eax
  unsigned int v7; // esi
  __int64 Pool; // rax
  KIRQL v9; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v11; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  if ( (unsigned __int8)byte_1C009261C >= 4u )
    WPP_SF_q(10LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, NdisHandle);
  if ( Parameters->Header.Type == 0x80 && Parameters->Header.Revision )
  {
    DataSize = Parameters->DataSize;
    v6 = 176;
    if ( DataSize )
    {
      if ( DataSize > 0x100000 )
      {
        if ( (unsigned __int8)byte_1C009261C >= 2u )
          WPP_SF_PP(11LL, Parameters, DataSize);
        goto LABEL_16;
      }
      v6 = DataSize + ((MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8) + 176;
    }
    v7 = (v6 + 7) & 0xFFFFFFF8;
    Pool = ndisPplCreatePool(NdisHandle, v7, Parameters->PoolTag);
    v4 = Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = 268;
      *(_WORD *)(Pool + 2) = 384;
      *(_QWORD *)(Pool + 40) = NdisHandle;
      *(_DWORD *)(Pool + 56) = Parameters->PoolTag;
      if ( Parameters->DataSize )
      {
        *(_DWORD *)(Pool + 88) |= 1u;
        *(_DWORD *)(Pool + 92) = Parameters->DataSize;
        *(_DWORD *)(Pool + 96) = (MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8;
      }
      *(_DWORD *)(v4 + 32) = v7;
      KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 64));
      KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 8));
      *(_QWORD *)(v4 + 24) = v4 + 16;
      *(_QWORD *)(v4 + 16) = v4 + 16;
      v9 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferPoolListLock);
      Flink = ndisGlobalNetBufferPoolList.Flink;
      v11 = (_LIST_ENTRY *)(v4 + 72);
      if ( ndisGlobalNetBufferPoolList.Flink->Blink != &ndisGlobalNetBufferPoolList )
        __fastfail(3u);
      v11->Flink = ndisGlobalNetBufferPoolList.Flink;
      *(_QWORD *)(v4 + 80) = &ndisGlobalNetBufferPoolList;
      Flink->Blink = v11;
      ndisGlobalNetBufferPoolList.Flink = (_LIST_ENTRY *)(v4 + 72);
      KeReleaseSpinLock(&ndisGlobalNetBufferPoolListLock, v9);
      *(_QWORD *)(v4 + 48) = retaddr;
    }
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C009261C >= 4u )
    WPP_SF_qq(12LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, NdisHandle, v4);
  return (NDIS_HANDLE)v4;
}

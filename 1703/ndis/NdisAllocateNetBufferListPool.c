/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C001A000
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 *     ndisInitializePeriodicReceives @ 0x1C0113E38 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisPplCreatePool @ 0x1C001A268 (ndisPplCreatePool.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_PP @ 0x1C002819C (WPP_SF_PP.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  NDIS_HANDLE v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // r12d
  unsigned __int8 fAllocateNetBuffer; // r13
  unsigned __int16 ContextSize; // r14
  unsigned int DataSize; // esi
  int v10; // r15d
  unsigned int v11; // r15d
  __int64 Pool; // rax
  KIRQL v13; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v15; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v2 = NdisHandle;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C009261C >= 4u )
    WPP_SF_q(15LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, v2);
  if ( Parameters->Header.Type == 0x80 && Parameters->Header.Revision )
  {
    fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
    ContextSize = Parameters->ContextSize;
    DataSize = Parameters->DataSize;
    v10 = fAllocateNetBuffer != 0 ? 544 : 368;
    if ( ContextSize )
    {
      if ( (ContextSize & 7) != 0 )
      {
        if ( (unsigned __int8)byte_1C009261C >= 2u )
          WPP_SF_d(16LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, ContextSize);
LABEL_28:
        v2 = NdisHandle;
        goto LABEL_29;
      }
      v10 += ContextSize + 16;
    }
    if ( DataSize )
    {
      if ( !fAllocateNetBuffer )
      {
        if ( (unsigned __int8)byte_1C009261C >= 2u )
          WPP_SF_(17LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids);
        goto LABEL_28;
      }
      if ( DataSize > 0x100000 )
      {
        if ( (unsigned __int8)byte_1C009261C >= 2u )
          WPP_SF_PP(18LL, Parameters, Parameters->DataSize);
        goto LABEL_28;
      }
      v5 = (MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8;
      v10 += DataSize + v5;
    }
    v11 = (v10 + 7) & 0xFFFFFFF8;
    Pool = ndisPplCreatePool(v3, v11, Parameters->PoolTag);
    v4 = Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = 269;
      *(_WORD *)(Pool + 2) = 384;
      *(_QWORD *)(Pool + 40) = NdisHandle;
      *(_DWORD *)(Pool + 56) = Parameters->PoolTag;
      *(_BYTE *)(Pool + 32) = Parameters->ProtocolId;
      if ( fAllocateNetBuffer )
        *(_DWORD *)(Pool + 60) |= 1u;
      if ( ContextSize )
      {
        *(_DWORD *)(Pool + 60) |= 2u;
        *(_WORD *)(Pool + 34) = ContextSize;
      }
      if ( DataSize )
      {
        *(_DWORD *)(Pool + 60) |= 4u;
        *(_DWORD *)(Pool + 88) = DataSize;
        *(_DWORD *)(Pool + 92) = v5;
      }
      *(_DWORD *)(Pool + 96) = v11;
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 64));
      KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 8));
      *(_QWORD *)(v4 + 24) = v4 + 16;
      *(_QWORD *)(v4 + 16) = v4 + 16;
      v13 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
      Flink = ndisGlobalNetBufferListPoolList.Flink;
      v15 = (_LIST_ENTRY *)(v4 + 72);
      if ( ndisGlobalNetBufferListPoolList.Flink->Blink != &ndisGlobalNetBufferListPoolList )
        __fastfail(3u);
      v15->Flink = ndisGlobalNetBufferListPoolList.Flink;
      *(_QWORD *)(v4 + 80) = &ndisGlobalNetBufferListPoolList;
      Flink->Blink = v15;
      ndisGlobalNetBufferListPoolList.Flink = (_LIST_ENTRY *)(v4 + 72);
      KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v13);
      *(_QWORD *)(v4 + 48) = retaddr;
    }
    goto LABEL_28;
  }
LABEL_29:
  if ( (unsigned __int8)byte_1C009261C >= 4u )
    WPP_SF_qq(19LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, v2, v4);
  return (NDIS_HANDLE)v4;
}

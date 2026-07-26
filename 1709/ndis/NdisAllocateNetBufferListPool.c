/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C001AC70
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 *     ndisInitializePeriodicReceives @ 0x1C011C448 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_PP @ 0x1C004D234 (WPP_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  char *v2; // rbx
  int v3; // r12d
  NDIS_HANDLE v5; // rdi
  unsigned __int16 ContextSize; // r15
  SIZE_T DataSize; // r14
  int v8; // edi
  int v9; // r8d
  unsigned int v10; // edi
  unsigned int v11; // r8d
  SIZE_T v12; // rax
  char *PoolWithTag; // rax
  char *v14; // r13
  __int64 v15; // r14
  _SLIST_HEADER *v16; // rdi
  KIRQL v17; // al
  _LIST_ENTRY *Flink; // rcx
  KIRQL v19; // dl
  _LIST_ENTRY *v20; // rax
  unsigned int v22; // [rsp+40h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 fAllocateNetBuffer; // [rsp+A8h] [rbp+10h]
  unsigned int v26; // [rsp+B0h] [rbp+18h]
  unsigned int Tag; // [rsp+B8h] [rbp+20h]

  v2 = 0LL;
  v3 = 0;
  v5 = NdisHandle;
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_q(15LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, NdisHandle);
  if ( Parameters->Header.Type == 0x80 && Parameters->Header.Revision )
  {
    ContextSize = Parameters->ContextSize;
    DataSize = Parameters->DataSize;
    fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
    v22 = Parameters->DataSize;
    v8 = fAllocateNetBuffer != 0 ? 560 : 384;
    if ( ContextSize )
    {
      if ( (ContextSize & 7) != 0 )
      {
        if ( (unsigned __int8)byte_1C009875C >= 2u )
          WPP_SF_d(16LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, ContextSize);
        goto LABEL_36;
      }
      v8 += ContextSize + 16;
    }
    if ( (_DWORD)DataSize )
    {
      if ( !Parameters->fAllocateNetBuffer )
      {
        if ( (unsigned __int8)byte_1C009875C >= 2u )
          WPP_SF_(17LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids);
        goto LABEL_36;
      }
      if ( (unsigned int)DataSize > 0x100000 )
      {
        if ( (unsigned __int8)byte_1C009875C >= 2u )
          WPP_SF_PP(18LL, Parameters, DataSize);
        goto LABEL_36;
      }
      v3 = (MmSizeOfMdl((PVOID)0xFFF, DataSize) + 7) & 0xFFFFFFF8;
      v8 += DataSize + v3;
    }
    v9 = v8 + 7;
    v10 = ndisMaxNumberOfProcessors;
    v11 = v9 & 0xFFFFFFF8;
    v26 = v11;
    v2 = 0LL;
    Tag = Parameters->PoolTag;
    if ( ndisMaxNumberOfProcessors > 1 )
      v10 = ndisMaxNumberOfProcessors + 1;
    if ( is_mul_ok(0x100uLL, v10) )
    {
      v12 = ((unsigned __int64)v10 << 8) + 128;
      if ( v12 >= (unsigned __int64)v10 << 8 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v12, Parameters->PoolTag);
        v2 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, ((unsigned __int64)v10 << 8) + 128);
          v14 = v2 + 128;
          ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)(v2 + 128),
            ndisAllocateFromNPagedPool,
            (PFREE_FUNCTION_EX)ndisFreeNblToNPagedPool,
            NonPagedPoolNx,
            0,
            v26,
            Tag,
            0x400u);
          v2[344] = 1;
          if ( v10 )
          {
            v15 = v10;
            v16 = (_SLIST_HEADER *)(v2 + 256);
            do
            {
              InitializeSListHead(v16);
              KeInitializeSpinLock(&v16[5].Alignment);
              v16[4].Alignment = (unsigned __int64)v14;
              v16[4].Region = (unsigned __int64)v16;
              v14 += 256;
              v16 += 16;
              --v15;
            }
            while ( v15 );
            LODWORD(DataSize) = v22;
          }
        }
        v11 = v26;
      }
      if ( v2 )
      {
        v5 = NdisHandle;
        *((_QWORD *)v2 + 5) = NdisHandle;
        *(_DWORD *)v2 = 25166093;
        *((_DWORD *)v2 + 14) = Parameters->PoolTag;
        v2[32] = Parameters->ProtocolId;
        if ( fAllocateNetBuffer )
          *((_DWORD *)v2 + 15) |= 1u;
        if ( ContextSize )
        {
          *((_DWORD *)v2 + 15) |= 2u;
          *((_WORD *)v2 + 17) = ContextSize;
        }
        if ( (_DWORD)DataSize )
        {
          *((_DWORD *)v2 + 15) |= 4u;
          *((_DWORD *)v2 + 22) = DataSize;
          *((_DWORD *)v2 + 23) = v3;
        }
        *((_DWORD *)v2 + 24) = v11;
        KeInitializeSpinLock((PKSPIN_LOCK)v2 + 8);
        KeInitializeSpinLock((PKSPIN_LOCK)v2 + 1);
        *((_QWORD *)v2 + 3) = v2 + 16;
        *((_QWORD *)v2 + 2) = v2 + 16;
        v17 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
        Flink = ndisGlobalNetBufferListPoolList.Flink;
        v19 = v17;
        v20 = (_LIST_ENTRY *)(v2 + 72);
        if ( ndisGlobalNetBufferListPoolList.Flink->Blink != &ndisGlobalNetBufferListPoolList )
          __fastfail(3u);
        v20->Flink = ndisGlobalNetBufferListPoolList.Flink;
        *((_QWORD *)v2 + 10) = &ndisGlobalNetBufferListPoolList;
        Flink->Blink = v20;
        ndisGlobalNetBufferListPoolList.Flink = (_LIST_ENTRY *)(v2 + 72);
        KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v19);
        *((_QWORD *)v2 + 6) = retaddr;
        goto LABEL_26;
      }
    }
LABEL_36:
    v5 = NdisHandle;
  }
LABEL_26:
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_qq(19LL, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, v5, v2);
  return v2;
}

/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x1C0015730
 * Callers:
 *     <none>
 * Callees:
 *     PplGenericAllocateFunction @ 0x1C0015C30 (PplGenericAllocateFunction.c)
 *     PplpLazyInitializeLookasideList @ 0x1C0015C74 (PplpLazyInitializeLookasideList.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

NDIS_STATUS __stdcall NdisMAllocateNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PNET_BUFFER NetBuffer,
        PVOID Context,
        ULONG Flags,
        PVOID ScatterGatherListBuffer,
        ULONG ScatterGatherListBufferSize)
{
  __int64 v6; // rsi
  PVOID v7; // r10
  bool v10; // r12
  unsigned int v11; // ecx
  _MDL *MdlChain; // rdi
  unsigned int DataOffset; // ecx
  ULONG i; // eax
  unsigned int DataLength; // eax
  ULONG v16; // r13d
  char *v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  _SLIST_ENTRY *v21; // r8
  ALLOCATE_FUNCTION_EX *v22; // rax
  __int64 v23; // r8
  SIZE_T v24; // rdx
  __int64 v25; // rcx
  _SLIST_ENTRY *v26; // rax
  NDIS_STATUS v27; // r14d
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r14
  size_t v32; // r14
  struct _MDL *v33; // rbp
  _SLIST_ENTRY *PoolWithTag; // rax
  struct _MDL *Mdl; // rax
  PSLIST_ENTRY v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 ByteCount; // rax
  __int64 v39; // rbp
  char *MappedSystemVa; // rax
  size_t v41; // rbp
  char *v42; // rdx
  int v43; // [rsp+38h] [rbp-90h]
  int v44; // [rsp+38h] [rbp-90h]
  PSLIST_ENTRY v45; // [rsp+60h] [rbp-68h]
  struct _MDL *v46; // [rsp+68h] [rbp-60h]
  struct NDIS_PCW_CONTEXT v47; // [rsp+70h] [rbp-58h] BYREF
  _SLIST_ENTRY *ListEntry; // [rsp+D0h] [rbp+8h]
  PSLIST_ENTRY ListEntrya; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v50; // [rsp+D8h] [rbp+10h]

  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v7 = Context;
  v10 = (Flags & 1) != 0;
  v11 = *(_DWORD *)(v6 + 48);
  v47.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
  v47.DatapathCyclesMask = *(_DWORD *)(v6 + 80);
  v47.DatapathEventsMask = v11;
  v47.CurrentCpu = -1;
  if ( (v11 & 0x400) != 0 )
  {
    v47.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v47.PcwBlock->DatapathEventReferences[20]
                + ndisPcwPerCpuDataStride * v47.CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v47.DatapathCyclesMask & 0x400) != 0 )
    ndisPcwStartCycleCounter(&v47, 0xAu);
  MdlChain = NetBuffer->MdlChain;
  DataOffset = NetBuffer->DataOffset;
  if ( !MdlChain )
    return -1073741823;
  for ( i = MdlChain->ByteCount; DataOffset >= i; i = MdlChain->ByteCount )
  {
    MdlChain = MdlChain->Next;
    DataOffset -= i;
  }
  DataLength = NetBuffer->DataLength;
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = DataOffset;
  v16 = DataLength + DataOffset;
  if ( DataLength + DataOffset < DataLength )
    return -1073676268;
  v17 = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
  if ( v10 )
    NetBuffer->Reserved |= 4u;
  if ( !ScatterGatherListBuffer
    || (v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, bool, PVOID, ULONG))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
                *((_QWORD *)NdisMiniportDmaHandle + 3),
                *(_QWORD *)(v6 + 3848),
                MdlChain,
                v17,
                v16,
                *((_QWORD *)NdisMiniportDmaHandle + 4),
                v7,
                v10,
                ScatterGatherListBuffer,
                ScatterGatherListBufferSize),
        v27 < 0) )
  {
    v18 = *((_QWORD *)NdisMiniportDmaHandle + 8);
    v19 = KeGetPcr()->Prcb.Number + 1;
    if ( (unsigned int)v19 >= *(_DWORD *)v18 )
      v19 = (unsigned int)(*(_DWORD *)v18 - 1);
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19);
    if ( !*(_BYTE *)(v20 + 112) )
      PplpLazyInitializeLookasideList(v18, *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19));
    ++*(_DWORD *)(v20 + 20);
    ListEntry = ExpInterlockedPopEntrySList((PSLIST_HEADER)v20);
    v21 = ListEntry;
    if ( ListEntry )
      goto LABEL_19;
    ++*(_DWORD *)(v20 + 24);
    v22 = *(ALLOCATE_FUNCTION_EX **)(v20 + 48);
    v23 = *(unsigned int *)(v20 + 40);
    v24 = *(unsigned int *)(v20 + 44);
    v25 = *(unsigned int *)(v20 + 36);
    v26 = v22 == PplGenericAllocateFunction
        ? (_SLIST_ENTRY *)PplGenericAllocateFunction((POOL_TYPE)v25, v24, v23, (PLOOKASIDE_LIST_EX)v20)
        : (_SLIST_ENTRY *)((__int64 (__fastcall *)(__int64, SIZE_T, __int64, __int64))v22)(v25, v24, v23, v20);
    ListEntry = v26;
    v21 = v26;
    if ( v26 )
    {
LABEL_19:
      NetBuffer->Reserved |= 1u;
      NetBuffer->NdisReserved[0] = v21;
      LOBYTE(v43) = v10;
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, _SLIST_ENTRY *, _DWORD))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
              *((_QWORD *)NdisMiniportDmaHandle + 3),
              *(_QWORD *)(v6 + 3848),
              MdlChain,
              v17,
              v16,
              *((_QWORD *)NdisMiniportDmaHandle + 4),
              Context,
              v43,
              v21,
              *((_DWORD *)NdisMiniportDmaHandle + 14));
      if ( v27 >= 0 )
        goto LABEL_20;
      NetBuffer->NdisReserved[0] = 0LL;
      NetBuffer->Reserved &= ~1u;
      v29 = *((_QWORD *)NdisMiniportDmaHandle + 8);
      v30 = KeGetPcr()->Prcb.Number + 1;
      if ( (unsigned int)v30 >= *(_DWORD *)v29 )
        v30 = (unsigned int)(*(_DWORD *)v29 - 1);
      v31 = *(_QWORD *)(*(_QWORD *)(v29 + 32) + 8 * v30);
      if ( !*(_BYTE *)(v31 + 112) )
        PplpLazyInitializeLookasideList(v29, *(_QWORD *)(*(_QWORD *)(v29 + 32) + 8 * v30));
      ++*(_DWORD *)(v31 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v31) >= *(_WORD *)(v31 + 16) )
      {
        ++*(_DWORD *)(v31 + 32);
        (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v31 + 56))(ListEntry, v31);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v31, ListEntry);
      }
    }
    LOBYTE(v43) = v10;
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL)
                                                                                               + 88LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3848),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            Context,
            v43);
    if ( v27 < 0 )
    {
      v32 = v16;
      v33 = 0LL;
      PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6773444Eu);
      ListEntrya = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_59;
      Mdl = IoAllocateMdl(PoolWithTag, v16, 0, 0, 0LL);
      v46 = Mdl;
      v33 = Mdl;
      if ( !Mdl )
        goto LABEL_58;
      MmBuildMdlForNonPagedPool(Mdl);
      v33->Next = 0LL;
      if ( v10 )
      {
        v36 = ListEntrya;
        v37 = 0LL;
        v45 = ListEntrya;
        do
        {
          ByteCount = MdlChain->ByteCount;
          if ( v37 < ByteCount )
            break;
          MdlChain = MdlChain->Next;
          v37 -= ByteCount;
        }
        while ( MdlChain );
        v50 = v37;
        if ( MdlChain )
        {
          while ( 1 )
          {
            if ( !v32 )
            {
LABEL_47:
              v33 = v46;
              break;
            }
            v39 = MdlChain->ByteCount;
            if ( MdlChain->ByteCount )
            {
              if ( (MdlChain->MdlFlags & 5) != 0 )
              {
                MappedSystemVa = (char *)MdlChain->MappedSystemVa;
              }
              else
              {
                MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                           MdlChain,
                                           0,
                                           MmCached,
                                           0LL,
                                           0,
                                           ndisMdlMappingNxFlag);
                v36 = v45;
                v37 = v50;
              }
              if ( !MappedSystemVa )
              {
                v33 = v46;
LABEL_58:
                PoolWithTag = ListEntrya;
LABEL_59:
                v27 = -1073741670;
LABEL_60:
                if ( (unsigned __int8)byte_1C009874A >= 4u )
                {
                  WPP_SF_d(20LL, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, (unsigned int)v27);
                  PoolWithTag = ListEntrya;
                }
                if ( v33 )
                {
                  IoFreeMdl(v33);
                  PoolWithTag = ListEntrya;
                }
                if ( PoolWithTag )
                  ExFreePoolWithTag(PoolWithTag, 0);
                NetBuffer->NdisReserved[0] = 0LL;
                NetBuffer->Reserved &= ~2u;
                NetBuffer->Reserved &= ~4u;
                goto LABEL_20;
              }
              v41 = v39 - v37;
              v50 = 0LL;
              v42 = &MappedSystemVa[v37];
              if ( v32 < v41 )
                v41 = v32;
              memmove(v36, v42, v41);
              v37 = 0LL;
              v36 = (PSLIST_ENTRY)((char *)v45 + v41);
              v45 = (PSLIST_ENTRY)((char *)v45 + v41);
              v32 -= v41;
            }
            MdlChain = MdlChain->Next;
            if ( !MdlChain )
              goto LABEL_47;
          }
        }
      }
      NetBuffer->Reserved |= 2u;
      NetBuffer->NdisReserved[0] = v33;
      LOBYTE(v44) = v10;
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, PSLIST_ENTRY, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 88LL))(
              *((_QWORD *)NdisMiniportDmaHandle + 3),
              *(_QWORD *)(v6 + 3848),
              v33,
              ListEntrya,
              v16,
              *((_QWORD *)NdisMiniportDmaHandle + 4),
              Context,
              v44);
      if ( v27 < 0 )
      {
        PoolWithTag = ListEntrya;
        goto LABEL_60;
      }
    }
  }
LABEL_20:
  if ( (v47.DatapathCyclesMask & 0x400) != 0 )
    ndisPcwEndCycleCounter(&v47, 0xAu, 0x17uLL);
  return v27;
}

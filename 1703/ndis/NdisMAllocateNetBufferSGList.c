/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x1C00059F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     PplpLazyInitializeLookasideList @ 0x1C002353C (PplpLazyInitializeLookasideList.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00260B8 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
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
  PVOID v7; // r15
  bool v10; // r12
  unsigned int v11; // ecx
  _MDL *MdlChain; // rdi
  unsigned int DataOffset; // ecx
  ULONG i; // eax
  unsigned int DataLength; // eax
  ULONG v16; // r13d
  char *v17; // rbp
  NDIS_STATUS v18; // r15d
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _SLIST_ENTRY *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r15
  struct _MDL *v27; // rbp
  _SLIST_ENTRY *PoolWithTag; // rax
  struct _MDL *Mdl; // rax
  int v30; // [rsp+38h] [rbp-80h]
  int v31; // [rsp+38h] [rbp-80h]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  struct NDIS_PCW_CONTEXT v33; // [rsp+68h] [rbp-50h] BYREF
  _SLIST_ENTRY *ListEntry; // [rsp+C0h] [rbp+8h]
  PSLIST_ENTRY ListEntrya; // [rsp+C0h] [rbp+8h]
  __int64 v36; // [rsp+C8h] [rbp+10h]

  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v7 = Context;
  v10 = (Flags & 1) != 0;
  v11 = *(_DWORD *)(v6 + 48);
  v33.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
  v33.DatapathCyclesMask = *(_DWORD *)(v6 + 80);
  v33.DatapathEventsMask = v11;
  v33.CurrentCpu = -1;
  if ( (v11 & 0x400) != 0 )
  {
    v33.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v33.PcwBlock->DatapathEventReferences[20]
                + ndisPcwPerCpuDataStride * v33.CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v33.DatapathCyclesMask & 0x400) != 0 )
    ndisPcwStartCycleCounter(&v33, 0xAu);
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
  if ( ScatterGatherListBuffer )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, bool, PVOID, ULONG))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3848),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            v7,
            v10,
            ScatterGatherListBuffer,
            ScatterGatherListBufferSize);
    if ( v18 >= 0 )
      goto LABEL_12;
    v7 = Context;
  }
  v20 = *((_QWORD *)NdisMiniportDmaHandle + 8);
  v21 = KeGetPcr()->Prcb.Number + 1;
  if ( (unsigned int)v21 >= *(_DWORD *)v20 )
    v21 = (unsigned int)(*(_DWORD *)v20 - 1);
  v22 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8 * v21);
  v36 = v22;
  if ( !*(_BYTE *)(v22 + 112) )
  {
    PplpLazyInitializeLookasideList(v20, v22);
    v22 = v36;
  }
  ++*(_DWORD *)(v22 + 20);
  ListEntry = ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
  v23 = ListEntry;
  if ( ListEntry
    || (++*(_DWORD *)(v36 + 24),
        ListEntry = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v36 + 48))(
                                      *(unsigned int *)(v36 + 36),
                                      *(unsigned int *)(v36 + 44),
                                      *(unsigned int *)(v36 + 40),
                                      v36),
        (v23 = ListEntry) != 0LL) )
  {
    NetBuffer->Reserved |= 1u;
    NetBuffer->NdisReserved[0] = v23;
    LOBYTE(v30) = v10;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, _SLIST_ENTRY *, _DWORD))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3848),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            v7,
            v30,
            v23,
            *((_DWORD *)NdisMiniportDmaHandle + 14));
    if ( v18 >= 0 )
      goto LABEL_12;
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~1u;
    v24 = *((_QWORD *)NdisMiniportDmaHandle + 8);
    v25 = KeGetPcr()->Prcb.Number + 1;
    if ( (unsigned int)v25 >= *(_DWORD *)v24 )
      v25 = (unsigned int)(*(_DWORD *)v24 - 1);
    v26 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25);
    if ( !*(_BYTE *)(v26 + 112) )
      PplpLazyInitializeLookasideList(v24, *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25));
    ++*(_DWORD *)(v26 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v26) >= *(_WORD *)(v26 + 16) )
    {
      ++*(_DWORD *)(v26 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v26 + 56))(ListEntry, v26);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v26, ListEntry);
    }
  }
  LOBYTE(v30) = v10;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL)
                                                                                             + 88LL))(
          *((_QWORD *)NdisMiniportDmaHandle + 3),
          *(_QWORD *)(v6 + 3848),
          MdlChain,
          v17,
          v16,
          *((_QWORD *)NdisMiniportDmaHandle + 4),
          Context,
          v30);
  if ( v18 < 0 )
  {
    v27 = 0LL;
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6773444Eu);
    ListEntrya = PoolWithTag;
    if ( PoolWithTag )
    {
      Mdl = IoAllocateMdl(PoolWithTag, v16, 0, 0, 0LL);
      v27 = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
        v27->Next = 0LL;
        if ( !v10 || (v18 = RtlCopyMdlToBuffer(MdlChain, 0LL, ListEntrya, v16, &v32), v18 >= 0) )
        {
          NetBuffer->Reserved |= 2u;
          NetBuffer->NdisReserved[0] = v27;
          LOBYTE(v31) = v10;
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, PSLIST_ENTRY, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 88LL))(
                  *((_QWORD *)NdisMiniportDmaHandle + 3),
                  *(_QWORD *)(v6 + 3848),
                  v27,
                  ListEntrya,
                  v16,
                  *((_QWORD *)NdisMiniportDmaHandle + 4),
                  Context,
                  v31);
          if ( v18 >= 0 )
            goto LABEL_12;
        }
      }
      else
      {
        v18 = -1073741670;
      }
      PoolWithTag = ListEntrya;
    }
    else
    {
      v18 = -1073741670;
    }
    if ( (unsigned __int8)byte_1C009260A >= 4u )
    {
      WPP_SF_d(20LL, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, (unsigned int)v18);
      PoolWithTag = ListEntrya;
    }
    if ( v27 )
    {
      IoFreeMdl(v27);
      PoolWithTag = ListEntrya;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~2u;
    NetBuffer->Reserved &= ~4u;
  }
LABEL_12:
  if ( (v33.DatapathCyclesMask & 0x400) != 0 )
    ndisPcwEndCycleCounter(&v33, 0xAu, 0x17uLL);
  return v18;
}

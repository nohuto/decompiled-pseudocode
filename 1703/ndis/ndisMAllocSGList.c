/*
 * XREFs of ndisMAllocSGList @ 0x1C004D698
 * Callers:
 *     ndisMSendPacketsXToMiniport @ 0x1C00272F0 (ndisMSendPacketsXToMiniport.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053750 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C002353C (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     ?NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z @ 0x1C004D224 (-NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z.c)
 *     NdisAllocateBuffer @ 0x1C00519A0 (NdisAllocateBuffer.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C00555DC (ndisMCopyFromPacketToBuffer.c)
 *     ndisMSendCompleteX @ 0x1C0057110 (ndisMSendCompleteX.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisMCoSendComplete @ 0x1C0109B30 (NdisMCoSendComplete.c)
 */

void __fastcall ndisMAllocSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r12
  struct _NDIS_STACK_RESERVED *v5; // rdx
  char *v6; // r15
  __int64 SGListLookasideList; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  _SLIST_ENTRY *v10; // rsi
  UINT Length; // r14d
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  PVOID PoolWithTag; // rax
  void *v17; // r15
  PNDIS_BUFFER v18; // rsi
  int v19; // ebx
  int v20; // edx
  bool v21; // sf
  char *v22; // rbx
  int v23; // [rsp+38h] [rbp-31h]
  int v24; // [rsp+60h] [rbp-9h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+68h] [rbp-1h] BYREF
  struct _MDL *v26; // [rsp+70h] [rbp+7h] BYREF
  struct _NDIS_STACK_RESERVED *v27; // [rsp+78h] [rbp+Fh] BYREF
  struct _NDIS_STACK_RESERVED *v28; // [rsp+80h] [rbp+17h] BYREF
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h]
  KIRQL NewIrqla; // [rsp+D0h] [rbp+67h]
  int Status; // [rsp+E0h] [rbp+77h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E8h] [rbp+7Fh] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  Buffer = 0LL;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &v26, (unsigned int *)&NumberOfBytes);
  if ( !v26 )
  {
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    if ( (a1->Flags & 0x20000) != 0 )
    {
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &v27);
      v5 = v27;
LABEL_42:
      NdisMCoSendComplete(-1073741823, *((NDIS_HANDLE *)v5 + 1), a2);
      return;
    }
LABEL_43:
    ndisMSendCompleteX(a1, a2);
    return;
  }
  v6 = (char *)v26->StartVa + v26->ByteOffset;
  SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
  v8 = KeGetPcr()->Prcb.Number + 1;
  if ( (unsigned int)v8 >= *(_DWORD *)SGListLookasideList )
    v8 = (unsigned int)(*(_DWORD *)SGListLookasideList - 1);
  v9 = *(_QWORD *)(*(_QWORD *)(SGListLookasideList + 32) + 8 * v8);
  if ( !*(_BYTE *)(v9 + 112) )
    PplpLazyInitializeLookasideList(SGListLookasideList, *(_QWORD *)(*(_QWORD *)(SGListLookasideList + 32) + 8 * v8));
  ++*(_DWORD *)(v9 + 20);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v9);
  if ( !v10 )
  {
    ++*(_DWORD *)(v9 + 24);
    v10 = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v9 + 48))(
                            *(unsigned int *)(v9 + 36),
                            *(unsigned int *)(v9 + 44),
                            *(unsigned int *)(v9 + 40),
                            v9);
  }
  NewIrql = KfRaiseIrql(2u);
  if ( v10 )
  {
    a2->Private.Flags |= 0x2000u;
    Length = NumberOfBytes;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v10;
    Status = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
               MiniportSGDmaBlock->DmaAdapterObject,
               a1->DeviceObject,
               v26,
               v6,
               Length,
               (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGList,
               a2,
               1u,
               v10,
               MiniportSGDmaBlock->ScatterGatherListSize);
    v12 = Status;
    if ( Status >= 0 )
      goto LABEL_23;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    v13 = (__int64)MiniportSGDmaBlock->SGListLookasideList;
    v14 = KeGetPcr()->Prcb.Number + 1;
    if ( (unsigned int)v14 >= *(_DWORD *)v13 )
      v14 = (unsigned int)(*(_DWORD *)v13 - 1);
    v15 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14);
    if ( !*(_BYTE *)(v15 + 112) )
      PplpLazyInitializeLookasideList(v13, *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14));
    ++*(_DWORD *)(v15 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v15) < *(_WORD *)(v15 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v15, v10);
    }
    else
    {
      ++*(_DWORD *)(v15 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v15 + 56))(v10, v15);
    }
    v12 = Status;
  }
  else
  {
    v12 = -1073741670;
    Status = -1073741670;
  }
  Length = NumberOfBytes;
  if ( v12 < 0 )
  {
    LOBYTE(v23) = 1;
    v12 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
            MiniportSGDmaBlock->DmaAdapterObject,
            a1->DeviceObject,
            v26,
            v6,
            NumberOfBytes,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGList,
            a2,
            v23);
    Status = v12;
  }
LABEL_23:
  if ( NewIrql != 2 )
    KeLowerIrql(NewIrql);
  if ( v12 < 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x6773444Eu);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_27:
      v18 = Buffer;
      v19 = -1073741670;
      goto LABEL_34;
    }
    NdisAllocateBuffer(&Status, &Buffer, 0LL, PoolWithTag, Length);
    v19 = Status;
    v18 = Buffer;
    v21 = Status < 0;
    if ( !Status )
    {
      ndisMCopyFromPacketToBuffer((_DWORD)a2, v20, Length, (_DWORD)v17, (__int64)&v24);
      if ( v24 != Length )
        goto LABEL_27;
      a2->Private.Flags |= 0x800u;
      v22 = (char *)v18->StartVa + v18->ByteOffset;
      *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v18;
      LOBYTE(v23) = 1;
      NewIrqla = KfRaiseIrql(2u);
      v19 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
              MiniportSGDmaBlock->DmaAdapterObject,
              a1->DeviceObject,
              v18,
              v22,
              Length,
              (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGList,
              a2,
              v23);
      if ( NewIrqla != 2 )
        KeLowerIrql(NewIrqla);
      v21 = v19 < 0;
    }
    if ( !v21 )
      return;
LABEL_34:
    if ( (unsigned __int8)byte_1C009260A >= 2u )
      WPP_SF_d(0xEu, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, v19);
    if ( v18 )
      IoFreeMdl(v18);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    if ( (a1->Flags & 0x20000) != 0 )
    {
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &v28);
      v5 = v28;
      goto LABEL_42;
    }
    goto LABEL_43;
  }
}

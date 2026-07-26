/*
 * XREFs of ndisMAllocSGList @ 0x1C004C150
 * Callers:
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053180 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMSendPacketsXToMiniport @ 0x1C00579A0 (ndisMSendPacketsXToMiniport.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     PplpLazyInitializeLookasideList @ 0x1C0025194 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ?NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z @ 0x1C004BD1C (-NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z.c)
 *     NdisAllocateBuffer @ 0x1C0051050 (NdisAllocateBuffer.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C00550BC (ndisMCopyFromPacketToBuffer.c)
 *     ndisMSendCompleteX @ 0x1C0056C00 (ndisMSendCompleteX.c)
 *     NdisMCoSendComplete @ 0x1C0114B80 (NdisMCoSendComplete.c)
 */

void __fastcall ndisMAllocSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  struct _NDIS_STACK_RESERVED *v5; // rdx
  unsigned int Number; // eax
  __int64 SGListLookasideList; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  _SLIST_ENTRY *v13; // rsi
  KIRQL v14; // r12
  UINT Length; // r14d
  char *v16; // r9
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  PVOID PoolWithTag; // rax
  void *v25; // r12
  PNDIS_BUFFER v26; // rsi
  int v27; // ebx
  int v28; // edx
  bool v29; // sf
  char *v30; // rbx
  KIRQL v31; // al
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  int v33; // [rsp+38h] [rbp-31h]
  PNDIS_BUFFER Buffer; // [rsp+60h] [rbp-9h] BYREF
  struct _MDL *v35; // [rsp+68h] [rbp-1h] BYREF
  char *v36; // [rsp+70h] [rbp+7h]
  struct _NDIS_STACK_RESERVED *v37; // [rsp+78h] [rbp+Fh] BYREF
  struct _NDIS_STACK_RESERVED *v38; // [rsp+80h] [rbp+17h] BYREF
  int Status; // [rsp+D0h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E0h] [rbp+77h] BYREF
  int v41; // [rsp+E8h] [rbp+7Fh] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  Buffer = 0LL;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &v35, (unsigned int *)&NumberOfBytes);
  if ( !v35 )
  {
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    if ( (a1->Flags & 0x20000) != 0 )
    {
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &v37);
      v5 = v37;
LABEL_42:
      NdisMCoSendComplete(-1073741823, *((NDIS_HANDLE *)v5 + 1), a2);
      return;
    }
LABEL_43:
    ndisMSendCompleteX(a1, a2);
    return;
  }
  Number = KeGetPcr()->Prcb.Number;
  v36 = (char *)v35->StartVa + v35->ByteOffset;
  SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
  v8 = Number + 1;
  v9 = *(_DWORD *)SGListLookasideList - 1;
  if ( v8 < *(_DWORD *)SGListLookasideList )
    v9 = v8;
  v10 = v9;
  v11 = *(_QWORD *)(SGListLookasideList + 32);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( !*(_BYTE *)(v12 + 112) )
    PplpLazyInitializeLookasideList(SGListLookasideList, *(_QWORD *)(v11 + 8 * v10));
  ++*(_DWORD *)(v12 + 20);
  v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v12);
  if ( !v13 )
  {
    ++*(_DWORD *)(v12 + 24);
    v13 = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v12 + 48))(
                            *(unsigned int *)(v12 + 36),
                            *(unsigned int *)(v12 + 44),
                            *(unsigned int *)(v12 + 40),
                            v12);
  }
  v14 = KfRaiseIrql(2u);
  if ( v13 )
  {
    a2->Private.Flags |= 0x2000u;
    Length = NumberOfBytes;
    v16 = v36;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v13;
    Status = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
               MiniportSGDmaBlock->DmaAdapterObject,
               a1->DeviceObject,
               v35,
               v16,
               Length,
               (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGList,
               a2,
               1u,
               v13,
               MiniportSGDmaBlock->ScatterGatherListSize);
    v17 = Status;
    if ( Status >= 0 )
      goto LABEL_23;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    v18 = (__int64)MiniportSGDmaBlock->SGListLookasideList;
    v19 = KeGetPcr()->Prcb.Number + 1;
    v20 = *(_DWORD *)v18 - 1;
    if ( v19 < *(_DWORD *)v18 )
      v20 = v19;
    v21 = v20;
    v22 = *(_QWORD *)(v18 + 32);
    v23 = *(_QWORD *)(v22 + 8 * v21);
    if ( !*(_BYTE *)(v23 + 112) )
      PplpLazyInitializeLookasideList(v18, *(_QWORD *)(v22 + 8 * v21));
    ++*(_DWORD *)(v23 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v23) < *(_WORD *)(v23 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v23, v13);
    }
    else
    {
      ++*(_DWORD *)(v23 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v23 + 56))(v13, v23);
    }
    v17 = Status;
  }
  else
  {
    v17 = -1073741670;
    Status = -1073741670;
  }
  Length = NumberOfBytes;
  if ( v17 < 0 )
  {
    LOBYTE(v33) = 1;
    v17 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
            MiniportSGDmaBlock->DmaAdapterObject,
            a1->DeviceObject,
            v35,
            v36,
            NumberOfBytes,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGList,
            a2,
            v33);
    Status = v17;
  }
LABEL_23:
  if ( v14 != 2 )
    KeLowerIrql(v14);
  if ( v17 < 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x6773444Eu);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_27:
      v26 = Buffer;
      v27 = -1073741670;
      goto LABEL_34;
    }
    NdisAllocateBuffer(&Status, &Buffer, 0LL, PoolWithTag, Length);
    v27 = Status;
    v26 = Buffer;
    v29 = Status < 0;
    if ( !Status )
    {
      ndisMCopyFromPacketToBuffer((_DWORD)a2, v28, Length, (_DWORD)v25, (__int64)&v41);
      if ( v41 != Length )
        goto LABEL_27;
      a2->Private.Flags |= 0x800u;
      v30 = (char *)v26->StartVa + v26->ByteOffset;
      *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v26;
      v31 = KfRaiseIrql(2u);
      DmaAdapterObject = MiniportSGDmaBlock->DmaAdapterObject;
      LOBYTE(v33) = 1;
      LOBYTE(Status) = v31;
      v27 = DmaAdapterObject->DmaOperations->GetScatterGatherList(
              DmaAdapterObject,
              a1->DeviceObject,
              v26,
              v30,
              Length,
              (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGList,
              a2,
              v33);
      if ( (_BYTE)Status != 2 )
        KeLowerIrql(Status);
      v29 = v27 < 0;
    }
    if ( !v29 )
      return;
LABEL_34:
    if ( (unsigned __int8)byte_1C009960A >= 2u )
      WPP_SF_d(0xEu, &WPP_b7380f6131c0382fffce9713ea39f3ba_Traceguids, v27);
    if ( v26 )
      IoFreeMdl(v26);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    if ( (a1->Flags & 0x20000) != 0 )
    {
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &v38);
      v5 = v38;
      goto LABEL_42;
    }
    goto LABEL_43;
  }
}

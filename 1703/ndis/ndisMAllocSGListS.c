/*
 * XREFs of ndisMAllocSGListS @ 0x1C004DA7C
 * Callers:
 *     ndisMSendPacketsSGToMiniport @ 0x1C00578A0 (ndisMSendPacketsSGToMiniport.c)
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C002353C (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     ?NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z @ 0x1C004D224 (-NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z.c)
 *     ndisMFreeSGList @ 0x1C004DF94 (ndisMFreeSGList.c)
 *     NdisAllocateBuffer @ 0x1C00519A0 (NdisAllocateBuffer.c)
 *     ndisFreePaddedMdl @ 0x1C0055460 (ndisFreePaddedMdl.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C00555DC (ndisMCopyFromPacketToBuffer.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0056E5C (ndisMSendCompletePacketToNetBufferLists.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisMAllocSGListS(__int64 a1, struct _NDIS_PACKET *a2)
{
  __int64 v2; // r13
  KSPIN_LOCK *v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // r12
  struct _NDIS_STACK_RESERVED *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  char *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  _SLIST_ENTRY *v15; // r14
  UINT Length; // r15d
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  PVOID PoolWithTag; // rax
  void *v22; // r12
  PNDIS_BUFFER v23; // r14
  int v24; // ebx
  int v25; // edx
  char *v26; // rbx
  KIRQL v27; // al
  struct _NDIS_STACK_RESERVED *v28; // r14
  int v29; // [rsp+38h] [rbp-48h]
  int v30; // [rsp+60h] [rbp-20h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+68h] [rbp-18h] BYREF
  struct _MDL *v32; // [rsp+70h] [rbp-10h] BYREF
  struct _NDIS_STACK_RESERVED *v33; // [rsp+78h] [rbp-8h] BYREF
  KIRQL NewIrql; // [rsp+C0h] [rbp+40h]
  KIRQL NewIrqla; // [rsp+C0h] [rbp+40h]
  int Status; // [rsp+D0h] [rbp+50h] BYREF
  SIZE_T NumberOfBytes; // [rsp+D8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 504);
  Buffer = 0LL;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &v32, (unsigned int *)&NumberOfBytes);
  if ( !v32 )
  {
    v5 = (KSPIN_LOCK *)(a1 + 96);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    v7 = v6;
    *(_DWORD *)(a1 + 1856) = 1835739;
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v33);
    v8 = v33;
    v9 = *(_QWORD *)v33;
    *(_DWORD *)(a1 + 120) |= 0x400000u;
    *(_QWORD *)v8 = 1297040176LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v8 + 2) = 0;
    if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    a2->Private.NdisPacketFlags &= 0xC0u;
    v10 = 0LL;
LABEL_49:
    if ( *(_MDL **)((char *)&a2[1].Private.Head + a2->Private.NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(a1, a2, v10);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, __int64))(v9 + 112))(v9, a2, v10);
    KeAcquireSpinLockAtDpcLevel(v5);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock(v5, v7);
    return;
  }
  v11 = (char *)v32->StartVa + v32->ByteOffset;
  v12 = *(_QWORD *)(v2 + 64);
  v13 = KeGetPcr()->Prcb.Number + 1;
  if ( (unsigned int)v13 >= *(_DWORD *)v12 )
    v13 = (unsigned int)(*(_DWORD *)v12 - 1);
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13);
  if ( !*(_BYTE *)(v14 + 112) )
    PplpLazyInitializeLookasideList(v12, *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13));
  ++*(_DWORD *)(v14 + 20);
  v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
  if ( !v15 )
  {
    ++*(_DWORD *)(v14 + 24);
    v15 = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v14 + 48))(
                            *(unsigned int *)(v14 + 36),
                            *(unsigned int *)(v14 + 44),
                            *(unsigned int *)(v14 + 40),
                            v14);
  }
  NewIrql = KfRaiseIrql(2u);
  if ( v15 )
  {
    a2->Private.Flags |= 0x2000u;
    Length = NumberOfBytes;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v15;
    Status = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, char *, UINT, void *, struct _NDIS_PACKET *, char, _SLIST_ENTRY *, _DWORD))(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 112LL))(
               *(_QWORD *)(v2 + 24),
               *(_QWORD *)(a1 + 3848),
               v32,
               v11,
               Length,
               &ndisMProcessSGListS,
               a2,
               1,
               v15,
               *(_DWORD *)(v2 + 56));
    v17 = Status;
    if ( Status >= 0 )
      goto LABEL_27;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    v18 = *(_QWORD *)(v2 + 64);
    v19 = KeGetPcr()->Prcb.Number + 1;
    if ( (unsigned int)v19 >= *(_DWORD *)v18 )
      v19 = (unsigned int)(*(_DWORD *)v18 - 1);
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19);
    if ( !*(_BYTE *)(v20 + 112) )
      PplpLazyInitializeLookasideList(v18, *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19));
    ++*(_DWORD *)(v20 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v20) < *(_WORD *)(v20 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v20, v15);
    }
    else
    {
      ++*(_DWORD *)(v20 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v20 + 56))(v15, v20);
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
    LOBYTE(v29) = 1;
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, char *, _DWORD, void *, struct _NDIS_PACKET *, int))(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 88LL))(
            *(_QWORD *)(v2 + 24),
            *(_QWORD *)(a1 + 3848),
            v32,
            v11,
            NumberOfBytes,
            &ndisMProcessSGListS,
            a2,
            v29);
    Status = v17;
  }
LABEL_27:
  if ( NewIrql != 2 )
    KeLowerIrql(NewIrql);
  if ( v17 < 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x6773444Eu);
    v22 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_31:
      v23 = Buffer;
      v24 = -1073741670;
      Status = -1073741670;
LABEL_37:
      if ( (unsigned __int8)byte_1C009260A >= 4u )
        WPP_SF_d(0xFu, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, v24);
      if ( v23 )
        IoFreeMdl(v23);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      v5 = (KSPIN_LOCK *)(a1 + 96);
      *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
      *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
      a2->Private.Flags &= ~0x800u;
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      v7 = v27;
      *(_DWORD *)(a1 + 1856) = 1835885;
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &v33);
      v28 = v33;
      v9 = *(_QWORD *)v33;
      *(_DWORD *)(a1 + 120) |= 0x400000u;
      *(_QWORD *)v28 = 1297040176LL;
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
        ndisMFreeSGList(a1, a2);
      *((_DWORD *)v28 + 2) = 0;
      if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl(a2);
      a2->Private.NdisPacketFlags &= 0xC0u;
      v10 = (unsigned int)Status;
      goto LABEL_49;
    }
    NdisAllocateBuffer(&Status, &Buffer, 0LL, PoolWithTag, Length);
    v24 = Status;
    v23 = Buffer;
    if ( !Status )
    {
      ndisMCopyFromPacketToBuffer((_DWORD)a2, v25, Length, (_DWORD)v22, (__int64)&v30);
      if ( v30 != Length )
        goto LABEL_31;
      a2->Private.Flags |= 0x800u;
      v26 = (char *)v23->StartVa + v23->ByteOffset;
      *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v23;
      LOBYTE(v29) = 1;
      NewIrqla = KfRaiseIrql(2u);
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PNDIS_BUFFER, char *, UINT, void *, struct _NDIS_PACKET *, int))(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 88LL))(
              *(_QWORD *)(v2 + 24),
              *(_QWORD *)(a1 + 3848),
              v23,
              v26,
              Length,
              &ndisMProcessSGListS,
              a2,
              v29);
      Status = v24;
      if ( NewIrqla != 2 )
        KeLowerIrql(NewIrqla);
    }
    if ( v24 >= 0 )
      return;
    goto LABEL_37;
  }
}

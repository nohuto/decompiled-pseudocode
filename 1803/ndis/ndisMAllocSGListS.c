/*
 * XREFs of ndisMAllocSGListS @ 0x1C004C540
 * Callers:
 *     ndisMSendPacketsSGToMiniport @ 0x1C0057390 (ndisMSendPacketsSGToMiniport.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     PplpLazyInitializeLookasideList @ 0x1C0025194 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ?NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z @ 0x1C004BD1C (-NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z.c)
 *     ndisMFreeSGList @ 0x1C004CA6C (ndisMFreeSGList.c)
 *     NdisAllocateBuffer @ 0x1C0051050 (NdisAllocateBuffer.c)
 *     ndisFreePaddedMdl @ 0x1C0054F38 (ndisFreePaddedMdl.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C00550BC (ndisMCopyFromPacketToBuffer.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C005694C (ndisMSendCompletePacketToNetBufferLists.c)
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
  unsigned int Number; // eax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  _SLIST_ENTRY *v18; // r14
  KIRQL v19; // r12
  UINT Length; // r15d
  char *v21; // r9
  int v22; // ebx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  PVOID PoolWithTag; // rax
  void *v30; // r12
  PNDIS_BUFFER v31; // r14
  int v32; // ebx
  int v33; // edx
  char *v34; // rbx
  KIRQL v35; // al
  __int64 v36; // rcx
  KIRQL v37; // al
  struct _NDIS_STACK_RESERVED *v38; // r14
  int v39; // [rsp+38h] [rbp-48h]
  PNDIS_BUFFER Buffer; // [rsp+60h] [rbp-20h] BYREF
  struct _MDL *v41; // [rsp+68h] [rbp-18h] BYREF
  struct _NDIS_STACK_RESERVED *v42; // [rsp+70h] [rbp-10h] BYREF
  char *v43; // [rsp+78h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+C0h] [rbp+40h] BYREF
  int Status; // [rsp+D0h] [rbp+50h] BYREF
  int v46; // [rsp+D8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 504);
  Buffer = 0LL;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &v41, (unsigned int *)&NumberOfBytes);
  if ( !v41 )
  {
    v5 = (KSPIN_LOCK *)(a1 + 96);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    v7 = v6;
    *(_DWORD *)(a1 + 1856) = 1835739;
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v42);
    v8 = v42;
    v9 = *(_QWORD *)v42;
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
  Number = KeGetPcr()->Prcb.Number;
  v43 = (char *)v41->StartVa + v41->ByteOffset;
  v12 = *(_QWORD *)(v2 + 64);
  v13 = Number + 1;
  v14 = *(_DWORD *)v12 - 1;
  if ( v13 < *(_DWORD *)v12 )
    v14 = v13;
  v15 = v14;
  v16 = *(_QWORD *)(v12 + 32);
  v17 = *(_QWORD *)(v16 + 8 * v15);
  if ( !*(_BYTE *)(v17 + 112) )
    PplpLazyInitializeLookasideList(v12, *(_QWORD *)(v16 + 8 * v15));
  ++*(_DWORD *)(v17 + 20);
  v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v17);
  if ( !v18 )
  {
    ++*(_DWORD *)(v17 + 24);
    v18 = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v17 + 48))(
                            *(unsigned int *)(v17 + 36),
                            *(unsigned int *)(v17 + 44),
                            *(unsigned int *)(v17 + 40),
                            v17);
  }
  v19 = KfRaiseIrql(2u);
  if ( v18 )
  {
    a2->Private.Flags |= 0x2000u;
    Length = NumberOfBytes;
    v21 = v43;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v18;
    Status = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, char *, UINT, void *, struct _NDIS_PACKET *, char, _SLIST_ENTRY *, _DWORD))(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 112LL))(
               *(_QWORD *)(v2 + 24),
               *(_QWORD *)(a1 + 3848),
               v41,
               v21,
               Length,
               &ndisMProcessSGListS,
               a2,
               1,
               v18,
               *(_DWORD *)(v2 + 56));
    v22 = Status;
    if ( Status >= 0 )
      goto LABEL_27;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    v23 = *(_QWORD *)(v2 + 64);
    v24 = KeGetPcr()->Prcb.Number + 1;
    v25 = *(_DWORD *)v23 - 1;
    if ( v24 < *(_DWORD *)v23 )
      v25 = v24;
    v26 = v25;
    v27 = *(_QWORD *)(v23 + 32);
    v28 = *(_QWORD *)(v27 + 8 * v26);
    if ( !*(_BYTE *)(v28 + 112) )
      PplpLazyInitializeLookasideList(v23, *(_QWORD *)(v27 + 8 * v26));
    ++*(_DWORD *)(v28 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v28) < *(_WORD *)(v28 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v28, v18);
    }
    else
    {
      ++*(_DWORD *)(v28 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v28 + 56))(v18, v28);
    }
    v22 = Status;
  }
  else
  {
    v22 = -1073741670;
    Status = -1073741670;
  }
  Length = NumberOfBytes;
  if ( v22 < 0 )
  {
    LOBYTE(v39) = 1;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, char *, _DWORD, void *, struct _NDIS_PACKET *, int))(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 88LL))(
            *(_QWORD *)(v2 + 24),
            *(_QWORD *)(a1 + 3848),
            v41,
            v43,
            NumberOfBytes,
            &ndisMProcessSGListS,
            a2,
            v39);
    Status = v22;
  }
LABEL_27:
  if ( v19 != 2 )
    KeLowerIrql(v19);
  if ( v22 < 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x6773444Eu);
    v30 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_31:
      v31 = Buffer;
      v32 = -1073741670;
      Status = -1073741670;
LABEL_37:
      if ( (unsigned __int8)byte_1C009960A >= 4u )
        WPP_SF_d(0xFu, &WPP_b7380f6131c0382fffce9713ea39f3ba_Traceguids, v32);
      if ( v31 )
        IoFreeMdl(v31);
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      v5 = (KSPIN_LOCK *)(a1 + 96);
      *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
      *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
      a2->Private.Flags &= ~0x800u;
      v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      v7 = v37;
      *(_DWORD *)(a1 + 1856) = 1835885;
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &v42);
      v38 = v42;
      v9 = *(_QWORD *)v42;
      *(_DWORD *)(a1 + 120) |= 0x400000u;
      *(_QWORD *)v38 = 1297040176LL;
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
        ndisMFreeSGList(a1, a2);
      *((_DWORD *)v38 + 2) = 0;
      if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl(a2);
      a2->Private.NdisPacketFlags &= 0xC0u;
      v10 = (unsigned int)Status;
      goto LABEL_49;
    }
    NdisAllocateBuffer(&Status, &Buffer, 0LL, PoolWithTag, Length);
    v32 = Status;
    v31 = Buffer;
    if ( !Status )
    {
      ndisMCopyFromPacketToBuffer((_DWORD)a2, v33, Length, (_DWORD)v30, (__int64)&v46);
      if ( v46 != Length )
        goto LABEL_31;
      a2->Private.Flags |= 0x800u;
      v34 = (char *)v31->StartVa + v31->ByteOffset;
      *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v31;
      v35 = KfRaiseIrql(2u);
      v36 = *(_QWORD *)(v2 + 24);
      LOBYTE(v39) = 1;
      LOBYTE(NumberOfBytes) = v35;
      v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, PNDIS_BUFFER, char *, UINT, void *, struct _NDIS_PACKET *, int))(*(_QWORD *)(v36 + 8) + 88LL))(
              v36,
              *(_QWORD *)(a1 + 3848),
              v31,
              v34,
              Length,
              &ndisMProcessSGListS,
              a2,
              v39);
      Status = v32;
      if ( (_BYTE)NumberOfBytes != 2 )
        KeLowerIrql(NumberOfBytes);
    }
    if ( v32 >= 0 )
      return;
    goto LABEL_37;
  }
}

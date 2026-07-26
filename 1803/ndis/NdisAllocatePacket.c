/*
 * XREFs of NdisAllocatePacket @ 0x1C0015CD0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C0015A30 (NdisAllocatePacketPoolEx.c)
 *     ndisNetBufferToPacket @ 0x1C004DF00 (ndisNetBufferToPacket.c)
 *     ndisLWM5IndicateReceive @ 0x1C0069D14 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __stdcall NdisAllocatePacket(PNDIS_STATUS Status, PNDIS_PACKET *Packet, NDIS_HANDLE PoolHandle)
{
  char *v3; // rsi
  _SLIST_HEADER *v4; // rbx
  PNDIS_PACKET *v6; // r15
  PNDIS_STATUS v7; // r13
  PSLIST_ENTRY v8; // rbp
  KSPIN_LOCK *v9; // r12
  char *v10; // r14
  char *v11; // rbx
  KIRQL v12; // r13
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v14; // rbx
  int v15; // ebp
  _SLIST_HEADER *v16; // rsi
  char *v17; // r15
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  KSPIN_LOCK *v21; // rcx
  KIRQL v22; // dl
  int v23; // r14d
  KSPIN_LOCK *v24; // r13
  KIRQL v25; // al
  unsigned __int64 Alignment; // rdx
  _SLIST_HEADER **Region; // rcx
  _SLIST_HEADER **v28; // rax
  char *v29; // rdi
  unsigned __int64 v30; // rax
  char *v31; // rax
  unsigned __int64 v32; // rax
  LONGLONG v33; // rdx
  char *v34; // [rsp+20h] [rbp-58h]
  KIRQL v37; // [rsp+90h] [rbp+18h]
  KIRQL v38; // [rsp+90h] [rbp+18h]
  struct _NDIS_STACK_RESERVED *v39; // [rsp+98h] [rbp+20h] BYREF

  v3 = (char *)PoolHandle + 40;
  v4 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v34 = (char *)PoolHandle + 40;
  v6 = Packet;
  v7 = Status;
  v8 = 0LL;
  if ( v4 == (_SLIST_HEADER *)((char *)PoolHandle + 40) || (v8 = ExpInterlockedPopEntrySList(v4 + 2)) == 0LL )
  {
    v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
    v10 = (char *)PoolHandle + 72;
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
    v11 = (char *)*((_QWORD *)PoolHandle + 9);
    v12 = v37;
    if ( v11 == (char *)PoolHandle + 72 )
    {
      if ( *((_DWORD *)PoolHandle + 3) < (int)*((unsigned __int16 *)PoolHandle + 4) )
      {
        PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(
                                         NonPagedPoolNx,
                                         *((unsigned int *)PoolHandle + 5),
                                         *(_DWORD *)PoolHandle);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, *((unsigned int *)PoolHandle + 5));
          ++*((_DWORD *)PoolHandle + 3);
          v14->Region = (unsigned __int64)v14;
          v14->Alignment = (unsigned __int64)v14;
          InitializeSListHead(v14 + 2);
          v15 = *((unsigned __int16 *)PoolHandle + 3);
          if ( *((_WORD *)PoolHandle + 3) )
          {
            v16 = v14 + 4;
            do
            {
              v17 = (char *)&v16[3 * ndisPacketStackSize + 1];
              v17[41] = 0;
              v16 = (_SLIST_HEADER *)((char *)v16 + *((unsigned __int16 *)PoolHandle + 2));
              ExpInterlockedPushEntrySList(v14 + 2, (PSLIST_ENTRY)v17);
              *((_QWORD *)v17 + 3) = PoolHandle;
              v18 = 0;
              *((_DWORD *)v17 + 9) = *((_DWORD *)PoolHandle + 4);
              v19 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
              *((_WORD *)v17 + 21) = v19;
              for ( *(_QWORD *)&v17[v19 + 96] = v17; v18 < ndisPacketStackSize; ++v18 )
              {
                *((_DWORD *)v17 - 1) = v18;
                NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v17, &v39);
                KeInitializeSpinLock((PKSPIN_LOCK)v39 + 3);
              }
              --v15;
            }
            while ( v15 );
            v3 = v34;
            v6 = Packet;
            v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
            v12 = v37;
          }
          v8 = ExpInterlockedPopEntrySList(v14 + 2);
          v20 = *(_QWORD *)v3;
          if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
            __fastfail(3u);
          v14->Alignment = v20;
          v14->Region = (unsigned __int64)v3;
          *(_QWORD *)(v20 + 8) = v14;
          *(_QWORD *)v3 = v14;
          LODWORD(v14[3].Alignment) = 0;
        }
      }
    }
    else
    {
      if ( *((char **)v11 + 1) != v10 || (v31 = *(char **)v11, *(char **)(*(_QWORD *)v11 + 8LL) != v11) )
        __fastfail(3u);
      *(_QWORD *)v10 = v31;
      *((_QWORD *)v31 + 1) = v10;
      v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11 + 2);
      v32 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
        __fastfail(3u);
      *(_QWORD *)v11 = v32;
      *((_QWORD *)v11 + 1) = v3;
      *(_QWORD *)(v32 + 8) = v11;
      *(_QWORD *)v3 = v11;
      *((_DWORD *)v11 + 12) = 0;
      if ( *(char **)v10 == v10 )
        v33 = 0LL;
      else
        v33 = *(_QWORD *)(*(_QWORD *)v10 + 16LL) + PoolAgingTicks.QuadPart;
      *((_QWORD *)PoolHandle + 13) = v33;
    }
    v21 = v9;
    v22 = v12;
  }
  else
  {
    v23 = 1;
    if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v4 + 2) )
      goto LABEL_15;
    v24 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
    Alignment = v4->Alignment;
    v38 = v25;
    if ( *(_SLIST_HEADER **)(v4->Alignment + 8) != v4 || (Region = (_SLIST_HEADER **)v4->Region, *Region != v4) )
      __fastfail(3u);
    *Region = (_SLIST_HEADER *)Alignment;
    *(_QWORD *)(Alignment + 8) = Region;
    if ( ExQueryDepthSList(v4 + 2) )
    {
      v30 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
        __fastfail(3u);
      v4->Alignment = v30;
      v23 = 0;
      v4->Region = (unsigned __int64)v3;
      *(_QWORD *)(v30 + 8) = v4;
      *(_QWORD *)v3 = v4;
    }
    else
    {
      v28 = (_SLIST_HEADER **)*((_QWORD *)PoolHandle + 8);
      v29 = (char *)PoolHandle + 56;
      if ( *v28 != (_SLIST_HEADER *)v29 )
        __fastfail(3u);
      v4->Alignment = (unsigned __int64)v29;
      v4->Region = (unsigned __int64)v28;
      *v28 = v4;
      *((_QWORD *)v29 + 1) = v4;
    }
    v22 = v38;
    v21 = v24;
    LODWORD(v4[3].Alignment) = v23;
  }
  KeReleaseSpinLock(v21, v22);
  v7 = Status;
LABEL_15:
  if ( v8 )
  {
    *v6 = (PNDIS_PACKET)v8;
    *v7 = 0;
    *(_DWORD *)&(*v6)[-1].ProtocolReserved[4] = -1;
    *(_DWORD *)(*v6)[-1].ProtocolReserved = -1;
    *(_QWORD *)&(*v6)->ProtocolReserved[(*v6)->Private.NdisPacketOobOffset] = *v6;
    (*v6)->Private.Head = 0LL;
    (*v6)->Private.ValidCounts = 0;
    (*v6)->Private.NdisPacketFlags = 0x80;
  }
  else
  {
    *v6 = 0LL;
    *v7 = -1073741670;
  }
}

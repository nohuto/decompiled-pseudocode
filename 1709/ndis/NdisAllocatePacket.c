/*
 * XREFs of NdisAllocatePacket @ 0x1C0020D70
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C0020AD0 (NdisAllocatePacketPoolEx.c)
 *     ndisNetBufferToPacket @ 0x1C004D59C (ndisNetBufferToPacket.c)
 *     ndisLWM5IndicateReceive @ 0x1C00693A4 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
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
  KIRQL v11; // r13
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v13; // rbx
  int v14; // r15d
  _SLIST_HEADER *v15; // rsi
  __int64 v16; // rax
  unsigned int i; // ebp
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  KSPIN_LOCK *v20; // rcx
  KIRQL v21; // dl
  KSPIN_LOCK *v22; // r13
  KIRQL v23; // al
  unsigned __int64 v24; // rdx
  _SLIST_HEADER **Region; // rcx
  _SLIST_HEADER **v26; // rax
  char *v27; // rdi
  unsigned __int64 v28; // rax
  _SLIST_HEADER *v29; // rbx
  unsigned __int64 Alignment; // rax
  unsigned __int64 v31; // rax
  char *v32; // [rsp+20h] [rbp-58h]
  KIRQL v35; // [rsp+90h] [rbp+18h]
  KIRQL v36; // [rsp+90h] [rbp+18h]
  char *v37; // [rsp+98h] [rbp+20h]

  v3 = (char *)PoolHandle + 40;
  v4 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v32 = (char *)PoolHandle + 40;
  v6 = Packet;
  v7 = Status;
  v8 = 0LL;
  if ( v4 == (_SLIST_HEADER *)((char *)PoolHandle + 40) || (v8 = ExpInterlockedPopEntrySList(v4 + 2)) == 0LL )
  {
    v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
    v10 = (char *)PoolHandle + 72;
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
    v11 = v35;
    if ( *(char **)v10 == v10 )
    {
      if ( *((_DWORD *)PoolHandle + 3) < (int)*((unsigned __int16 *)PoolHandle + 4) )
      {
        PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(
                                         NonPagedPoolNx,
                                         *((unsigned int *)PoolHandle + 5),
                                         *(_DWORD *)PoolHandle);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, *((unsigned int *)PoolHandle + 5));
          ++*((_DWORD *)PoolHandle + 3);
          v13->Region = (unsigned __int64)v13;
          v13->Alignment = (unsigned __int64)v13;
          InitializeSListHead(v13 + 2);
          if ( *((_WORD *)PoolHandle + 3) )
          {
            v14 = *((unsigned __int16 *)PoolHandle + 3);
            v15 = v13 + 4;
            do
            {
              v37 = (char *)&v15[3 * ndisPacketStackSize + 1];
              v37[41] = 0;
              v15 = (_SLIST_HEADER *)((char *)v15 + *((unsigned __int16 *)PoolHandle + 2));
              ExpInterlockedPushEntrySList(v13 + 2, (PSLIST_ENTRY)v37);
              *((_QWORD *)v37 + 3) = PoolHandle;
              *((_DWORD *)v37 + 9) = *((_DWORD *)PoolHandle + 4);
              v16 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
              *((_WORD *)v37 + 21) = v16;
              *(_QWORD *)&v37[v16 + 96] = v37;
              for ( i = 0; i < ndisPacketStackSize; ++i )
              {
                *((_DWORD *)v37 - 1) = i;
                if ( i >= ndisPacketStackSize )
                  v18 = 40LL;
                else
                  v18 = (unsigned __int64)&v37[48 * (i - (unsigned __int64)ndisPacketStackSize) + 24];
                KeInitializeSpinLock((PKSPIN_LOCK)v18);
              }
              --v14;
            }
            while ( v14 );
            v3 = v32;
            v6 = Packet;
            v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
            v11 = v35;
          }
          v8 = ExpInterlockedPopEntrySList(v13 + 2);
          v19 = *(_QWORD *)v3;
          if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
            __fastfail(3u);
          v13->Alignment = v19;
          v13->Region = (unsigned __int64)v3;
          *(_QWORD *)(v19 + 8) = v13;
          *(_QWORD *)v3 = v13;
          LODWORD(v13[3].Alignment) = 0;
        }
      }
    }
    else
    {
      v29 = *(_SLIST_HEADER **)v10;
      if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10
        || (Alignment = v29->Alignment, *(_SLIST_HEADER **)(v29->Alignment + 8) != v29) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v10 = Alignment;
      *(_QWORD *)(Alignment + 8) = v10;
      v8 = ExpInterlockedPopEntrySList(v29 + 2);
      v31 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
        __fastfail(3u);
      v29->Alignment = v31;
      v29->Region = (unsigned __int64)v3;
      *(_QWORD *)(v31 + 8) = v29;
      *(_QWORD *)v3 = v29;
      LODWORD(v29[3].Alignment) = 0;
      if ( *(char **)v10 == v10 )
        *((_QWORD *)PoolHandle + 13) = 0LL;
      else
        *((_QWORD *)PoolHandle + 13) = PoolAgingTicks.QuadPart + *(_QWORD *)(*(_QWORD *)v10 + 16LL);
    }
    v20 = v9;
    v21 = v11;
  }
  else
  {
    if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v4 + 2) )
      goto LABEL_17;
    v22 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
    v24 = v4->Alignment;
    v36 = v23;
    if ( *(_SLIST_HEADER **)(v4->Alignment + 8) != v4 || (Region = (_SLIST_HEADER **)v4->Region, *Region != v4) )
      __fastfail(3u);
    *Region = (_SLIST_HEADER *)v24;
    *(_QWORD *)(v24 + 8) = Region;
    if ( ExQueryDepthSList(v4 + 2) )
    {
      v28 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
        __fastfail(3u);
      v4->Alignment = v28;
      v4->Region = (unsigned __int64)v3;
      *(_QWORD *)(v28 + 8) = v4;
      *(_QWORD *)v3 = v4;
      LODWORD(v4[3].Alignment) = 0;
    }
    else
    {
      v26 = (_SLIST_HEADER **)*((_QWORD *)PoolHandle + 8);
      v27 = (char *)PoolHandle + 56;
      if ( *v26 != (_SLIST_HEADER *)v27 )
        __fastfail(3u);
      v4->Alignment = (unsigned __int64)v27;
      v4->Region = (unsigned __int64)v26;
      *v26 = v4;
      *((_QWORD *)v27 + 1) = v4;
      LODWORD(v4[3].Alignment) = 1;
    }
    v21 = v36;
    v20 = v22;
  }
  KeReleaseSpinLock(v20, v21);
  v7 = Status;
LABEL_17:
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

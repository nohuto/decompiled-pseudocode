/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x1C000E340
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1C004E3B0 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004ED90 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004F6B0 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C005512C (ndisDoLoopbackNetBufferList.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059DF8 (ndisFDoLoopbackNetBufferList.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00678C8 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0006520 (NdisFreeNetBufferList.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000E638 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisAllocateNetBufferListContext @ 0x1C0010B20 (NdisAllocateNetBufferListContext.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C001157C (ndisGenerateNetBufferListCorrelationIds.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  unsigned int Number; // r15d
  int v11; // r12d
  unsigned __int64 v12; // rax
  char *v13; // rdi
  _SLIST_HEADER *v14; // rcx
  PSLIST_ENTRY v15; // rbx
  __int16 v16; // di
  size_t v17; // r8
  int v18; // eax
  ULONG v19; // ecx
  unsigned __int64 v21; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v23; // al
  __int64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  ULONG ByteCount; // eax
  KIRQL v28; // al
  __int64 v29; // r8
  bool v30; // zf
  _SLIST_ENTRY *v31; // rax

  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 15) & 5) == 1 )
    {
      if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) == 0 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v11 = 1;
        if ( ndisMaxNumberOfProcessors != 1 )
        {
          v12 = (unsigned __int64)Number << 8;
          v13 = (char *)PoolHandle + v12 + 384;
          if ( !v13[216] )
            ndisPplLazyInitializeLookaside(
              (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v12 + 384),
              (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
          v14 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
          ++*((_DWORD *)v13 + 5);
          v15 = ExpInterlockedPopEntrySList(v14);
          if ( !v15 )
          {
            if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) < 0xAu
              || (v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26),
                  v29 = *((_QWORD *)v13 + 24),
                  *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25),
                  *((_QWORD *)v13 + 25) = v29,
                  KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v28),
                  (v15 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v13 + 24))) == 0LL) )
            {
              ++*((_DWORD *)v13 + 6);
            }
          }
          if ( v15 )
            goto LABEL_9;
        }
        ++*((_DWORD *)PoolHandle + 37);
        v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
        if ( v15 )
          goto LABEL_31;
        v21 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v21 + 32 >= v21 )
        {
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v21 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            PoolWithTagPriority->Next = 0LL;
            v15 = PoolWithTagPriority + 2;
            if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
            {
              PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
              v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
              v24 = *((_QWORD *)PoolHandle + 2);
              v25 = (char *)PoolHandle + 16;
              v26 = &v15[-2].Next + 1;
              if ( *(NDIS_HANDLE *)(v24 + 8) != (char *)PoolHandle + 16 )
                __fastfail(3u);
              v26[1] = v25;
              *v26 = v24;
              *(_QWORD *)(v24 + 8) = v26;
              *v25 = v26;
              KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v23);
            }
          }
          else
          {
            v15 = 0LL;
          }
          v11 = 0;
          if ( v15 )
          {
LABEL_31:
            *((_DWORD *)&v15[-1].Next + 2) = Number;
LABEL_9:
            v16 = *((_WORD *)&v15[3].Next + 5);
            v17 = 360LL;
            if ( !v11 )
              v17 = 368LL;
            memset(v15, 0, v17);
            v15[2].Next = (_SLIST_ENTRY *)PoolHandle;
            *((_DWORD *)&v15[8].Next + 2) = 256;
            if ( v11 )
              *((_WORD *)&v15[3].Next + 5) = v16;
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
              ndisGenerateNetBufferListCorrelationIds(v15, 1LL);
            *((_BYTE *)&v15[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
            v18 = *((_DWORD *)PoolHandle + 15);
            if ( (v18 & 2) == 0 )
              goto LABEL_16;
            v30 = (v18 & 1) == 0;
            v31 = v15 + 34;
            if ( v30 )
              v31 = v15 + 23;
            v15[1].Next = v31;
            v31->Next = 0LL;
            *((_WORD *)&v15[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17);
            *((_WORD *)&v15[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17);
            if ( *((_WORD *)PoolHandle + 17) >= ContextSize )
            {
              *((_WORD *)&v15[1].Next->Next + 5) -= ContextSize;
            }
            else
            {
LABEL_16:
              if ( ContextSize )
              {
                if ( NdisAllocateNetBufferListContext(
                       (PNET_BUFFER_LIST)v15,
                       ContextSize,
                       ContextBackFill,
                       *((_DWORD *)PoolHandle + 14)) )
                {
                  NdisFreeNetBufferList((PNET_BUFFER_LIST)v15);
                  v15 = 0LL;
                }
                else
                {
                  *((_DWORD *)&v15[8].Next + 2) |= 0x400u;
                }
              }
            }
            if ( v15 )
            {
              memset(&v15[23], 0, 0xB0uLL);
              v19 = DataOffset;
              *((_DWORD *)&v15[25].Next + 2) = DataOffset;
              *((_DWORD *)&v15[24].Next + 2) = DataLength;
              v15[25].Next = (_SLIST_ENTRY *)MdlChain;
              for ( *((_QWORD *)&v15[26].Next + 1) = PoolHandle; MdlChain; v19 -= ByteCount )
              {
                ByteCount = MdlChain->ByteCount;
                if ( v19 < ByteCount )
                  break;
                MdlChain = MdlChain->Next;
              }
              *((_QWORD *)&v15[23].Next + 1) = MdlChain;
              LODWORD(v15[24].Next) = v19;
              *((_QWORD *)&v15->Next + 1) = v15 + 23;
              if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
                ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v15, 0LL, 3u, 0LL, 0);
            }
            return (PNET_BUFFER_LIST)v15;
          }
        }
      }
      return 0LL;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", PoolHandle);
    return 0LL;
  }
  else
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
    return 0LL;
  }
}

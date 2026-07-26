/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x1C0004D20
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1C004D0B0 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E1FC (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004EB14 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0054BC0 (ndisDoLoopbackNetBufferList.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059838 (ndisFDoLoopbackNetBufferList.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C0068A88 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0005010 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBufferList @ 0x1C00056B0 (NdisFreeNetBufferList.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     NdisAllocateNetBufferListContext @ 0x1C004CF20 (NdisAllocateNetBufferListContext.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DE20 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  unsigned int Number; // r12d
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  char *v13; // r15
  _SLIST_HEADER *v14; // rcx
  PSLIST_ENTRY v15; // rbx
  __int16 v16; // r15
  int v17; // eax
  ULONG v18; // ecx
  ULONG ByteCount; // eax
  KIRQL v21; // al
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v25; // al
  __int64 v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  bool v29; // zf
  __int64 v30; // rax

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
              || (v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26),
                  v22 = *((_QWORD *)v13 + 24),
                  *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25),
                  *((_QWORD *)v13 + 25) = v22,
                  KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v21),
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
          goto LABEL_25;
        v23 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v23 + 32 >= v23 )
        {
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v23 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            v15 = PoolWithTagPriority + 2;
            PoolWithTagPriority->Next = 0LL;
            if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
            {
              PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
              v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
              v26 = *((_QWORD *)PoolHandle + 2);
              v27 = (char *)PoolHandle + 16;
              v28 = &v15[-2].Next + 1;
              if ( *(NDIS_HANDLE *)(v26 + 8) != (char *)PoolHandle + 16 )
                __fastfail(3u);
              v28[1] = v27;
              *v28 = v26;
              *(_QWORD *)(v26 + 8) = v28;
              *v27 = v28;
              KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v25);
            }
          }
          else
          {
            v15 = 0LL;
          }
          v11 = 0;
          if ( v15 )
          {
LABEL_25:
            *((_DWORD *)&v15[-1].Next + 2) = Number;
LABEL_9:
            v16 = *((_WORD *)&v15[3].Next + 5);
            memset(v15, 0, 8 * (v11 ^ 1LL) + 368);
            v15[2].Next = (_SLIST_ENTRY *)PoolHandle;
            *((_DWORD *)&v15[8].Next + 2) = 256;
            if ( v11 )
              *((_WORD *)&v15[3].Next + 5) = v16;
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
              ndisGenerateNetBufferListCorrelationIds(v15, 1LL);
            *((_BYTE *)&v15[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
            v17 = *((_DWORD *)PoolHandle + 15);
            if ( (v17 & 2) == 0 )
              goto LABEL_14;
            v29 = (v17 & 1) == 0;
            v30 = 35LL;
            if ( v29 )
              v30 = 24LL;
            v15[1].Next = &v15[v30];
            v15[v30].Next = 0LL;
            *((_WORD *)&v15[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17);
            *((_WORD *)&v15[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17);
            if ( *((_WORD *)PoolHandle + 17) >= ContextSize )
            {
              *((_WORD *)&v15[1].Next->Next + 5) -= ContextSize;
            }
            else
            {
LABEL_14:
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
              memset(&v15[24], 0, 0xB0uLL);
              v18 = DataOffset;
              *((_DWORD *)&v15[26].Next + 2) = DataOffset;
              *((_DWORD *)&v15[25].Next + 2) = DataLength;
              v15[26].Next = (_SLIST_ENTRY *)MdlChain;
              for ( *((_QWORD *)&v15[27].Next + 1) = PoolHandle; MdlChain; v18 -= ByteCount )
              {
                ByteCount = MdlChain->ByteCount;
                if ( v18 < ByteCount )
                  break;
                MdlChain = MdlChain->Next;
              }
              *((_QWORD *)&v15[24].Next + 1) = MdlChain;
              LODWORD(v15[25].Next) = v18;
              *((_QWORD *)&v15->Next + 1) = v15 + 24;
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

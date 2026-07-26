/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x1C0019050
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C004C0E0 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C004C680 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004D89C (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004E1B0 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0054230 (ndisDoLoopbackNetBufferList.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059138 (ndisFDoLoopbackNetBufferList.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00680B8 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0014360 (NdisFreeNetBufferList.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     NdisAllocateNetBufferListContext @ 0x1C004C4F0 (NdisAllocateNetBufferListContext.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004D4BC (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  unsigned int Number; // r13d
  unsigned int v11; // r12d
  char *v12; // r14
  _SLIST_HEADER *v13; // rcx
  PSLIST_ENTRY v14; // rbx
  __int16 v15; // r14
  int v16; // eax
  ULONG v17; // ecx
  ULONG ByteCount; // eax
  unsigned __int64 v20; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v22; // al
  __int64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  PFREE_FUNCTION_EX *v26; // rbx
  KIRQL v27; // al
  KIRQL v28; // al
  __int64 v29; // r8
  _SLIST_ENTRY *v30; // rax
  KIRQL v31; // [rsp+70h] [rbp+8h]

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
          v12 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
          if ( !v12[216] )
          {
            v26 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
            v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 26);
            v31 = v27;
            if ( !v12[216] )
            {
              ExInitializeLookasideListEx(
                (PLOOKASIDE_LIST_EX)v12,
                ndisAllocateFromNPagedPool,
                *(v26 - 25),
                NonPagedPoolNx,
                0,
                *((unsigned int *)v26 - 53),
                *((_DWORD *)v26 - 54),
                0x400u);
              v27 = v31;
              v12[216] = 1;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)v12 + 26, v27);
          }
          v13 = (_SLIST_HEADER *)*((_QWORD *)v12 + 24);
          ++*((_DWORD *)v12 + 5);
          v14 = ExpInterlockedPopEntrySList(v13);
          if ( !v14 )
          {
            if ( ExQueryDepthSList(*((PSLIST_HEADER *)v12 + 25)) < 0xAu
              || (v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 26),
                  v29 = *((_QWORD *)v12 + 24),
                  *((_QWORD *)v12 + 24) = *((_QWORD *)v12 + 25),
                  *((_QWORD *)v12 + 25) = v29,
                  KeReleaseSpinLock((PKSPIN_LOCK)v12 + 26, v28),
                  (v14 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v12 + 24))) == 0LL) )
            {
              ++*((_DWORD *)v12 + 6);
            }
          }
          if ( v14 )
            goto LABEL_8;
        }
        ++*((_DWORD *)PoolHandle + 37);
        v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
        if ( v14 )
          goto LABEL_30;
        v20 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v20 + 32 >= v20 )
        {
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v20 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            PoolWithTagPriority->Next = 0LL;
            v14 = PoolWithTagPriority + 2;
            if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
            {
              PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
              v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
              v23 = *((_QWORD *)PoolHandle + 2);
              v24 = (char *)PoolHandle + 16;
              v25 = &v14[-2].Next + 1;
              if ( *(NDIS_HANDLE *)(v23 + 8) != (char *)PoolHandle + 16 )
                __fastfail(3u);
              v25[1] = v24;
              *v25 = v23;
              *(_QWORD *)(v23 + 8) = v25;
              *v24 = v25;
              KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v22);
            }
          }
          else
          {
            v14 = 0LL;
          }
          v11 = 0;
          if ( v14 )
          {
LABEL_30:
            *((_DWORD *)&v14[-1].Next + 2) = Number;
LABEL_8:
            v15 = *((_WORD *)&v14[3].Next + 5);
            memset(v14, 0, 8 * (v11 ^ 1LL) + 368);
            v14[2].Next = (_SLIST_ENTRY *)PoolHandle;
            *((_DWORD *)&v14[8].Next + 2) = 256;
            if ( v11 )
              *((_WORD *)&v14[3].Next + 5) = v15;
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
              ndisGenerateNetBufferListCorrelationIds(v14, 1LL);
            *((_BYTE *)&v14[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
            v16 = *((_DWORD *)PoolHandle + 15);
            if ( (v16 & 2) != 0
              && ((v16 & 1) == 0 ? (v30 = v14 + 24) : (v30 = v14 + 35),
                  v14[1].Next = v30,
                  v30->Next = 0LL,
                  *((_WORD *)&v14[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17),
                  *((_WORD *)&v14[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17),
                  *((_WORD *)PoolHandle + 17) >= ContextSize) )
            {
              *((_WORD *)&v14[1].Next->Next + 5) -= ContextSize;
            }
            else if ( ContextSize )
            {
              if ( NdisAllocateNetBufferListContext(
                     (PNET_BUFFER_LIST)v14,
                     ContextSize,
                     ContextBackFill,
                     *((_DWORD *)PoolHandle + 14)) )
              {
                NdisFreeNetBufferList((PNET_BUFFER_LIST)v14);
                v14 = 0LL;
              }
              else
              {
                *((_DWORD *)&v14[8].Next + 2) |= 0x400u;
              }
            }
            if ( v14 )
            {
              memset(&v14[24], 0, 0xB0uLL);
              v17 = DataOffset;
              *((_DWORD *)&v14[26].Next + 2) = DataOffset;
              *((_DWORD *)&v14[25].Next + 2) = DataLength;
              v14[26].Next = (_SLIST_ENTRY *)MdlChain;
              for ( *((_QWORD *)&v14[27].Next + 1) = PoolHandle; MdlChain; v17 -= ByteCount )
              {
                ByteCount = MdlChain->ByteCount;
                if ( v17 < ByteCount )
                  break;
                MdlChain = MdlChain->Next;
              }
              *((_QWORD *)&v14[24].Next + 1) = MdlChain;
              LODWORD(v14[25].Next) = v17;
              *((_QWORD *)&v14->Next + 1) = v14 + 24;
              if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
                ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v14, 0LL, 3u, 0LL, 0);
            }
            return (PNET_BUFFER_LIST)v14;
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

/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C00136F0 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0014014 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0014510 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0014B80 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C0017180 (ndisReturnNblWithPowerQueue.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0017D70 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C001F938 (ndisReturnQueuedLowPowerNbls.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C004CDF0 (NdisFreeFragmentNetBufferList.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0054230 (ndisDoLoopbackNetBufferList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005638C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C00564A0 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0056EB0 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059138 (ndisFDoLoopbackNetBufferList.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C0066E20 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0069780 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0069DC0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006AA30 (ndisReturnNetBufferListsInternal.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C0070648 (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C00706B4 (ndisQueueSendNblsOnMiniport.c)
 *     ndisReplayRecvNbls @ 0x1C00707C4 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C0070828 (ndisReplaySendNbls.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *Alignment,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbp
  char v8; // di
  char v9; // cl
  char v10; // r14
  __int64 v12; // r15
  __int64 v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int8 *v15; // r12
  unsigned __int64 v16; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int8 v18; // dl
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v29; // [rsp+68h] [rbp+10h]
  char v30; // [rsp+80h] [rbp+28h]

  v29 = a2;
  v6 = 0LL;
  v8 = ndisNblTrackerEpoch;
  v9 = 0;
  v10 = a5 & 1;
  v12 = 0LL;
  v30 = 0;
  v13 = 0LL;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(Alignment, a2, a4, (void *)a3, a5);
    a2 = v29;
    v9 = 0;
  }
  v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v14 & 1) != 0 )
  {
    v15 = *(unsigned __int8 **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v14 |= 2LL * (v8 & 1);
  }
  else
  {
    v15 = (unsigned __int8 *)v14;
  }
  if ( Alignment )
  {
    while ( 1 )
    {
      v16 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == (void *)v16 )
      {
        if ( !v16 && !Alignment->SourceHandle )
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                              (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFDuLL,
                                              a2,
                                              a3);
        if ( (v16 & 4) != 0 )
          goto LABEL_40;
        SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          v18 = *SourceHandle;
          if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || v18 == 5 )
          {
            if ( SourceHandle != v15 || Alignment->ParentNetBufferList )
            {
              a2 = v29;
              ++v6;
              Alignment->NetBufferListInfo[27] = (void *)v14;
            }
            else
            {
              a2 = v29;
              ++v13;
              ++v6;
              Alignment->NetBufferListInfo[27] = (void *)24;
            }
            goto LABEL_14;
          }
          if ( (unsigned __int8)byte_1C0098762 >= 3u )
            WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment, v18);
          goto LABEL_39;
        }
        if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment);
LABEL_39:
          a2 = v29;
        }
LABEL_40:
        Alignment->NetBufferListInfo[27] = (void *)(v14 | 4);
LABEL_14:
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v19 = v12 - v6;
      if ( (v16 & 1) != 0 && v19 )
      {
        if ( !v10 && !v30 )
        {
          v30 = 1;
          v10 = KeGetCurrentIrql() == 2;
        }
        v20 = v16;
        v21 = v16 & 0xFFFFFFFFFFFFFFF8uLL;
        v22 = 2 * ((v20 >> 1) & 1);
        if ( v10 )
        {
          v23 = (_QWORD *)(*(_QWORD *)(v21 + 8 * v22 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v23 += v19;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8 * v22 + 48), v19);
        }
      }
      a2 = v29;
      v12 = v6;
      if ( !Alignment )
      {
        v9 = v30;
        break;
      }
    }
  }
  v24 = v6 - v13;
  if ( (v14 & 1) != 0 && v24 )
  {
    if ( !v10 && !v9 )
      v10 = KeGetCurrentIrql() == 2;
    v25 = v14;
    v26 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
    v27 = 2 * ((v25 >> 1) & 1);
    if ( v10 )
    {
      v28 = (_QWORD *)(*(_QWORD *)(v26 + 8 * v27 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v28 += v24;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 8 * v27 + 48), v24);
    }
  }
}

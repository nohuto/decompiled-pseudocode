/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001008 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001480 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00018F0 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0002030 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002930 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0003840 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C00058E0 (ndisReturnNblWithPowerQueue.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000F260 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C0011FC4 (ndisReturnQueuedLowPowerNbls.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0024530 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005723C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C0057350 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0057D60 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C0066630 (NdisNblTrackerTransferOwnership.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00686F0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0068A50 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00692B0 (ndisReturnNetBufferListsInternal.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C006EED8 (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C006EF44 (ndisQueueSendNblsOnMiniport.c)
 *     ndisReplayRecvNbls @ 0x1C006F054 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C006F0B8 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  char v6; // r12
  char v7; // di
  char v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r13
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  char v25; // [rsp+70h] [rbp+8h]
  unsigned __int64 v26; // [rsp+78h] [rbp+10h]
  void *v27; // [rsp+80h] [rbp+18h]
  char v28; // [rsp+90h] [rbp+28h]

  v26 = a2;
  v6 = 0;
  v7 = ndisNblTrackerEpoch;
  v8 = a5 & 1;
  v28 = 0;
  v9 = 0LL;
  v25 = v8;
  v10 = 0LL;
  v11 = 0LL;
  Alignment = a1;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(a1, (struct NDIS_NBL_TRACKER_HANDLE__ *)a2, a4, (void *)a3, a5);
  v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v14 & 1) != 0 )
    v27 = *(void **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    v27 = (void *)v14;
  if ( (v14 & 1) != 0 )
    v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v7)) & 2;
  while ( Alignment )
  {
    v15 = (unsigned __int64)Alignment->NetBufferListInfo[26];
    do
    {
      if ( Alignment->NetBufferListInfo[26] != (void *)v15 )
        break;
      if ( !v15 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v26 & 0xFFFFFFFFFFFFFFFDuLL, a2);
      if ( (v15 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(Alignment) )
      {
        Alignment->NetBufferListInfo[26] = (void *)(v14 | 4);
      }
      else if ( Alignment->SourceHandle != v27 || Alignment->ParentNetBufferList )
      {
        ++v9;
        Alignment->NetBufferListInfo[26] = (void *)v14;
      }
      else
      {
        ++v11;
        Alignment->NetBufferListInfo[26] = (void *)24;
        ++v9;
      }
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
    v8 = v25;
    v16 = v10 - v9;
    v6 = v28;
    if ( (v15 & 1) != 0 && v16 )
    {
      if ( !v25 && !v28 )
      {
        v6 = 1;
        v28 = 1;
        v8 = KeGetCurrentIrql() == 2;
        v25 = v8;
      }
      v17 = v15;
      v18 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
      a2 = 2 * ((v17 >> 1) & 1);
      if ( v8 )
      {
        v19 = (_QWORD *)(*(_QWORD *)(v18 + 8 * a2 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v19 += v16;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 8 * a2 + 48), v16);
      }
    }
    v10 = v9;
  }
  v20 = v9 - v11;
  if ( (v14 & 1) != 0 && v20 )
  {
    if ( !v8 && !v6 )
      v8 = KeGetCurrentIrql() == 2;
    v21 = v14;
    v22 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
    v23 = 2 * ((v21 >> 1) & 1);
    if ( v8 )
    {
      v24 = (_QWORD *)(*(_QWORD *)(v22 + 8 * v23 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v24 += v20;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 8 * v23 + 48), v20);
    }
  }
}

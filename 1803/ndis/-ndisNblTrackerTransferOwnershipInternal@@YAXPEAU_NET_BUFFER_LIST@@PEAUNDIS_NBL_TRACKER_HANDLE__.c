/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001980 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002234 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002D60 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C0006300 (ndisReturnNblWithPowerQueue.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0008700 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C000F744 (ndisReturnQueuedLowPowerNbls.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0011140 (NdisFreeFragmentNetBufferList.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0054BC0 (ndisDoLoopbackNetBufferList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0056D2C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C0056E40 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0057850 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059838 (ndisFDoLoopbackNetBufferList.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C0067A00 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006A0F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C006A700 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006AAB0 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006B330 (ndisReturnNetBufferListsInternal.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C0070E98 (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C0070F04 (ndisQueueSendNblsOnMiniport.c)
 *     ndisReplayRecvNbls @ 0x1C0071014 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C0071078 (ndisReplaySendNbls.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  char v6; // r12
  char v7; // di
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r13
  struct _NET_BUFFER_LIST *Alignment; // r14
  unsigned __int64 v14; // rbx
  _BYTE *v15; // r8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdi
  _BYTE *SourceHandle; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  _QWORD *v27; // rcx
  _BYTE *v28; // [rsp+70h] [rbp+8h]
  unsigned __int64 v29; // [rsp+78h] [rbp+10h]
  char v30; // [rsp+90h] [rbp+28h]

  v29 = (unsigned __int64)a2;
  v6 = 0;
  v7 = ndisNblTrackerEpoch;
  v8 = a5 & 1;
  v30 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Alignment = a1;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(a1, a2, a4, (void *)a3, a5);
  v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v14 & 1) != 0 )
    v15 = *(_BYTE **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    v15 = (_BYTE *)v14;
  v28 = v15;
  if ( (v14 & 1) != 0 )
    v14 |= 2LL * (v7 & 1);
LABEL_7:
  if ( Alignment )
  {
    v21 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v21 )
      {
LABEL_23:
        v6 = v30;
        v24 = v10 - v9;
        if ( (v21 & 1) != 0 && v24 )
        {
          if ( !v8 && !v30 )
          {
            v6 = 1;
            v30 = 1;
            v8 = KeGetCurrentIrql() == 2;
          }
          v25 = v21;
          v26 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
          a2 = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((v25 >> 1) & 1));
          if ( v8 )
          {
            v27 = (_QWORD *)(*(_QWORD *)((char *)a2 + v26 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v27 += v24;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)a2 + v26 + 48), v24);
          }
        }
        v10 = v9;
        goto LABEL_7;
      }
      if ( !v21 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v29 & 0xFFFFFFFFFFFFFFFDuLL, a2, v15, a4);
      if ( (v21 & 4) == 0 )
      {
        SourceHandle = Alignment->SourceHandle;
        if ( SourceHandle )
        {
          LOBYTE(a2) = *SourceHandle;
          if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || (_BYTE)a2 == 5 )
          {
            if ( SourceHandle != v15 || Alignment->ParentNetBufferList )
            {
              ++v9;
              v23 = v14;
            }
            else
            {
              ++v11;
              v23 = 24LL;
              ++v9;
            }
            goto LABEL_22;
          }
          if ( (unsigned __int8)byte_1C0099622 >= 3u )
            WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, (unsigned __int8)a2);
        }
        else if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, a4);
        }
      }
      v15 = v28;
      v23 = v14 | 4;
LABEL_22:
      Alignment->NetBufferListInfo[27] = (void *)v23;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_23;
    }
  }
  v16 = v9 - v11;
  if ( (v14 & 1) != 0 && v16 )
  {
    if ( !v8 && !v6 )
      v8 = KeGetCurrentIrql() == 2;
    v17 = v14;
    v18 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
    v19 = 2 * ((v17 >> 1) & 1);
    if ( v8 )
    {
      v20 = (_QWORD *)(*(_QWORD *)(v18 + 8 * v19 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v20 += v16;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 8 * v19 + 48), v16);
    }
  }
}

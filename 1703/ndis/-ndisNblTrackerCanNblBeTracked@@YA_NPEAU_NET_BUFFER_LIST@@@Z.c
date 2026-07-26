/*
 * XREFs of ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C00 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisSendNetBufferLists @ 0x1C00038F0 (NdisSendNetBufferLists.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0004D20 (ndisMSendNBLToMiniportInternal.c)
 *     NdisReturnNetBufferLists @ 0x1C00051B0 (NdisReturnNetBufferLists.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0006260 (NdisFreeCloneNetBufferList.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0006800 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C000D5A0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C000EE90 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000F260 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0011D3C (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

char __fastcall ndisNblTrackerCanNblBeTracked(struct _NET_BUFFER_LIST *a1)
{
  unsigned __int8 *SourceHandle; // rax
  unsigned __int8 v4; // cl

  SourceHandle = (unsigned __int8 *)a1->SourceHandle;
  if ( !SourceHandle )
  {
    if ( (unsigned __int8)byte_1C0092622 >= 3u )
      WPP_SF_q(11LL, &WPP_0f567d7dfc7c36c58892c3982a44c53d_Traceguids, a1);
    return 0;
  }
  v4 = *SourceHandle;
  if ( (unsigned __int8)(*SourceHandle - 17) > 1u && v4 != 5 )
  {
    if ( (unsigned __int8)byte_1C0092622 >= 3u )
      WPP_SF_qD(12LL, &WPP_0f567d7dfc7c36c58892c3982a44c53d_Traceguids, a1, v4);
    return 0;
  }
  return 1;
}

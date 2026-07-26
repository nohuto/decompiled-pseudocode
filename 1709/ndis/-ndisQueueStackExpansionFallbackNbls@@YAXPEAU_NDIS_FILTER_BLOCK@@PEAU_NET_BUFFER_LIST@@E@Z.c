/*
 * XREFs of ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0012F00 (NdisSendNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00136F0 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0014510 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0014B80 (ndisMTopReceiveNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C00162F0 (ndisFilterSendNetBufferLists.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0016B0C (ndisInvokeNextReceiveCompleteHandler.c)
 *     NdisReturnNetBufferLists @ 0x1C0016B80 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C0017530 (NdisFSendNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0057D04 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0059B5C (ndisInvokeNextReceiveHandler.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0059E78 (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0069780 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A0D8 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __fastcall ndisQueueStackExpansionFallbackNbls(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  KIRQL v6; // al
  KIRQL v7; // r14
  _QWORD **v8; // rdx
  _QWORD *v9; // rax

  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, a1->NblTracker, 0xA0uLL, 1u, 0);
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  a1->LockDbg = 2099750;
  v7 = v6;
  v8 = (_QWORD **)((char *)&a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete
                 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF8uLL));
  if ( *v8 )
  {
    v9 = *v8;
    do
    {
      v8 = (_QWORD **)v9;
      v9 = (_QWORD *)*v9;
    }
    while ( v9 );
  }
  *v8 = &a2->Link.Alignment;
  ndisQueueStackExpansionFallbackWorkItem(a1);
  a1->LockThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v7);
}

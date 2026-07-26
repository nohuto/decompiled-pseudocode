/*
 * XREFs of ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001980 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002D60 (ndisMTopReceiveNetBufferLists.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0005950 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     NdisReturnNetBufferLists @ 0x1C0005DA0 (NdisReturnNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C005A30C (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C005A528 (ndisInvokeNextReceiveHandler.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005A7D4 (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006A0F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006AAB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A9F0 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __fastcall ndisQueueStackExpansionFallbackNbls(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  KIRQL v6; // al
  KIRQL v7; // r14
  _QWORD **v8; // r8
  _QWORD *i; // rdx

  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, a1->NblTracker, 0xA0uLL, 1LL, 0);
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  a1->LockDbg = 2099750;
  v7 = v6;
  v8 = (_QWORD **)((char *)&a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete
                 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF8uLL));
  for ( i = *v8; i; i = (_QWORD *)*i )
    v8 = (_QWORD **)i;
  *v8 = &a2->Link.Alignment;
  ndisQueueStackExpansionFallbackWorkItem(a1);
  a1->LockThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v7);
}

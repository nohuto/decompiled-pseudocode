/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140188FB0
 * Callers:
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14000679C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     MiQueuePageAccessLog @ 0x140007F3C (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1400107F0 (PfpReturnAccessBuffer.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     PfFbBufferListInsertInFree @ 0x140011D44 (PfFbBufferListInsertInFree.c)
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     PfTFullEventListAdd @ 0x1400128F8 (PfTFullEventListAdd.c)
 *     PfFbLogEntryComplete @ 0x140012FE8 (PfFbLogEntryComplete.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcFreeWorkQueueEntry @ 0x1400232C4 (CcFreeWorkQueueEntry.c)
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x14002EE40 (MiInsertNonPagedPoolOnSlist.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140076870 (ExpWorkerFactoryCheckCreate.c)
 *     IopFreeIrp @ 0x1400853D0 (IopFreeIrp.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     KeAllocateInterrupt @ 0x1400B2D10 (KeAllocateInterrupt.c)
 *     PfFbLogEntryReserve @ 0x1400B99F0 (PfFbLogEntryReserve.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     VfPoolDelayFreeIfPossible @ 0x1400F90A0 (VfPoolDelayFreeIfPossible.c)
 *     MiDecayPfnFullyInitialized @ 0x140115284 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x140115354 (MiDeleteParentDecayNode.c)
 *     KeFreeInterrupt @ 0x140129318 (KeFreeInterrupt.c)
 *     MiDeleteCloneDescriptor @ 0x140131B84 (MiDeleteCloneDescriptor.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     CmpFreeCallbackContext @ 0x1401E3140 (CmpFreeCallbackContext.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14022AC60 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiStoreFreeWriteSupport @ 0x14022C490 (MiStoreFreeWriteSupport.c)
 *     MiClearPageFileHash @ 0x140231C5C (MiClearPageFileHash.c)
 *     MiRemovePteTracker @ 0x140234808 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x140234A18 (MiFreeUltraMdlContext.c)
 *     PfFbBufferListAllocate @ 0x140239C30 (PfFbBufferListAllocate.c)
 *     RtlStdReleaseStackTrace @ 0x140250E40 (RtlStdReleaseStackTrace.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140275864 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14027A620 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x14027F99C (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14027FA30 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x14027FF24 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140281DAC (EtwpTraceLastBranchRecord.c)
 *     EtwpDereferenceStackEntry @ 0x140281F90 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1402821CC (EtwpTraceStackKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140439A90 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     ObpFreeObjectNameBuffer @ 0x1404848F0 (ObpFreeObjectNameBuffer.c)
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     IopFreeMiniCompletionPacket @ 0x1404A39C0 (IopFreeMiniCompletionPacket.c)
 *     ObpFreeObject @ 0x1404A3CE0 (ObpFreeObject.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404E38B0 (ObDeleteCapturedInsertInfo.c)
 *     EtwpInitializeStackTracing @ 0x1404EC7C0 (EtwpInitializeStackTracing.c)
 *     RtlpGetRegistryHandle @ 0x140521EDC (RtlpGetRegistryHandle.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14053D570 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405542D0 (IoCreateStreamFileObjectEx2.c)
 *     WdipSemFastFree @ 0x1405AAA94 (WdipSemFastFree.c)
 *     CmpCleanupPathInfo @ 0x14068AA30 (CmpCleanupPathInfo.c)
 *     ObpFreeWorkItemBlock @ 0x1406F1324 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1406F16D8 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406F1AE4 (ObpRefillWorkItemFreeList.c)
 *     EtwpReferenceStackLookasideList @ 0x14074FEB0 (EtwpReferenceStackLookasideList.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140752548 (EtwpReferenceLastBranchLookasideList.c)
 *     EtwpEnableStackCaching @ 0x14075272C (EtwpEnableStackCaching.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1407A653C (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1407A6714 (ViGrowPoolAllocation.c)
 *     MiInitializeDecayPfns @ 0x14084A62C (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  _SLIST_HEADER v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v5.Alignment + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return Region;
}

/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1401B2C10
 * Callers:
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     MiDecayPfnFullyInitialized @ 0x14004DA54 (MiDecayPfnFullyInitialized.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     MiQueuePageAccessLog @ 0x14007A164 (MiQueuePageAccessLog.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     PfFbBufferListInsertInFree @ 0x14007AB9C (PfFbBufferListInsertInFree.c)
 *     PfpReturnAccessBuffer @ 0x14007ACB8 (PfpReturnAccessBuffer.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 *     PfFbLogEntryReserve @ 0x14008BA6C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14008BB44 (PfFbLogEntryComplete.c)
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 *     PfTFullEventListAdd @ 0x14008E958 (PfTFullEventListAdd.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14008FC80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x140091704 (MiStoreFreeWriteSupport.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140096484 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     MiDeleteCloneDescriptor @ 0x1400ADA5C (MiDeleteCloneDescriptor.c)
 *     MiDeleteParentDecayNode @ 0x1400B77E4 (MiDeleteParentDecayNode.c)
 *     MiClearPageFileHash @ 0x1400C7EC8 (MiClearPageFileHash.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DBD80 (MiInsertNonPagedPoolOnSlist.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140106E60 (IopFreeIrp.c)
 *     MmDeleteKernelStack @ 0x140130270 (MmDeleteKernelStack.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     VfPoolDelayFreeIfPossible @ 0x140160990 (VfPoolDelayFreeIfPossible.c)
 *     KeFreeInterrupt @ 0x1401686B0 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x140168D78 (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14016D9F0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfFbBufferListAllocate @ 0x140181198 (PfFbBufferListAllocate.c)
 *     CmpFreeCallbackContext @ 0x14022196C (CmpFreeCallbackContext.c)
 *     MiFreeTransitionPageHeatList @ 0x140258C9C (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x140259210 (MiReplenishTransitionPageHeatList.c)
 *     MiRemovePteTracker @ 0x14026D0BC (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x14026D2CC (MiFreeUltraMdlContext.c)
 *     RtlStdReleaseStackTrace @ 0x1402868F0 (RtlStdReleaseStackTrace.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x14029A288 (RtlpHpLfhCacheAddSubsegment.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1402AD3E4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x1402ADFDC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x1402B4044 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1402B4280 (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1402B51D8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1402B52D0 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1402B551C (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x1402B617C (EtwpTraceLastBranchRecord.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x1404731A0 (PopInvokeStateHandlerTargetProcessor.c)
 *     ObDeleteCapturedInsertInfo @ 0x14049BE40 (ObDeleteCapturedInsertInfo.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpBounceContextCleanup @ 0x1404ACA20 (CmpBounceContextCleanup.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     NtQueryAttributesFile @ 0x1404D1D30 (NtQueryAttributesFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 *     ObpFreeObjectNameBuffer @ 0x1404D2B80 (ObpFreeObjectNameBuffer.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     RtlpGetRegistryHandle @ 0x140506008 (RtlpGetRegistryHandle.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140592DF0 (IoCreateStreamFileObjectEx2.c)
 *     IopFreeMiniCompletionPacket @ 0x14059C710 (IopFreeMiniCompletionPacket.c)
 *     ObpFreeObject @ 0x14059CA30 (ObpFreeObject.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 *     WdipSemFastFree @ 0x14060CB80 (WdipSemFastFree.c)
 *     CmpCleanupPathInfo @ 0x1406EEE5C (CmpCleanupPathInfo.c)
 *     ObpFreeWorkItemBlock @ 0x14075A710 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x14075AAC4 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x14075AED4 (ObpRefillWorkItemFreeList.c)
 *     EtwpInitializeStackTracing @ 0x1407A72B8 (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1407A741C (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x1407B3090 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1407B9330 (EtwpReferenceLastBranchLookasideList.c)
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x140813698 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x140813894 (ViGrowPoolAllocation.c)
 *     MiInitializeDecayPfns @ 0x1408BC3FC (MiInitializeDecayPfns.c)
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

/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1401894B0
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140006E9C (MiQueuePageAccessLog.c)
 *     MiDecayPfnFullyInitialized @ 0x140016720 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x14001683C (MiDeleteParentDecayNode.c)
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncReadWorker @ 0x140028770 (CcCompleteAsyncReadWorker.c)
 *     CcWaitForUninitializeCacheMap @ 0x140028FB8 (CcWaitForUninitializeCacheMap.c)
 *     MiClearPageFileHash @ 0x140035D80 (MiClearPageFileHash.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14005327C (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x140054EB0 (MiStoreFreeWriteSupport.c)
 *     PfFbBufferListInsertInFree @ 0x14005F1F8 (PfFbBufferListInsertInFree.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     PfTFullEventListAdd @ 0x1400602BC (PfTFullEventListAdd.c)
 *     PfFbLogEntryComplete @ 0x140060424 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x140060480 (PfFbLogEntryReserve.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x1400AF884 (CcWriteBehind.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DD2E0 (MiInsertNonPagedPoolOnSlist.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400E3D20 (ExpWorkerFactoryCheckCreate.c)
 *     IopFreeIrp @ 0x1400F11C0 (IopFreeIrp.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x140110020 (MmDeleteKernelStack.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011FD0C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140136960 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x140148998 (VfPoolDelayFreeIfPossible.c)
 *     KeFreeInterrupt @ 0x14014B93C (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14014C058 (KeAllocateInterrupt.c)
 *     PfFbBufferListAllocate @ 0x140168A5C (PfFbBufferListAllocate.c)
 *     CmpFreeCallbackContext @ 0x1401DEC50 (CmpFreeCallbackContext.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     MiRemovePteTracker @ 0x140225B70 (MiRemovePteTracker.c)
 *     PfpReturnAccessBuffer @ 0x140226FA0 (PfpReturnAccessBuffer.c)
 *     RtlStdReleaseStackTrace @ 0x14023B590 (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140252C94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpQueueStackWalkApc @ 0x140256B58 (EtwpQueueStackWalkApc.c)
 *     EtwpStackWalkApc @ 0x140256E30 (EtwpStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x140256F38 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x14025834C (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140406380 (PopInvokeStateHandlerTargetProcessor.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140422650 (IoCreateStreamFileObjectEx2.c)
 *     WdipSemFastFree @ 0x140467AB8 (WdipSemFastFree.c)
 *     AlpcpDestroyBlob @ 0x14047EE40 (AlpcpDestroyBlob.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 *     ObpFreeObjectNameBuffer @ 0x1404F3F60 (ObpFreeObjectNameBuffer.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x140515ED0 (ObDeleteCapturedInsertInfo.c)
 *     ObpFreeObject @ 0x140520A70 (ObpFreeObject.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 *     IopFreeMiniCompletionPacket @ 0x140527A70 (IopFreeMiniCompletionPacket.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     FsRtlpCleanupEcps @ 0x140542B00 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 *     EtwpInitializeStackTracing @ 0x14059E618 (EtwpInitializeStackTracing.c)
 *     CmpCleanupPathInfo @ 0x1406617E8 (CmpCleanupPathInfo.c)
 *     ObpFreeWorkItemBlock @ 0x1406C28C8 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1406C2C74 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406C3074 (ObpRefillWorkItemFreeList.c)
 *     EtwpReferenceStackLookasideList @ 0x140712350 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x1407135D8 (EtwpEnableStackCaching.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x14076481C (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1407649F0 (ViGrowPoolAllocation.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     MiInitializeDecayPfns @ 0x140813728 (MiInitializeDecayPfns.c)
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

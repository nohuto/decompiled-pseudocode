/*
 * XREFs of ExFreePoolWithTag @ 0x140286010
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140003628 (MiCreateCloneChain.c)
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14000397C (AuthzBasepFreeSecurityAttributeValues.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140003DE8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1400048FC (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     MiFreeClonePool @ 0x140004ABC (MiFreeClonePool.c)
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     ExFreeCacheAwareRundownProtection @ 0x140005C00 (ExFreeCacheAwareRundownProtection.c)
 *     PnpGetRelatedTargetDevice @ 0x140005C74 (PnpGetRelatedTargetDevice.c)
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     FsRtlEmptyFreePoolList @ 0x14000CD8C (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x14000CDE4 (FsRtlFreeTunnelNode.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     IopDropIrp @ 0x140011708 (IopDropIrp.c)
 *     LdrpKrnGetDataTableEntry @ 0x140012970 (LdrpKrnGetDataTableEntry.c)
 *     MiViewMayContainPage @ 0x140014728 (MiViewMayContainPage.c)
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140014FCC (MiFreeModWriterEntry.c)
 *     FsRtlTruncateBaseMcb @ 0x140015700 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x1400161A0 (FsRtlAddEntry.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x140018DC0 (FsRtlCancelNotify.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400192B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140019C10 (FsRtlpOplockSendModernAppTermination.c)
 *     RtlContractHashTable @ 0x14001B560 (RtlContractHashTable.c)
 *     EtwpFreeCompression @ 0x14001B67C (EtwpFreeCompression.c)
 *     EtwpFreePlaceholderList @ 0x14001B798 (EtwpFreePlaceholderList.c)
 *     SeLogAccessFailure @ 0x14001BD60 (SeLogAccessFailure.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E63C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001E834 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E8E4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x14001EB90 (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     SmHpChunkHeapCleanup @ 0x14001EBB8 (SmHpChunkHeapCleanup.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14001ECF0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001FDF0 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     StEtaCleanup @ 0x14001FE28 (StEtaCleanup.c)
 *     SmFpCleanup @ 0x14001FE68 (SmFpCleanup.c)
 *     SmHpBufferCleanup @ 0x14001FF18 (SmHpBufferCleanup.c)
 *     PfSnNameRemove @ 0x140021FFC (PfSnNameRemove.c)
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     CcAsyncCopyRead @ 0x140023470 (CcAsyncCopyRead.c)
 *     PfpMemoryRangesQuery @ 0x1400251A8 (PfpMemoryRangesQuery.c)
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     ExpExpandResourceOwnerTable @ 0x140027C24 (ExpExpandResourceOwnerTable.c)
 *     CcCompleteAsyncReadWorker @ 0x140028770 (CcCompleteAsyncReadWorker.c)
 *     FsRtlUninitializeOplock @ 0x140029950 (FsRtlUninitializeOplock.c)
 *     MiDeleteEmptySubsections @ 0x140029CD4 (MiDeleteEmptySubsections.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14002A7E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14002B270 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     SepFreeTokenCapabilities @ 0x14002CEFC (SepFreeTokenCapabilities.c)
 *     EtwpApplyEventNameFilter @ 0x14002CF40 (EtwpApplyEventNameFilter.c)
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     IoFreeWorkItem @ 0x14002EE00 (IoFreeWorkItem.c)
 *     SepCaptureTokenSecurityOperations @ 0x14003023C (SepCaptureTokenSecurityOperations.c)
 *     SmHpBufferAlloc @ 0x140030354 (SmHpBufferAlloc.c)
 *     KeFreeXStateContext @ 0x140030D04 (KeFreeXStateContext.c)
 *     DestroyEventEntry @ 0x140030DF4 (DestroyEventEntry.c)
 *     IopLoadDriverImage @ 0x140031E34 (IopLoadDriverImage.c)
 *     MiStoreEvictPageFile @ 0x1400320B4 (MiStoreEvictPageFile.c)
 *     IopUnloadSafeCompletion @ 0x1400325E0 (IopUnloadSafeCompletion.c)
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     ExFreeSvmAsid @ 0x140033488 (ExFreeSvmAsid.c)
 *     MiDeprioritizeVad @ 0x140033E78 (MiDeprioritizeVad.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1400350F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400364A0 (RtlpAllowsLowBoxAccess.c)
 *     FsRtlInsertPerFileContextInternal @ 0x140036BB0 (FsRtlInsertPerFileContextInternal.c)
 *     PspRemoveProperty @ 0x140037664 (PspRemoveProperty.c)
 *     PspInsertProperty @ 0x140037728 (PspInsertProperty.c)
 *     SepCaptureHandles @ 0x140037860 (SepCaptureHandles.c)
 *     MiFreeCombinePool @ 0x140038D50 (MiFreeCombinePool.c)
 *     MiGetWorkingSetInfo @ 0x140039594 (MiGetWorkingSetInfo.c)
 *     IoAllocateDriverObjectExtension @ 0x14003A150 (IoAllocateDriverObjectExtension.c)
 *     IopFreeIrpExtension @ 0x14003AE54 (IopFreeIrpExtension.c)
 *     SmKmFreeMdlForLock @ 0x14003AEF0 (SmKmFreeMdlForLock.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14003AF20 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     SmArrayGrow @ 0x14003BA3C (SmArrayGrow.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14003BCE0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x14003C49C (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     SepExpandSingletonArrays @ 0x14003C4CC (SepExpandSingletonArrays.c)
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     RtlDeleteHashTable @ 0x14003C690 (RtlDeleteHashTable.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x14003CA78 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     PnpDeleteDeviceActionRequest @ 0x14003D738 (PnpDeleteDeviceActionRequest.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14003DE8C (SepAppendAceToTokenDefaultDacl.c)
 *     SepFreeResourceInfo @ 0x14003E044 (SepFreeResourceInfo.c)
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14003F300 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x14003F350 (ExpDeleteWorkerFactory.c)
 *     IopAllocateFileObjectExtension @ 0x1400478A0 (IopAllocateFileObjectExtension.c)
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 *     IopSetLockOperationProcess @ 0x14004F2B0 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     FsRtlpOplockCleanup @ 0x1400507C0 (FsRtlpOplockCleanup.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140051050 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14005327C (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053800 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140053C18 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     MiStoreFreeWriteSupport @ 0x140054EB0 (MiStoreFreeWriteSupport.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140055574 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140055E00 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14005C27C (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     MiCreateMdl @ 0x14005C370 (MiCreateMdl.c)
 *     MmFreeAccessPfnBuffer @ 0x14005F1B8 (MmFreeAccessPfnBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x14005F1F8 (PfFbBufferListInsertInFree.c)
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiFreeImageCfgContext @ 0x140061888 (MiFreeImageCfgContext.c)
 *     PfTFreeTraceDump @ 0x140061B90 (PfTFreeTraceDump.c)
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     MiDeleteWorkingSetList @ 0x140062C50 (MiDeleteWorkingSetList.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1400655D8 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140065EF4 (AuthzBasepDeleteSecurityAttribute.c)
 *     SepMandatorySubProcessToken @ 0x1400662F4 (SepMandatorySubProcessToken.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400665C4 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlInsertDynamicFunctionTable @ 0x140066B00 (RtlInsertDynamicFunctionTable.c)
 *     RtlIsUntrustedObject @ 0x140066F30 (RtlIsUntrustedObject.c)
 *     KsepPoolFreeNonPaged @ 0x14006D77C (KsepPoolFreeNonPaged.c)
 *     KsepPoolFreePaged @ 0x14006D8D8 (KsepPoolFreePaged.c)
 *     VfTargetDriversAdd @ 0x14006E474 (VfTargetDriversAdd.c)
 *     DbgUnicodeStringToAnsiString @ 0x14006FCD0 (DbgUnicodeStringToAnsiString.c)
 *     PopSetWatchdog @ 0x14006FDA8 (PopSetWatchdog.c)
 *     DbgLoadImageSymbolsUnicode @ 0x14007009C (DbgLoadImageSymbolsUnicode.c)
 *     EmpEvaluateTargetRule @ 0x1400703A0 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140070590 (EmpEvaluateNodeLink.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400717EC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140072528 (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x14007276C (PopCaptureReasonContext.c)
 *     ExGetSessionPoolTagInfo @ 0x14007329C (ExGetSessionPoolTagInfo.c)
 *     MiCombineWorkingSet @ 0x14007369C (MiCombineWorkingSet.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiAllocateCombineProto @ 0x140078CA0 (MiAllocateCombineProto.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiInitializeMdlPages @ 0x14007A868 (MiInitializeMdlPages.c)
 *     MiObtainMdlCharges @ 0x14007B0D0 (MiObtainMdlCharges.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14007E5E0 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiFindPageFileWriteCluster @ 0x14007E698 (MiFindPageFileWriteCluster.c)
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140080F24 (PnpDeviceCompletionRequestDestroy.c)
 *     InsertEventEntryInLookUpTable @ 0x140081DE4 (InsertEventEntryInLookUpTable.c)
 *     MiDeleteStaleCacheMaps @ 0x140082E10 (MiDeleteStaleCacheMaps.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140087DD0 (EtwpAdjustSiloTraceBuffers.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140089630 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepResetOperands @ 0x140089F50 (AuthzBasepResetOperands.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 *     ExpAddTagForBigPages @ 0x14008CCA0 (ExpAddTagForBigPages.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14008D660 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140090B30 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x140093620 (SeCaptureObjectTypeList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140093E50 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140094180 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiRemoveSecureEntry @ 0x140099290 (MiRemoveSecureEntry.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     CcInitializeVolumeCacheMap @ 0x1400AF740 (CcInitializeVolumeCacheMap.c)
 *     CcWriteBehind @ 0x1400AF884 (CcWriteBehind.c)
 *     MmProbeAndLockSelectedPages @ 0x1400B2BF0 (MmProbeAndLockSelectedPages.c)
 *     PfSnTraceGetLogEntry @ 0x1400B31C4 (PfSnTraceGetLogEntry.c)
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 *     PfSnGetFileInformation @ 0x1400B7690 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     IopAllocateIrpPrivate @ 0x1400ED9B0 (IopAllocateIrpPrivate.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x1400EE8E0 (SeSetLearningModeObjectInformation.c)
 *     IopFreeIrp @ 0x1400F11C0 (IopFreeIrp.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MmWaitForCacheManagerPrefetch @ 0x14010AFD0 (MmWaitForCacheManagerPrefetch.c)
 *     MiAllocateModWriterEntry @ 0x14010ED60 (MiAllocateModWriterEntry.c)
 *     PspReaper @ 0x14010EF10 (PspReaper.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IopDeleteFileObjectExtension @ 0x140114990 (IopDeleteFileObjectExtension.c)
 *     FsRtlUninitializeBaseMcb @ 0x1401150C0 (FsRtlUninitializeBaseMcb.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140115180 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140115698 (RtlpUpcaseUnicodeStringPrivate.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC (AuthzBasepCompareUnicodeStringOperands.c)
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     CcDeleteMbcb @ 0x14011992C (CcDeleteMbcb.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     CcScanLogHandleList @ 0x14011A018 (CcScanLogHandleList.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeVolumeCacheMap @ 0x14011AF14 (CcUninitializeVolumeCacheMap.c)
 *     CcDeallocateBcb @ 0x14011B160 (CcDeallocateBcb.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     EtwpAdjustTraceBuffers @ 0x14011D770 (EtwpAdjustTraceBuffers.c)
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011FD0C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmKmAllocateMdlForLock @ 0x140121DA8 (SmKmAllocateMdlForLock.c)
 *     WmipReceiveNotifications @ 0x1401223D4 (WmipReceiveNotifications.c)
 *     MmFreeContiguousMemory @ 0x140123200 (MmFreeContiguousMemory.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiExpandSystemCache @ 0x140126CDC (MiExpandSystemCache.c)
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14012B400 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x14012B810 (IopDereferenceVpbAndFree.c)
 *     IoMakeAssociatedIrpPriv @ 0x14012C03C (IoMakeAssociatedIrpPriv.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x14012DA68 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     MiDereferenceExtendInfo @ 0x14013109C (MiDereferenceExtendInfo.c)
 *     PpDevNodeRemoveFromTree @ 0x140131A0C (PpDevNodeRemoveFromTree.c)
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14013600C (PnpUnregisterPlugPlayNotification.c)
 *     PopUnregisterPowerSettingCallback @ 0x140136918 (PopUnregisterPowerSettingCallback.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140136960 (MiAllocatePfnRepurposeLogDispatch.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     PfpServiceMainThreadUnboost @ 0x1401383E0 (PfpServiceMainThreadUnboost.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14013C5D8 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     PopDereferenceWakeInfos @ 0x14013CBA4 (PopDereferenceWakeInfos.c)
 *     IopReplaceCompletionPort @ 0x14013D958 (IopReplaceCompletionPort.c)
 *     PfpPowerActionDpcRoutine @ 0x14013DB70 (PfpPowerActionDpcRoutine.c)
 *     MiEmptyAccessLogs @ 0x14013F820 (MiEmptyAccessLogs.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     SepDeleteSessionLowboxEntries @ 0x1401433DC (SepDeleteSessionLowboxEntries.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14014463C (MiFreePrivateFixupEntryForSystemImage.c)
 *     SepRmCallLsa @ 0x1401481D0 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x140148404 (SepRmDispatchDataToLsa.c)
 *     ExRegisterCallback @ 0x140148580 (ExRegisterCallback.c)
 *     VfTargetDriversRemove @ 0x14014885C (VfTargetDriversRemove.c)
 *     VfPoolDelayFreeIfPossible @ 0x140148998 (VfPoolDelayFreeIfPossible.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140148EB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     ExpFinalizeTimerDeletion @ 0x140149160 (ExpFinalizeTimerDeletion.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140149348 (LdrUnloadAlternateResourceModuleEx.c)
 *     MiSessionRemoveImage @ 0x140149B04 (MiSessionRemoveImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140149D98 (MiAddPrivateFixupEntryForSystemImage.c)
 *     IoWriteErrorLogEntry @ 0x140149FE0 (IoWriteErrorLogEntry.c)
 *     IopSessionChangeWorker @ 0x14014AAD0 (IopSessionChangeWorker.c)
 *     ExUnregisterCallback @ 0x14014AE00 (ExUnregisterCallback.c)
 *     KeDisconnectInterrupt @ 0x14014B958 (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x14014BA4C (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14014C4CC (KiIntSteerConnect.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14014D3C0 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyRelease @ 0x14014DBCC (ExpFastResourceLegacyRelease.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     PiDevCfgPopCopyKeyEntry @ 0x140150414 (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015051C (PiDevCfgPushCopyKeyEntry.c)
 *     RtlExpandHashTable @ 0x140150B90 (RtlExpandHashTable.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1401522A0 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaBinaryArrayRemove @ 0x14015252C (ExpSaBinaryArrayRemove.c)
 *     SPCallServerHandleGetCurrentHardwareID @ 0x140152A3C (SPCallServerHandleGetCurrentHardwareID.c)
 *     ExFreeAutoExpandPushLock @ 0x1401530B0 (ExFreeAutoExpandPushLock.c)
 *     KsepEvntLogShimsApplied @ 0x140153258 (KsepEvntLogShimsApplied.c)
 *     PnpBootDeviceWait @ 0x140153E58 (PnpBootDeviceWait.c)
 *     AdtpCleanupParameterAllocations @ 0x140155E10 (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x140155F00 (AdtpPackageParameters.c)
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140156B64 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401570CC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401572B0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140157530 (RtlpMuiRegLoadLicInformation.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     BvgaReleaseResources @ 0x140158EE0 (BvgaReleaseResources.c)
 *     IopIsBitlockerOn @ 0x1401595AC (IopIsBitlockerOn.c)
 *     BapdpProcessEtwEvents @ 0x14015964C (BapdpProcessEtwEvents.c)
 *     IopInitializeOfflineCrashDump @ 0x140159E68 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x140159F28 (SecureDump_Init.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14015A054 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x14015A094 (SecureDump_PrepareForInit.c)
 *     SecureDump_ReadRegistry @ 0x14015A1A8 (SecureDump_ReadRegistry.c)
 *     IopReadDumpRegistry @ 0x14015A28C (IopReadDumpRegistry.c)
 *     MiInitializeNumaRanges @ 0x14015A3AC (MiInitializeNumaRanges.c)
 *     MiZeroLargePageThread @ 0x14015C180 (MiZeroLargePageThread.c)
 *     MiDecrementHugeContext @ 0x14015D00C (MiDecrementHugeContext.c)
 *     FsFilterInit @ 0x14015EAC4 (FsFilterInit.c)
 *     PopFxCreateDeviceCommon @ 0x14015EDB8 (PopFxCreateDeviceCommon.c)
 *     PpmInstallNewIdleStates @ 0x14015F2A0 (PpmInstallNewIdleStates.c)
 *     PpmParkRegisterParking @ 0x14015FC70 (PpmParkRegisterParking.c)
 *     SepInitProcessAuditSd @ 0x1401627E4 (SepInitProcessAuditSd.c)
 *     SepBuildCapPolicyTable @ 0x14016292C (SepBuildCapPolicyTable.c)
 *     PnpFreeUnicodeStringList @ 0x140162E90 (PnpFreeUnicodeStringList.c)
 *     ExAllocateCacheAwarePushLock @ 0x140163210 (ExAllocateCacheAwarePushLock.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x1401633AC (EmpEvaluateUpdateRuleEvalState.c)
 *     EmpRuleUpdateWorkerThread @ 0x140163980 (EmpRuleUpdateWorkerThread.c)
 *     PopGetDope @ 0x140163F5C (PopGetDope.c)
 *     IopCleanupNotifications @ 0x140164310 (IopCleanupNotifications.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140164458 (LdrpSetAlternateResourceModuleHandle.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401661AC (IopGetPhysicalMemoryBlock.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x140167F80 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     MiStoreEvictThread @ 0x1401687C0 (MiStoreEvictThread.c)
 *     SmFpPreAllocate @ 0x140168C38 (SmFpPreAllocate.c)
 *     CcUnregisterExternalCache @ 0x1401DD8A0 (CcUnregisterExternalCache.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401DDB70 (CcMmLogLostDelayedWriteError.c)
 *     CmpFreeCallbackContext @ 0x1401DEC50 (CmpFreeCallbackContext.c)
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401DF718 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmLogMcUpdateStatus @ 0x1401DFC58 (CmLogMcUpdateStatus.c)
 *     DbgkPostModuleMessage @ 0x1401E1D28 (DbgkPostModuleMessage.c)
 *     EmpProviderDeregisterEntry @ 0x1401E29F0 (EmpProviderDeregisterEntry.c)
 *     FsFilterFreeCompletionStack @ 0x1401E40AC (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1401E4880 (FsRtlStackOverflowRead.c)
 *     HvlpDepositPages @ 0x1401E567C (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1401ECB60 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1401ECFCC (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1401ED018 (VslGetEtwDebugId.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401EE8B0 (BgkDisplayString.c)
 *     IoFillDumpHeader @ 0x1401F0144 (IoFillDumpHeader.c)
 *     IoFreeErrorLogEntry @ 0x1401F38F0 (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401F3950 (IoFreeSfioStreamIdentifier.c)
 *     IoRaiseInformationalHardError @ 0x1401F3E30 (IoRaiseInformationalHardError.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F4C88 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1401F4F90 (IopKeepAliveWorker.c)
 *     IopErrorLogDpc @ 0x1401F6520 (IopErrorLogDpc.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401F6618 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401F6B94 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopAllowRemoteDASD @ 0x1401F6E38 (IopAllowRemoteDASD.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401F7A10 (IoReleaseRemoveLockAndWaitEx.c)
 *     PipCreateNewDependencyEdge @ 0x1401F7B74 (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401F7C98 (PipFreeDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x1401F8330 (IoTranslateBusAddress.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401F86F0 (IopDereferencePassiveInterruptBlock.c)
 *     PiDevCfgQueryResolveValue @ 0x1401F9854 (PiDevCfgQueryResolveValue.c)
 *     KdDeregisterPowerHandler @ 0x1401FB640 (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1401FBF90 (KdSetDbgPrintBufferSize.c)
 *     KeDeregisterNmiCallback @ 0x1401FD710 (KeDeregisterNmiCallback.c)
 *     KeProcessorProfileControlArea @ 0x1401FD844 (KeProcessorProfileControlArea.c)
 *     KeDisableProfiling @ 0x140201CD8 (KeDisableProfiling.c)
 *     KeStartProfile @ 0x140201D7C (KeStartProfile.c)
 *     KeStopProfile @ 0x140201E90 (KeStopProfile.c)
 *     KsepCompletionSafeWrapper @ 0x140208380 (KsepCompletionSafeWrapper.c)
 *     KsepCacheHwIdFree @ 0x1402084C0 (KsepCacheHwIdFree.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 *     MiZeroPageFile @ 0x14020D160 (MiZeroPageFile.c)
 *     MiDeleteKernelStackNode @ 0x140211E9C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140211F64 (MiMakeIoRangePermanent.c)
 *     MiPfCompleteCoalescedIo @ 0x140213BC8 (MiPfCompleteCoalescedIo.c)
 *     MiFreeVadEvents @ 0x140214958 (MiFreeVadEvents.c)
 *     MiFlushComplete @ 0x140216300 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140216410 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendPagingFileMaximum @ 0x140219B30 (MiExtendPagingFileMaximum.c)
 *     MiAddRangeToPartitionTree @ 0x14021D2DC (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14021DF3C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiInsertPteTracker @ 0x140225958 (MiInsertPteTracker.c)
 *     MmEnumerateBadPages @ 0x140226910 (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x140229004 (PpmQueryPlatformStateResidency.c)
 *     PpmRemoveIdleStates @ 0x140229130 (PpmRemoveIdleStates.c)
 *     PpmUpdateIdleVeto @ 0x140229B4C (PpmUpdateIdleVeto.c)
 *     PopFxDestroyDeviceCommon @ 0x14022A954 (PopFxDestroyDeviceCommon.c)
 *     PopFxDestroyDeviceDpm @ 0x14022A988 (PopFxDestroyDeviceDpm.c)
 *     PopFxRegisterPluginEx @ 0x14022B7A0 (PopFxRegisterPluginEx.c)
 *     PpmClearSimulatedLoad @ 0x14022D354 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14022D688 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x14022DD1C (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x14022DE30 (PopUpdateWakeSourceWorker.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140232B38 (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmFireWmiEvent @ 0x1402344AC (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x140234540 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402368A4 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140236A80 (PpmEventTraceProcessorIdleAccounting.c)
 *     PspReadDfssConfigurationValues @ 0x140238704 (PspReadDfssConfigurationValues.c)
 *     PsSetCpuQuotaInformation @ 0x140238A68 (PsSetCpuQuotaInformation.c)
 *     PspTimerDelayWorkerRoutine @ 0x140239BE0 (PspTimerDelayWorkerRoutine.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14023A554 (PspIumAllocatePhysicalPages.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14023B1FC (DbgpRemoveDebugPrintCallback.c)
 *     RtlTraceDatabaseDestroy @ 0x140240470 (RtlTraceDatabaseDestroy.c)
 *     SeFreeCapturedObjectTypeList @ 0x140246860 (SeFreeCapturedObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x140247014 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402471D0 (SepVerifyDesktopAppxPackageName.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402474C4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140248040 (SepValidateAndCopyGlobalEntry.c)
 *     SepGetLearningModeObjectInformation @ 0x1402482D8 (SepGetLearningModeObjectInformation.c)
 *     SepRmCapPoolExpand @ 0x1402489F4 (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1402491D0 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140249864 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14024A28C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14024A97C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024AD84 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024B13C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14024BC90 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14024C4D8 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024D04C (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmKmStoreTerminateWorker @ 0x14024E070 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14024F4B0 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14024F5C0 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalPageError @ 0x14024F9EC (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x1402503E0 (VfAllocateDomainCommonBuffer.c)
 *     VmpRemoveMemoryRange @ 0x140252564 (VmpRemoveMemoryRange.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     EtwpCrimsonStackWalkApc @ 0x140252B70 (EtwpCrimsonStackWalkApc.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140255BD8 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402567B0 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140257188 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpCCSwapDeleteProcessor @ 0x1402573DC (EtwpCCSwapDeleteProcessor.c)
 *     ExpGetLookasideInformation @ 0x1402598CC (ExpGetLookasideInformation.c)
 *     NtDrawText @ 0x140259B3C (NtDrawText.c)
 *     ExFreeCacheAwarePushLock @ 0x14025B3B0 (ExFreeCacheAwarePushLock.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025BF64 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExDeleteWakeTimerInfo @ 0x14025CB50 (ExDeleteWakeTimerInfo.c)
 *     ExGetWakeTimerList @ 0x14025CC34 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14025D960 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14025E058 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14025E2A8 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14025E500 (ExpSvmDereferenceDevice.c)
 *     WheapFreeErrorRecord @ 0x14025FBFC (WheapFreeErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x14025FD34 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140260F88 (WheapSqmCollectWheaOscTelemetry.c)
 *     ApiSetReleaseSchema @ 0x140261344 (ApiSetReleaseSchema.c)
 *     AsiAddDataToSchema @ 0x140261660 (AsiAddDataToSchema.c)
 *     sub_140262394 @ 0x140262394 (sub_140262394.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140263604 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1402638F0 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140263C04 (AuthzBasepCompareFQBNOperands.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1402646C0 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140265628 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiWasFirmwareModified @ 0x140265E9C (BiWasFirmwareModified.c)
 *     BiLogFileOwnerProcess @ 0x140265F0C (BiLogFileOwnerProcess.c)
 *     NtReplacePartitionUnit @ 0x14026B1C0 (NtReplacePartitionUnit.c)
 *     _SafeReallocBlob @ 0x14026BC10 (_SafeReallocBlob.c)
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     IopFreePoDeviceNotifyListHead @ 0x14040A520 (IopFreePoDeviceNotifyListHead.c)
 *     PopGetHwConfigurationSignature @ 0x14040BD00 (PopGetHwConfigurationSignature.c)
 *     PopGetBitlockerKeyLocation @ 0x14040E124 (PopGetBitlockerKeyLocation.c)
 *     PfpScenCtxScenarioSet @ 0x14040EA40 (PfpScenCtxScenarioSet.c)
 *     BapdRecordFirmwareBootStats @ 0x14040ECB0 (BapdRecordFirmwareBootStats.c)
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     IoUnregisterShutdownNotification @ 0x140415880 (IoUnregisterShutdownNotification.c)
 *     PnprQuiesceWorker @ 0x1404185D0 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14041A258 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x14041AF60 (ExGetNextWakeTime.c)
 *     ExpWorkerHotAddProcessor @ 0x14041B120 (ExpWorkerHotAddProcessor.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14041B9C0 (WheapCreateTriageDumpFromPreviousSession.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 *     MiBuildNewCloneDescriptor @ 0x14041E1EC (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     SepCheckCapabilities @ 0x14041E774 (SepCheckCapabilities.c)
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     WbFreeWarbirdEncryptionSegment @ 0x14041FBAC (WbFreeWarbirdEncryptionSegment.c)
 *     PfTCreateTraceDump @ 0x140420A90 (PfTCreateTraceDump.c)
 *     MiCompressRelocations @ 0x140421340 (MiCompressRelocations.c)
 *     PnpFreeInterruptInformation @ 0x140422318 (PnpFreeInterruptInformation.c)
 *     RawCleanupVcb @ 0x140422344 (RawCleanupVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140422A10 (ExAllocateCacheAwareRundownProtection.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     SeValidateImageHeader @ 0x140423400 (SeValidateImageHeader.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     MiPrefetchControlArea @ 0x140423A90 (MiPrefetchControlArea.c)
 *     SeReleaseImageValidationContext @ 0x140423C04 (SeReleaseImageValidationContext.c)
 *     RtlpCombineAcls @ 0x140427E70 (RtlpCombineAcls.c)
 *     ExpAllocateHandleTable @ 0x14042BEEC (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14042C158 (ExpAllocateTablePagedPoolNoZero.c)
 *     ObpInsertHandleCount @ 0x14042C418 (ObpInsertHandleCount.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x14042CF44 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x14042D068 (CmpDoTransWriteLogRecord.c)
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpTransSearchAddTrans @ 0x14042D944 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14042DCA4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     CmpLogCheckpoint @ 0x14042EAB0 (CmpLogCheckpoint.c)
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x14042F0D4 (CmpStartCLFSLog.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 *     RtlpFreeAtom @ 0x14043136C (RtlpFreeAtom.c)
 *     FsRtlNotifyFilterReportChange @ 0x140431400 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140431F00 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x140432250 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCleanup @ 0x1404327C0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCompleteIrp @ 0x140432850 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404329C0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140432CEC (FsRtlNotifyCleanupOneEntry.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x140432F18 (ExpFreeTablePagedPool.c)
 *     FsRtlpAllocateOplock @ 0x140433450 (FsRtlpAllocateOplock.c)
 *     WmipDeleteMethod @ 0x140433520 (WmipDeleteMethod.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x140435B54 (EtwpFreeTraceBufferPool.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     PspFreeRateControl @ 0x1404371D4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140437220 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404372D4 (PspAddSchedulingGroupToJobChain.c)
 *     ExpWnfDeleteProcessContext @ 0x140438158 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1404383E8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfFreeScopeInstance @ 0x140438760 (ExpWnfFreeScopeInstance.c)
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteNameInstance @ 0x140438C24 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140438F68 (ExpWnfDeleteStateData.c)
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404394A0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     HvpMapHiveImageFromFile @ 0x14043B2E8 (HvpMapHiveImageFromFile.c)
 *     CmpClearKeyAccessBits @ 0x14043B7E0 (CmpClearKeyAccessBits.c)
 *     NtUnlockFile @ 0x14043BA90 (NtUnlockFile.c)
 *     WmipFreeTraceDeviceList @ 0x14043C0C0 (WmipFreeTraceDeviceList.c)
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 *     AlpcpCaptureMessageData @ 0x14043D038 (AlpcpCaptureMessageData.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     PfSnArrayGrow @ 0x14043E5A8 (PfSnArrayGrow.c)
 *     ExGetPoolTagInfo @ 0x14043E8C8 (ExGetPoolTagInfo.c)
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     EtwpCreateUmReplyObject @ 0x14043FEB4 (EtwpCreateUmReplyObject.c)
 *     NtFlushBuffersFileEx @ 0x1404401B4 (NtFlushBuffersFileEx.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     ExHandleSPCall2 @ 0x140440AC4 (ExHandleSPCall2.c)
 *     WbReAlloc @ 0x140441428 (WbReAlloc.c)
 *     ObpDeleteDirectoryEntry @ 0x140441E08 (ObpDeleteDirectoryEntry.c)
 *     FsRtlTeardownPerFileContexts @ 0x140443370 (FsRtlTeardownPerFileContexts.c)
 *     NtCloseObjectAuditAlarm @ 0x140443584 (NtCloseObjectAuditAlarm.c)
 *     AlpcpAllocateMessageFunction @ 0x1404437D0 (AlpcpAllocateMessageFunction.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140443CEC (RtlpProcessIFEOKeyFilter.c)
 *     SeTokenIsElevated @ 0x140444250 (SeTokenIsElevated.c)
 *     _RegRtlEnumValue @ 0x140445A14 (_RegRtlEnumValue.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404462B0 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x14044655C (PipFindDeviceOverrideEntry.c)
 *     NtQueryWnfStateNameInformation @ 0x1404476C4 (NtQueryWnfStateNameInformation.c)
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     PiDqSerializationAlloc @ 0x140449420 (PiDqSerializationAlloc.c)
 *     PspReadIFEOPerfOptions @ 0x1404495D0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1404497B8 (RtlQueryImageFileKeyOption.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140449A9C (PiDmGetReferencedObjectFromProperty.c)
 *     SeDeassignSecurity @ 0x140449CF0 (SeDeassignSecurity.c)
 *     PfSnGetCompletedTrace @ 0x140449F58 (PfSnGetCompletedTrace.c)
 *     ConstraintEval @ 0x14044A89C (ConstraintEval.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14044AC80 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14044ADC8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x14044B23C (SepCaptureInt64Array.c)
 *     RtlAcquirePrivilege @ 0x14044BAB8 (RtlAcquirePrivilege.c)
 *     IopDeleteDevice @ 0x14044C140 (IopDeleteDevice.c)
 *     IopDestroyDeviceNode @ 0x14044C1A0 (IopDestroyDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14044C3A0 (IopUncacheInterfaceInformation.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14044C490 (PiBuildDeviceNodeInstancePath.c)
 *     PnpFreeDeviceInstancePath @ 0x14044C5B0 (PnpFreeDeviceInstancePath.c)
 *     IopCallDriverReinitializationRoutines @ 0x14044DAC0 (IopCallDriverReinitializationRoutines.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14044E0A0 (IopSetDeviceSecurityDescriptor.c)
 *     EtwpFreeGuidEntry @ 0x14044E1FC (EtwpFreeGuidEntry.c)
 *     PnpQueryBusInformation @ 0x14044E24C (PnpQueryBusInformation.c)
 *     PnpBusTypeGuidGetIndex @ 0x14044E318 (PnpBusTypeGuidGetIndex.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14044E6F4 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14044E76C (ObpMarkDirectoryObjectsTemporary.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14044EE88 (PiPnpRtlGetFilteredDeviceList.c)
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     IopDoDeferredSetInterfaceState @ 0x14044FA88 (IopDoDeferredSetInterfaceState.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 *     MiCompressImportList @ 0x140450610 (MiCompressImportList.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 *     HvFreeUnreconciledData @ 0x140450E24 (HvFreeUnreconciledData.c)
 *     WbProcessModuleUnload @ 0x14045131C (WbProcessModuleUnload.c)
 *     IopTrackLink @ 0x1404525A0 (IopTrackLink.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140453108 (PipGetRegistrySecurityWithFallback.c)
 *     SdbReleaseDatabase @ 0x1404533F0 (SdbReleaseDatabase.c)
 *     SdbCloseDatabaseRead @ 0x140453518 (SdbCloseDatabaseRead.c)
 *     PopDiagTraceControlCallback @ 0x1404537A0 (PopDiagTraceControlCallback.c)
 *     PopFxTraceDeviceRegistration @ 0x140453DB0 (PopFxTraceDeviceRegistration.c)
 *     PfSnOperationProcess @ 0x140454168 (PfSnOperationProcess.c)
 *     SepUpdateLogonSessionTrack @ 0x140454C24 (SepUpdateLogonSessionTrack.c)
 *     RtlReleasePrivilege @ 0x140455794 (RtlReleasePrivilege.c)
 *     SepCreateLogonSessionTrack @ 0x14045672C (SepCreateLogonSessionTrack.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140456C14 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     PiDeferSetInterfaceState @ 0x1404572B4 (PiDeferSetInterfaceState.c)
 *     WmipSecurityMethod @ 0x1404575E0 (WmipSecurityMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140457688 (ObAssignObjectSecurityDescriptor.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140457B18 (PiUEventFreeClientRegistrationContext.c)
 *     IopQueryLegacyBusInformation @ 0x140457CCC (IopQueryLegacyBusInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404584F8 (ExpWnfCheckCrossScopeAccess.c)
 *     ObpSetDeviceMap @ 0x140458C1C (ObpSetDeviceMap.c)
 *     ExpGenuinePolicyPostProcess @ 0x140459860 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x140459A5C (ExpOsProductCacheProviderHelper.c)
 *     SepImageVerificationCallbackWorker @ 0x140459EC0 (SepImageVerificationCallbackWorker.c)
 *     PiDqGrowPropertyArray @ 0x14045ACD0 (PiDqGrowPropertyArray.c)
 *     NtNotifyChangeSession @ 0x14045AEA4 (NtNotifyChangeSession.c)
 *     ObpDeleteSymbolicLink @ 0x14045B2C0 (ObpDeleteSymbolicLink.c)
 *     sub_14045B538 @ 0x14045B538 (sub_14045B538.c)
 *     WbProcessStartup @ 0x14045B80C (WbProcessStartup.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x14045BB88 (ExpHwidEnsurePropertyBufferLength.c)
 *     EtwpReceiveReplyDataBlock @ 0x14045BE80 (EtwpReceiveReplyDataBlock.c)
 *     CmpDelayFreeRMWorker @ 0x14045BFA0 (CmpDelayFreeRMWorker.c)
 *     sub_14045C21C @ 0x14045C21C (sub_14045C21C.c)
 *     PiDqFreeGenericTableEntry @ 0x14045C260 (PiDqFreeGenericTableEntry.c)
 *     PerfDiagpProxyWorker @ 0x14045C280 (PerfDiagpProxyWorker.c)
 *     ExpWnfRegisterPermanentName @ 0x14045CAAC (ExpWnfRegisterPermanentName.c)
 *     sub_14045CBD0 @ 0x14045CBD0 (sub_14045CBD0.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x14045CC90 (ExpHwidBiosIfGetFirmwareTable.c)
 *     MiCreateRotateView @ 0x14045D458 (MiCreateRotateView.c)
 *     FsRtlNotifyUninitializeSync @ 0x14045D5C0 (FsRtlNotifyUninitializeSync.c)
 *     PopPowerRequestFree @ 0x14045D6B0 (PopPowerRequestFree.c)
 *     PopDiagTraceThermalRequest @ 0x14045D940 (PopDiagTraceThermalRequest.c)
 *     EtwpGenerateFileName @ 0x14045E0F4 (EtwpGenerateFileName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     PoDiagFreeUsermodeStack @ 0x14045E2C4 (PoDiagFreeUsermodeStack.c)
 *     sub_14045E300 @ 0x14045E300 (sub_14045E300.c)
 *     CmpDeleteLightWeightTransaction @ 0x14045E730 (CmpDeleteLightWeightTransaction.c)
 *     PoDiagCaptureUsermodeStack @ 0x14045EBA0 (PoDiagCaptureUsermodeStack.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14045ED80 (PfSnTracingStateExWorkerRoutine.c)
 *     PiPnpFreePdoDeviceList @ 0x14045F0F4 (PiPnpFreePdoDeviceList.c)
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14045FAB8 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwIrpStartCreate @ 0x14045FCD4 (PiSwIrpStartCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1404602E0 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PiSwBusRelationAdd @ 0x140460394 (PiSwBusRelationAdd.c)
 *     PnpCopyDevPropertyArray @ 0x1404604F4 (PnpCopyDevPropertyArray.c)
 *     PiSwIrpInterfaceRegister @ 0x140460F78 (PiSwIrpInterfaceRegister.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404612DC (PiSwDeviceInterfaceSetState.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140461490 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140461664 (SepDereferenceCachedHandlesEntry.c)
 *     SepSetTokenCachedHandles @ 0x140461CB4 (SepSetTokenCachedHandles.c)
 *     SepGetCachedHandlesEntry @ 0x140461E70 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 *     SepQueryNameString @ 0x1404626BC (SepQueryNameString.c)
 *     sub_140462878 @ 0x140462878 (sub_140462878.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14046291C (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x140462B10 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     IoVolumeDeviceToDosName @ 0x140462E40 (IoVolumeDeviceToDosName.c)
 *     ExpHwidProcessInterface @ 0x1404631DC (ExpHwidProcessInterface.c)
 *     PfpPrefetchRequest @ 0x1404634E8 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1404636DC (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x140464084 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedDeref @ 0x1404643F8 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchVolumesCleanup @ 0x140464524 (PfpPrefetchVolumesCleanup.c)
 *     PiUEventProcessEventWorker @ 0x1404647D0 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140464910 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventFreeEventEntry @ 0x1404649CC (PiUEventFreeEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140464A2C (PiUEventProcessBroadcastNotifications.c)
 *     PfSnAsyncPrefetchWorker @ 0x140464FF0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnAsyncContextCleanup @ 0x140465338 (PfSnAsyncContextCleanup.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140465F50 (PfSnOpenVolumesForPrefetch.c)
 *     PiUEventBroadcastEventWorker @ 0x140469170 (PiUEventBroadcastEventWorker.c)
 *     NtCreatePrivateNamespace @ 0x1404692F4 (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140469540 (ObpVerifyCreatorAccessCheck.c)
 *     NtOpenPrivateNamespace @ 0x140469798 (NtOpenPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404699E4 (ObpCaptureBoundaryDescriptor.c)
 *     SepExpandDynamic @ 0x14046A140 (SepExpandDynamic.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046A39C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046A60C (NtOpenObjectAuditAlarm.c)
 *     NtSetSecurityObject @ 0x14046AB40 (NtSetSecurityObject.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x14046C3CC (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046C574 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14046C97C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     SeCaptureAcl @ 0x14046E928 (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x14046EA50 (SeReleaseAcl.c)
 *     SepCreateClaimAttributes @ 0x14046F3A8 (SepCreateClaimAttributes.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046FF24 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x1404700B4 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140470170 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140471664 (SeReleaseSid.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspQueryRateControlHistory @ 0x140479030 (PspQueryRateControlHistory.c)
 *     AlpcAddHandleTableEntry @ 0x14047A19C (AlpcAddHandleTableEntry.c)
 *     NtQueryDirectoryObject @ 0x14047C040 (NtQueryDirectoryObject.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     AlpcpDestroyBlob @ 0x14047EE40 (AlpcpDestroyBlob.c)
 *     AlpcMessageDestroyProcedure @ 0x14047EF00 (AlpcMessageDestroyProcedure.c)
 *     BuildQueryDirectoryIrp @ 0x14047F470 (BuildQueryDirectoryIrp.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14047FBFC (PiControlMakeUserModeCallersCopy.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwpDeleteRegistrationObject @ 0x140480960 (EtwpDeleteRegistrationObject.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14048253C (EtwpReleaseProviderTraitsReference.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     PiCMGetObjectProperty @ 0x140482E3C (PiCMGetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140483940 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpRegQueryValueIndirect @ 0x140484BF0 (_PnpRegQueryValueIndirect.c)
 *     PiPnpRtlObjectActionCallback @ 0x140484FD0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140486114 (PiDmObjectUpdateCachedObjectProperty.c)
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 *     PiDqPnPGetObjectProperty @ 0x140487420 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 *     PnpGetObjectProperty @ 0x140487C44 (PnpGetObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14048873C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140488B58 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140488DA0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x140488EF0 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventRelease @ 0x140489038 (PiPnpRtlObjectEventRelease.c)
 *     DrvDbLoadDatabaseNode @ 0x140489400 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x14048976C (_RegRtlCreateTreeTransacted.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x140489C64 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PiCMGetRegistryProperty @ 0x14048A5E0 (PiCMGetRegistryProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14048C05C (FsRtlPTeardownPerFileObjectContexts.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 *     CmpDelayedDerefKeys @ 0x14048D3E4 (CmpDelayedDerefKeys.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14048FD04 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpAllocatePostBlock @ 0x140491DB4 (CmpAllocatePostBlock.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x140493A2C (MiCreateDataFileMap.c)
 *     MiBuildImageControlArea @ 0x1404940B8 (MiBuildImageControlArea.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     RtlCreateRvaList @ 0x140497F7C (RtlCreateRvaList.c)
 *     VmProcessExit @ 0x140498B54 (VmProcessExit.c)
 *     EtwExitProcess @ 0x140498D0C (EtwExitProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 *     NtSetInformationVirtualMemory @ 0x14049A7B0 (NtSetInformationVirtualMemory.c)
 *     PspInitializeFullProcessImageName @ 0x14049C5B4 (PspInitializeFullProcessImageName.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14049D9A8 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14049DA88 (SepAdtTokenRightAdjusted.c)
 *     MiAllocateVad @ 0x14049E798 (MiAllocateVad.c)
 *     PspReadIFEOMitigationOptions @ 0x1404A0D20 (PspReadIFEOMitigationOptions.c)
 *     SepAddLuidToIndexEntry @ 0x1404A1810 (SepAddLuidToIndexEntry.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A1A64 (CmpCheckWrpKeyAccess.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x1404A5BB4 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x1404A5C6C (PnpCompleteDeviceEvent.c)
 *     PiUEventCacheObjectProperties @ 0x1404A6224 (PiUEventCacheObjectProperties.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404A6744 (PiUEventNotifyTargetDeviceChange.c)
 *     PnpDereferenceNotify @ 0x1404A6E8C (PnpDereferenceNotify.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404A6F28 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     RtlpAllocateAtom @ 0x1404A7C88 (RtlpAllocateAtom.c)
 *     NtQueryLicenseValue @ 0x1404A7D10 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     SdbInitDatabaseInMemory @ 0x1404AF9F8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1404AFAE0 (SdbpOpenDatabaseInMemory.c)
 *     EtwpProcessThreadImageRundown @ 0x1404B01BC (EtwpProcessThreadImageRundown.c)
 *     EtwpTraceProcessRundown @ 0x1404B06C4 (EtwpTraceProcessRundown.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     PnpPrepareDriverLoading @ 0x1404B3CA8 (PnpPrepareDriverLoading.c)
 *     PpCheckInDriverDatabase @ 0x1404B3D84 (PpCheckInDriverDatabase.c)
 *     AslFileMappingDelete @ 0x1404B42DC (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x1404B4330 (SdbpReleaseSearchDBContext.c)
 *     AslStringDuplicate @ 0x1404B523C (AslStringDuplicate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1404B5C40 (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x1404B5D20 (SdbpCreateSearchDBContext.c)
 *     PiUpdateDriverDBCache @ 0x1404B6304 (PiUpdateDriverDBCache.c)
 *     MiConstructLoaderEntry @ 0x1404B65FC (MiConstructLoaderEntry.c)
 *     HvStoreModifiedData @ 0x1404B7370 (HvStoreModifiedData.c)
 *     HvFreeHivePartial @ 0x1404B7EDC (HvFreeHivePartial.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryRelease @ 0x1404B8DE0 (PiDqQueryRelease.c)
 *     PiDqTraceQueryCreate @ 0x1404B8E84 (PiDqTraceQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404B95DC (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1404B993C (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1404B997C (PiDqActionDataFree.c)
 *     PnpFreeDevPropertyArray @ 0x1404B9DD0 (PnpFreeDevPropertyArray.c)
 *     PnpFreeDevProperty @ 0x1404B9E2C (PnpFreeDevProperty.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404BE304 (PiDqOpenUserObjectRegKey.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1404BE590 (PiDqGetRelativeObjectRegPath.c)
 *     WmipQueryAllData @ 0x1404BE8F4 (WmipQueryAllData.c)
 *     PnpConcatPWSTR @ 0x1404BEFD4 (PnpConcatPWSTR.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1404C5030 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x1404C5114 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1404C598C (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1404C5A80 (PopFilterCapabilities.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404C5C00 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1404C5C84 (IoGetLegacyVetoList.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404C633C (PopDiagTracePowerRequestCreate.c)
 *     PopMarshalSettingValues @ 0x1404C7D08 (PopMarshalSettingValues.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x1404C8910 (MiCreateVadEventBitmap.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     EtwTiLogQueueApcThread @ 0x1404C9900 (EtwTiLogQueueApcThread.c)
 *     MiInSwapStoreContextDereference @ 0x1404C9E98 (MiInSwapStoreContextDereference.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404CA018 (MiFreeWorkingSetSwapContext.c)
 *     CmpRecordUnloadEventForHive @ 0x1404CA910 (CmpRecordUnloadEventForHive.c)
 *     CmUnloadKey @ 0x1404CB114 (CmUnloadKey.c)
 *     CmpFlushNotify @ 0x1404CB670 (CmpFlushNotify.c)
 *     CmRmFinalizeRecovery @ 0x1404CBACC (CmRmFinalizeRecovery.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmpWorkerEngineWorker @ 0x1404CC4B0 (CmpWorkerEngineWorker.c)
 *     CmpDeleteKcbCache @ 0x1404CC744 (CmpDeleteKcbCache.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1404CD710 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpFreePostBlock @ 0x1404CE0B0 (CmpFreePostBlock.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpMarkIndexDirty @ 0x1404D114C (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D1F10 (CmpRemoveSubKeyFromList.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpFree @ 0x1404D28F0 (CmpFree.c)
 *     HvFreeDirtyData @ 0x1404D3C28 (HvFreeDirtyData.c)
 *     HvWriteLogFile @ 0x1404D3CF0 (HvWriteLogFile.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmpNameFromAttributes @ 0x1404D5588 (CmpNameFromAttributes.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1404D6800 (CmpInitHiveFromFile.c)
 *     CmpDoFileWrite @ 0x1404D76CC (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404D809C (CmpQueryFileSecurityDescriptor.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x1404D9704 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     PiDeviceRegistration @ 0x1404D9C6C (PiDeviceRegistration.c)
 *     PiQueryResourceRequirements @ 0x1404DA4E0 (PiQueryResourceRequirements.c)
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404DBF74 (PnpCheckDeviceIdsChanged.c)
 *     PnpQueryDeviceText @ 0x1404DC194 (PnpQueryDeviceText.c)
 *     PnpGetDeviceLocationStrings @ 0x1404DC26C (PnpGetDeviceLocationStrings.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1404DDC40 (PnpQueryID.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404DE560 (PpForEachDeviceInstanceDriver.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404DF1FC (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1404DF680 (PiDmCacheDataFree.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DFC1C (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E141C (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404E1878 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404E1AF0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404E2728 (_CmOpenCommonClassRegKeyWorker.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E2D2C (PnpCallDriverQueryServiceHelper.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404E34FC (PiCMGetDeviceInterfaceList.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E3894 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E47B4 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     sub_1404E4FF0 @ 0x1404E4FF0 (sub_1404E4FF0.c)
 *     ExpHwidProcessDevice @ 0x1404E5170 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404E52A4 (ExpHwidAppendDeviceInfoBlock.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404E682C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1404E6AE8 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiCMGetObjectList @ 0x1404E833C (PiCMGetObjectList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     ObfDereferenceDeviceMap @ 0x1404EC890 (ObfDereferenceDeviceMap.c)
 *     IoQueryFileDosDeviceName @ 0x1404ECFA0 (IoQueryFileDosDeviceName.c)
 *     EtwpQueryProcessCommandLine @ 0x1404ED5D4 (EtwpQueryProcessCommandLine.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 *     ExpWnfWriteStateData @ 0x1404EE2D4 (ExpWnfWriteStateData.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
 *     SepSetTokenPackage @ 0x1404F1A70 (SepSetTokenPackage.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1404F3000 (EtwpGetGuidSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404F3A00 (IopGetLegacyVetoListDrivers.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404F3C20 (ObSetSecurityDescriptorInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1404F3F60 (ObpFreeObjectNameBuffer.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     ObReleaseObjectSecurity @ 0x1404F4870 (ObReleaseObjectSecurity.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1404F49F0 (ObpGetObjectSecurity.c)
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x1404F5B0C (PspDereferenceQuotaBlock.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpAssignSecurity @ 0x1404F63F4 (ObpAssignSecurity.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404F65AC (EtwpFreeSecurityDescriptor.c)
 *     AlpcpFreeMessageFunction @ 0x1404F7000 (AlpcpFreeMessageFunction.c)
 *     NtQuerySecurityAttributesToken @ 0x1404F7910 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureUnicodeStringArray @ 0x1404F7B70 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x1404F7E70 (SeCaptureUnicodeStringStructures.c)
 *     PspThreadDelete @ 0x1404F7FA0 (PspThreadDelete.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1404F93D8 (MiSnapThunk.c)
 *     EtwpEnumerateAddressSpace @ 0x1404FA9C0 (EtwpEnumerateAddressSpace.c)
 *     IopQueryNameInternal @ 0x1404FBBC0 (IopQueryNameInternal.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     PfpRpFileKeyUpdate @ 0x140502050 (PfpRpFileKeyUpdate.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 *     CmpQueryKeyValueData @ 0x140503410 (CmpQueryKeyValueData.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     SeDefaultObjectMethod @ 0x14050E3A0 (SeDefaultObjectMethod.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 *     SepSetTokenTrust @ 0x140511010 (SepSetTokenTrust.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiCopyToCfgBitMap @ 0x1405145B0 (MiCopyToCfgBitMap.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140516F18 (AlpcpCaptureHandleAttributeInternal.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     SepTokenDeleteMethod @ 0x14051E5E0 (SepTokenDeleteMethod.c)
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     PfpPfnPrioRequest @ 0x1405206B0 (PfpPfnPrioRequest.c)
 *     ObpFreeObject @ 0x140520A70 (ObpFreeObject.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140520D70 (PfpCopyUserPfnPrioRequest.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140526170 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 *     NtRemoveIoCompletionEx @ 0x140527090 (NtRemoveIoCompletionEx.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     IopFreeMiniCompletionPacket @ 0x140527A70 (IopFreeMiniCompletionPacket.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     ObpCaptureObjectName @ 0x14052E190 (ObpCaptureObjectName.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 *     WbHeapExecuteReturn @ 0x14053BFD0 (WbHeapExecuteReturn.c)
 *     WbSetTrapFrame @ 0x14053C120 (WbSetTrapFrame.c)
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 *     sub_14053C820 @ 0x14053C820 (sub_14053C820.c)
 *     MmPrefetchPagesEx @ 0x14053D370 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14053D5DC (MmPrefetchForCacheManager.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14053D960 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14053DA20 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchHeader @ 0x14053E398 (PfSnCleanupPrefetchHeader.c)
 *     PfpReadSupportCleanup @ 0x14053E940 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14053E99C (PfpFileBuildReadSupport.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     KeRundownApcQueues @ 0x140540148 (KeRundownApcQueues.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspDeleteCreateProcessContext @ 0x14054168C (PspDeleteCreateProcessContext.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140542880 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x140542B00 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcConnectionDestroyProcedure @ 0x140543EC0 (AlpcConnectionDestroyProcedure.c)
 *     PspCaptureUserProcessParameters @ 0x1405464D4 (PspCaptureUserProcessParameters.c)
 *     WbCreateHeapExecutedBlock @ 0x1405481A0 (WbCreateHeapExecutedBlock.c)
 *     sub_140548560 @ 0x140548560 (sub_140548560.c)
 *     sub_140548B04 @ 0x140548B04 (sub_140548B04.c)
 *     WbHashData @ 0x140548BA0 (WbHashData.c)
 *     WbFreeMemoryBlock @ 0x140548FA4 (WbFreeMemoryBlock.c)
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 *     WbGetInitializedEncryptionSegment @ 0x140549988 (WbGetInitializedEncryptionSegment.c)
 *     WbValidateEncryptionSegmentArguments @ 0x140549CAC (WbValidateEncryptionSegmentArguments.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     CcUnpinData @ 0x14054B080 (CcUnpinData.c)
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14054C0D4 (MmLinkJobProcess.c)
 *     PspJobIoRateControlDisable @ 0x14054CB14 (PspJobIoRateControlDisable.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x14054E5D0 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14054FCD8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x14054FF60 (EtwpRealtimeCreateLogfile.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x140551AE8 (EtwpCaptureString.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpEnableTrace @ 0x1405524C8 (EtwpEnableTrace.c)
 *     EtwpAddDataSource @ 0x140553948 (EtwpAddDataSource.c)
 *     EtwpReleaseQueueEntry @ 0x140553D7C (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140553DFC (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140554514 (EtwpUpdateFilterData.c)
 *     EtwpAllocGuidEntry @ 0x1405549DC (EtwpAllocGuidEntry.c)
 *     WmipAddProviderIdToPIList @ 0x1405551A0 (WmipAddProviderIdToPIList.c)
 *     WmipCreateGuidObject @ 0x140555430 (WmipCreateGuidObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x14055561C (WmipGetGuidSecurityDescriptor.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     PipCheckForDenyExecute @ 0x14055624C (PipCheckForDenyExecute.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x140556854 (RtlpAllocDeallocQueryBuffer.c)
 *     ExpCheckPortableOperatingSystem @ 0x1405578EC (ExpCheckPortableOperatingSystem.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x1405585E8 (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x140558818 (EtwpCreateNtFileName.c)
 *     PiCMGetDeviceIdList @ 0x140558CB8 (PiCMGetDeviceIdList.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140559660 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopGetRootDevices @ 0x14055973C (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessAssignResources @ 0x140559D58 (PnpProcessAssignResources.c)
 *     IopPnPDispatch @ 0x14055A4F0 (IopPnPDispatch.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x14055B3C0 (PiGetDeviceRegProperty.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14055B65C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x14055B814 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14055BA24 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14055BDB4 (PnpGetDeviceResourcesFromRegistry.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     IoWMISystemControl @ 0x14055C374 (IoWMISystemControl.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14055C888 (ExpGetSystemFirmwareTableInformation.c)
 *     WmipGetRegistryHideMachine @ 0x14055CB4C (WmipGetRegistryHideMachine.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14055D770 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     ObpParseSymbolicLinkEx @ 0x1405604C0 (ObpParseSymbolicLinkEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     PfpRpControlRequest @ 0x140561B04 (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x140561C3C (PfpRpControlRequestCopy.c)
 *     NtSetTimerResolution @ 0x140561E44 (NtSetTimerResolution.c)
 *     PfpRpCHashDeleteEntries @ 0x140562254 (PfpRpCHashDeleteEntries.c)
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 *     PfpRpCHashAddEntries @ 0x140563AC0 (PfpRpCHashAddEntries.c)
 *     PfProcessCreateNotification @ 0x140563D18 (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x140563DB0 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x140564110 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x1405643EC (PfSnBeginScenario.c)
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 *     PfSnEndTrace @ 0x14056637C (PfSnEndTrace.c)
 *     PfSnCleanupTrace @ 0x1405665C4 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x140566710 (PfSnBuildDumpFromTrace.c)
 *     PfSnPrefetchScenario @ 0x140567410 (PfSnPrefetchScenario.c)
 *     SmStoreSetProcessVaRanges @ 0x140568258 (SmStoreSetProcessVaRanges.c)
 *     NtGetMUIRegistryInfo @ 0x140568580 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x1405692A8 (MUIInitializeResourceLock.c)
 *     IoQuerySystemDeviceName @ 0x14056938C (IoQuerySystemDeviceName.c)
 *     SiGetSystemDeviceName @ 0x14056951C (SiGetSystemDeviceName.c)
 *     SiGetSystemPartition @ 0x140569620 (SiGetSystemPartition.c)
 *     SiGetFirmwareBootDeviceName @ 0x140569680 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14056988C (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x140569B70 (SiIsWinPEBoot.c)
 *     SiGetRegistryValue @ 0x140569BDC (SiGetRegistryValue.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     CmpCheckAdminAccess @ 0x14056ADE8 (CmpCheckAdminAccess.c)
 *     CmpBuildAdminInformation @ 0x14056AEC0 (CmpBuildAdminInformation.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14056B998 (CmpUndoDeleteKeyForTrans.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14056BBEC (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     AlpcpFreeCompletionList @ 0x14056C968 (AlpcpFreeCompletionList.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14056CC30 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14056CE48 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056CFA4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PipRemoveDevicesInRelationList @ 0x14056D420 (PipRemoveDevicesInRelationList.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x14056D5EC (PiSwBusRelationRemove.c)
 *     PiSwPdoAssociationFree @ 0x14056D714 (PiSwPdoAssociationFree.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14056D958 (PnpQueuePendingSurpriseRemoval.c)
 *     PiSwDeviceFree @ 0x14056DDEC (PiSwDeviceFree.c)
 *     PiSwPnPInfoFree @ 0x14056DE7C (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x14056DEE8 (PiSwInstanceInfoFree.c)
 *     CMFFreeFn @ 0x14056E280 (CMFFreeFn.c)
 *     PiSwFreeGenericTableEntry @ 0x14056E290 (PiSwFreeGenericTableEntry.c)
 *     PnpDisableDeviceInterfaces @ 0x14056E2A4 (PnpDisableDeviceInterfaces.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 *     IopFreeRelationList @ 0x1405702D8 (IopFreeRelationList.c)
 *     PopFxFreeUniqueId @ 0x140570920 (PopFxFreeUniqueId.c)
 *     PiSwStopDestroy @ 0x140570B8C (PiSwStopDestroy.c)
 *     IoVolumeDeviceToGuid @ 0x140570E10 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140570FF0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoRegisterPlugPlayNotification @ 0x140571300 (IoRegisterPlugPlayNotification.c)
 *     MmFreeMappingAddress @ 0x1405727F0 (MmFreeMappingAddress.c)
 *     MmAllocateMappingAddress @ 0x1405728D0 (MmAllocateMappingAddress.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140572E74 (PiCMGetRelatedDeviceInstance.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140573C38 (CmpCommitDeleteValueKeyUoW.c)
 *     IoCreateSystemThread @ 0x140573E70 (IoCreateSystemThread.c)
 *     IopThreadStart @ 0x140574360 (IopThreadStart.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405746C4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x140574884 (PiSwUpdateArrayProperties.c)
 *     ExpWnfPopulateStateData @ 0x14057499C (ExpWnfPopulateStateData.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 *     FsRtlDeleteTunnelCache @ 0x140575BD0 (FsRtlDeleteTunnelCache.c)
 *     PiSwDeviceDereference @ 0x140576020 (PiSwDeviceDereference.c)
 *     NtInitiatePowerAction @ 0x1405773F8 (NtInitiatePowerAction.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     PoClearBroadcast @ 0x140577BB0 (PoClearBroadcast.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140578618 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PfpPrefetchPrivatePages @ 0x1405789F4 (PfpPrefetchPrivatePages.c)
 *     PfpSourceBuildVaArray @ 0x140578DC4 (PfpSourceBuildVaArray.c)
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     PopFinalizeWakeInfo @ 0x140579248 (PopFinalizeWakeInfo.c)
 *     PopFreeRegistration @ 0x1405796B8 (PopFreeRegistration.c)
 *     SepDeleteLogonSessionTrack @ 0x140579760 (SepDeleteLogonSessionTrack.c)
 *     PopLoadResumeContext @ 0x14057A470 (PopLoadResumeContext.c)
 *     MiCheckSessionPoolAllocations @ 0x14057A97C (MiCheckSessionPoolAllocations.c)
 *     PopHiberInitializeResources @ 0x14057AC78 (PopHiberInitializeResources.c)
 *     BiUnloadHiveByHandle @ 0x14057B97C (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x14057BA0C (BiUnloadHiveByName.c)
 *     IopSymlinkRememberJunction @ 0x14057BD70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x14057BFC0 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 *     IopCopyOverNewPath @ 0x14057C8EC (IopCopyOverNewPath.c)
 *     EtwpCCSwapStart @ 0x14057CD1C (EtwpCCSwapStart.c)
 *     PiSwIrpPropertySet @ 0x14057D004 (PiSwIrpPropertySet.c)
 *     PopSetHiberFileMcb @ 0x14057D378 (PopSetHiberFileMcb.c)
 *     SepDeReferenceLogonSession @ 0x14057D950 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x14057DB0C (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057F358 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     RtlQueryModuleInformation @ 0x140580100 (RtlQueryModuleInformation.c)
 *     IoWMIQuerySingleInstance @ 0x140580670 (IoWMIQuerySingleInstance.c)
 *     WmipQuerySetExecuteSI @ 0x1405807A8 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     WmipEventNotification @ 0x140580E50 (WmipEventNotification.c)
 *     WmipProcessEvent @ 0x140580EBC (WmipProcessEvent.c)
 *     WmipQueueNotification @ 0x140581028 (WmipQueueNotification.c)
 *     IopErrorLogThread @ 0x1405812A0 (IopErrorLogThread.c)
 *     WmipSendEnableDisableRequest @ 0x140581C7C (WmipSendEnableDisableRequest.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140581EA0 (IopDeviceObjectFromSymbolicName.c)
 *     MiFreeRelocations @ 0x140581FD0 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x14058207C (MiFreeImageLoadConfig.c)
 *     MiFormFullImageName @ 0x140582C88 (MiFormFullImageName.c)
 *     MiReleaseDriverPtes @ 0x140583170 (MiReleaseDriverPtes.c)
 *     WmipCopyFromEventQueues @ 0x140583AFC (WmipCopyFromEventQueues.c)
 *     WmipGetFilePDO @ 0x140584258 (WmipGetFilePDO.c)
 *     NtSetCachedSigningLevel2 @ 0x1405847B4 (NtSetCachedSigningLevel2.c)
 *     SepNotifyFileSystems @ 0x140584AD0 (SepNotifyFileSystems.c)
 *     TtmNotifyDeviceArrival @ 0x140584B80 (TtmNotifyDeviceArrival.c)
 *     MiDeleteSessionDriverProtos @ 0x140585040 (MiDeleteSessionDriverProtos.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140585BC8 (NtQuerySystemEnvironmentValueEx.c)
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x140586A18 (IopGetRegistryKeyInformation.c)
 *     MmCallDllInitialize @ 0x140586B80 (MmCallDllInitialize.c)
 *     pIoQueryDeviceDescription @ 0x140586DD0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140587240 (IoQueryDeviceDescription.c)
 *     IopConnectLineBasedInterrupt @ 0x140587E04 (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x140588090 (IoConnectInterruptEx.c)
 *     IoDisconnectInterruptEx @ 0x140588310 (IoDisconnectInterruptEx.c)
 *     IoDisconnectInterrupt @ 0x1405883B0 (IoDisconnectInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140588528 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140588E44 (IopGetInterruptConnectionData.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 *     BiGetSystemPartition @ 0x140589570 (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x140589644 (SiQuerySystemPartitionInformation.c)
 *     BiGetObjectDescription @ 0x1405898C0 (BiGetObjectDescription.c)
 *     BiGetSystemStorePath @ 0x140589C14 (BiGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140589D30 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140589EB0 (BiGetNtPartitionPath.c)
 *     BiMarkTreatAsSystemStore @ 0x14058A118 (BiMarkTreatAsSystemStore.c)
 *     BiGetDriveLayoutBlock @ 0x14058A1D0 (BiGetDriveLayoutBlock.c)
 *     BiIsWinPEBoot @ 0x14058A2A0 (BiIsWinPEBoot.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 *     BiIsSystemStore @ 0x14058A854 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x14058A920 (BiEnumerateSubKeys.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14058AC08 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14058AE94 (PopBcdReadElement.c)
 *     BiCreateKey @ 0x14058AF50 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 *     BiGetObjectIdentifier @ 0x14058BC30 (BiGetObjectIdentifier.c)
 *     BiGetKeyName @ 0x14058BC84 (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x14058BFCC (BiConvertElementToRegistryData.c)
 *     BiConvertRegistryDataToElement @ 0x14058C244 (BiConvertRegistryDataToElement.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14058C478 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14058C52C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14058C7F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14058CABC (BiIssueGetDriveLayoutIoctl.c)
 *     BiTranslateSymbolicLink @ 0x14058CC78 (BiTranslateSymbolicLink.c)
 *     BiVerifyBootPartition @ 0x14058CDE8 (BiVerifyBootPartition.c)
 *     PopBcdSetupResumeObject @ 0x14058D428 (PopBcdSetupResumeObject.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
 *     CmpCopyValue @ 0x14058E1DC (CmpCopyValue.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgFreeDriverNode @ 0x14058EDB0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14058FC40 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14059011C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgVerifyService @ 0x140590184 (PiDevCfgVerifyService.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x14059187C (PiDevCfgBuildIndirectString.c)
 *     PipHardwareConfigActivateService @ 0x140592A80 (PipHardwareConfigActivateService.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140592E90 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x140593004 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405930D4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140593178 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyObjectProperties @ 0x140593580 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405944B0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1405946CC (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14059481C (PiDevCfgGetKeySecurityDescriptor.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 *     WmipDSCleanup @ 0x140595880 (WmipDSCleanup.c)
 *     PiDqIrpPropertySet @ 0x1405959E0 (PiDqIrpPropertySet.c)
 *     PiControlGetDeviceStack @ 0x140595F34 (PiControlGetDeviceStack.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140596860 (IopReleaseResources.c)
 *     WmipISCleanup @ 0x140596E50 (WmipISCleanup.c)
 *     WheaAddErrorSource @ 0x1405970A0 (WheaAddErrorSource.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x140597A84 (PnpQueueQueryAndRemoveEvent.c)
 *     NtEnableLastKnownGood @ 0x140597E60 (NtEnableLastKnownGood.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405980F0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IoWMIExecuteMethod @ 0x140598490 (IoWMIExecuteMethod.c)
 *     SiGetSystemDisk @ 0x1405986E0 (SiGetSystemDisk.c)
 *     SPCallServerHandleGetLicenseChallenge @ 0x1405989F8 (SPCallServerHandleGetLicenseChallenge.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405990C0 (CmpAddRemoveContainerToCLFSLog.c)
 *     ExpQueryNumaAvailableMemory @ 0x140599708 (ExpQueryNumaAvailableMemory.c)
 *     PiEventQueryRemoveDevices @ 0x14059A3AC (PiEventQueryRemoveDevices.c)
 *     PnpLogVetoInformation @ 0x14059A4E0 (PnpLogVetoInformation.c)
 *     RawQueryFileSystemInformation @ 0x14059ACD8 (RawQueryFileSystemInformation.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14059B0D0 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     WmipGECleanup @ 0x14059B7C0 (WmipGECleanup.c)
 *     EtwpUpdateKernelGroupsWork @ 0x14059B800 (EtwpUpdateKernelGroupsWork.c)
 *     PopDeleteHiberFile @ 0x14059BA44 (PopDeleteHiberFile.c)
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     PipApplyFunctionToServiceInstances @ 0x14059C6CC (PipApplyFunctionToServiceInstances.c)
 *     PiProcessDriverInstance @ 0x14059C9D0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14059CC04 (PiFindDevInstMatch.c)
 *     PiDcInitUpdateProperties @ 0x14059DB24 (PiDcInitUpdateProperties.c)
 *     PiDrvDbRegisterNode @ 0x14059E02C (PiDrvDbRegisterNode.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 *     ObpInitObjectTypeSD @ 0x14059F178 (ObpInitObjectTypeSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14059F218 (ObpCreateDefaultObjectTypeSD.c)
 *     PsRegisterSiloMonitor @ 0x14059F3C0 (PsRegisterSiloMonitor.c)
 *     WmipRegisterOrUpdateDS @ 0x1405A01A0 (WmipRegisterOrUpdateDS.c)
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x1405A06AC (WmipBuildInstanceSet.c)
 *     WmipGenerateRegistrationNotification @ 0x1405A0CC8 (WmipGenerateRegistrationNotification.c)
 *     WmipCachePtrs @ 0x1405A0DA8 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1405A0F20 (WmipSendGuidUpdateNotifications.c)
 *     WmipAllocGuidEntry @ 0x1405A11C0 (WmipAllocGuidEntry.c)
 *     WmipInsertMofResource @ 0x1405A1470 (WmipInsertMofResource.c)
 *     WmipGenerateMofResourceNotification @ 0x1405A168C (WmipGenerateMofResourceNotification.c)
 *     MiCreateNodeLists @ 0x1405A2018 (MiCreateNodeLists.c)
 *     MiInitializeMemoryEvents @ 0x1405A25E8 (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x1405A2B68 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1405A2BA8 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405A2CF4 (ObpCreateDosDevicesDirectory.c)
 *     MiCreateMemoryEventSD @ 0x1405A316C (MiCreateMemoryEventSD.c)
 *     EmpProviderRegister @ 0x1405A3390 (EmpProviderRegister.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     PspIsDfssEnabled @ 0x1405A5620 (PspIsDfssEnabled.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A68C8 (CmpAdminSystemSecurityDescriptor.c)
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405A74A8 (AdtpInitializeDriveLetters.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405A80EC (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405A8504 (PopThermalHandlePreviousShutdown.c)
 *     CmpCmdInit @ 0x1405A8688 (CmpCmdInit.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A8840 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1405A8920 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1405A89A0 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutine @ 0x1405A8A60 (PsSetLoadImageNotifyRoutine.c)
 *     PoRegisterCoalescingCallback @ 0x1405A8B90 (PoRegisterCoalescingCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A8C54 (PspSetCreateProcessNotifyRoutine.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A9B98 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405A9E78 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405AA4E0 (_CmGetMatchingCommonClassListWorker.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405AA62C (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405AAA10 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405AAE70 (_CmEnumSubkeyCallback.c)
 *     AdtpBuildMessageString @ 0x1405ABDB4 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x1405AC040 (SepGetLogonSessionAccountInfo.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
 *     PopPepRegisterDevice @ 0x1405AC508 (PopPepRegisterDevice.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1405ADA64 (PnpCheckPossibleBootStartDriver.c)
 *     PiDmListInitEnumCallback @ 0x1405ADAE0 (PiDmListInitEnumCallback.c)
 *     EtwpEnableKeyProviders @ 0x1405AE660 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405AE838 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405AED28 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpInitializeRegistryNode @ 0x1405AF4FC (CmpInitializeRegistryNode.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1405B0350 (IopIsReportedAlready.c)
 *     EtwpInitializeAutoLoggers @ 0x1405B059C (EtwpInitializeAutoLoggers.c)
 *     PnpReadDeviceConfiguration @ 0x1405B098C (PnpReadDeviceConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x1405B0DE4 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1405B1068 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1405B1160 (IopAllocateBootResourcesInternal.c)
 *     IopFreeReqList @ 0x1405B1290 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x1405B12E8 (IopFreeReqAlternative.c)
 *     PnpBuildCmResourceList @ 0x1405B1360 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x1405B17E8 (IopChildToRootTranslation.c)
 *     IopQueryResourceHandlerInterface @ 0x1405B258C (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x1405B2D64 (IopTranslateAndAdjustReqDesc.c)
 *     ArbBuildAssignmentOrdering @ 0x1405B3378 (ArbBuildAssignmentOrdering.c)
 *     ArbAddOrdering @ 0x1405B3958 (ArbAddOrdering.c)
 *     PnpFilterResourceRequirementsList @ 0x1405B3B10 (PnpFilterResourceRequirementsList.c)
 *     ArbAllocateEntry @ 0x1405B42E0 (ArbAllocateEntry.c)
 *     ArbpBuildAllocationStack @ 0x1405B471C (ArbpBuildAllocationStack.c)
 *     ArbBootAllocation @ 0x1405B4870 (ArbBootAllocation.c)
 *     ArbpGetRegistryValue @ 0x1405B5718 (ArbpGetRegistryValue.c)
 *     RtlpFreeRangeListEntry @ 0x1405B5A50 (RtlpFreeRangeListEntry.c)
 *     ArbFreeOrderingList @ 0x1405B5B18 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x1405B5CE0 (ArbPruneOrdering.c)
 *     ArbInitializeArbiterInstance @ 0x1405B5E18 (ArbInitializeArbiterInstance.c)
 *     IopReleaseFilteredBootResources @ 0x1405B6134 (IopReleaseFilteredBootResources.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1405B6478 (ArbAddInaccessibleAllocationRange.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405B66DC (PnpHardwareConfigCreateBootDriverFlags.c)
 *     CmpValueToData @ 0x1405B6E58 (CmpValueToData.c)
 *     RtlGenerateClass5Guid @ 0x1405B6EC0 (RtlGenerateClass5Guid.c)
 *     RtlpLoadLanguageConfigList @ 0x1405B71A4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1405B72C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x1405B7ACC (LdrpQueryValueKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405B7C0C (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405B82DC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetWindowsPolicy @ 0x1405B87A4 (RtlpGetWindowsPolicy.c)
 *     PnpSetInterruptInformation @ 0x1405B8F9C (PnpSetInterruptInformation.c)
 *     PdcTaskClientRegister @ 0x1405B9024 (PdcTaskClientRegister.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     SdbpCheckMatchingFiles @ 0x1405BB5C0 (SdbpCheckMatchingFiles.c)
 *     SdbpResolveMatchingFile @ 0x1405BB78C (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x1405BB9F0 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x1405BC658 (AslPathToNetworkPathNt.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     MmFreeBootRegistry @ 0x1405BD3CC (MmFreeBootRegistry.c)
 *     PiDmListInit @ 0x1405BD8E4 (PiDmListInit.c)
 *     PiDmObjectManagerPopulate @ 0x1405BD940 (PiDmObjectManagerPopulate.c)
 *     FsRtlGetTunnelParameterValue @ 0x1405BE1E0 (FsRtlGetTunnelParameterValue.c)
 *     PoFxRegisterCoreDevice @ 0x1405BE2E0 (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x1405BE400 (PoFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 *     PopFxConvertV1Components @ 0x1405BEE94 (PopFxConvertV1Components.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmPerfResizeHistoryAll @ 0x1405C0E1C (PpmPerfResizeHistoryAll.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     KeAllocateCalloutStackEx @ 0x1405C1E00 (KeAllocateCalloutStackEx.c)
 *     IopCreateCmResourceList @ 0x1405C1EF8 (IopCreateCmResourceList.c)
 *     IoReadDiskSignature @ 0x1405C2490 (IoReadDiskSignature.c)
 *     IoRegisterDeviceInterface @ 0x1405C2650 (IoRegisterDeviceInterface.c)
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x1405C2B80 (PiQueryPowerDependencyRelations.c)
 *     LocalpConvertStringSidToSid @ 0x1405C3DFC (LocalpConvertStringSidToSid.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405C5890 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x1405C5920 (SepRmFetchGlobalSacl.c)
 *     PopRequestShutdownWait @ 0x1405C5F14 (PopRequestShutdownWait.c)
 *     SepReadAndPopulateCapes @ 0x1405C5FA4 (SepReadAndPopulateCapes.c)
 *     PpReleaseBootDDB @ 0x1405C6318 (PpReleaseBootDDB.c)
 *     WmipRegistrationWorker @ 0x1405C6890 (WmipRegistrationWorker.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     PiAuAllocateAndInitializeSid @ 0x1405C6F04 (PiAuAllocateAndInitializeSid.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405C7568 (NtPrivilegeObjectAuditAlarm.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     EtwpUpdateDisallowedGuids @ 0x1405C7CC4 (EtwpUpdateDisallowedGuids.c)
 *     PfpCreateEvent @ 0x1405C8E6C (PfpCreateEvent.c)
 *     CmpGetAcpiProfileInformation @ 0x1405C9074 (CmpGetAcpiProfileInformation.c)
 *     CmSetAcpiHwProfile @ 0x1405C97A8 (CmSetAcpiHwProfile.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405CA390 (WdipSemCleanupGroupPolicy.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1405CBEF4 (EtwpAcquireTokenAccessInformation.c)
 *     PnpUnloadAttachedDriver @ 0x1405CBF9C (PnpUnloadAttachedDriver.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     WmipLegacyEtwWorker @ 0x1405CC580 (WmipLegacyEtwWorker.c)
 *     WheapLogInitEvent @ 0x1405CCE38 (WheapLogInitEvent.c)
 *     _PnpCtxOpenMachine @ 0x1405CCFE4 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x1405CD1A8 (DrvDbOpenContext.c)
 *     _SysCtxOpenMachine @ 0x1405CD2E8 (_SysCtxOpenMachine.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405CDEF8 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1405CE0C8 (CreateTlgAggregateSession.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405CE304 (FsRtlpRegisterProviderWithMUP.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1405CE4A8 (ExpQueryMemoryTopologyInformation.c)
 *     SepSetSystemPaths @ 0x1405CE854 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x1405CE94C (SepLoadNgenLocations.c)
 *     ObRegisterCallbacks @ 0x1405CEF30 (ObRegisterCallbacks.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405CF2CC (ExpRegisterFirmwareTableInformationHandler.c)
 *     IopDeleteDriver @ 0x1405CFCE0 (IopDeleteDriver.c)
 *     SepBuildDefaultCap @ 0x1405CFDC8 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     AlpcpInitializeMessageLog @ 0x1405D0474 (AlpcpInitializeMessageLog.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405D0FEC (ArbAddMmConfigRangeAsBootReserved.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1405D1394 (PiRemoveDeferredSetInterfaceState.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 *     DbgkRegisterErrorPort @ 0x1405D1A50 (DbgkRegisterErrorPort.c)
 *     CmpRegisterCallbackInternal @ 0x1405D2288 (CmpRegisterCallbackInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405D2594 (PopCreateHiberFileSecurityDescriptor.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1405D2714 (EtwpUpdateSchematizedFilterData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405D2774 (ExpGetSystemPlatformBinary.c)
 *     IoRegisterContainerNotification @ 0x1405D2C50 (IoRegisterContainerNotification.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1405D2FB8 (RtlpLoadInstallLanguageFallback.c)
 *     ExGetSystemFirmwareTable @ 0x1405D3420 (ExGetSystemFirmwareTable.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     CmpAddStringToMapping @ 0x1405D3E34 (CmpAddStringToMapping.c)
 *     PopExtendConnectionState @ 0x1405D45FC (PopExtendConnectionState.c)
 *     SepAuditAssignPrimaryToken @ 0x1405D4708 (SepAuditAssignPrimaryToken.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1405D4A08 (ExNotifyPlatformBinaryExecuted.c)
 *     IopDuplicateDetection @ 0x1405D4F5C (IopDuplicateDetection.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405D6060 (WheaCrashDumpInitializationComplete.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405D62A0 (ExGetFirmwareEnvironmentVariable.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     PopConnectToPolicyDevice @ 0x1405D67E8 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x1405D6BA0 (PoCreateThermalRequest.c)
 *     AslRegistryGetKey @ 0x1405D7118 (AslRegistryGetKey.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     PfpRpCHashEmpty @ 0x1405D8788 (PfpRpCHashEmpty.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 *     PspSetMinimalProcessName @ 0x1405D9BBC (PspSetMinimalProcessName.c)
 *     PopPreallocateHibernateMemory @ 0x1405D9F4C (PopPreallocateHibernateMemory.c)
 *     PiSwIrpInterfaceSetState @ 0x1405DA2A4 (PiSwIrpInterfaceSetState.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405DA5C8 (ExAllocatePrivateWorkerPool.c)
 *     CcUnpinDataForThread @ 0x14065E6B0 (CcUnpinDataForThread.c)
 *     CcFreeVacbArray @ 0x14065E720 (CcFreeVacbArray.c)
 *     NtCompactKeys @ 0x14065E844 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14065EFBC (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14065F7EC (NtReplaceKey.c)
 *     CmUnRegisterCallback @ 0x140660520 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x140660A04 (CmpFreeCallbackObjectContexts.c)
 *     CmpSystemHiveHysteresisWorker @ 0x140662690 (CmpSystemHiveHysteresisWorker.c)
 *     CmpQuotaWarningWorker @ 0x1406626D0 (CmpQuotaWarningWorker.c)
 *     CmpFreeAllMemory @ 0x140662C0C (CmpFreeAllMemory.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmpBuildVirtualReplicationStack @ 0x140666DB0 (CmpBuildVirtualReplicationStack.c)
 *     CmpRemoveHiveFromMapping @ 0x140667944 (CmpRemoveHiveFromMapping.c)
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 *     CmpCmdRenameHive @ 0x14066959C (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x1406696E0 (CmpDiskFullWarningWorker.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406697FC (CmpCleanupLightWeightUoWData.c)
 *     CmInitializeProcessor @ 0x14066A040 (CmInitializeProcessor.c)
 *     CmpFreeOffsetArray @ 0x14066AEA8 (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14066AEF8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
 *     CmpRmAnalysisPhase @ 0x14066C028 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x14066C3E0 (CmpRmUnDoPhase.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     CmDeleteKeyRecursive @ 0x14066DFD0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpMergeKeyValues @ 0x14066F3AC (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x140671210 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmpSaveKeyByFileCopy @ 0x140673320 (CmpSaveKeyByFileCopy.c)
 *     CmpFreeUnitOfWork @ 0x140673C98 (CmpFreeUnitOfWork.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14067433C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1406752A8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     HvpViewMapPrefetchFile @ 0x140676244 (HvpViewMapPrefetchFile.c)
 *     HvpGetLogHeader @ 0x140676C8C (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406774D4 (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x140677748 (HvpRecoverDataReadRoutine.c)
 *     VrpCleanupNamespace @ 0x14067909C (VrpCleanupNamespace.c)
 *     VrpCleanupBufferParameter @ 0x14067952C (VrpCleanupBufferParameter.c)
 *     VrpDecommissionKeyContext @ 0x140679560 (VrpDecommissionKeyContext.c)
 *     VrpFreeCallbackContext @ 0x140679594 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x1406795DC (VrpFreeKeyContext.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140679694 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140679C08 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14067A4F4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14067A844 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpAddNamespaceNodeToList @ 0x14067AC20 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14067AF54 (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x14067B510 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14067BEA8 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14067CD10 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x14067D470 (VrpTranslatePath.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14067DAEC (VrpDereferenceDiffHiveEntryWithLock.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14067DD84 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     DbgkpFreeDebugEvent @ 0x14067EE90 (DbgkpFreeDebugEvent.c)
 *     DbgkpQueueMessage @ 0x14067F83C (DbgkpQueueMessage.c)
 *     DbgkQueueUserExceptionReport @ 0x140680B08 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140680D30 (DbgkUserReportWorkRoutine.c)
 *     DbgkpDeleteErrorPort @ 0x140681000 (DbgkpDeleteErrorPort.c)
 *     DbgkpSectionToFileHandle @ 0x140681A94 (DbgkpSectionToFileHandle.c)
 *     DbgkCaptureLiveDump @ 0x140681C24 (DbgkCaptureLiveDump.c)
 *     DbgkLkmdUnregisterCallback @ 0x140682040 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14068222C (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1406824A0 (DbgkpLkmdSnapThreadApc.c)
 *     DbgkWerAddSecondaryData @ 0x140682830 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406829D0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerCleanupContext @ 0x140682ED4 (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x1406831A0 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x140683A00 (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x140683AF8 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x140683D50 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x140683F60 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x140685EC0 (FsRtlIsDbcsInExpression.c)
 *     FsRtlHeatInit @ 0x140686750 (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x140686B80 (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x140686C10 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x140686E50 (FsRtlNotifyCleanupAll.c)
 *     IoReadPartitionTable @ 0x1406870E0 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x1406872C0 (IoWritePartitionTable.c)
 *     VslStartSecureProcessor @ 0x1406882A8 (VslStartSecureProcessor.c)
 *     IopApcHardError @ 0x140688790 (IopApcHardError.c)
 *     IopCleanupFileObjectIosbRange @ 0x140688B20 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     IopFreeGenericTableEntry @ 0x140688E60 (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140688E74 (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x1406891D0 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x140689A20 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x140689CE0 (IopRaiseInformationalHardError.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x140689EC4 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     IopStartApcHardError @ 0x14068AC20 (IopStartApcHardError.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 *     IoQueryInformationByName @ 0x14068B8F0 (IoQueryInformationByName.c)
 *     IoReplaceFileObjectName @ 0x14068BBB0 (IoReplaceFileObjectName.c)
 *     IoUnregisterFsRegistrationChange @ 0x14068BE30 (IoUnregisterFsRegistrationChange.c)
 *     IoUnregisterContainerNotification @ 0x14068C660 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x14068C770 (IoIsValidNameGraftingBuffer.c)
 *     IopReplaceSymlinkPath @ 0x14068CB18 (IopReplaceSymlinkPath.c)
 *     IopSymlinkApplyToOpenedName @ 0x14068CE14 (IopSymlinkApplyToOpenedName.c)
 *     IoUnregisterIoTracking @ 0x14068D0B0 (IoUnregisterIoTracking.c)
 *     IoVolumeDeviceNameToGuid @ 0x14068D170 (IoVolumeDeviceNameToGuid.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14068E59C (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14068F088 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x14068F120 (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x14068F3B0 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14068F6F4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14068F920 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140690A00 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140690E20 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140690F70 (IopGetEnvironmentVariableTrEE.c)
 *     IopOpenSystemVariableDevice @ 0x140691258 (IopOpenSystemVariableDevice.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140691580 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140691690 (IopSetEnvironmentVariableTrEE.c)
 *     IopFindSystemDevice @ 0x1406917D0 (IopFindSystemDevice.c)
 *     PnpShutdownDevices @ 0x140691F78 (PnpShutdownDevices.c)
 *     PipDeleteDependencyNode @ 0x140693018 (PipDeleteDependencyNode.c)
 *     PipFreeBindingId @ 0x1406930E4 (PipFreeBindingId.c)
 *     PipFreeBindingRequestEntry @ 0x140693110 (PipFreeBindingRequestEntry.c)
 *     PiGetDeviceRegistryProperty @ 0x1406938D8 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x140693BA0 (PnpDeleteDeviceInterfaces.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x140694010 (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x1406945A8 (IoReportResourceUsageInternal.c)
 *     PnpRequestDeviceEjectExWorker @ 0x140694800 (PnpRequestDeviceEjectExWorker.c)
 *     IopDeviceRemovalForResetComplete @ 0x140694A70 (IopDeviceRemovalForResetComplete.c)
 *     IopFreeResetRemovalContext @ 0x140694BA8 (IopFreeResetRemovalContext.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140695254 (IopAllocatePassiveInterruptBlock.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406954A0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpRestartDeviceNode @ 0x140695D4C (PnpRestartDeviceNode.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140695E4C (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140696080 (PnpProcessCompletedEject.c)
 *     IopIsPciRootBus @ 0x140696750 (IopIsPciRootBus.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x140696B80 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140696BC4 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140696CE0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140696E00 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406970F0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDmFreeGenericTableEntry @ 0x140697530 (PiDmFreeGenericTableEntry.c)
 *     PiDcFreeGenericTableEntry @ 0x140697940 (PiDcFreeGenericTableEntry.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140697970 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140697BC4 (PiDcResetChildDeviceContainers.c)
 *     PiAuCheckClientInteractive @ 0x140697D8C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140697FE8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140698274 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqDeleteUserObject @ 0x1406985F8 (PiDqDeleteUserObject.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x1406988C8 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x1406989F8 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406997F8 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14069A4E4 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14069A874 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14069AA94 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14069B660 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14069B6D4 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14069C2D0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14069C3A0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14069D540 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14069DB70 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14069DC50 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14069E410 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14069E5F0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14069FBA0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14069FBE8 (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x14069FF30 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1406A007C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpAddVetoInformation @ 0x1406A02D4 (PnpAddVetoInformation.c)
 *     PnpRemoveEventFromQueue @ 0x1406A05D8 (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x1406A16B8 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x1406A18A4 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x1406A19BC (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1406A1B70 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x1406A1F44 (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x1406A241C (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x1406A24D0 (PnprIsProcessorDevice.c)
 *     PnprLegacyDeviceDriversPresent @ 0x1406A25E8 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x1406A2638 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x1406A2EF0 (PnprMmFree.c)
 *     PiSwInterfaceFree @ 0x1406A3224 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406A3448 (PiSwQueuedCreateInfoFree.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1406A51A4 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406A574C (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1406A595C (PiCMRegisterDeviceInterface.c)
 *     PiProcessSetDeviceProblem @ 0x1406A6D98 (PiProcessSetDeviceProblem.c)
 *     PiRearrangeDeviceInstances @ 0x1406A70F0 (PiRearrangeDeviceInstances.c)
 *     IopAppendLegacyVeto @ 0x1406A7284 (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x1406A7358 (IopCreateLegacyDeviceIds.c)
 *     PipGrowDeviceObjectList @ 0x1406A7838 (PipGrowDeviceObjectList.c)
 *     IopQueryDockRemovalInterface @ 0x1406A7AE8 (IopQueryDockRemovalInterface.c)
 *     PnpRestoreResourcesInternal @ 0x1406A7E70 (PnpRestoreResourcesInternal.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1406A8B98 (PiQueryDeviceRelations.c)
 *     PiAuditDeviceOperation @ 0x1406A91A8 (PiAuditDeviceOperation.c)
 *     PiDrvDbDestroyNode @ 0x1406A9814 (PiDrvDbDestroyNode.c)
 *     PnpRebalance @ 0x1406A9D3C (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x1406AA0D8 (IopExecuteHardwareProfileChange.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     IopQueryConflictListInternal @ 0x1406AB614 (IopQueryConflictListInternal.c)
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeFreeCalloutStack @ 0x1406ACFA0 (KeFreeCalloutStack.c)
 *     KeInitializeUmsThread @ 0x1406AD5AC (KeInitializeUmsThread.c)
 *     KeUnInitializeUmsThread @ 0x1406AD7C8 (KeUnInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406B1460 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x1406B20AC (AlpcpGetPortNameInformation.c)
 *     AlpcpPortQueryServerInfo @ 0x1406B2164 (AlpcpPortQueryServerInfo.c)
 *     AlpcRegisterLogRoutine @ 0x1406B2510 (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x1406B2600 (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406B2A00 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x1406B2B60 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406B2C70 (MmGetFileNameForSection.c)
 *     MiReturnProcessVads @ 0x1406B2E0C (MiReturnProcessVads.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 *     MmAllocateNonCachedMemory @ 0x1406B4790 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1406B4910 (MmFreeNonCachedMemory.c)
 *     MiRemoveMdlPages @ 0x1406B49B8 (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x1406B5390 (MiLdwPopupWorker.c)
 *     MiApplyDriverHotPatch @ 0x1406B5468 (MiApplyDriverHotPatch.c)
 *     MmSetPermanentCacheAttribute @ 0x1406B5F50 (MmSetPermanentCacheAttribute.c)
 *     MiFreeRotateView @ 0x1406B62F4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1406B6404 (MiFreeVadEventBitmap.c)
 *     MiSessionObjectDelete @ 0x1406B6650 (MiSessionObjectDelete.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 *     MiDeletePagefile @ 0x1406B78F4 (MiDeletePagefile.c)
 *     MiAweViewRemover @ 0x1406B85F0 (MiAweViewRemover.c)
 *     MiDeletePhysicalProcessPages @ 0x1406B896C (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x1406B8CF8 (MiResizeAweBitMap.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1406B9C78 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406BA0F4 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406BA5D8 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x1406BBE40 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1406BC21C (NtInitializeEnclave.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 *     MiExpandPartitionIds @ 0x1406BCBCC (MiExpandPartitionIds.c)
 *     MiHotAddPartitionMemory @ 0x1406BCDD0 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1406BCFEC (MiMakePartitionMemoryBlock.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406BE328 (MiFreeSubsectionProtos.c)
 *     MiAllocateLargeZeroPages @ 0x1406BE398 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406BE7A4 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406BE99C (MiFindLargePageMemory.c)
 *     MiFreeLargePageView @ 0x1406BEB6C (MiFreeLargePageView.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 *     MiFreeCloneDescriptor @ 0x1406BF4BC (MiFreeCloneDescriptor.c)
 *     MmInSwapVirtualAddresses @ 0x1406BF65C (MmInSwapVirtualAddresses.c)
 *     MiReleaseScrubPacket @ 0x1406BFF98 (MiReleaseScrubPacket.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 *     MmScrubMemory @ 0x1406C04B8 (MmScrubMemory.c)
 *     ObShutdownSystem @ 0x1406C0774 (ObShutdownSystem.c)
 *     ObpSetObjectAuditInfo @ 0x1406C1550 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406C1730 (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x1406C1E8C (ObpDestroyTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1406C1EF0 (ObUnRegisterCallbacks.c)
 *     ObpCallPostOperationCallbacks @ 0x1406C1FB0 (ObpCallPostOperationCallbacks.c)
 *     ObpDeregisterObject @ 0x1406C2688 (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x1406C27E4 (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x1406C28C8 (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x1406C2974 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x1406C2C74 (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x1406C32A4 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x1406C36D8 (ObpStopRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x1406C3B40 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x1406C3FD8 (PfpQueryFileExtentsRequest.c)
 *     PfTCleanupBuffers @ 0x1406C4858 (PfTCleanupBuffers.c)
 *     PfpRpShutdown @ 0x1406C4984 (PfpRpShutdown.c)
 *     PfFbBufferListCleanup @ 0x1406C5130 (PfFbBufferListCleanup.c)
 *     PoDeleteThermalRequest @ 0x1406C66C0 (PoDeleteThermalRequest.c)
 *     PopCleanCoolingExtension @ 0x1406C683C (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406C6C70 (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x1406C6DE0 (PoReenableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x1406C6FE8 (PopGetPowerRequestListInfo.c)
 *     PoFxRegisterPrimaryDevice @ 0x1406C74D0 (PoFxRegisterPrimaryDevice.c)
 *     PopFxFreeChildDevicesActiveList @ 0x1406C7804 (PopFxFreeChildDevicesActiveList.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406C7904 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406C7E5C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoFree @ 0x1406C8274 (PopFxPepPerfInfoFree.c)
 *     PopFxVerifyDependencies @ 0x1406C8C3C (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406C9070 (PopPluginQuerySocSubsystemMetadata.c)
 *     PoUnregisterCoalescingCallback @ 0x1406C9430 (PoUnregisterCoalescingCallback.c)
 *     PopFreeWakeInfo @ 0x1406C9760 (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x1406C9788 (PopFreeWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1406C9A1C (PopWakeSourceGetDeviceProperty.c)
 *     PopPepUnregisterDevice @ 0x1406CAFC8 (PopPepUnregisterDevice.c)
 *     PopPdcCsDeviceNotification @ 0x1406CB6E8 (PopPdcCsDeviceNotification.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 *     PopDiagReadRegKeyValue @ 0x1406CC2C4 (PopDiagReadRegKeyValue.c)
 *     PopFxTracePerfRegistration @ 0x1406CE888 (PopFxTracePerfRegistration.c)
 *     PopPolicyDeviceTargetChange @ 0x1406CF520 (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x1406CFCE0 (PpmWmiIdleAccountingWork.c)
 *     PopEtAggregateGet @ 0x1406D07DC (PopEtAggregateGet.c)
 *     PopEtBucketsFree @ 0x1406D0E8C (PopEtBucketsFree.c)
 *     PopEtEnergyTrackerCleanup @ 0x1406D1100 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406D12B8 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtInternerFree @ 0x1406D2BA0 (PopEtInternerFree.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D2CD8 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdate @ 0x1406D30EC (PopEtProcessSnapshotUpdate.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1406D36C4 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406D3A14 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x1406D3CFC (PpmEventTraceProcessorIdle.c)
 *     PopBcdRegenerateResumeObject @ 0x1406D5770 (PopBcdRegenerateResumeObject.c)
 *     PpmRegisterSpmSettings @ 0x1406D5EF0 (PpmRegisterSpmSettings.c)
 *     TtmiSessionDeviceListWorker @ 0x1406D7240 (TtmiSessionDeviceListWorker.c)
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1406D9958 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmDispatchApi @ 0x1406D9DCC (TtmDispatchApi.c)
 *     TtmiCloseEventQueue @ 0x1406DA860 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1406DAAA4 (TtmiRetrieveEventFromQueue.c)
 *     TtmpDeleteQueue @ 0x1406DADE0 (TtmpDeleteQueue.c)
 *     PspDeleteServerSiloGlobals @ 0x1406DECFC (PspDeleteServerSiloGlobals.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1406DF530 (PspSiloInitializeSystemRootSymlink.c)
 *     PspApplyWorkingSetLimits @ 0x1406E11DC (PspApplyWorkingSetLimits.c)
 *     PspSetJobIoRateControlForVolume @ 0x1406E1ADC (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x1406E23CC (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x1406E3000 (PsUnregisterSiloMonitor.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406E3D90 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406E3E90 (PsRemoveLoadImageNotifyRoutine.c)
 *     PspIumVerifyParentSd @ 0x1406E4540 (PspIumVerifyParentSd.c)
 *     PspFreeStorage @ 0x1406E4B58 (PspFreeStorage.c)
 *     PspLazyInitializeStorageExpansion @ 0x1406E4BC8 (PspLazyInitializeStorageExpansion.c)
 *     RtlAddResourceAttributeAce @ 0x1406E89D0 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x1406E9A30 (RtlGetAppContainerParent.c)
 *     RtlpComputeMergedAcl @ 0x1406EA05C (RtlpComputeMergedAcl.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlIdnToUnicode @ 0x1406EBDB0 (RtlIdnToUnicode.c)
 *     RtlpGetNormalization @ 0x1406EFEA8 (RtlpGetNormalization.c)
 *     PdcpPortReleaseResources @ 0x1406EFFA4 (PdcpPortReleaseResources.c)
 *     NtQuerySecurityPolicy @ 0x1406F01C0 (NtQuerySecurityPolicy.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1406F16B0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1406F1F9C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1406F211C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1406F22D0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406F2820 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406F2A24 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1406F2C60 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406F2F48 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406F3C50 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x1406F43D8 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x1406F47D8 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x1406F4890 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1406F4AF4 (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x1406F4D14 (SepReleaseAuditPolicy.c)
 *     NtDeleteObjectAuditAlarm @ 0x1406F4FFC (NtDeleteObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406F5610 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepExamineSaclEx @ 0x1406F5B50 (SepExamineSaclEx.c)
 *     SepDeleteTokenUserAndGroups @ 0x1406F6D38 (SepDeleteTokenUserAndGroups.c)
 *     SepDereferenceSidValuesBlock @ 0x1406F6DBC (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1406F7280 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1406F7350 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepRemoveTokenLogonSession @ 0x1406F77FC (SepRemoveTokenLogonSession.c)
 *     NtFilterBootOption @ 0x1406F79EC (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406F82BC (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x1406F8654 (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406F87EC (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x1406F8998 (SepBuildObjectSecurityDescriptor.c)
 *     SepLogTokenSidManagement @ 0x1406F8D04 (SepLogTokenSidManagement.c)
 *     SepDeReferenceSharedSidEntries @ 0x1406F94E0 (SepDeReferenceSharedSidEntries.c)
 *     SepDeleteClaimAttributes @ 0x1406F95BC (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1406F9644 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406F9A28 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1406F9DD4 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1406FA138 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x1406FA444 (SepRmDestroyCapTable.c)
 *     LocalConvertAclToString @ 0x1406FA724 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpFree @ 0x1406FC4D0 (SddlpFree.c)
 *     SddlpReAlloc @ 0x1406FC4EC (SddlpReAlloc.c)
 *     AppendCondition @ 0x1406FC724 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1406FC80C (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1406FC9F4 (EncloseSubCondition.c)
 *     FreeOperandValue @ 0x1406FCBEC (FreeOperandValue.c)
 *     GetOperandValue @ 0x1406FD104 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406FD724 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1406FD8D0 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1406FDB1C (GetPrintableOperandValue.c)
 *     LocalGetConditionForString @ 0x1406FE4E8 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406FEC78 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406FF890 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x140700190 (LocalpGetStringForCondition.c)
 *     SmKmStoreFileCreateForIoType @ 0x140703078 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x140703384 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14070360C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x1407039F0 (SmKmStoreFileWriteHeader.c)
 *     VmCreateMemoryRange @ 0x140705320 (VmCreateMemoryRange.c)
 *     WdipSemFreePool @ 0x140705D5C (WdipSemFreePool.c)
 *     IoWMISetSingleInstance @ 0x140706B70 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x140706C80 (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x140706DB0 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x140707490 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x140707C28 (WmipDereferenceEvent.c)
 *     WmipQueryAllDataMultiple @ 0x1407082C0 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x140708650 (WmipQuerySingleMultiple.c)
 *     WmipMRCleanup @ 0x140708B40 (WmipMRCleanup.c)
 *     WmipGenerateBinaryMofNotification @ 0x140708F04 (WmipGenerateBinaryMofNotification.c)
 *     WmipUpdateDataSource @ 0x14070924C (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407095A4 (WmipUpdateModifyGuid.c)
 *     EtwTraceDeniedTokenCreation @ 0x14070A5D8 (EtwTraceDeniedTokenCreation.c)
 *     EtwpLogMemInfoWs @ 0x14070B538 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x14070BAE8 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpPerfMemInfoWork @ 0x14070BDB0 (EtwpPerfMemInfoWork.c)
 *     EtwpSetPmcProfileSource @ 0x14070C004 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x14070C11C (EtwpTraceHandle.c)
 *     EtwDeleteSiloState @ 0x14070C6D8 (EtwDeleteSiloState.c)
 *     EtwpCapturePreviousRegistryData @ 0x14070E270 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x14070E374 (EtwpCaptureRegistryData.c)
 *     EtwpRegTraceCallback @ 0x14070E410 (EtwpRegTraceCallback.c)
 *     EtwpSendDbgId @ 0x14070F004 (EtwpSendDbgId.c)
 *     EtwTiLogSetContextThread @ 0x14070F650 (EtwTiLogSetContextThread.c)
 *     EtwpTiQueryVad @ 0x14070FC80 (EtwpTiQueryVad.c)
 *     EtwpEnumerateWorkingSet @ 0x140710184 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x140710550 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x140710810 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140710968 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 *     EtwpDeleteSessionDemuxObject @ 0x140711550 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140711C20 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x140711F20 (SendCaptureStateNotificationsWorker.c)
 *     EtwpFreeEventNameFilter @ 0x140712F20 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdatePidFilterData @ 0x140712F78 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x14071301C (EtwpUpdateStringFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x1407132C4 (EtwpAddWinRtProviderToSession.c)
 *     EtwpFreeStackCache @ 0x140713738 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x140713838 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x140713AB0 (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x140713CDC (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x140713DCC (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 *     EtwpSavePersistedLoggersWorker @ 0x140714260 (EtwpSavePersistedLoggersWorker.c)
 *     ExEnumerateSystemFirmwareTables @ 0x140714B90 (ExEnumerateSystemFirmwareTables.c)
 *     ExpGetDeviceDataInformation @ 0x140714E94 (ExpGetDeviceDataInformation.c)
 *     ExpQueryChannelInformation @ 0x140715400 (ExpQueryChannelInformation.c)
 *     ExpQueryElamCertInfo @ 0x140715718 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x140715A04 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140715C44 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x140716250 (ExpStringCapture.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x140716B30 (NtDisplayString.c)
 *     ExDereferenceHandleDebugInfo @ 0x14071705C (ExDereferenceHandleDebugInfo.c)
 *     ExpGetSubscriptionPfn @ 0x140718038 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140718634 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1407186BC (ExStopRecordingIRTimerExpiries.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407189E0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x140718A74 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x140718C30 (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x140718E44 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407191E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1407193A4 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x140719668 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x140719858 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140719A74 (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x140719CE8 (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x140719F30 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x14071A260 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14071AA20 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14071B354 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x14071B9C4 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x14071BC94 (ExpTranslateSymbolicLink.c)
 *     NtEnumerateBootEntries @ 0x14071C3B8 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14071C988 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x14071D9A0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x14071DCCC (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x14071E0CC (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x14071E2D0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14071E604 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x14071E874 (NtTranslateFilePath.c)
 *     ExpDereferenceHost @ 0x14071F0F8 (ExpDereferenceHost.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x14071F57C (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x14071F6EC (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x14071F96C (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x14072007C (ExpCovReadRequestBuffer.c)
 *     ExpProfileDelete @ 0x1407208B0 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 *     NtStopProfile @ 0x140720E4C (NtStopProfile.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x14072162C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1407223A0 (CMFUnmapModules.c)
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 *     sub_140722B10 @ 0x140722B10 (sub_140722B10.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407231F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140723590 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x140723E24 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x140724084 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x140724354 (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1407245E8 (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1407246B0 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapIsSqmLoggerRunning @ 0x140724948 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x140724BF8 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetpConstructPathToExtension @ 0x140724F84 (ApiSetpConstructPathToExtension.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407250B8 (ApiSetpLoadSchemaExtension.c)
 *     sub_140725A88 @ 0x140725A88 (sub_140725A88.c)
 *     sub_140726B4C @ 0x140726B4C (sub_140726B4C.c)
 *     sub_140727404 @ 0x140727404 (sub_140727404.c)
 *     sub_140727D68 @ 0x140727D68 (sub_140727D68.c)
 *     sub_1407282B8 @ 0x1407282B8 (sub_1407282B8.c)
 *     sub_140728F7C @ 0x140728F7C (sub_140728F7C.c)
 *     sub_140729EF8 @ 0x140729EF8 (sub_140729EF8.c)
 *     sub_14072A730 @ 0x14072A730 (sub_14072A730.c)
 *     SdbOpenDatabaseEx @ 0x14072AD3C (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14072B80C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingText @ 0x14072BC90 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x14072BDB4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpFreePackageAttributes @ 0x14072C588 (SdbpFreePackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x14072C684 (SdbpGetMatchingTextAttributes.c)
 *     SdbGetAppPatchDirEx @ 0x14072D598 (SdbGetAppPatchDirEx.c)
 *     SdbResolveDatabase @ 0x14072D64C (SdbResolveDatabase.c)
 *     SdbpOpenCompressedDatabase @ 0x14072DB9C (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x14072DD80 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x14072E32C (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x14072E47C (AslStringAnsiToUnicode.c)
 *     AslUnicodeStringCreate @ 0x14072E7B8 (AslUnicodeStringCreate.c)
 *     AslUnicodeStringFree @ 0x14072E854 (AslUnicodeStringFree.c)
 *     AslHashFree @ 0x14072F03C (AslHashFree.c)
 *     AslpFileGetVersionBlock @ 0x1407308C8 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x1407318B0 (AslpFileVerQueryBlock.c)
 *     AslpFileLargeMapDelete @ 0x1407323F0 (AslpFileLargeMapDelete.c)
 *     AdtpBuildGuidString @ 0x140732B70 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x140732C9C (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x140732D5C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140732EB4 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x14073300C (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x1407332A0 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x14073355C (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140733628 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14073382C (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x140733DAC (AdtpAppendString.c)
 *     AdtpBuildObjectTypeStrings @ 0x140734438 (AdtpBuildObjectTypeStrings.c)
 *     BcdEnumerateObjects @ 0x1407349D0 (BcdEnumerateObjects.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1407350F8 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1407351D4 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x14073529C (BiResolveLocateDevice.c)
 *     BiIsPortableWorkspaceBoot @ 0x1407355F4 (BiIsPortableWorkspaceBoot.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140735698 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x140735840 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x140735940 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x140735AEC (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140735C30 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x140735D20 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140735EE8 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140736030 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140736118 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1407363F8 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14073655C (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x140736AF0 (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x140736E78 (BiCreateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x140737008 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x14073747C (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x140737628 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1407379D0 (BiFreeIdentifierList.c)
 *     BiGetDeviceFromEfiPath @ 0x140737A54 (BiGetDeviceFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140737D3C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x140737EC8 (BiGetSavedBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140737F54 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x140738214 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407382CC (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140738574 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140738988 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140738B00 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetDriveLayoutInformation @ 0x140738D80 (SiGetDriveLayoutInformation.c)
 *     SiDisambiguateSystemDevice @ 0x140738FD0 (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x140739078 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1407393DC (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x1407396C8 (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x1407397F0 (SiGetBiosSystemPartition.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140739930 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     _PnpCtxCloseMachine @ 0x140739AE0 (_PnpCtxCloseMachine.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14073A060 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14073A61C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x14073A8B0 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x14073B0CC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x14073B6F8 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x14073BAC8 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14073C458 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x14073C678 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14073C984 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14073CE10 (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x14073D06C (_CmMoveBaseContainer.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x14073E26C (_CmGetMatchingFilteredDeviceListWorker.c)
 *     _CmServiceFilterCallback @ 0x14073E410 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x14073FEE4 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14074004C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxCloseMachine @ 0x140741724 (_SysCtxCloseMachine.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140741C74 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1407422EC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407439F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x140745350 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x140746A68 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x140746DE0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140747160 (ArbRetestAllocation.c)
 *     MIDL_user_free @ 0x140747390 (MIDL_user_free.c)
 *     VhdiVerifyBootDisk @ 0x1407473A0 (VhdiVerifyBootDisk.c)
 *     ObpGetSilosRootDirectory @ 0x140747B7C (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140747D68 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140748098 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140748934 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x140748C18 (RtlpMuiRegResizeStringPool.c)
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x140755980 (ResFwpPageOutBackground.c)
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 *     ViThunkFreeSharedThunksArray @ 0x140762178 (ViThunkFreeSharedThunksArray.c)
 *     VfDriverUnloadImage @ 0x1407621FC (VfDriverUnloadImage.c)
 *     IovUnloadDrivers @ 0x14076341C (IovUnloadDrivers.c)
 *     IovpBuildDriverObjectList @ 0x140763538 (IovpBuildDriverObjectList.c)
 *     VerifierExFreePool @ 0x140764790 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1407647C0 (VerifierExFreePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x140764C50 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140764E04 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140765540 (ViInitializeLocalSystemDescriptor.c)
 *     VfDriverEnableVerifierForAll @ 0x1407671E4 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoDisconnectInterrupt @ 0x140767C30 (VerifierIoDisconnectInterrupt.c)
 *     VerifierIoDisconnectInterruptEx @ 0x140767C70 (VerifierIoDisconnectInterruptEx.c)
 *     ViAllocateMapRegisterFile @ 0x14076B29C (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14076BF40 (ViFreeMapRegisterFile.c)
 *     ViHalFreeDomainCommonBuffer @ 0x14076C560 (ViHalFreeDomainCommonBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14076CDD8 (ViReleaseDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14076CF8C (ViSpecialAllocateCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14076D104 (ViSpecialFreeCommonBuffer.c)
 *     VfIoFreeIrp @ 0x14076E8CC (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14076EDB4 (ViIrpAllocateLockedPacket.c)
 *     ViPendingCompleteAfterWait @ 0x140771E98 (ViPendingCompleteAfterWait.c)
 *     ViPendingDelayCompletion @ 0x140771FE0 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x140773AC4 (VfInitializeBranchTracing.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1407741B4 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkRemoveImportEntry @ 0x14077489C (ViThunkRemoveImportEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1407749A0 (ViThunkReplaceAllThunkedImports.c)
 *     VfTargetDriversEnableVerifier @ 0x140774CDC (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140774EA0 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140774F8C (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1407754F4 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x1407758E8 (VfPoolCheckForLeaks.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140775A50 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViCreateProcessCallbackInternal @ 0x140775FA8 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1407761E8 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x1407762F0 (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsRemoveAllApps @ 0x1407766AC (ViFaultsRemoveAllApps.c)
 *     ViFaultsRemoveAllTags @ 0x140776728 (ViFaultsRemoveAllTags.c)
 *     VfKeCheckForChanges @ 0x140778050 (VfKeCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x14077932C (VfDeadlockInitialize.c)
 *     VfSuspectDriversRemove @ 0x14077BABC (VfSuspectDriversRemove.c)
 *     ViPacketNotificationCallback @ 0x14077D220 (ViPacketNotificationCallback.c)
 *     VfPnpTestStartedPdoStack @ 0x14077E060 (VfPnpTestStartedPdoStack.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x14077ED90 (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRetrieveWmiData @ 0x14077F074 (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x14077F358 (VfIrpLogUnlockDatabase.c)
 *     ViIrpLogExposeWmiCallback @ 0x14077F450 (ViIrpLogExposeWmiCallback.c)
 *     VfCtxHookAndConnectInterrupt @ 0x14077F4C0 (VfCtxHookAndConnectInterrupt.c)
 *     VfCtxHookAndConnectInterruptEx @ 0x14077F5B0 (VfCtxHookAndConnectInterruptEx.c)
 *     ViRtlReplaceStringBuffer @ 0x140781564 (ViRtlReplaceStringBuffer.c)
 *     VerifierIoWMIWriteEvent @ 0x1407835E0 (VerifierIoWMIWriteEvent.c)
 *     VfAddVerifierEntry @ 0x140787E8C (VfAddVerifierEntry.c)
 *     VfGetVerifierInformation @ 0x140787F5C (VfGetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14078818C (VfSetVerifierInformationEx.c)
 *     KdPullRemoteFile @ 0x14078D0F8 (KdPullRemoteFile.c)
 *     HdlspAddLogEntry @ 0x14078E008 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14078F564 (HdlspSetBlueScreenInformation.c)
 *     CmpGetRegistryValue @ 0x1407F66B0 (CmpGetRegistryValue.c)
 *     PipFreeGroupTree @ 0x1407F6A2C (PipFreeGroupTree.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407F6E38 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x1407F6F4C (PnpLoadBootFilterDriver.c)
 *     CmpSetVideoBiosInformation @ 0x1407F730C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 *     PiInitCacheGroupInformation @ 0x1407F7F14 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1407F8168 (PipInitDeviceOverrideCache.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407F84FC (PipCheckSystemFirmwareUpdated.c)
 *     IopCreateArcNamesDisk @ 0x1407F872C (IopCreateArcNamesDisk.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     IopStoreArcInformation @ 0x1407F8A30 (IopStoreArcInformation.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1407F9010 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x1407FA084 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1407FA19C (PipCheckDependencies.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1407FBAB8 (PpInitializeBootDDB.c)
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 *     WmipInitializeSecurity @ 0x1407FF444 (WmipInitializeSecurity.c)
 *     MiSystemPartitionObjectCreate @ 0x1407FFB40 (MiSystemPartitionObjectCreate.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1408039CC (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 *     MiSectionInitialization @ 0x140804AC4 (MiSectionInitialization.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 *     EmpParseInfDatabase @ 0x140805228 (EmpParseInfDatabase.c)
 *     CmpFreeSectionList @ 0x1408052F0 (CmpFreeSectionList.c)
 *     CmpFreeLineList @ 0x140805348 (CmpFreeLineList.c)
 *     EmpParseEntryTypes @ 0x1408055B4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x14080571C (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140805944 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x140805AA0 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x140805F54 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1408062B4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1408064DC (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1408066F4 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPop @ 0x140806CD0 (EmpRuleParserStackPop.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpInitializeSystemHive @ 0x1408078A0 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     CmpInitializePreloadedHives @ 0x1408081C0 (CmpInitializePreloadedHives.c)
 *     CmpInitializePreloadedHive @ 0x1408082A4 (CmpInitializePreloadedHive.c)
 *     CmpCreateRegistryRoot @ 0x140808574 (CmpCreateRegistryRoot.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x14080C59C (PopNetInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x14080CC70 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x14080CD24 (IopFileUtilRename.c)
 *     IopReportBootResources @ 0x14080CF20 (IopReportBootResources.c)
 *     PipHardwareConfigInit @ 0x14080CF9C (PipHardwareConfigInit.c)
 *     IopInitializeResourceMap @ 0x14080D3D8 (IopInitializeResourceMap.c)
 *     MmInitializeMemoryLimits @ 0x14080D720 (MmInitializeMemoryLimits.c)
 *     CmpFindTagIndex @ 0x14080E168 (CmpFindTagIndex.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x14080FDB0 (PipCreateComputerId.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x140810590 (QueryRegistryHideMachine.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
 *     BootApplicationPersistentDataProcess @ 0x140811C0C (BootApplicationPersistentDataProcess.c)
 *     BapdpProcessEDrvHintInfo @ 0x140811CD8 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140811D68 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140811DF8 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x140811EE4 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140811F74 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140812044 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x140812114 (BapdpProcessSiData.c)
 *     CmpParseInfBuffer @ 0x14081678C (CmpParseInfBuffer.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x140817890 (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x140817D54 (KiComputeNumaCosts.c)
 *     MiBuildImportsForBootDrivers @ 0x14081828C (MiBuildImportsForBootDrivers.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1408196AC (FsRtlGetCompatibilityModeValue.c)
 *     IopAllocateLegacyBootResources @ 0x140819E18 (IopAllocateLegacyBootResources.c)
 *     PopInitPlatformSettings @ 0x140819EF8 (PopInitPlatformSettings.c)
 *     WheapInitializeErrorSourceTable @ 0x14081A088 (WheapInitializeErrorSourceTable.c)
 *     SepInitializeSingletonAttributesStructures @ 0x14081A37C (SepInitializeSingletonAttributesStructures.c)
 *     SeMakeSystemToken @ 0x14081A5B4 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14081AB04 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14081AD40 (SeMakeAnonymousLogonToken.c)
 *     PiAuFreeUserSids @ 0x14081D0F4 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14081D17C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 *     CmpInitializeHardwareConfiguration @ 0x14081E6D8 (CmpInitializeHardwareConfiguration.c)
 *     SaveNodeDistanceInformation @ 0x140820034 (SaveNodeDistanceInformation.c)
 *     BootApplicationPersistentDataInitialize @ 0x1408207B8 (BootApplicationPersistentDataInitialize.c)
 *     DbgkpCreateNotificationEvent @ 0x14082109C (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x14082212C (ExpKeyedEventInitialization.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1408224BC (IopCallBootDriverReinitializationRoutines.c)
 *     IoReportHalResourceUsage @ 0x140822900 (IoReportHalResourceUsage.c)
 *     PopUmpoInitializeChannel @ 0x140822E64 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x140823478 (SeSecureBootRegisterPolicy.c)
 *     ObpInitStackTrace @ 0x1408235D0 (ObpInitStackTrace.c)
 *     KseShimDatabaseBootInitialize @ 0x1408251EC (KseShimDatabaseBootInitialize.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140826290 (IopQueryDeviceResetRegistrySettings.c)
 *     PoFxRegisterDebugger @ 0x14082676C (PoFxRegisterDebugger.c)
 *     MiComputeNumaCosts @ 0x1408267F0 (MiComputeNumaCosts.c)
 *     HeadlessInit @ 0x140826A2C (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1408317D0 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1408320F0 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1408337B0 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140833870 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x140834030 (PipProcessPendingObjects.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x1408342A0 (IopFileUtilWalkDirectoryTreeTopDown.c)
 *     VhdiInitializeBootDisk @ 0x1408365E0 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140836DE4 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1408371D0 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408373B8 (SbpStartLanman.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14001E140 (ExpRemovePoolTrackerExpansion.c)
 *     PspReturnResourceQuota @ 0x14002C5F0 (PspReturnResourceQuota.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     KeCheckForTimer @ 0x1401FE4D8 (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     MmQuerySpecialPoolBlockSize @ 0x140217A60 (MmQuerySpecialPoolBlockSize.c)
 *     MmQuerySpecialPoolBlockType @ 0x140217A8C (MmQuerySpecialPoolBlockType.c)
 *     VerifierFreeTrackedPool @ 0x14021AAE8 (VerifierFreeTrackedPool.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpFreePoolChecks @ 0x14025B100 (ExpFreePoolChecks.c)
 *     ExpCheckForResource @ 0x14025C2B4 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14025D348 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14025D678 (ExpCheckForWorker.c)
 *     ExDeferredFreePool @ 0x140285C90 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14051EA00 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140775864 (VfFreePoolNotification.c)
 */

void __stdcall ExFreePoolWithTag(PVOID P, ULONG Tag)
{
  ULONG_PTR BugCheckParameter4; // rdi
  signed int v3; // r15d
  unsigned int v4; // r14d
  __int16 v5; // ax
  ULONG_PTR v6; // rsi
  __int16 v7; // r12
  __int64 v8; // r8
  unsigned int v9; // r11d
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // rbx
  ULONG_PTR v13; // r9
  __int64 v14; // rdx
  ULONG_PTR v15; // r10
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r14d
  int v20; // r9d
  __int64 v21; // r8
  unsigned int v22; // edx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r13d
  unsigned __int8 CurrentIrql; // al
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rax
  _DWORD *v29; // r9
  unsigned __int64 v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rax
  int v33; // edx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  int v37; // r8d
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned int v45; // eax
  signed __int64 v46; // rax
  signed __int64 v47; // rcx
  int v48; // ecx
  char v49; // cl
  struct _KPROCESS *v50; // rbx
  ULONG_PTR v51; // r14
  ULONG_PTR v52; // r11
  ULONG_PTR v53; // r10
  volatile signed __int64 *v54; // rdx
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // r8
  char *v57; // r9
  unsigned __int64 v58; // rcx
  ULONG_PTR v59; // r11
  ULONG_PTR v60; // rcx
  unsigned __int64 v61; // r9
  signed __int64 v62; // r8
  bool v63; // zf
  signed __int64 v64; // rax
  __int16 v65; // r9
  __int64 v66; // rax
  unsigned int *v67; // r10
  unsigned int v68; // ebx
  int v69; // eax
  __int64 v70; // rcx
  __int64 Next; // rax
  int v72; // edx
  unsigned __int64 v73; // rcx
  __int64 v74; // r8
  struct _FAST_MUTEX *v75; // rcx
  ULONG_PTR v76; // r8
  __int64 v77; // rdx
  _QWORD *v78; // rcx
  ULONG_PTR v79; // rcx
  int v80; // ecx
  _BYTE *v81; // rax
  _QWORD *v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rax
  __int16 SpecialPoolBlockType; // r14
  unsigned __int64 SpecialPoolBlockSize; // rax
  __int64 v87; // r10
  __int64 v88; // rsi
  __int64 v89; // rbx
  int v90; // r9d
  __int64 v91; // r10
  unsigned int v92; // edx
  __int64 v93; // r11
  int v94; // eax
  int v95; // ecx
  unsigned __int64 v96; // rbx
  __int64 OldIrql; // rax
  int v98; // edx
  __int64 v99; // r8
  __int64 v100; // rdx
  unsigned __int64 v101; // rax
  __int64 v102; // r8
  _QWORD *v103; // rdx
  char v104; // al
  signed __int32 v105[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned int v106; // [rsp+30h] [rbp-69h]
  __int64 v107; // [rsp+38h] [rbp-61h]
  unsigned __int64 v108; // [rsp+40h] [rbp-59h]
  int v109; // [rsp+48h] [rbp-51h] BYREF
  struct _KLOCK_QUEUE_HANDLE v110; // [rsp+50h] [rbp-49h] BYREF
  int v111; // [rsp+68h] [rbp-31h]
  unsigned __int64 v112; // [rsp+70h] [rbp-29h]
  char *v113; // [rsp+78h] [rbp-21h]
  volatile signed __int64 *v114; // [rsp+80h] [rbp-19h]
  ULONG_PTR v115; // [rsp+88h] [rbp-11h]
  ULONG_PTR v116; // [rsp+90h] [rbp-9h]
  ULONG_PTR v117; // [rsp+98h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+7h] BYREF
  __int64 retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 v120; // [rsp+110h] [rbp+77h]
  char v121; // [rsp+110h] [rbp+77h]
  unsigned int v122; // [rsp+118h] [rbp+7Fh]

  BugCheckParameter4 = (ULONG_PTR)P;
  if ( !ExpSpecialAllocations || (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)P) != 1 )
  {
    v3 = 1;
    v4 = 1;
    if ( (BugCheckParameter4 & 0xFFF) != 0 )
    {
      v5 = *(_WORD *)(BugCheckParameter4 - 14);
      v6 = BugCheckParameter4 - 16;
      v7 = *(unsigned __int8 *)(BugCheckParameter4 - 16 + 3);
      v8 = (unsigned __int8)v5;
      v9 = *(_BYTE *)(BugCheckParameter4 - 16 + 3) & 1;
      v106 = (unsigned __int8)v5;
      v122 = v9;
      if ( (v7 & 2) == 0 )
        KeBugCheckEx(0xC2u, 7uLL, *(unsigned int *)(v6 + 4), *(unsigned int *)v6, BugCheckParameter4);
      v10 = ExpPoolFlags;
      v11 = 16LL * (unsigned int)v8;
      if ( (ExpPoolFlags & 0x217) != 0 )
      {
        if ( (ExpPoolFlags & 0x200) != 0 && !v9 )
        {
          ExpCheckForLookaside(BugCheckParameter4 - 16, 16LL * (unsigned int)v8);
          v10 = ExpPoolFlags;
          v8 = v106;
          v9 = v122;
        }
        if ( (v10 & 1) != 0 )
        {
          KeCheckForTimer(BugCheckParameter4 - 16, v11);
          v10 = ExpPoolFlags;
          v8 = v106;
          v9 = v122;
        }
        if ( (v10 & 4) != 0 )
        {
          ExpCheckForResource((__int64 *)(BugCheckParameter4 - 16), v11);
          v10 = ExpPoolFlags;
          v8 = v106;
          v9 = v122;
        }
        if ( (v10 & 2) != 0 )
        {
          ExpCheckForWorker(BugCheckParameter4 - 16, v11);
          v10 = ExpPoolFlags;
          v8 = v106;
          v9 = v122;
        }
        if ( (v10 & 0x10) != 0 )
        {
          VfFreePoolNotification(BugCheckParameter4 - 16, v11);
          v8 = v106;
          v9 = v122;
        }
      }
      if ( (v7 & 0x40) != 0 )
      {
        VerifierFreeTrackedPool(BugCheckParameter4, v11, v9, 0);
        v8 = v106;
        v9 = v122;
      }
      if ( (v7 & 4) != 0 )
      {
        v65 = *(_WORD *)v6;
        v66 = 16LL * (unsigned __int8)*(_WORD *)v6;
        v67 = (unsigned int *)(v6 - v66);
        if ( (*(_BYTE *)(v6 - v66 + 3) & 2) == 0 )
          KeBugCheckEx(0xC2u, 0xBuLL, v6 - v66, *v67, BugCheckParameter4);
        v68 = (ExpCacheLineSize - 1) & (-16 - (_DWORD)v67);
        if ( !v68
          || (unsigned int *)((char *)v67 + v68) != (unsigned int *)v6
          || (v8 = (unsigned __int8)*((_WORD *)v67 + 1),
              P = (PVOID)(unsigned __int8)*(_WORD *)(v6 + 2),
              v106 = v8,
              (_DWORD)v8 != (_DWORD)P + (unsigned __int8)v65) )
        {
          KeBugCheckEx(0xC2u, 0x10uLL, (ULONG_PTR)v67, *v67, (ULONG_PTR)v67 + v68);
        }
        if ( (unsigned __int8)v65 > 1u )
        {
          P = (PVOID)(v6 ^ ExpPoolQuotaCookie);
          if ( (v6 ^ ExpPoolQuotaCookie) != *((_QWORD *)v67 + 2) )
            KeBugCheckEx(0xC2u, 0x11uLL, (ULONG_PTR)v67, *v67, v6 ^ ExpPoolQuotaCookie);
        }
        v6 -= v66;
        BugCheckParameter4 = (ULONG_PTR)(v67 + 4);
      }
      *(_BYTE *)(v6 + 3) |= 4u;
      _InterlockedOr(v105, 0);
      *(_BYTE *)(v6 + 3) &= ~2u;
      v12 = *(unsigned int *)(v6 + 4);
      v13 = v6 + 16LL * (unsigned int)v8;
      v14 = (unsigned int)v8;
      v109 = *(_DWORD *)(v6 + 4);
      v120 = (unsigned int)v8;
      v117 = v13;
      if ( (v13 & 0xFFF) != 0 )
      {
        P = (PVOID)(unsigned __int8)*(_WORD *)v13;
        if ( (_DWORD)v8 != (_DWORD)P )
          KeBugCheckEx(0x19u, 0x20uLL, v6, v13, *(unsigned int *)v6);
      }
      v15 = *(unsigned __int8 *)(v6 + 1);
      v107 = PoolVector[v9];
      if ( v9 )
      {
        if ( (v7 & 0x20) != 0 )
        {
          v16 = MiSessionPoolVector(P, (unsigned int)v8, v8);
        }
        else
        {
          v16 = ExpPagedPoolDescriptor[v15];
          v4 = ExpNumberOfPagedPools + 1;
        }
        v107 = v16;
      }
      else
      {
        if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
        {
          v4 = ExpNumberOfNonPagedPools;
          v107 = ExpNonPagedPoolDescriptor[v15];
        }
        v42 = MI_READ_PTE_LOCK_FREE(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        if ( (v42 & 0x80u) == 0LL )
          v42 = MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v14 = v120;
        if ( v42 >= 0 )
          v107 = v43 + 4416;
      }
      if ( (unsigned int)v15 >= v4 )
        KeBugCheckEx(0x19u, 0x25uLL, v15, v4, v6);
      v17 = 16 * v14;
      v108 = v17;
      if ( v109 == PoolHitTag )
        __debugbreak();
      v18 = DWORD1(PerfGlobalGroupMask);
      if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      {
        EtwTracePool(0xE22u, v7, v12, BugCheckParameter4, v17);
        v9 = v122;
      }
      v19 = v7 & 0x20;
      v111 = v19;
      if ( (v7 & 0x20) != 0 )
      {
        v21 = ExpSessionPoolTrackTable;
        v20 = ExpSessionPoolTrackTableMask;
      }
      else
      {
        LODWORD(v18) = KeGetPcr()->Prcb.Number;
        v20 = PoolTrackTableMask;
        v21 = (__int64)*(&ExPoolTagTables + v18);
      }
      v22 = v20 & (((unsigned __int64)(40543 * v12) >> 32) ^ (40543 * v12));
      do
      {
        while ( 1 )
        {
          v23 = 40LL * v22;
          v24 = *(_DWORD *)(v23 + v21);
          if ( v24 == (_DWORD)v12 )
          {
            v34 = v108;
            v35 = -(__int64)v108;
            if ( v9 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v23 + v21 + 28));
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + v21 + 32), v35);
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v23 + v21 + 8));
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + v21 + 16), v35);
            }
            v25 = 0;
            goto LABEL_38;
          }
          if ( v24 )
            break;
          if ( (v7 & 0x20) != 0 )
            break;
          v69 = *(_DWORD *)(v23 + PoolTrackTable);
          if ( !v69 )
            break;
          *(_DWORD *)(v23 + v21) = v69;
        }
        v22 = v20 & (v22 + 1);
      }
      while ( v22 != (v20 & (((unsigned __int64)(40543 * v12) >> 32) ^ (unsigned int)(40543 * v12))) );
      v25 = 0;
      v110.LockQueue.Lock = &ExpTaggedPoolLock;
      v110.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v110.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&v110, (volatile __int64 *)&ExpTaggedPoolLock);
      }
      else
      {
        v27 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&v110);
        if ( !v27 )
          goto LABEL_27;
        KxWaitForLockOwnerShip((__int64)&v110, v27);
      }
      v9 = v122;
LABEL_27:
      if ( (v7 & 0x20) != 0 )
      {
        v28 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
        v29 = *(_DWORD **)(v28 + 8112);
        v30 = *(_QWORD *)(v28 + 8120);
      }
      else
      {
        v30 = PoolTrackTableExpansionSize;
        v29 = PoolTrackTableExpansion;
      }
      v31 = 0;
      if ( v30 )
      {
        v32 = 0LL;
        while ( 1 )
        {
          v33 = v29[10 * v32];
          if ( v33 == (_DWORD)v12 )
            break;
          if ( v33 )
          {
            v32 = ++v31;
            if ( v31 < v30 )
              continue;
          }
          goto LABEL_189;
        }
        v34 = v108;
        v70 = 5LL * v31;
        if ( v9 )
        {
          ++v29[2 * v70 + 7];
          *(_QWORD *)&v29[2 * v70 + 8] -= v34;
        }
        else
        {
          ++v29[2 * v70 + 2];
          *(_QWORD *)&v29[2 * v70 + 4] -= v34;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v110, retaddr);
          v34 = v108;
          goto LABEL_111;
        }
        _m_prefetchw(&v110);
        Next = (__int64)v110.LockQueue.Next;
        if ( !v110.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v110.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&v110) == &v110 )
          {
LABEL_111:
            __writecr8(v110.OldIrql);
            goto LABEL_38;
          }
          Next = KxWaitForLockChainValid((__int64 *)&v110);
          v34 = v108;
        }
        v110.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        goto LABEL_111;
      }
LABEL_189:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v110);
      OldIrql = v110.OldIrql;
      __writecr8(v110.OldIrql);
      if ( (v7 & 0x20) != 0 )
      {
        v99 = ExpSessionPoolTrackTable;
        v98 = ExpSessionPoolTrackTableSize;
      }
      else
      {
        LODWORD(OldIrql) = KeGetPcr()->Prcb.Number;
        v98 = PoolTrackTableSize;
        v99 = (__int64)*(&ExPoolTagTables + OldIrql);
      }
      v34 = v108;
      v100 = (unsigned int)(v98 - 1);
      v101 = -(__int64)v108;
      if ( v122 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v99 + 40 * v100 + 28));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + 40 * v100 + 32), v101);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v99 + 40 * v100 + 8));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + 40 * v100 + 16), v101);
      }
LABEL_38:
      if ( (v7 & 8) != 0 )
      {
        v49 = *(_BYTE *)(v6 + 3);
        if ( (v49 & 8) != 0 )
        {
          v50 = (struct _KPROCESS *)(v6 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v6 + 8));
          if ( v50 )
          {
            if ( (unsigned __int64)v50 < 0xFFFF800000000000uLL || (v50->Header.Type & 0x7F) != 3 )
              KeBugCheckEx(
                0xC2u,
                0xDuLL,
                v6 + 16,
                *(unsigned int *)(v6 + 4),
                v6 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v6 + 8));
            v51 = 16LL * (unsigned __int8)*(_WORD *)(v6 + 2);
            if ( v50 != PsInitialSystemProcess )
            {
              v113 = *(char **)((v6 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v6 + 8)) + 0x410);
              v52 = (v49 & 1) == 1;
              v53 = v52;
              v115 = v52;
              v121 = PspResourceFlags[8 * v52];
              v116 = v52 << 7;
              v54 = (volatile signed __int64 *)&v113[128 * v52];
              v114 = v54;
              _m_prefetchw((const void *)v54);
              v55 = *(_QWORD *)&v113[v116];
              v56 = *(_QWORD *)&v113[v116 + 64];
              if ( *(_QWORD *)&v113[v116 + 80] )
              {
                v57 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)v52;
                if ( v56 > v55 )
                {
                  v58 = *((_QWORD *)v57 + 1);
                  if ( v56 - v55 > v58 )
                  {
                    if ( v58 > v51 )
                      v58 = v51;
                    v112 = v58;
                    if ( v56 == _InterlockedCompareExchange64(v54 + 8, v56 - v58, v56) )
                    {
                      v73 = v112;
                      if ( _InterlockedExchangeAdd64(v54 + 9, v112) + v73 > *((_QWORD *)v57 + 1) )
                      {
                        v74 = _InterlockedExchange64(v54 + 9, 0LL);
                        if ( v74 )
                        {
                          PspReturnResourceQuota(v52, (__int64)v54, v74, 0);
                          v54 = v114;
                          v53 = v115;
                        }
                      }
                    }
                  }
                }
              }
              v59 = v116;
              v60 = v51;
              while ( 1 )
              {
                do
                {
                  if ( v60 >= v55 )
                  {
                    v61 = v55;
                    v62 = 0LL;
                  }
                  else
                  {
                    v61 = v60;
                    v62 = v55 - v60;
                  }
                  v64 = _InterlockedCompareExchange64(v54, v62, v55);
                  v63 = v55 == v64;
                  v55 = v64;
                }
                while ( !v63 );
                v60 -= v61;
                if ( !v60 )
                  break;
                if ( v113 == (char *)&PspSystemQuotaBlock )
                  KeBugCheckEx(0x21u, (ULONG_PTR)v50, v53, v51, v60);
                v113 = (char *)&PspSystemQuotaBlock;
                v54 = (volatile signed __int64 *)((char *)&PspSystemQuotaBlock + v59);
                _m_prefetchw((char *)&PspSystemQuotaBlock + v59);
                v55 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v59);
              }
              if ( (v121 & 4) != 0 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)&v50[1].ThreadListHead.Blink + v53, -(__int64)v51);
            }
            ObDereferenceObjectDeferDeleteWithTag(v50, *(_DWORD *)(v6 + 4));
            v34 = v108;
            v19 = v111;
          }
        }
      }
      if ( v19 && v122 == 1 )
      {
        if ( v106 <= ExpSessionPoolSmallLists )
        {
          v40 = ExpSessionPoolLookaside - 128 + ((unsigned __int64)v106 << 7);
          goto LABEL_46;
        }
LABEL_61:
        v36 = v107;
        goto LABEL_62;
      }
      if ( v106 > 0x20 )
        goto LABEL_61;
      v36 = v107;
      if ( v122 == 1 )
      {
        v37 = *(_DWORD *)(v107 + 192);
        if ( !v37
          || (unsigned __int16)KeNumberNodes > 1u && KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != v37 - 1 )
        {
          goto LABEL_62;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v39 = v106 - 1 + 88LL;
      }
      else
      {
        if ( (unsigned __int16)KeNumberNodes > 1u
          && KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != *(_DWORD *)(v107 + 192) )
        {
LABEL_62:
          if ( (ExpPoolFlags & 0x100) == 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v36 + 128));
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 152), v34);
            v75 = (struct _FAST_MUTEX *)(v36 + 8);
            if ( v122 )
            {
              ExAcquireFastMutex(v75);
              PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
            }
            else
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v75, &LockHandle);
            }
            v76 = v117;
            if ( (v117 & 0xFFF) != 0 && !*(_BYTE *)(v117 + 3) )
            {
              v25 = 1;
              if ( *(_BYTE *)(v117 + 2) != 1 )
              {
                v77 = *(_QWORD *)(v117 + 16);
                v78 = *(_QWORD **)(v117 + 24);
                if ( *(_QWORD *)(v77 + 8) != v117 + 16 || *v78 != v117 + 16 )
                  __fastfail(3u);
                *v78 = v77;
                *(_QWORD *)(v77 + 8) = v78;
              }
              *(_BYTE *)(v6 + 2) += *(_BYTE *)(v76 + 2);
            }
            if ( (unsigned __int8)*(_WORD *)v6 )
            {
              v79 = v6 - 16LL * (unsigned __int8)*(_WORD *)v6;
              if ( !*(_BYTE *)(v79 + 3) )
              {
                v25 = 1;
                if ( *(_BYTE *)(v79 + 2) != 1 )
                {
                  v102 = *(_QWORD *)(v79 + 16);
                  v103 = *(_QWORD **)(v79 + 24);
                  if ( *(_QWORD *)(v102 + 8) != v79 + 16 || *v103 != v79 + 16 )
                    __fastfail(3u);
                  *v103 = v102;
                  *(_QWORD *)(v102 + 8) = v103;
                }
                v104 = *(_BYTE *)(v6 + 2);
                v6 = v79;
                *(_BYTE *)(v79 + 2) += v104;
              }
            }
            if ( (v6 & 0xFFF) != 0 || (((_WORD)v6 + 16 * (unsigned __int8)*(_WORD *)(v6 + 2)) & 0xFFF) != 0 )
            {
              *(_BYTE *)(v6 + 3) = 0;
              v80 = (unsigned __int8)*(_WORD *)(v6 + 2);
              if ( v25 )
              {
                v81 = (_BYTE *)(v6 + 16LL * (unsigned __int8)*(_WORD *)(v6 + 2));
                if ( ((unsigned __int16)v81 & 0xFFF) != 0 )
                  *v81 = v80;
              }
              v82 = (_QWORD *)(v6 + 16);
              v83 = v36 + 16 * ((unsigned int)(v80 - 1) + 20LL);
              v84 = *(_QWORD *)v83;
              if ( *(_QWORD *)(*(_QWORD *)v83 + 8LL) != v83 )
                __fastfail(3u);
              *v82 = v84;
              v82[1] = v83;
              *(_QWORD *)(v84 + 8) = v82;
              *(_QWORD *)v83 = v82;
              if ( v122 )
              {
                PsBoostThreadIo((__int64)KeGetCurrentThread(), 1LL);
                KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v36 + 8));
              }
              else
              {
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
              }
            }
            else
            {
              if ( v122 )
              {
                PsBoostThreadIo((__int64)KeGetCurrentThread(), 1LL);
                KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v36 + 8));
              }
              else
              {
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
              }
              _InterlockedIncrement64((volatile signed __int64 *)(v36 + 136));
              MiFreePoolPages(v6);
            }
            return;
          }
          v45 = *(_DWORD *)(v36 + 268);
          if ( v45 >= 0x20 )
          {
            if ( v45 >= 0x100 )
            {
              v72 = 1;
            }
            else
            {
              if ( *(_DWORD *)(v36 + 264) )
                goto LABEL_64;
              v72 = 0;
            }
            ExDeferredFreePool((int *)v36, v72);
          }
LABEL_64:
          *(_QWORD *)(v6 + 8) = v6 ^ ExpPoolQuotaCookie;
          _m_prefetchw((const void *)(v36 + 256));
          v46 = *(_QWORD *)(v36 + 256);
          do
          {
            *(_QWORD *)BugCheckParameter4 = v46;
            v47 = v46;
            v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 256), BugCheckParameter4, v46);
          }
          while ( v46 != v47 );
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 268));
          return;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v44 = v106 - 1;
        if ( *(_DWORD *)(v107 + 196) == 512 )
          v39 = v44 + 24;
        else
          v39 = v44 + 56;
      }
      v40 = (unsigned __int64)CurrentPrcb + 96 * v39;
LABEL_46:
      if ( v40 )
      {
        ++*(_DWORD *)(v40 + 28);
        if ( *(_WORD *)v40 < *(_WORD *)(v40 + 16) )
        {
          v41 = ExpPoolQuotaCookie;
          ++*(_DWORD *)(v40 + 32);
          *(_QWORD *)(v6 + 8) = v6 ^ v41;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)v40, (PSLIST_ENTRY)BugCheckParameter4);
          return;
        }
      }
      goto LABEL_61;
    }
    if ( BugCheckParameter4 < 0xFFFF800000000000uLL )
      goto LABEL_71;
    v48 = (unsigned __int8)byte_14036D700[((BugCheckParameter4 >> 39) & 0x1FF) - 256];
    if ( v48 == 6 || v48 == 7 )
      goto LABEL_72;
    if ( v48 == 1 )
      v3 = 33;
    else
LABEL_71:
      v3 = 0;
LABEL_72:
    ExFreeLargePool(BugCheckParameter4, &v109, 0LL, v3);
    return;
  }
  _InterlockedDecrement(&ExpSpecialAllocations);
  ExpFreePoolChecks(BugCheckParameter4, 4096 - (unsigned int)(BugCheckParameter4 & 0xFFF), 0);
  SpecialPoolBlockType = MmQuerySpecialPoolBlockType(BugCheckParameter4);
  SpecialPoolBlockSize = MmQuerySpecialPoolBlockSize(BugCheckParameter4);
  v88 = *(unsigned int *)(v87 + 4);
  v89 = SpecialPoolBlockSize;
  if ( (_DWORD)v88 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, SpecialPoolBlockType, v88, BugCheckParameter4, SpecialPoolBlockSize);
  if ( (SpecialPoolBlockType & 0x20) != 0 )
  {
    v91 = ExpSessionPoolTrackTable;
    v90 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v90 = PoolTrackTableMask;
    v91 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v92 = v90 & ((40543 * v88) ^ ((unsigned __int64)(40543 * v88) >> 32));
  while ( 1 )
  {
    v93 = 40LL * v92;
    v94 = *(_DWORD *)(v93 + v91);
    if ( v94 == (_DWORD)v88 )
      break;
    if ( v94 || (SpecialPoolBlockType & 0x20) != 0 || (v95 = *(_DWORD *)(v93 + PoolTrackTable)) == 0 )
    {
      v92 = v90 & (v92 + 1);
      if ( v92 == (v90 & ((40543 * (int)v88) ^ ((unsigned __int64)(40543 * v88) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v88, v89, SpecialPoolBlockType);
        goto LABEL_168;
      }
    }
    else
    {
      *(_DWORD *)(v93 + v91) = v95;
    }
  }
  v96 = -v89;
  if ( (SpecialPoolBlockType & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v93 + v91 + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v93 + v91 + 32), v96);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v93 + v91 + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v93 + v91 + 16), v96);
  }
LABEL_168:
  MmFreeSpecialPool(BugCheckParameter4);
}

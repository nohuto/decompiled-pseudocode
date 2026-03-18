/*
 * XREFs of ExAllocatePoolWithTag @ 0x1402EADB0
 * Callers:
 *     MiCombineWorkingSet @ 0x140004854 (MiCombineWorkingSet.c)
 *     PfSnTraceBufferAllocate @ 0x1400065D4 (PfSnTraceBufferAllocate.c)
 *     CmSiAllocateMemory @ 0x140006CF0 (CmSiAllocateMemory.c)
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140008CC0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     PpmParkSteerInterrupts @ 0x140033FB0 (PpmParkSteerInterrupts.c)
 *     IopAllocateIrpExtension @ 0x14003F128 (IopAllocateIrpExtension.c)
 *     CcWriteBehind @ 0x140042EF0 (CcWriteBehind.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140043FF0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140044568 (RtlpUpcaseUnicodeStringPrivate.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MmCreateMdl @ 0x140049840 (MmCreateMdl.c)
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MiInitializeMdlBatchPages @ 0x140051D48 (MiInitializeMdlBatchPages.c)
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14005C1C8 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14005C310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x14005C570 (AuthzBasepAllocateSecurityAttribute.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeCaptureObjectTypeList @ 0x14005E2BC (SeCaptureObjectTypeList.c)
 *     SePrivilegePolicyCheck @ 0x14005E5C8 (SePrivilegePolicyCheck.c)
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     FsRtlInitializeBaseMcbEx @ 0x140063180 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140066DD0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1400687F0 (FsRtlInsertPerFileObjectContext.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400694C0 (IopVerifierExAllocatePool_0.c)
 *     SepMandatorySubProcessToken @ 0x14006B9C8 (SepMandatorySubProcessToken.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     EmpEvaluateTargetRule @ 0x140074298 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140074464 (EmpEvaluateNodeLink.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400751F0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PopSetWatchdog @ 0x1400754B0 (PopSetWatchdog.c)
 *     PnpAllocateWatchdog @ 0x140075914 (PnpAllocateWatchdog.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140075AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopCaptureReasonContext @ 0x140076BDC (PopCaptureReasonContext.c)
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     PfFbBufferListAllocateTemporary @ 0x14007A354 (PfFbBufferListAllocateTemporary.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x14007CCD0 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14007CFB0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x14007D228 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     StEtaStart @ 0x14007D3D8 (StEtaStart.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x14007D510 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmAlloc @ 0x14007E79C (SmAlloc.c)
 *     MiViewMayContainPage @ 0x1400823C0 (MiViewMayContainPage.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140083570 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14008372C (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     ExpExpandResourceOwnerTable @ 0x1400889D8 (ExpExpandResourceOwnerTable.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     SmpKeyedStoreEntryGet @ 0x14008BD28 (SmpKeyedStoreEntryGet.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14008C6C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     PfSnGetFileInformation @ 0x14008E100 (PfSnGetFileInformation.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1400940C0 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmFpAllocate @ 0x140096D84 (SmFpAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1400972BC (SmKmAllocateMdlForLock.c)
 *     MiCreateMdl @ 0x140097F84 (MiCreateMdl.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140099560 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14009A524 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmArrayGrow @ 0x14009A7F4 (SmArrayGrow.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14009D4AC (MiAllocateWorkingSetSwapSupport.c)
 *     SepCaptureHandles @ 0x14009F208 (SepCaptureHandles.c)
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     SepCaptureTokenSecurityOperations @ 0x1400A0AF8 (SepCaptureTokenSecurityOperations.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1400A0C84 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400A14E0 (RtlpAllowsLowBoxAccess.c)
 *     IoMakeAssociatedIrpPriv @ 0x1400A4924 (IoMakeAssociatedIrpPriv.c)
 *     FsRtlTruncateBaseMcb @ 0x1400AFAF0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x1400B0560 (FsRtlAddEntry.c)
 *     SeLogAccessFailure @ 0x1400B1D20 (SeLogAccessFailure.c)
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 *     MiObtainMdlCharges @ 0x1400B3AB8 (MiObtainMdlCharges.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     FsRtlCancelNotify @ 0x1400B6BD0 (FsRtlCancelNotify.c)
 *     CcInitializeVolumeCacheMap @ 0x1400B745C (CcInitializeVolumeCacheMap.c)
 *     ExGetSessionPoolTagInfo @ 0x1400B8EB0 (ExGetSessionPoolTagInfo.c)
 *     AuthzBasepMemAlloc @ 0x1400BBFF8 (AuthzBasepMemAlloc.c)
 *     MiExpandFlushMdl @ 0x1400BEDD8 (MiExpandFlushMdl.c)
 *     SmHpBufferAlloc @ 0x1400C19A0 (SmHpBufferAlloc.c)
 *     SmBinaryArrayGrow @ 0x1400C1AD4 (SmBinaryArrayGrow.c)
 *     CreateNewEventEntry @ 0x1400C1F3C (CreateNewEventEntry.c)
 *     MiExpandSystemCache @ 0x1400C2710 (MiExpandSystemCache.c)
 *     CcAllocateInitializeMbcb @ 0x1400C3038 (CcAllocateInitializeMbcb.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400C3594 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcExtendVacbArray @ 0x1400C48A4 (CcExtendVacbArray.c)
 *     KeAllocateXStateContext @ 0x1400C5A38 (KeAllocateXStateContext.c)
 *     IoSetCompletionRoutineEx @ 0x1400C8030 (IoSetCompletionRoutineEx.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400C9AE8 (IopVerifierExAllocatePool_1.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1400CAC60 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     RtlExpandHashTable @ 0x1400CBA10 (RtlExpandHashTable.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC7A4 (FsRtlpOplockSendModernAppTermination.c)
 *     WmipReceiveNotifications @ 0x1400CDDCC (WmipReceiveNotifications.c)
 *     PspInsertProperty @ 0x1400CE344 (PspInsertProperty.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1400CEEC0 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x1400D161C (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ExAllocatePool @ 0x1400D1810 (ExAllocatePool.c)
 *     SepExpandSingletonArrays @ 0x1400D2998 (SepExpandSingletonArrays.c)
 *     EtwpAllocateFreeBuffers @ 0x1400D3AB4 (EtwpAllocateFreeBuffers.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     CcAllocateInitializeBcb @ 0x1400DA798 (CcAllocateInitializeBcb.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcFindBitmapRangeToDirty @ 0x1400E3CC4 (CcFindBitmapRangeToDirty.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     ExpWaitForResource @ 0x1400F3F20 (ExpWaitForResource.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 *     SeSetLearningModeObjectInformation @ 0x140105410 (SeSetLearningModeObjectInformation.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiAllocateCombineProto @ 0x140122E30 (MiAllocateCombineProto.c)
 *     MiAllocateAccessLog @ 0x14012A090 (MiAllocateAccessLog.c)
 *     MiAllocateModWriterEntry @ 0x1401330FC (MiAllocateModWriterEntry.c)
 *     MiBuildMappedCluster @ 0x140133CF8 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MmProbeAndLockSelectedPages @ 0x140136C00 (MmProbeAndLockSelectedPages.c)
 *     CcAsyncCopyRead @ 0x1401392C0 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiCloneCaptureVadCommit @ 0x140142A00 (MiCloneCaptureVadCommit.c)
 *     MiCreateCloneChain @ 0x140143330 (MiCreateCloneChain.c)
 *     MiGetWorkingSetInfo @ 0x140144490 (MiGetWorkingSetInfo.c)
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     PopFxQueryBiosDeviceName @ 0x140147050 (PopFxQueryBiosDeviceName.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x140147AA0 (PiDevCfgPushCopyKeyEntry.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140152AF8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     PopGetCurrentWakeInfos @ 0x140154FBC (PopGetCurrentWakeInfos.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140159678 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAllocateAutoExpandPushLock @ 0x14015BD40 (ExAllocateAutoExpandPushLock.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     VslAllocatePool @ 0x14015CCC0 (VslAllocatePool.c)
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015D818 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpWaitOnIrp @ 0x14015EB9C (FsRtlpWaitOnIrp.c)
 *     CcRegisterExternalCache @ 0x14015F190 (CcRegisterExternalCache.c)
 *     DbgUnicodeStringToAnsiString @ 0x1401612B4 (DbgUnicodeStringToAnsiString.c)
 *     VfAvlReserveNode @ 0x1401616BC (VfAvlReserveNode.c)
 *     KsepPoolAllocatePaged @ 0x140161A68 (KsepPoolAllocatePaged.c)
 *     RtlpCreateHashTable @ 0x140162330 (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x1401624CC (RtlpAllocateSecondLevelDir.c)
 *     CcAllocateInitializeVacbArray @ 0x140162ED4 (CcAllocateInitializeVacbArray.c)
 *     ExAllocateTimerInternal2 @ 0x140163210 (ExAllocateTimerInternal2.c)
 *     PopGetDope @ 0x1401635CC (PopGetDope.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016399C (LdrUnloadAlternateResourceModuleEx.c)
 *     IopAllocateErrorLogEntry @ 0x140163BDC (IopAllocateErrorLogEntry.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x140164070 (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140164E84 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpFwAllocateMemory @ 0x1401655A0 (BgpFwAllocateMemory.c)
 *     ExInitializeSessionHeapManager @ 0x140165BDC (ExInitializeSessionHeapManager.c)
 *     KiIntSteerConnect @ 0x1401691C4 (KiIntSteerConnect.c)
 *     KiIntRedirectConnnect @ 0x140169750 (KiIntRedirectConnnect.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016B088 (LdrpSetAlternateResourceModuleHandle.c)
 *     IoWMIWriteEvent @ 0x14016B690 (IoWMIWriteEvent.c)
 *     ExRegisterCallback @ 0x14016BF30 (ExRegisterCallback.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x14016CFE4 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14016D9F0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopFxCreateDeviceCommon @ 0x14016F048 (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x14016F1E0 (PopFxDuplicateUniqueId.c)
 *     MiInitializeNumaRanges @ 0x14016F75C (MiInitializeNumaRanges.c)
 *     MiDescribePageRun @ 0x14016F8B4 (MiDescribePageRun.c)
 *     MiZeroNodePages @ 0x14016FC80 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14016FEEC (MiCreateZeroThreadContext.c)
 *     CcCreatePartition @ 0x1401709C8 (CcCreatePartition.c)
 *     CcInitializePartition @ 0x140170A1C (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x140170F84 (CcInitializeAsyncRead.c)
 *     ExInitializeProcessor @ 0x140171408 (ExInitializeProcessor.c)
 *     BapdpProcessEtwEvents @ 0x1401715BC (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x140171744 (BapdpMarshallBootDataToRegistry.c)
 *     IoRegisterPriorityCallback @ 0x140172050 (IoRegisterPriorityCallback.c)
 *     EmpQueueRuleUpdateState @ 0x140175D14 (EmpQueueRuleUpdateState.c)
 *     SepBuildCapPolicyTable @ 0x1401784E0 (SepBuildCapPolicyTable.c)
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     _MuiRegAllocArray @ 0x1401798F4 (_MuiRegAllocArray.c)
 *     _SafeAllocBlob @ 0x140179960 (_SafeAllocBlob.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x140179A04 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140179BE8 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140179E68 (RtlpMuiRegLoadLicInformation.c)
 *     MiGetHugePageToZero @ 0x14017B9F8 (MiGetHugePageToZero.c)
 *     AdtpBuildMultiSzStringListString @ 0x14017EB1C (AdtpBuildMultiSzStringListString.c)
 *     PpmParkRegisterParking @ 0x14017F43C (PpmParkRegisterParking.c)
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     SepAdtMarshallAuditRecord @ 0x1401800A0 (SepAdtMarshallAuditRecord.c)
 *     SepInitProcessAuditSd @ 0x140180424 (SepInitProcessAuditSd.c)
 *     PpmInstallNewIdleStates @ 0x1401805B0 (PpmInstallNewIdleStates.c)
 *     PfFbBufferListAllocate @ 0x140181198 (PfFbBufferListAllocate.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14018177C (EmpEvaluateUpdateRuleEvalState.c)
 *     WmipBuildTraceDeviceList @ 0x1401819A0 (WmipBuildTraceDeviceList.c)
 *     IoAllocateDriverObjectExtension @ 0x140182210 (IoAllocateDriverObjectExtension.c)
 *     ExAllocateCacheAwarePushLock @ 0x140182760 (ExAllocateCacheAwarePushLock.c)
 *     SmFpPreAllocate @ 0x140182C9C (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x140182FA0 (FsFilterInit.c)
 *     ExpSaInitialize @ 0x1401833F8 (ExpSaInitialize.c)
 *     IopGetPhysicalMemoryBlock @ 0x140183938 (IopGetPhysicalMemoryBlock.c)
 *     SepBuildDefaultCape @ 0x1401840A0 (SepBuildDefaultCape.c)
 *     RtlInitializeBootStatDataCache @ 0x140184128 (RtlInitializeBootStatDataCache.c)
 *     MmCreatePartition @ 0x140184450 (MmCreatePartition.c)
 *     SepAdtDetermineInsertQueue @ 0x140184560 (SepAdtDetermineInsertQueue.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1401845EC (RtlpGetBootStatusPathFromRegistry.c)
 *     PopReadRegKeyValue @ 0x1401847EC (PopReadRegKeyValue.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140184940 (MiInitializeWorkingSetManagerParameters.c)
 *     SecureDump_ReadRegistry @ 0x140185278 (SecureDump_ReadRegistry.c)
 *     MiZeroBootLargePages @ 0x140185ED4 (MiZeroBootLargePages.c)
 *     IopInitDumpCapsuleSupport @ 0x140186178 (IopInitDumpCapsuleSupport.c)
 *     KiSwInterruptDispatch @ 0x140193570 (KiSwInterruptDispatch.c)
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     CcDeferWrite @ 0x14021FEA0 (CcDeferWrite.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140221EE4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmLogMcUpdateStatus @ 0x140222194 (CmLogMcUpdateStatus.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14022286C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x140223F44 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x140225240 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1402252D0 (FsRtlAllocatePoolWithTag.c)
 *     FsFilterAllocateCompletionStack @ 0x140225CBC (FsFilterAllocateCompletionStack.c)
 *     FsRtlInsertPerFileContext @ 0x140226020 (FsRtlInsertPerFileContext.c)
 *     FsRtlpPostStackOverflow @ 0x1402266E4 (FsRtlpPostStackOverflow.c)
 *     HvlpInitializeHvCrashdump @ 0x14022D040 (HvlpInitializeHvCrashdump.c)
 *     HvlpInitializeSvmIommuSupport @ 0x14022D2F4 (HvlpInitializeSvmIommuSupport.c)
 *     VslGetEtwDebugId @ 0x14022F804 (VslGetEtwDebugId.c)
 *     BgkDisplayString @ 0x1402314E0 (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x140236830 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140236B00 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x140237194 (IopGetSetStreamIdentifier.c)
 *     IopVerifierExAllocatePool_2 @ 0x140238848 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x140239174 (IopVerifierExAllocatePool_3.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1402391B4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x140239754 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopVerifierExAllocatePool_4 @ 0x140239984 (IopVerifierExAllocatePool_4.c)
 *     PipCreateNewDependencyEdge @ 0x14023A5D8 (PipCreateNewDependencyEdge.c)
 *     IoRequestDeviceEjectEx @ 0x14023A980 (IoRequestDeviceEjectEx.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x14023C168 (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x14023C1D8 (PiDevCfgQueryResolveValue.c)
 *     KdRegisterPowerHandler @ 0x14023E4F0 (KdRegisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x14023EDF4 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x140240BF4 (KeProcessorProfileControlArea.c)
 *     KeRegisterNmiCallback @ 0x140240E80 (KeRegisterNmiCallback.c)
 *     KeStartProfile @ 0x140245F7C (KeStartProfile.c)
 *     KsepPoolAllocateNonPaged @ 0x14024D370 (KsepPoolAllocateNonPaged.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402515B8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiGetFileOnlyRanges @ 0x140252864 (MiGetFileOnlyRanges.c)
 *     MiCreateKernelStackNode @ 0x1402562D0 (MiCreateKernelStackNode.c)
 *     MiPfIssueCoalescedSupport @ 0x140257EB0 (MiPfIssueCoalescedSupport.c)
 *     MiReplenishTransitionPageHeatList @ 0x140259210 (MiReplenishTransitionPageHeatList.c)
 *     MmManageFaultRange @ 0x140262270 (MmManageFaultRange.c)
 *     MmGetEnclaveModuleList @ 0x140264A80 (MmGetEnclaveModuleList.c)
 *     MiInsertPteTracker @ 0x14026CEA4 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x14026D360 (MiGetUltraMdlContext.c)
 *     MiAddRangeToPartitionTree @ 0x14026E0FC (MiAddRangeToPartitionTree.c)
 *     MmEnumerateBadPages @ 0x140270B74 (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x1402734AC (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x140273FE0 (PpmUpdateIdleVeto.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140274C18 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxRegisterPluginEx @ 0x140275E7C (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x140278154 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x140278870 (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14027E12C (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmAllocWmiEvent @ 0x14027F8E0 (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x14027FAB0 (PpmWmiIdleAccountingProcedure.c)
 *     PpmEventTracePreVetoAccounting @ 0x140281890 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140281A60 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402834BC (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x14028367C (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140283900 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PspReadDfssConfigurationValues @ 0x140283BA0 (PspReadDfssConfigurationValues.c)
 *     PspIumAllocatePartitionState @ 0x1402850E4 (PspIumAllocatePartitionState.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x140285918 (PsGetProcessEnclaveModuleInfo.c)
 *     DbgpInsertDebugPrintCallback @ 0x140286450 (DbgpInsertDebugPrintCallback.c)
 *     RtlpTraceDatabaseAllocate @ 0x14028ED1C (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x140294078 (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x14029FADC (SepCopyObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x1402A01E0 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402A039C (SepVerifyDesktopAppxPackageName.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402A0694 (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x1402A1120 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402A1210 (SepValidateAndCopyGlobalEntry.c)
 *     SepFlattenAcl @ 0x1402A1324 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1402A14A0 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x1402A185C (SepGetSidValuesDump.c)
 *     SepGetTokenSessionMapEntry @ 0x1402A1924 (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x1402A1A60 (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x1402A1BAC (SepRmCapPoolExpand.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1402A3488 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1402A3CC4 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1402A8A68 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1402A8B74 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1402A8F98 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1402A90EC (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x1402A9D60 (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantInsertMdlInfo @ 0x1402AA1F4 (MdlInvariantInsertMdlInfo.c)
 *     VmpPrefetchVirtualAddresses @ 0x1402AC55C (VmpPrefetchVirtualAddresses.c)
 *     WdipAccessCheck @ 0x1402ACDE0 (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x1402AD014 (WmiVerifierCopyEvent.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x1402B0178 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x1402B1660 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402B2230 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1402B25C0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1402B29A4 (EtwpApplyEventNameFilter.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1402B3724 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpInitializeCompression @ 0x1402B3C9C (EtwpInitializeCompression.c)
 *     NtDrawText @ 0x1402B7650 (NtDrawText.c)
 *     ExRegisterBootDevice @ 0x1402B86B0 (ExRegisterBootDevice.c)
 *     ExCopyWakeTimerInfo @ 0x1402BAB20 (ExCopyWakeTimerInfo.c)
 *     ExShareAddressSpaceWithDevice @ 0x1402BB7A0 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x1402BBEA8 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1402BC0E8 (ExpPrepareNewSvmDevice.c)
 *     ExpSaBinaryArrayInsert @ 0x1402BD934 (ExpSaBinaryArrayInsert.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C (ExpSaPageGroupDescriptorAllocate.c)
 *     WheapReportPersistedErrorRecord @ 0x1402BE48C (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x1402BE944 (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1402BEE64 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x1402C0244 (WheapSqmCollectWheaOscTelemetry.c)
 *     AsiAddDataToSchema @ 0x1402C0930 (AsiAddDataToSchema.c)
 *     sub_1402C1674 @ 0x1402C1674 (sub_1402C1674.c)
 *     sub_1402C1E68 @ 0x1402C1E68 (sub_1402C1E68.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1402C4674 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1402C55DC (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1402C5E00 (BiLogFileOwnerProcess.c)
 *     _SafeReallocBlob @ 0x1402CB7C8 (_SafeReallocBlob.c)
 *     PopNewWakeInfo @ 0x140470EF8 (PopNewWakeInfo.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140471260 (PfpStartLoggingHardFaultEvents.c)
 *     IopCaptureObjectName @ 0x14047627C (IopCaptureObjectName.c)
 *     PopCloneRange @ 0x1404772D0 (PopCloneRange.c)
 *     PopGetBitlockerKeyLocation @ 0x1404774BC (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x140477654 (PopGetHwConfigurationSignature.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140478A18 (PfSnAllocateEnablePrefetcherTimer.c)
 *     BapdRecordFirmwareBootStats @ 0x140478A90 (BapdRecordFirmwareBootStats.c)
 *     MmInitializeProcessor @ 0x14047BD90 (MmInitializeProcessor.c)
 *     KiInitializeProcessor @ 0x14047C370 (KiInitializeProcessor.c)
 *     PnprInitiateReplaceOperation @ 0x140482E4C (PnprInitiateReplaceOperation.c)
 *     KiUpdateSavedSupervisorState @ 0x140484AE4 (KiUpdateSavedSupervisorState.c)
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140485208 (MiZeroAllPageFiles.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140486F80 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x14048773C (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     WheaInitializeProcessor @ 0x140487FA8 (WheaInitializeProcessor.c)
 *     SPCallServerHandleClepKdf @ 0x14048AE18 (SPCallServerHandleClepKdf.c)
 *     NtSetCachedSigningLevel2 @ 0x14048B484 (NtSetCachedSigningLevel2.c)
 *     PoDiagCaptureUsermodeStack @ 0x14048C544 (PoDiagCaptureUsermodeStack.c)
 *     ExGetPoolTagInfo @ 0x14048C5A4 (ExGetPoolTagInfo.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14048F544 (PfSnOpenVolumesForPrefetch.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140490F38 (PfSnPreallocatePrefetchHeader.c)
 *     PfpRpControlRequestCopy @ 0x1404911DC (PfpRpControlRequestCopy.c)
 *     PfpPrefetchRequestPerform @ 0x140491840 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x140492250 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchRequest @ 0x14049284C (PfpPrefetchRequest.c)
 *     PfpRpCHashDeleteEntries @ 0x1404930FC (PfpRpCHashDeleteEntries.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140493B34 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     PfSnBeginTrace @ 0x140494618 (PfSnBeginTrace.c)
 *     RawInitializeVcb @ 0x140495474 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404955A0 (ExAllocateCacheAwareRundownProtection.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140495F50 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140496270 (IoVolumeDeviceToDosName.c)
 *     HvWriteHivePrimaryFile @ 0x140498210 (HvWriteHivePrimaryFile.c)
 *     CmpLockIXLockIntent @ 0x140498504 (CmpLockIXLockIntent.c)
 *     HvpGenerateLogEntry @ 0x140498C70 (HvpGenerateLogEntry.c)
 *     MiAllocateFixupVad @ 0x1404992A8 (MiAllocateFixupVad.c)
 *     HvStoreModifiedData @ 0x140499C58 (HvStoreModifiedData.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14049BD64 (CmpQueryFileSecurityDescriptor.c)
 *     CmpInitHiveFromFile @ 0x14049DBFC (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     PfpFileBuildReadList @ 0x1404A1350 (PfpFileBuildReadList.c)
 *     PfSnPopulateReadList @ 0x1404A1900 (PfSnPopulateReadList.c)
 *     IopQueryNameInternal @ 0x1404A5650 (IopQueryNameInternal.c)
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 *     PfpRpFileKeyUpdate @ 0x1404A9210 (PfpRpFileKeyUpdate.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     SPCallServerHandleQueryPolicy @ 0x1404AFD24 (SPCallServerHandleQueryPolicy.c)
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 *     EtwpEnumerateAddressSpace @ 0x1404B4AE4 (EtwpEnumerateAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MmPrefetchPagesEx @ 0x1404BBAC8 (MmPrefetchPagesEx.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MiBuildImageControlArea @ 0x1404BD514 (MiBuildImageControlArea.c)
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x1404BEDE8 (MiCreateDataFileMap.c)
 *     ObpGetObjectSecurity @ 0x1404C1DAC (ObpGetObjectSecurity.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1404C6050 (RtlpCombineAcls.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404C7454 (SepCreateImpersonationTokenDacl.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C7830 (SeCaptureSecurityDescriptor.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404CD870 (AlpcpCaptureMessageDataSafe.c)
 *     ObpCallPreOperationCallbacks @ 0x1404CE670 (ObpCallPreOperationCallbacks.c)
 *     SepDuplicateSid @ 0x1404D2FD0 (SepDuplicateSid.c)
 *     AlpcpAllocateBlob @ 0x1404D44F8 (AlpcpAllocateBlob.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404D45D0 (IopGetLegacyVetoListDrivers.c)
 *     SepSetTokenPackage @ 0x1404D5088 (SepSetTokenPackage.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepProbeAndCaptureString_U @ 0x1404D9134 (SepProbeAndCaptureString_U.c)
 *     IopSymlinkRememberJunction @ 0x1404E0CD0 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1404E10E4 (IopGraftName.c)
 *     FsRtlpAllocateOplock @ 0x1404E238C (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404E2ABC (FsRtlpOplockFsctrlInternal.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MiAllocateVad @ 0x1404EA7EC (MiAllocateVad.c)
 *     PspInitializeFullProcessImageName @ 0x1404EA924 (PspInitializeFullProcessImageName.c)
 *     RtlpAllocateAtom @ 0x1404EAF9C (RtlpAllocateAtom.c)
 *     RtlpSetSecurityObject @ 0x1404EB1D0 (RtlpSetSecurityObject.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1404ECB00 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x1404ECBE0 (SepAdtTokenRightAdjusted.c)
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     SepAddLuidToIndexEntry @ 0x1404F0CC4 (SepAddLuidToIndexEntry.c)
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1404F3F20 (FsRtlAllocateExtraCreateParameter.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F6C20 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1404F7310 (ExpWnfWriteStateData.c)
 *     EtwpQueryProcessCommandLine @ 0x1404F8794 (EtwpQueryProcessCommandLine.c)
 *     IoQueryFileDosDeviceName @ 0x1404F8E90 (IoQueryFileDosDeviceName.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x140502610 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x140502F48 (RtlpAllocDeallocQueryBuffer.c)
 *     WmipSDRegistryQueryRoutine @ 0x1405032C0 (WmipSDRegistryQueryRoutine.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14050333C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1405035A8 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140503A10 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140503C50 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405040D0 (PiDmListEnumObjectsWithCallback.c)
 *     _PnpOpenPropertiesKey @ 0x14050421C (_PnpOpenPropertiesKey.c)
 *     PnpGetObjectProperty @ 0x140504430 (PnpGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x1405045F0 (PnpAllocatePWSTR.c)
 *     PiDqPnPGetObjectProperty @ 0x1405046A0 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlObjectEventCreate @ 0x140504830 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405055A0 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x140505EBC (_RegRtlQueryValue.c)
 *     FsRtlAddToTunnelCache @ 0x140506A20 (FsRtlAddToTunnelCache.c)
 *     PiPnpRtlObjectActionCallback @ 0x140506EC0 (PiPnpRtlObjectActionCallback.c)
 *     _PnpRegQueryValueIndirect @ 0x1405087D0 (_PnpRegQueryValueIndirect.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiCMGetObjectProperty @ 0x14050A040 (PiCMGetObjectProperty.c)
 *     PiDqQueryEvaluateFilter @ 0x14050AAEC (PiDqQueryEvaluateFilter.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14050AEB8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiCMGetRegistryProperty @ 0x14050BA28 (PiCMGetRegistryProperty.c)
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x14050C2C8 (PiCMGetObjectList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiDqActionDataCreate @ 0x14050D69C (PiDqActionDataCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14050D84C (PiDqActionDataGetRequestedProperties.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14050E958 (PsGetAllocatedFullProcessImageName.c)
 *     WbAlloc @ 0x14050F678 (WbAlloc.c)
 *     CmpAllocate @ 0x140514D70 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x140514DD4 (CmpClaimGlobalQuota.c)
 *     CmpRemoveSubKeyFromList @ 0x140517418 (CmpRemoveSubKeyFromList.c)
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PiDqGetRelativeObjectRegPath @ 0x14051A334 (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x14051A428 (PnpConcatPWSTR.c)
 *     WmipAddProviderIdToPIList @ 0x14051B6F4 (WmipAddProviderIdToPIList.c)
 *     WmipCountedToSz @ 0x14051B818 (WmipCountedToSz.c)
 *     ObpParseSymbolicLinkEx @ 0x14051B890 (ObpParseSymbolicLinkEx.c)
 *     PopLogDisabledSleepReason @ 0x14051CCD4 (PopLogDisabledSleepReason.c)
 *     PoRegisterPowerSettingCallback @ 0x14051D710 (PoRegisterPowerSettingCallback.c)
 *     PnpCreateDeviceEventEntry @ 0x14051E77C (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14051E7CC (PnpInsertEventInQueue.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14051ED3C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyUserMode @ 0x14051F100 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14051F808 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14051FAD4 (PiUEventNotifyClient.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14052032C (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopBlackBoxUpdate @ 0x1405230F0 (PopBlackBoxUpdate.c)
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     PopDiagTracePowerRequestCreate @ 0x1405243F0 (PopDiagTracePowerRequestCreate.c)
 *     PopAnsiStringToUnicodeString @ 0x140524D84 (PopAnsiStringToUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x1405252C0 (PopUnicodeStringDeepCopy.c)
 *     IoGetDeviceProperty @ 0x140525CB0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1405261D8 (PiGetDeviceRegProperty.c)
 *     PopFxTraceDeviceRegistration @ 0x14052756C (PopFxTraceDeviceRegistration.c)
 *     MiGetCcAccessLog @ 0x14052760C (MiGetCcAccessLog.c)
 *     SPCallServerHandleIsAppLicensed @ 0x14052773C (SPCallServerHandleIsAppLicensed.c)
 *     PfSnGetPrefetchInstructions @ 0x140527FA4 (PfSnGetPrefetchInstructions.c)
 *     PfSnBuildDumpFromTrace @ 0x140528E94 (PfSnBuildDumpFromTrace.c)
 *     PfSnScenarioAlloc @ 0x14052A110 (PfSnScenarioAlloc.c)
 *     MiInSwapStore @ 0x14052C4A8 (MiInSwapStore.c)
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14052E8E4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     PspEstablishJobHierarchy @ 0x140530FA8 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x140531244 (MmLinkJobProcess.c)
 *     PopEtProcessSnapshotCreate @ 0x1405326C0 (PopEtProcessSnapshotCreate.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryRateControlHistory @ 0x14053716C (PspQueryRateControlHistory.c)
 *     PopEtAggregateGet @ 0x140537744 (PopEtAggregateGet.c)
 *     PfTCreateTraceDump @ 0x14053B170 (PfTCreateTraceDump.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiCompressRelocations @ 0x14053D480 (MiCompressRelocations.c)
 *     MiCaptureImageCfgContext @ 0x14053D860 (MiCaptureImageCfgContext.c)
 *     RtlCreateRvaList @ 0x14053DBA4 (RtlCreateRvaList.c)
 *     MiCreateFixupRecord @ 0x14053E290 (MiCreateFixupRecord.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAppendPrivileges @ 0x14053E890 (SeAppendPrivileges.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14053ED50 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepSetTokenCachedHandles @ 0x14053F3B4 (SepSetTokenCachedHandles.c)
 *     SepGetLowBoxNumberEntry @ 0x14053F858 (SepGetLowBoxNumberEntry.c)
 *     SepQueryNameString @ 0x14053FE24 (SepQueryNameString.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140540674 (ObpCaptureBoundaryDescriptor.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1405419D0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140541ABC (IopCreateSecurityDescriptorPerType.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     PiUEventInitClientRegistrationContext @ 0x140542C18 (PiUEventInitClientRegistrationContext.c)
 *     SepSetTokenCapabilities @ 0x140543800 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140543970 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140543A30 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     SepCreateClaimAttributes @ 0x14054487C (SepCreateClaimAttributes.c)
 *     SeCaptureAcl @ 0x140544AC4 (SeCaptureAcl.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405458FC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140545A44 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x140545F24 (SepCaptureInt64Array.c)
 *     SepCaptureUnicodeStringArray @ 0x140546370 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x1405465A0 (SeCaptureUnicodeStringStructures.c)
 *     SepExpandDynamic @ 0x140546838 (SepExpandDynamic.c)
 *     SPCallServerHandleUpdatePolicies @ 0x140548088 (SPCallServerHandleUpdatePolicies.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     NtQueryLicenseValue @ 0x1405490A0 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x140549360 (ExQueryLicenseValueInternal.c)
 *     ExpOsProductCacheProviderHelper @ 0x140549CD4 (ExpOsProductCacheProviderHelper.c)
 *     ExpGenuinePolicyPostProcess @ 0x140549E30 (ExpGenuinePolicyPostProcess.c)
 *     CmpTransAllocateTrans @ 0x14054C8C4 (CmpTransAllocateTrans.c)
 *     CmpRecordUnloadEventForHive @ 0x14054E5D0 (CmpRecordUnloadEventForHive.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14054F244 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     PspAllocateRateControl @ 0x1405521CC (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140552280 (PspAddSchedulingGroupToJobChain.c)
 *     CmpDoWritethroughReparse @ 0x1405529F0 (CmpDoWritethroughReparse.c)
 *     ExpAllocateHandleTable @ 0x14055390C (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140553C4C (ExpAllocateTablePagedPoolNoZero.c)
 *     ObpInsertHandleCount @ 0x140554508 (ObpInsertHandleCount.c)
 *     FsRtlFindInTunnelCache @ 0x140554CD0 (FsRtlFindInTunnelCache.c)
 *     CcAllocateObcb @ 0x1405550A8 (CcAllocateObcb.c)
 *     AlpcAddHandleTableEntry @ 0x140556E34 (AlpcAddHandleTableEntry.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x140557BD8 (CmpInitializeKcbCache.c)
 *     PopEtInternerAllocate @ 0x14055A5C0 (PopEtInternerAllocate.c)
 *     FsRtlNotifyFilterReportChange @ 0x14055A7D0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x14055B180 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14055B570 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x14055BD00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyInitializeSync @ 0x14055C110 (FsRtlNotifyInitializeSync.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14055CFEC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     WmipSecurityMethod @ 0x14055D0F0 (WmipSecurityMethod.c)
 *     CcCreateVacbArray @ 0x14055EA80 (CcCreateVacbArray.c)
 *     ObpCreateCacheEntry @ 0x14055F6BC (ObpCreateCacheEntry.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140560554 (AlpcpCaptureHandleAttributeInternal.c)
 *     CmpQueryNameString @ 0x140561CB8 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpCheckWrpKeyAccess @ 0x140562828 (CmpCheckWrpKeyAccess.c)
 *     ObpInsertDirectoryEntry @ 0x140564D6C (ObpInsertDirectoryEntry.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140565484 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     CmpCanGrowHive @ 0x14056694C (CmpCanGrowHive.c)
 *     ExHandleSPCall2 @ 0x140568664 (ExHandleSPCall2.c)
 *     SiGetBootDeviceName @ 0x140569834 (SiGetBootDeviceName.c)
 *     SiGetRegistryValue @ 0x140569A48 (SiGetRegistryValue.c)
 *     SiTranslateSymbolicLink @ 0x140569D28 (SiTranslateSymbolicLink.c)
 *     SepCreateLogonSessionTrack @ 0x14056A56C (SepCreateLogonSessionTrack.c)
 *     EtwpTiQueryVad @ 0x14056B8D4 (EtwpTiQueryVad.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14056C150 (PiDqQueryActionQueueEntryCreate.c)
 *     ConstraintEval @ 0x14056C1DC (ConstraintEval.c)
 *     SepAssemblePrivileges @ 0x14056D420 (SepAssemblePrivileges.c)
 *     AlpcpAllocateMessageFunction @ 0x14056D500 (AlpcpAllocateMessageFunction.c)
 *     SepInformLsaOfDeletedLogon @ 0x14056FD04 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1405700FC (SepInformFileSystemsOfDeletedLogon.c)
 *     PsSetProcessWin32Process @ 0x140570180 (PsSetProcessWin32Process.c)
 *     CmpClearKeyAccessBits @ 0x14057027C (CmpClearKeyAccessBits.c)
 *     ExpWnfCreateProcessContext @ 0x140570558 (ExpWnfCreateProcessContext.c)
 *     CmpMarkIndexDirty @ 0x14057076C (CmpMarkIndexDirty.c)
 *     ObCreateSymbolicLink @ 0x1405716D8 (ObCreateSymbolicLink.c)
 *     PspAssignProcessQuotaBlock @ 0x140571E7C (PspAssignProcessQuotaBlock.c)
 *     MmAllocateMappingAddress @ 0x140572870 (MmAllocateMappingAddress.c)
 *     ExpGetSystemFlushInformation @ 0x140572C3C (ExpGetSystemFlushInformation.c)
 *     PiDqSerializationAlloc @ 0x140574910 (PiDqSerializationAlloc.c)
 *     PiDqQueryCreate @ 0x140575044 (PiDqQueryCreate.c)
 *     PiCMGetDeviceIdList @ 0x140575248 (PiCMGetDeviceIdList.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     SepUpdateLogonSessionTrack @ 0x140577924 (SepUpdateLogonSessionTrack.c)
 *     PfSnPrefetchScenario @ 0x1405781C0 (PfSnPrefetchScenario.c)
 *     PfSnArrayGrow @ 0x140579AEC (PfSnArrayGrow.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14057A494 (NtPrivilegedServiceAuditAlarm.c)
 *     AlpcpAllocateBuffer @ 0x14057C0E0 (AlpcpAllocateBuffer.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14057D0A0 (EtwpCrimsonProvEnableCallback.c)
 *     IoDiskIoAttributionAllocate @ 0x14057D838 (IoDiskIoAttributionAllocate.c)
 *     CmpAllocateUnitOfWork @ 0x14057D8F0 (CmpAllocateUnitOfWork.c)
 *     ObpSetDeviceMap @ 0x14057D9B8 (ObpSetDeviceMap.c)
 *     ExpCheckPortableOperatingSystem @ 0x14057EC4C (ExpCheckPortableOperatingSystem.c)
 *     CmLoadKey @ 0x14057F140 (CmLoadKey.c)
 *     MIDL_user_allocate @ 0x14057F570 (MIDL_user_allocate.c)
 *     MiCreateRotateView @ 0x14057FBA0 (MiCreateRotateView.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14057FEC8 (NtQuerySystemEnvironmentValueEx.c)
 *     PiDqAllocateGenericTableEntry @ 0x140580340 (PiDqAllocateGenericTableEntry.c)
 *     ExpWnfAllocateScopeInstance @ 0x1405820D0 (ExpWnfAllocateScopeInstance.c)
 *     NtNotifyChangeSession @ 0x140582640 (NtNotifyChangeSession.c)
 *     PopDiagTraceThermalRequest @ 0x14058367C (PopDiagTraceThermalRequest.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x140583720 (SPCallServerHandleAuthenticateCaller.c)
 *     ExpWnfRegisterPermanentName @ 0x140583CA8 (ExpWnfRegisterPermanentName.c)
 *     PopPowerRequestAllocate @ 0x140583DD0 (PopPowerRequestAllocate.c)
 *     PopLoggingInformation @ 0x140583E58 (PopLoggingInformation.c)
 *     ExpWnfPopulateStateData @ 0x140583F68 (ExpWnfPopulateStateData.c)
 *     PopAvlAllocatePowerRequestStats @ 0x140584640 (PopAvlAllocatePowerRequestStats.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140586C28 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _RegRtlCreateTreeTransacted @ 0x140587028 (_RegRtlCreateTreeTransacted.c)
 *     EtwpGenerateFileName @ 0x1405878D8 (EtwpGenerateFileName.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140587F34 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpCreateNtFileName @ 0x1405883F8 (EtwpCreateNtFileName.c)
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 *     EtwpInitLoggerContext @ 0x1405893D4 (EtwpInitLoggerContext.c)
 *     WmipGetRegistryHideMachine @ 0x14058A504 (WmipGetRegistryHideMachine.c)
 *     EtwpAllocDataBlock @ 0x14058B9A8 (EtwpAllocDataBlock.c)
 *     EtwpCaptureString @ 0x14058BA4C (EtwpCaptureString.c)
 *     EtwpTrackDebugIdForSession @ 0x14058CA30 (EtwpTrackDebugIdForSession.c)
 *     EtwpFindDebugId @ 0x14058CC9C (EtwpFindDebugId.c)
 *     EtwpUpdateFilterData @ 0x14058CE40 (EtwpUpdateFilterData.c)
 *     EtwpQueueNotification @ 0x14058E080 (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x14058E2E0 (EtwpAddDataSource.c)
 *     EtwpAllocGuidEntry @ 0x14058E5C4 (EtwpAllocGuidEntry.c)
 *     EtwpRealtimeCreateLogfile @ 0x14058E69C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14058E9F8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpSetProviderTraitsUm @ 0x140590E6C (EtwpSetProviderTraitsUm.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1405919A4 (EtwpGetGuidSecurityDescriptor.c)
 *     HvpFindNextDirtyBlock @ 0x140592104 (HvpFindNextDirtyBlock.c)
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     NtRemoveIoCompletionEx @ 0x14059C4D0 (NtRemoveIoCompletionEx.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     ObpAllocateObject @ 0x1405A1430 (ObpAllocateObject.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     ObpCaptureObjectName @ 0x1405AD0E0 (ObpCaptureObjectName.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1405B10A0 (PfpCopyUserPfnPrioRequest.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiProcessCrcList @ 0x1405B6E90 (MiProcessCrcList.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MiRevertRelocatedImagePfn @ 0x1405BA78C (MiRevertRelocatedImagePfn.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x1405BABD8 (MiCreateVadEventBitmap.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1405BE3C8 (PiPnpRtlGetFilteredDeviceList.c)
 *     MiAllocateCrcList @ 0x1405BF15C (MiAllocateCrcList.c)
 *     MiBuildNewCloneDescriptor @ 0x1405BF59C (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     CmRealKCBToVirtualPath @ 0x1405C06B0 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1405C08C4 (CmpGetVirtualizationID.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1405C0EE4 (SPCallServerHandleGetAppPolicyValue.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1405C1A44 (CmpUndoDeleteKeyForTrans.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1405C1C98 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x1405C1E50 (IoGetDeviceInterfaceAlias.c)
 *     EtwpQueueReply @ 0x1405C30D4 (EtwpQueueReply.c)
 *     EtwpCreateUmReplyObject @ 0x1405C3160 (EtwpCreateUmReplyObject.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1405C3630 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1405C384C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1405C39A8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PnpGetDeviceLocationStrings @ 0x1405C4AF8 (PnpGetDeviceLocationStrings.c)
 *     PiSwPdoPnPDispatch @ 0x1405C53E0 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1405C5870 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwUpdateArrayProperties @ 0x1405C644C (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceCreate @ 0x1405C6A00 (PiSwDeviceCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405C6A7C (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1405C6EA4 (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x1405C6F68 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x1405C7038 (PnpAllocateMultiSZ.c)
 *     PnpDisableDeviceInterfaces @ 0x1405C7250 (PnpDisableDeviceInterfaces.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1405C7CF4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpAllocateCriticalMemory @ 0x1405C8644 (PnpAllocateCriticalMemory.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1405C94B4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1405CA610 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     _CmUpdateDevicePanel @ 0x1405CB46C (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1405CBEC8 (_CmQueryDevicePanelPldProperty.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1405CC298 (PipGetRegistrySecurityWithFallback.c)
 *     PiDeviceRegistration @ 0x1405CC58C (PiDeviceRegistration.c)
 *     PnpProcessAssignResources @ 0x1405CCC58 (PnpProcessAssignResources.c)
 *     PpForEachDeviceInstanceDriver @ 0x1405CCEDC (PpForEachDeviceInstanceDriver.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1405CF254 (PnpCallDriverQueryServiceHelper.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1405D2E6C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1405D364C (PiDmCacheDataEncode.c)
 *     PiDmObjectCreate @ 0x1405D3AB4 (PiDmObjectCreate.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1405D3EF0 (PnpDeviceCompletionRequestCreate.c)
 *     ExpHwidProcessDevice @ 0x1405D4B18 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1405D4C4C (ExpHwidAppendDeviceInfoBlock.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1405D7CA0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryDriverNode @ 0x1405D8B48 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     IopGetRootDevices @ 0x1405D95DC (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405DA1C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariable @ 0x1405DA3E0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405DAA00 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405DAAA4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgInitResolveContext @ 0x1405DADC4 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgCopyObjectProperties @ 0x1405DAF28 (PiDevCfgCopyObjectProperties.c)
 *     IopQueryDeviceResources @ 0x1405DB990 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1405DBD3C (PnpGetDeviceResourcesFromRegistry.c)
 *     PipAllocateDeviceNode @ 0x1405DC620 (PipAllocateDeviceNode.c)
 *     IopPnPDispatch @ 0x1405DC950 (IopPnPDispatch.c)
 *     IoWMIQuerySingleInstance @ 0x1405DD3C0 (IoWMIQuerySingleInstance.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 *     PiQueryRemovableDeviceOverride @ 0x1405DE074 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x1405DE35C (PipFindDeviceOverrideEntry.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405DE554 (PiCMGetRelatedDeviceInstance.c)
 *     CmpComputeLogFillLevel @ 0x1405DE978 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1405DEA9C (CmpDoTransWriteLogRecord.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405DF734 (CmpCommitDeleteValueKeyUoW.c)
 *     NtOpenObjectAuditAlarm @ 0x1405DFF70 (NtOpenObjectAuditAlarm.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1405E05D4 (PiDqObjectActionQueueEntryCreate.c)
 *     _RegRtlEnumKey @ 0x1405E0774 (_RegRtlEnumKey.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 *     IoRegisterPlugPlayNotification @ 0x1405E22E0 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1405E26A0 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1405E2768 (PnpInitializeNotifyEntry.c)
 *     _RegRtlEnumValue @ 0x1405E2FEC (_RegRtlEnumValue.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x1405E3370 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x1405E3818 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x1405E3A10 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     sub_1405E3E1C @ 0x1405E3E1C (sub_1405E3E1C.c)
 *     PiNormalizeDeviceText @ 0x1405E47BC (PiNormalizeDeviceText.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1405E4C38 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1405E4F04 (PiBuildDeviceNodeInstancePath.c)
 *     PnpBusTypeGuidGetIndex @ 0x1405E52F4 (PnpBusTypeGuidGetIndex.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1405E54D8 (PiUEventQueueBroadcastEventEntry.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     PiDmAllocateGenericTableEntry @ 0x1405E6F80 (PiDmAllocateGenericTableEntry.c)
 *     MiGetPhysicalMemoryRanges @ 0x1405E72E8 (MiGetPhysicalMemoryRanges.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E7654 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     CmpLogCheckpoint @ 0x1405E790C (CmpLogCheckpoint.c)
 *     PiSwAddPdoAssociation @ 0x1405E8130 (PiSwAddPdoAssociation.c)
 *     EtwpExpandFileName @ 0x1405E82A4 (EtwpExpandFileName.c)
 *     PnpAllocateGenericTableEntry @ 0x1405E85C0 (PnpAllocateGenericTableEntry.c)
 *     PfpSourceBuildVaArray @ 0x1405E89B0 (PfpSourceBuildVaArray.c)
 *     PiDqGrowPropertyArray @ 0x1405E8D18 (PiDqGrowPropertyArray.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x1405E9214 (ExpHwidEnsurePropertyBufferLength.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405E9920 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PopEtBucketsAllocate @ 0x1405E9EE8 (PopEtBucketsAllocate.c)
 *     PiSwAllocateGenericTableEntry @ 0x1405E9F10 (PiSwAllocateGenericTableEntry.c)
 *     NtInitiatePowerAction @ 0x1405EB5AC (NtInitiatePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1405EBCD4 (PopTransitionCheckpoint.c)
 *     PoInitializeBroadcast @ 0x1405ECC84 (PoInitializeBroadcast.c)
 *     WmipQueueNotification @ 0x1405ED690 (WmipQueueNotification.c)
 *     BiUnloadHiveByName @ 0x1405EE3C0 (BiUnloadHiveByName.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1405EEF48 (PfpServiceMainThreadBoostPrep.c)
 *     PopLoadResumeContext @ 0x1405EFAB8 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1405EFC6C (PopHiberInitializeResources.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1405F0D00 (PiPnpRtlServiceFilterCallback.c)
 *     SiGetBiosSystemPartition @ 0x1405F12FC (SiGetBiosSystemPartition.c)
 *     SiGetDriveLayoutInformation @ 0x1405F1430 (SiGetDriveLayoutInformation.c)
 *     SiGetBiosSystemDisk @ 0x1405F1638 (SiGetBiosSystemDisk.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1405F2108 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1405F2760 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405F29E4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405F2F7C (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405F3118 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     CmpStartRMLog @ 0x1405F4564 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x1405F49A0 (CmpStartCLFSLog.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1405F5140 (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x1405F5268 (IopAllocateUnicodeString.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PiDeferSetInterfaceState @ 0x1405F5D60 (PiDeferSetInterfaceState.c)
 *     PnpUnloadAttachedDriver @ 0x1405F5E0C (PnpUnloadAttachedDriver.c)
 *     MiReserveDriverPtes @ 0x1405F6850 (MiReserveDriverPtes.c)
 *     PiProcessDriverInstance @ 0x1405F7090 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiFindDevInstMatch @ 0x1405F79D4 (PiFindDevInstMatch.c)
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 *     MiAllocateImportList @ 0x1405F9A88 (MiAllocateImportList.c)
 *     MiObtainSectionForDriver @ 0x1405FA21C (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x1405FA3CC (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1405FB02C (MiSnapThunk.c)
 *     PiUpdateDriverDBCache @ 0x1405FBFC4 (PiUpdateDriverDBCache.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     WmipRegisterOrUpdateDS @ 0x1405FE570 (WmipRegisterOrUpdateDS.c)
 *     WmipBuildInstanceSet @ 0x1405FEAE8 (WmipBuildInstanceSet.c)
 *     WmipCachePtrs @ 0x1405FF124 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1405FF2B0 (WmipSendGuidUpdateNotifications.c)
 *     WmipQueueRegWork @ 0x140600AC4 (WmipQueueRegWork.c)
 *     SddlpAlloc @ 0x1406019F0 (SddlpAlloc.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x140602220 (EtwpAddKmRegEntry.c)
 *     WmipSendEnableDisableRequest @ 0x140602608 (WmipSendEnableDisableRequest.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1406029B8 (IopDeviceObjectFromSymbolicName.c)
 *     PopLogSleepDisabled @ 0x140602AE8 (PopLogSleepDisabled.c)
 *     PnpCheckDeviceIdsChanged @ 0x140602BF8 (PnpCheckDeviceIdsChanged.c)
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     PiQueryPowerRelations @ 0x140603784 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140603B68 (PiQueryPowerDependencyRelations.c)
 *     EtwpSetProviderTraitsKm @ 0x140603DF4 (EtwpSetProviderTraitsKm.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     KeAllocateCalloutStackEx @ 0x1406047B0 (KeAllocateCalloutStackEx.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140604B08 (SepScheduleImageVerificationCallbacks.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     IoRegisterShutdownNotification @ 0x140604F60 (IoRegisterShutdownNotification.c)
 *     IopCreateVpb @ 0x1406052D8 (IopCreateVpb.c)
 *     MiRememberUnloadedDriver @ 0x140605344 (MiRememberUnloadedDriver.c)
 *     MUIInitializeResourceLock @ 0x140605E60 (MUIInitializeResourceLock.c)
 *     BiLoadSystemStore @ 0x14060637C (BiLoadSystemStore.c)
 *     BcdGetSystemStorePath @ 0x140606FFC (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140607118 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14060729C (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x140607504 (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x140607674 (BiGetDriveLayoutBlock.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140607868 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140607DC0 (PopBcdReadElement.c)
 *     BiEnumerateSubKeys @ 0x140607E7C (BiEnumerateSubKeys.c)
 *     BiGetRegistryValue @ 0x140608704 (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x140608EA0 (BiCreateKeySecurityDescriptor.c)
 *     BiGetKeyName @ 0x1406090AC (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x1406093F4 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14060985C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x140609914 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140609BD8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140609EA0 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x14060A05C (BiVerifyBootPartition.c)
 *     BiGetSystemPartition @ 0x14060A2D0 (BiGetSystemPartition.c)
 *     SiQuerySystemInformationString @ 0x14060A3B4 (SiQuerySystemInformationString.c)
 *     PopBcdSetupResumeObject @ 0x14060A480 (PopBcdSetupResumeObject.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14060C2D4 (IopGetInterruptConnectionData.c)
 *     EtwpEnableTrace @ 0x14060DE44 (EtwpEnableTrace.c)
 *     PopBootStatSet @ 0x14060EF54 (PopBootStatSet.c)
 *     IoQueryDeviceDescription @ 0x14060FC60 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 *     MiFormFullImageName @ 0x140610518 (MiFormFullImageName.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14061118C (NtPrivilegeObjectAuditAlarm.c)
 *     MmCallDllInitialize @ 0x140611478 (MmCallDllInitialize.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140612428 (SPCallServerHandleWaitForDisplayWindow.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140613010 (IoWMIDeviceObjectToInstanceName.c)
 *     CmpAddStringToMapping @ 0x140613E3C (CmpAddStringToMapping.c)
 *     SepInitializeLowBoxNumberTable @ 0x140613FF0 (SepInitializeLowBoxNumberTable.c)
 *     PopSetHiberFileMcb @ 0x1406140CC (PopSetHiberFileMcb.c)
 *     PopFxConvertV1Components @ 0x1406147D8 (PopFxConvertV1Components.c)
 *     PopFxRegisterDeviceWorker @ 0x140614C84 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x140615470 (PopPepRegisterDevice.c)
 *     PnpLookupArbitersNewResources @ 0x140615E24 (PnpLookupArbitersNewResources.c)
 *     PnpBuildCmResourceList @ 0x140616220 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x1406166A0 (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x1406168D4 (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x140616EB4 (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x140617468 (IopQueryResourceHandlerInterface.c)
 *     PnpCmResourcesToIoResources @ 0x140617938 (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x140617EE0 (PnpFilterResourceRequirementsList.c)
 *     ArbAddOrdering @ 0x140618E68 (ArbAddOrdering.c)
 *     ArbpBuildAllocationStack @ 0x1406194A8 (ArbpBuildAllocationStack.c)
 *     ArbpGetRegistryValue @ 0x14061A418 (ArbpGetRegistryValue.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14061A854 (IopTranslateAndAdjustReqDesc.c)
 *     ArbInitializeOrderingList @ 0x14061AB5C (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x14061AC38 (ArbPruneOrdering.c)
 *     ArbInitializeArbiterInstance @ 0x14061AD90 (ArbInitializeArbiterInstance.c)
 *     HeadlessTerminalAddResources @ 0x14061B4B0 (HeadlessTerminalAddResources.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14061B564 (ArbAddMmConfigRangeAsBootReserved.c)
 *     MiCreateNodeLists @ 0x14061C340 (MiCreateNodeLists.c)
 *     ObCreateKernelObjectsSD @ 0x14061CE70 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14061D22C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14061D430 (MiCreateMemoryEventSD.c)
 *     PspAllocStorage @ 0x140620A74 (PspAllocStorage.c)
 *     DbgkpCreateNotificationEvent @ 0x140620BDC (DbgkpCreateNotificationEvent.c)
 *     WmipAddMofResource @ 0x140620EBC (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x140621074 (WmipInsertMofResource.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x1406211BC (VrpInitializeLoadedDifferencingHives.c)
 *     PsRegisterSiloMonitor @ 0x1406216F0 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140621F3C (ObpCreateDefaultObjectTypeSD.c)
 *     CcInitializeProcessor @ 0x1406220CC (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140622178 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140622290 (IoInitializeProcessor.c)
 *     EtwInitialize @ 0x1406224E0 (EtwInitialize.c)
 *     EtwInitializeProcessor @ 0x140622514 (EtwInitializeProcessor.c)
 *     PiDrvDbRegisterNode @ 0x140622A40 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     PiDcInitUpdateProperties @ 0x140622D70 (PiDcInitUpdateProperties.c)
 *     DrvDbOpenContext @ 0x140623998 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140623BE8 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140623D78 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140623F40 (PiDrvDbRegisterNodeCallback.c)
 *     _PnpCtxOpenMachine @ 0x140623FA8 (_PnpCtxOpenMachine.c)
 *     _PnpCtxCreateNode @ 0x1406241F8 (_PnpCtxCreateNode.c)
 *     _SysCtxOpenMachine @ 0x140624344 (_SysCtxOpenMachine.c)
 *     PnpBootPhaseComplete @ 0x14062461C (PnpBootPhaseComplete.c)
 *     PdcTaskClientRegister @ 0x140624758 (PdcTaskClientRegister.c)
 *     PdcPortOpen @ 0x140624808 (PdcPortOpen.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1406251EC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1406269C4 (PopCreateHiberFileSecurityDescriptor.c)
 *     PopConnectToPolicyDevice @ 0x140626BD4 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x1406270A0 (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x140627198 (PopAssociateThermalRequest.c)
 *     PopExtendConnectionState @ 0x1406273E0 (PopExtendConnectionState.c)
 *     PpmIdleRegisterDefaultStates @ 0x14062769C (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x140627B68 (PopThermalHandlePreviousShutdown.c)
 *     CmpCmdInit @ 0x140627EE8 (CmpCmdInit.c)
 *     PoRegisterCoalescingCallback @ 0x140628420 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140628618 (ExAllocateCallBack.c)
 *     EtwpProcessThreadImageRundown @ 0x140629158 (EtwpProcessThreadImageRundown.c)
 *     EtwpCCSwapStart @ 0x140629B44 (EtwpCCSwapStart.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140629F3C (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnableKeyProviders @ 0x14062A460 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x14062A638 (EtwpEnableAutoLoggerProviders.c)
 *     EmpProviderRegister @ 0x14062AC40 (EmpProviderRegister.c)
 *     KeInitializeTimerTable @ 0x14062B1B4 (KeInitializeTimerTable.c)
 *     PspSetMinimalProcessName @ 0x14062C920 (PspSetMinimalProcessName.c)
 *     CmSetAcpiHwProfile @ 0x14062CD80 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x14062D44C (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x14062E0B4 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140630AC0 (CmpAdminSystemSecurityDescriptor.c)
 *     PiDmListInitEnumCallback @ 0x140630FD0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140631170 (PiDmObjectManagerPopulate.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140631850 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x1406318E0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140631A88 (SepReadAndPopulateCapes.c)
 *     PopRequestShutdownWait @ 0x140632064 (PopRequestShutdownWait.c)
 *     AdtpObjsInitialize @ 0x140632254 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140632728 (AdtpInitializeDriveLetters.c)
 *     RtlGenerateClass5Guid @ 0x140633E50 (RtlGenerateClass5Guid.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14063418C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     LdrpQueryValueKey @ 0x140635C40 (LdrpQueryValueKey.c)
 *     RtlpGetWindowsPolicy @ 0x140636914 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x140636A1C (RtlpMuiRegCreateRegistryInfo.c)
 *     ExpWorkQueueManagerThread @ 0x140636B70 (ExpWorkQueueManagerThread.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140637390 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140637574 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140637840 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x140637C84 (_CmGetMatchingCommonClassListWorker.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140637DEC (_RegRtlEnumKeyWithCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140637FB0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140638420 (_CmEnumSubkeyCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140638910 (_CmDevicePanelEnumSubkeyCallback.c)
 *     PfpRpCHashGrow @ 0x140638E50 (PfpRpCHashGrow.c)
 *     PipAddBindingId @ 0x14063B9AC (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x14063BAEC (PipCreateDependencyNode.c)
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14063CCAC (MiCreatePageFileSpaceBitmaps.c)
 *     AdtpEtwBuildString @ 0x14063D45C (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x14063D650 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14063D7B8 (SepGetLogonSessionAccountInfo.c)
 *     CmpInitializeNameCache @ 0x14063D908 (CmpInitializeNameCache.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmAllocatePerfCheck @ 0x14063F5C0 (PpmAllocatePerfCheck.c)
 *     PpmIdleInitializeConcurrency @ 0x140640180 (PpmIdleInitializeConcurrency.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 *     ExRegisterHost @ 0x1406423DC (ExRegisterHost.c)
 *     WmipAllocGuidEntry @ 0x140642BE8 (WmipAllocGuidEntry.c)
 *     PnpCopyDevProperty @ 0x140642C84 (PnpCopyDevProperty.c)
 *     PiIommuAllocateExtension @ 0x14064308C (PiIommuAllocateExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x140643160 (PipIommuRetrieveDeviceId.c)
 *     PnpReadDeviceConfiguration @ 0x1406432B0 (PnpReadDeviceConfiguration.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1406433E0 (PiDevCfgProcessDeviceCallback.c)
 *     IopCreateCmResourceList @ 0x140643580 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x140643654 (IopCombineCmResourceList.c)
 *     PiAuAllocateAndInitializeSid @ 0x1406440B8 (PiAuAllocateAndInitializeSid.c)
 *     WdipSemAllocatePool @ 0x1406443DC (WdipSemAllocatePool.c)
 *     PfTAllocateBuffers @ 0x140645458 (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x1406455CC (PfpCreateEvent.c)
 *     IopConnectMessageBasedInterrupt @ 0x1406457EC (IopConnectMessageBasedInterrupt.c)
 *     PiGetDefaultMessageString @ 0x140645B40 (PiGetDefaultMessageString.c)
 *     PipApplyFunctionToServiceInstances @ 0x140646158 (PipApplyFunctionToServiceInstances.c)
 *     PiSwInterfaceCreate @ 0x140646B8C (PiSwInterfaceCreate.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 *     ExpPartitionInitialize @ 0x140647350 (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolInternal @ 0x140647550 (ExpPartitionCreatePoolInternal.c)
 *     WheapInitializeErrorSource @ 0x1406477E0 (WheapInitializeErrorSource.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PiGetFileDirectoryRoot @ 0x140648A5C (PiGetFileDirectoryRoot.c)
 *     PiCreateRedirectedStateRoot @ 0x140648D7C (PiCreateRedirectedStateRoot.c)
 *     RtlGetPersistedStateLocation @ 0x140648E80 (RtlGetPersistedStateLocation.c)
 *     PpmRegisterProfiles @ 0x140648FC4 (PpmRegisterProfiles.c)
 *     PspInitializeProtectedProcessParameters @ 0x140649280 (PspInitializeProtectedProcessParameters.c)
 *     CmpInitializeSystemHivesLoad @ 0x1406498CC (CmpInitializeSystemHivesLoad.c)
 *     FsRtlGetTunnelParameterValue @ 0x14064AB54 (FsRtlGetTunnelParameterValue.c)
 *     WmipGenerateMofResourceNotification @ 0x14064ADB0 (WmipGenerateMofResourceNotification.c)
 *     CreateTlgAggregateSession @ 0x14064B0EC (CreateTlgAggregateSession.c)
 *     IoRegisterBootDriverReinitialization @ 0x14064B230 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x14064B2B0 (IoRegisterDriverReinitialization.c)
 *     NtSetUuidSeed @ 0x14064B320 (NtSetUuidSeed.c)
 *     WmipUnregisterEtwProvider @ 0x14064B69C (WmipUnregisterEtwProvider.c)
 *     WmipRegisterEtwProvider @ 0x14064B6F4 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x14064B784 (WmipQueueLegacyEtwWork.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14064BBDC (FsRtlpRegisterProviderWithMUP.c)
 *     MmGetNodeChannelRanges @ 0x14064BF78 (MmGetNodeChannelRanges.c)
 *     PnpSetInterruptInformation @ 0x14064C0A8 (PnpSetInterruptInformation.c)
 *     PfSnPrefetchCacheCtxStart @ 0x14064C130 (PfSnPrefetchCacheCtxStart.c)
 *     SepSetSystemPaths @ 0x14064C744 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x14064C83C (SepLoadNgenLocations.c)
 *     IopConnectLineBasedInterrupt @ 0x14064CDD4 (IopConnectLineBasedInterrupt.c)
 *     PopBootStatGet @ 0x14064D048 (PopBootStatGet.c)
 *     ObRegisterCallbacks @ 0x14064D220 (ObRegisterCallbacks.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x14064D958 (EtwpCoverageEnsureStringBuffer.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14064DD40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14064DF70 (ExpRegisterFirmwareTableInformationHandler.c)
 *     MiConvertInitialMemoryBlock @ 0x14064E09C (MiConvertInitialMemoryBlock.c)
 *     WheapLogInitEvent @ 0x14064E1A4 (WheapLogInitEvent.c)
 *     SepBuildDefaultCap @ 0x14064E954 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14064EBCC (_PnpGetEnumSecurityDescriptor.c)
 *     PnpAllocateDeviceInstancePath @ 0x14064F2B0 (PnpAllocateDeviceInstancePath.c)
 *     AlpcpInitSystem @ 0x14064F384 (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x14064F66C (AlpcpInitializeMessageLog.c)
 *     MmInitializeHandBuiltProcess @ 0x140650994 (MmInitializeHandBuiltProcess.c)
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 *     PerfDiagpRequestState @ 0x14065117C (PerfDiagpRequestState.c)
 *     CmpRegisterCallbackInternal @ 0x140651468 (CmpRegisterCallbackInternal.c)
 *     ExpGetSystemPlatformBinary @ 0x140651BE4 (ExpGetSystemPlatformBinary.c)
 *     IoRegisterContainerNotification @ 0x140651FD0 (IoRegisterContainerNotification.c)
 *     ExpWnfAllocateScopeMap @ 0x140652150 (ExpWnfAllocateScopeMap.c)
 *     PnpLogDeviceConflictingResource @ 0x1406521D4 (PnpLogDeviceConflictingResource.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x140652294 (PnpMergeFilteredResourceRequirementsList.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140652560 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     ExGetSystemFirmwareTable @ 0x140652860 (ExGetSystemFirmwareTable.c)
 *     WmipGenerateBinaryMofNotification @ 0x140652BAC (WmipGenerateBinaryMofNotification.c)
 *     _RegRtlQueryKeyPathName @ 0x140653784 (_RegRtlQueryKeyPathName.c)
 *     PiDcAllocateGenericTableEntry @ 0x140653DC0 (PiDcAllocateGenericTableEntry.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x140654050 (IoRegisterLastChanceShutdownNotification.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140654768 (EtwpLoadMicroarchitecturalPmcs.c)
 *     CmSetCallbackObjectContext @ 0x1406ED660 (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1406EFDAC (CmpDoQueueSystemHiveHysteresis.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x1406F49EC (CmpBuildVirtualReplicationStack.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1406F5AC8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmInitializeProcessor @ 0x1406F7C08 (CmInitializeProcessor.c)
 *     HvpMapHiveImageFromFile @ 0x1406F8648 (HvpMapHiveImageFromFile.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1406FAA00 (CmpAllocateLayerInfoForKcb.c)
 *     HvWriteExternal @ 0x1406FB84C (HvWriteExternal.c)
 *     CmpCmdRenameHive @ 0x1406FBAB4 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x1406FBB78 (CmpDiskFullWarning.c)
 *     CmDeleteKeyRecursive @ 0x1406FBD00 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406FD100 (CmpSnapshotTxOwnerArray.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1406FD2D8 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x1406FE0DC (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140704D74 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14070539C (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1407067E4 (HvSnapshotHiveToOffsetArray.c)
 *     VrpAllocateKeyContext @ 0x140708118 (VrpAllocateKeyContext.c)
 *     VrpProcessBufferParameter @ 0x1407082A8 (VrpProcessBufferParameter.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1407082FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140708F80 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpAddNamespaceNodeToList @ 0x140709A0C (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140709D4C (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14070C188 (VrpPreOpenOrCreate.c)
 *     VrpAllocateDiffHiveEntry @ 0x14070CFF4 (VrpAllocateDiffHiveEntry.c)
 *     VrpBuildKeyPath @ 0x14070DD28 (VrpBuildKeyPath.c)
 *     DbgkQueueUserExceptionReport @ 0x14071043C (DbgkQueueUserExceptionReport.c)
 *     DbgkCaptureLiveDump @ 0x140711794 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140711DA4 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x1407123C0 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140712560 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x14071274C (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140712770 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x140712900 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x1407133C0 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x1407136A0 (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x140713B10 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x140715DC0 (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x1407168A8 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x140716AE4 (FsRtlpQueryValueKey.c)
 *     IoReadPartitionTable @ 0x140717230 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140717670 (IoWritePartitionTable.c)
 *     HvlpAllocatePageListResources @ 0x140717E88 (HvlpAllocatePageListResources.c)
 *     VslStartSecureProcessor @ 0x140718E08 (VslStartSecureProcessor.c)
 *     IopAllocateGenericTableEntry @ 0x140719320 (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140719B0C (IopGetRelatedFileName.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x14071B5BC (IopValidateJunctionTarget.c)
 *     IoInitializeTimer @ 0x14071C2E0 (IoInitializeTimer.c)
 *     IoReplaceFileObjectName @ 0x14071C680 (IoReplaceFileObjectName.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14071CDA4 (IopSetFileMemoryPartitionInformation.c)
 *     IoIsValidNameGraftingBuffer @ 0x14071D3C0 (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x14071DA8C (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x14071DC20 (IoRegisterIoTracking.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x14071EC24 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14071F3A0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14071F948 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14071FB28 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140720374 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1407205A0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopFindSystemDevice @ 0x1407224D0 (IopFindSystemDevice.c)
 *     PipAddRequestToEdge @ 0x14072382C (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x1407253AC (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x140725EDC (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x1407260B0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140726D00 (IopAllocatePassiveInterruptBlock.c)
 *     PnpDelayedRemoveWorkerContextCreate @ 0x140727AA4 (PnpDelayedRemoveWorkerContextCreate.c)
 *     IopCombineLegacyResources @ 0x14072823C (IopCombineLegacyResources.c)
 *     IopIsPciRootBus @ 0x140728340 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140728824 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407288E0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140728A34 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140728CDC (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407294D0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x1407298EC (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x1407299AC (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140729BE0 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140729E54 (PiAuGetStateDirectorySecurityObject.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14072AA5C (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x14072ABBC (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14072BBA4 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyVariableData @ 0x14072BE3C (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072CBC0 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14072D4C4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072DDF0 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14072E750 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14072E820 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072FA50 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14072FF90 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140730170 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140730930 (PiDevCfgResolveVariableKeyValue.c)
 *     PiProfileUpdateDeviceTree @ 0x1407319FC (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x140731B4C (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x1407321D0 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x1407322E4 (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x1407338E8 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140733AE0 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140733BF8 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140733DB0 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x140734184 (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x140734EEC (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140735570 (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140737488 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140737A30 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 *     IopAppendLegacyVeto @ 0x140739A18 (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x140739AEC (IopCreateLegacyDeviceIds.c)
 *     IopQueryDockRemovalInterface @ 0x14073A1F8 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x14073AA54 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14073B744 (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14073BAFC (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuditDeviceOperation @ 0x14073C188 (PiAuditDeviceOperation.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14073D110 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14073DDA0 (PiDmaGuardQueueInsertEntry.c)
 *     PnpRebalance @ 0x14073E380 (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x14073E714 (IopExecuteHardwareProfileChange.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14073E8E8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     PiEventAllocatePendingEjectRelations @ 0x14073EA1C (PiEventAllocatePendingEjectRelations.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140742260 (KeInitializeSecondaryInterruptServices.c)
 *     KeInitializeUmsThread @ 0x140742ACC (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140747D60 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x140748CDC (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x14074914C (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x140749638 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x140749798 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1407498A8 (MmGetFileNameForSection.c)
 *     MiInitializeLockedPagesTracking @ 0x140749BF4 (MiInitializeLockedPagesTracking.c)
 *     MiConfigureMemoryInsertion @ 0x14074AA2C (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x14074AD3C (MiConfigureMemoryRemoval.c)
 *     MiAllocateHotPatchPageBitMap @ 0x14074C328 (MiAllocateHotPatchPageBitMap.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14074C8EC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiPrepareHotPatchBaseImageList @ 0x14074CABC (MiPrepareHotPatchBaseImageList.c)
 *     MmSetPermanentCacheAttribute @ 0x14074CF40 (MmSetPermanentCacheAttribute.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 *     MiConvertRunsToPages @ 0x14074E384 (MiConvertRunsToPages.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 *     MiAllocateAweInfo @ 0x14074F6C8 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 *     NtMapUserPhysicalPages @ 0x140750614 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140750968 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x140750D14 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x140752ED0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407532E8 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 *     MiCreatePlaceholderStorage @ 0x140755004 (MiCreatePlaceholderStorage.c)
 *     MiAllocateLargeZeroPages @ 0x14075522C (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x140755658 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x140755784 (MiFindLargePageMemory.c)
 *     MmGetChannelInformation @ 0x14075688C (MmGetChannelInformation.c)
 *     MiExpandPartitionIds @ 0x140757314 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x140757804 (MiMakePartitionMemoryBlock.c)
 *     MmManagePartitionInitialAddMemory @ 0x140757B20 (MmManagePartitionInitialAddMemory.c)
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 *     MmScrubMemory @ 0x1407583E4 (MmScrubMemory.c)
 *     ObpSetObjectAuditInfo @ 0x14075938C (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x14075956C (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x140759BF8 (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x14075A7C0 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x14075A8DC (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x14075AAC4 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x14075AED4 (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x14075AF1C (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x14075B108 (ObpStartRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x14075B918 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x14075BDB8 (PfpQueryFileExtentsRequest.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14075D960 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14075DF00 (PpmInstallPlatformIdleStates.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14075EB2C (PopRegisterCoolingExtensionProtection.c)
 *     PoDisableSleepStates @ 0x14075ECA0 (PoDisableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x14075EF78 (PopGetPowerRequestListInfo.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x14075F5E0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14075F7F0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14075FD3C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x1407601D0 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1407603E8 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x140760B84 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x140760FB8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmPerfResizeHistory @ 0x14076120C (PpmPerfResizeHistory.c)
 *     PopNewWakeSource @ 0x140762214 (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x140762264 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14076242C (PopWakeSourceGetDeviceProperty.c)
 *     PopDeleteHiberFile @ 0x1407625E8 (PopDeleteHiberFile.c)
 *     PopPdcCsDeviceNotification @ 0x140764F48 (PopPdcCsDeviceNotification.c)
 *     PopFxTracePerfRegistration @ 0x140769C48 (PopFxTracePerfRegistration.c)
 *     PopBootStatCheckIntegrity @ 0x14076BDB0 (PopBootStatCheckIntegrity.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x14076CA30 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x14076CD78 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x14076D06C (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x14076EB24 (PpmAllocateQueryTable.c)
 *     TtmNotifyDeviceArrival @ 0x1407704C0 (TtmNotifyDeviceArrival.c)
 *     TtmInitCurrentSession @ 0x140772AA0 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407748B0 (TtmiWriteEventToSingleQueue.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140779B40 (PspSiloInitializeSystemRootSymlink.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14077B3B8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspSetJobIoRateControlForVolume @ 0x14077BEB4 (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x14077C7EC (PspCreateSecureThread.c)
 *     PspLazyInitializeStorageExpansion @ 0x1407807D8 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x140781188 (RawQueryFileSystemInformation.c)
 *     RtlpComputeMergedAcl @ 0x1407856EC (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140785B10 (RtlpCreateServerAcl.c)
 *     RtlQueryRegistryValueWithFallback @ 0x140786710 (RtlQueryRegistryValueWithFallback.c)
 *     RtlCheckBootStatusIntegrity @ 0x140786B80 (RtlCheckBootStatusIntegrity.c)
 *     RtlIdnToUnicode @ 0x140787B50 (RtlIdnToUnicode.c)
 *     RtlpCtAllocateMemory @ 0x14078ABE8 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextInit @ 0x14078AC68 (RtlpCtContextInit.c)
 *     RtlpCtInitializeNotificationEvent @ 0x14078AD4C (RtlpCtInitializeNotificationEvent.c)
 *     RtlpCtInitializeWorkItem @ 0x14078AD94 (RtlpCtInitializeWorkItem.c)
 *     PdcNotificationClientRegister @ 0x14078B970 (PdcNotificationClientRegister.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14078C274 (SeCodeIntegritySetInformationProcess.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14079020C (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x1407905D8 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x140790690 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1407908F0 (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140791310 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x140792750 (SepCreateSidValuesBlock.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140792DA0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SepAddTokenLogonSession @ 0x140793000 (SepAddTokenLogonSession.c)
 *     NtFilterBootOption @ 0x14079357C (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1407939B4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140793E04 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepDuplicateClaimAttributes @ 0x140794980 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794D64 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x140795114 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x140795474 (SepReadSingleCap.c)
 *     SddlpReAlloc @ 0x140797784 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x1407978E4 (SddlpUuidToString.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079E914 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmPrefetchVirtualAddresses @ 0x1407A05EC (VmPrefetchVirtualAddresses.c)
 *     VmCreateMemoryRange @ 0x1407A09B0 (VmCreateMemoryRange.c)
 *     VmpPrefetchForVirtualFault @ 0x1407A0EFC (VmpPrefetchForVirtualFault.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1407A115C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A1848 (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x1407A22C0 (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x1407A2980 (IoWMISuggestInstanceName.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1407A2C38 (WmipAllocateSingleInstanceWnode.c)
 *     WmipGetSysIds @ 0x1407A313C (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1407A38F0 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1407A3C9C (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x1407A3F88 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1407A4320 (WmipQuerySingleMultiple.c)
 *     WmipLegacyEtwCallback @ 0x1407A4A70 (WmipLegacyEtwCallback.c)
 *     EtwpCoverageResetCP @ 0x1407A6F68 (EtwpCoverageResetCP.c)
 *     EtwpInitializeStackTracing @ 0x1407A72B8 (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1407A741C (EtwpReferenceStackLookasideList.c)
 *     EtwpLogMemInfoWs @ 0x1407A8264 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1407A883C (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x1407A8D78 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1407A8E90 (EtwpTraceHandle.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1407AA830 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407AAA00 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpAllocatePmcData @ 0x1407AAC68 (EtwpAllocatePmcData.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407AB938 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407ABBD8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407ABDF4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407AC050 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpCapturePreviousRegistryData @ 0x1407AC374 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1407AC478 (EtwpCaptureRegistryData.c)
 *     EtwpSendDbgId @ 0x1407AD100 (EtwpSendDbgId.c)
 *     EtwpEnumerateWorkingSet @ 0x1407AEA60 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407AEEA0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1407AF16C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407AF2C4 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1407AF830 (EtwpProcessorRundown.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407B05FC (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407B0900 (SendCaptureStateNotificationsWorker.c)
 *     EtwpAllocateEventNameFilter @ 0x1407B0D2C (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x1407B1268 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x1407B12F0 (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x1407B187C (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdateLevelKwFilter @ 0x1407B1D84 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1407B1E2C (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1407B1ED0 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpTrackBinaryForSession @ 0x1407B2344 (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1407B25C8 (EtwpTrackDecodeGuidForSession.c)
 *     EtwpUpdateDisallowedGuids @ 0x1407B2A2C (EtwpUpdateDisallowedGuids.c)
 *     EtwpEnableStackCaching @ 0x1407B3090 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureAllocateApc @ 0x1407B3320 (EtwpCovSampCaptureAllocateApc.c)
 *     EtwpCovSampCaptureAllocateCaptureBuffer @ 0x1407B3380 (EtwpCovSampCaptureAllocateCaptureBuffer.c)
 *     EtwpCovSampCaptureAllocateSampleBuffer @ 0x1407B3400 (EtwpCovSampCaptureAllocateSampleBuffer.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampContextGetModule @ 0x1407B47B0 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessAddModule @ 0x1407B6798 (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1407B6A94 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1407B72B8 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1407B73F0 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerQuery @ 0x1407B7744 (EtwpCoverageSamplerQuery.c)
 *     EtwpAllocateLbrData @ 0x1407B92E4 (EtwpAllocateLbrData.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1407B9330 (EtwpReferenceLastBranchLookasideList.c)
 *     EtwpConstructIptData @ 0x1407B9514 (EtwpConstructIptData.c)
 *     EtwpPreserveLogger @ 0x1407B99CC (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1407B9BFC (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1407B9CEC (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407BA190 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpSetSoftRestartInformation @ 0x1407BA2B0 (EtwpSetSoftRestartInformation.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1407BAAC0 (ExEnumerateSystemFirmwareTables.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1407BCD20 (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x1407BD2F4 (ExEnableHandleTracing.c)
 *     ExActivateVMWithSubscription @ 0x1407BDA5C (ExActivateVMWithSubscription.c)
 *     ExpGetSubscriptionPfn @ 0x1407BE454 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1407BEA8C (ExStartRecordingIRTimerExpiries.c)
 *     ExpConvertArcName @ 0x1407BEF08 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1407BF0C4 (ExpConvertSignatureName.c)
 *     ExpFindArcName @ 0x1407BF834 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x1407BFAFC (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1407BFF48 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1407C0164 (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x1407C0470 (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x1407C06C0 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1407C1B1C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1407C21D4 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1407C24A4 (ExpTranslateSymbolicLink.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1407C2670 (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x1407C2C40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1407C3288 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407C42D0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1407C45FC (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1407C4A04 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407C4C08 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407C4F40 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1407C51D4 (NtTranslateFilePath.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1407C63F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1407C685C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1407C6ADC (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1407C71F0 (ExpCovReadRequestBuffer.c)
 *     NtStartProfile @ 0x1407C7D2C (NtStartProfile.c)
 *     CMFAllocFn @ 0x1407C8170 (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C83C0 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1407C8998 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 *     NtSystemDebugControl @ 0x1407C9A08 (NtSystemDebugControl.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407CA784 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaAddErrorSource @ 0x1407CA8D0 (WheaAddErrorSource.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1407CAB20 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1407CB5CC (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1407CB834 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1407CBB04 (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x1407CC0F4 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1407CC3A4 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetLoadSchemaEx @ 0x1407CC564 (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x1407CC734 (ApiSetpConstructPathToExtension.c)
 *     sub_1407CCC84 @ 0x1407CCC84 (sub_1407CCC84.c)
 *     sub_1407CD25C @ 0x1407CD25C (sub_1407CD25C.c)
 *     sub_1407CD8F0 @ 0x1407CD8F0 (sub_1407CD8F0.c)
 *     sub_1407CDCA0 @ 0x1407CDCA0 (sub_1407CDCA0.c)
 *     sub_1407CDFF4 @ 0x1407CDFF4 (sub_1407CDFF4.c)
 *     sub_1407CE350 @ 0x1407CE350 (sub_1407CE350.c)
 *     sub_1407CE830 @ 0x1407CE830 (sub_1407CE830.c)
 *     sub_1407CF0AC @ 0x1407CF0AC (sub_1407CF0AC.c)
 *     sub_1407CFA00 @ 0x1407CFA00 (sub_1407CFA00.c)
 *     sub_1407CFF64 @ 0x1407CFF64 (sub_1407CFF64.c)
 *     sub_1407D0524 @ 0x1407D0524 (sub_1407D0524.c)
 *     sub_1407D0C60 @ 0x1407D0C60 (sub_1407D0C60.c)
 *     sub_1407D1140 @ 0x1407D1140 (sub_1407D1140.c)
 *     sub_1407D1C00 @ 0x1407D1C00 (sub_1407D1C00.c)
 *     sub_1407D229C @ 0x1407D229C (sub_1407D229C.c)
 *     sub_1407D2744 @ 0x1407D2744 (sub_1407D2744.c)
 *     sub_1407D2AA8 @ 0x1407D2AA8 (sub_1407D2AA8.c)
 *     sub_1407D330C @ 0x1407D330C (sub_1407D330C.c)
 *     sub_1407D38E8 @ 0x1407D38E8 (sub_1407D38E8.c)
 *     sub_1407D3C3C @ 0x1407D3C3C (sub_1407D3C3C.c)
 *     sub_1407D3F94 @ 0x1407D3F94 (sub_1407D3F94.c)
 *     sub_1407D4598 @ 0x1407D4598 (sub_1407D4598.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407DA8D8 (AslPathWildcardFindNext.c)
 *     AdtpBuildGuidString @ 0x1407DFA50 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1407DFB7C (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1407DFC3C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1407DFD94 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1407DFEEC (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1407DFF90 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x1407E0190 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1407E0520 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1407E0728 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1407E0A38 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x1407E0BA0 (AdtpBuildUlongString.c)
 *     AdtpAppendString @ 0x1407E0CA4 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1407E0E98 (AdtpBuildAccessesString.c)
 *     AdtpBuildUserAccountControlString @ 0x1407E15B8 (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1407E2000 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1407E20DC (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1407E21A4 (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1407E24B0 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1407E25A0 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1407E2658 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1407E2758 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1407E2904 (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1407E2A48 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1407E2B38 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1407E2D14 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1407E2E5C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1407E2F44 (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1407E3A20 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x1407E3F80 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1407E446C (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1407E4690 (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x1407E4B04 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1407E4C9C (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407E4DF4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1407E5010 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1407E52F8 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407E53CC (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1407E579C (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1407E58FC (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1407E5D78 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1407E6144 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiSystemDevice @ 0x1407E62CC (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1407E6630 (SiGetEspFromFirmware.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1407E72C8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1407E7910 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1407E7C0C (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407E7FC8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1407E8498 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1407E8BC8 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1407E8FA0 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407E9948 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1407E9BB4 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1407E9ED0 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1407EA360 (_CmGetDevicesInBaseContainerList.c)
 *     _CmServiceFilterCallback @ 0x1407EB960 (_CmServiceFilterCallback.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1407EC744 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x1407ECA58 (_CmDeleteDevicePanelWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1407ED0A4 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmGetDeviceSiblings @ 0x1407EEB24 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1407EEC8C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x1407F08C8 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x1407F09B8 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1407F0EF8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407F1384 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407F25F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407F2A34 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407F403C (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x1407F5744 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1407F5AC0 (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x1407F608C (VhdiVerifyBootDisk.c)
 *     ObGetSiloRootDirectoryPath @ 0x1407F6710 (ObGetSiloRootDirectoryPath.c)
 *     ObpGetSilosRootDirectory @ 0x1407F687C (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1407F6A74 (RtlpLoadPolicyLanguageSpec.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 *     KdPullRemoteFile @ 0x140807430 (KdPullRemoteFile.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x14080EE78 (VfXdvDriverCaptureIoCallbacks.c)
 *     ViThunkCreateSharedExportInformation @ 0x14080F03C (ViThunkCreateSharedExportInformation.c)
 *     VfAvlInitializeTreeEx @ 0x14080F2F0 (VfAvlInitializeTreeEx.c)
 *     IovpBuildDriverObjectList @ 0x14081220C (IovpBuildDriverObjectList.c)
 *     VerifierExAllocatePoolWithTag @ 0x140813490 (VerifierExAllocatePoolWithTag.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140813CB0 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1408142A0 (ViInitializeLocalSystemDescriptor.c)
 *     VfInitVerifierComponents @ 0x140814500 (VfInitVerifierComponents.c)
 *     ViDdiDriverEntry @ 0x1408158E0 (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x140819F18 (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x14081A0D8 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14081B61C (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14081BDBC (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x140820F38 (ViPendingDelayCompletion.c)
 *     VfTargetEtwRegister @ 0x140821DD4 (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1408221A0 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x1408224E8 (ViTargetTrackContiguousMemory.c)
 *     VfInitializeBranchTracing @ 0x140823574 (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140823A70 (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x140824104 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x140824188 (ViThunkFindAllSpecialTables.c)
 *     ViFaultsAddAppNoDuplicates @ 0x14082523C (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140825344 (ViFaultsAddTagNoDuplicates.c)
 *     VfDeadlockInitialize @ 0x1408285F8 (VfDeadlockInitialize.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x140829D30 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     VfSuspectDriversAllocateEntry @ 0x14082A740 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x14082AF68 (VfSuspectExcludedDriversAllocateEntry.c)
 *     VfIrpDatabaseInit @ 0x14082B65C (VfIrpDatabaseInit.c)
 *     IovpSessionDataCreate @ 0x14082C394 (IovpSessionDataCreate.c)
 *     VfIrpLogRecordEvent @ 0x14082E390 (VfIrpLogRecordEvent.c)
 *     VfIrpLogRetrieveWmiData @ 0x14082E574 (VfIrpLogRetrieveWmiData.c)
 *     ViCtxAllocateIsrContext @ 0x14082EC68 (ViCtxAllocateIsrContext.c)
 *     VfGetVerifierInformation @ 0x140837924 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x140838AE0 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14083A0A4 (HdlspSetBlueScreenInformation.c)
 *     ResFwpPageOutBackground @ 0x14083C3FC (ResFwpPageOutBackground.c)
 *     CcInitializeBcbProfiler @ 0x14087C364 (CcInitializeBcbProfiler.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 *     IopReportBootResources @ 0x1408982F0 (IopReportBootResources.c)
 *     IopInitializeResourceMap @ 0x14089836C (IopInitializeResourceMap.c)
 *     MmInitializeMemoryLimits @ 0x1408986B4 (MmInitializeMemoryLimits.c)
 *     IoReportHalResourceUsage @ 0x140898810 (IoReportHalResourceUsage.c)
 *     MiInitializeMirroring @ 0x14089C980 (MiInitializeMirroring.c)
 *     MiInitializeCacheFlushing @ 0x14089D23C (MiInitializeCacheFlushing.c)
 *     MiCreateEnclaveRegions @ 0x14089D418 (MiCreateEnclaveRegions.c)
 *     MiInitializeRelocations @ 0x14089DB74 (MiInitializeRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x14089DF48 (MiBuildImportsForBootDrivers.c)
 *     ExpInitializeSvm @ 0x14089EB90 (ExpInitializeSvm.c)
 *     ObpInitStackTrace @ 0x14089ED78 (ObpInitStackTrace.c)
 *     ExpKeyedEventInitialization @ 0x14089EE78 (ExpKeyedEventInitialization.c)
 *     MiSectionInitialization @ 0x14089F4C0 (MiSectionInitialization.c)
 *     MiInitializeSessionIds @ 0x14089F6EC (MiInitializeSessionIds.c)
 *     WmipInitializeSecurity @ 0x14089FA2C (WmipInitializeSecurity.c)
 *     PspInitializeSiloStructures @ 0x14089FF04 (PspInitializeSiloStructures.c)
 *     ExpInitSystemPhase1 @ 0x1408A0198 (ExpInitSystemPhase1.c)
 *     CcInitializeCacheManager @ 0x1408A0410 (CcInitializeCacheManager.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1408A2EC0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessResumeInformation @ 0x1408A30D8 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1408A31A8 (BapdpProcessBitlockerStatus.c)
 *     BapdpRegisterWbclData @ 0x1408A3278 (BapdpRegisterWbclData.c)
 *     PpInitializeBootDDB @ 0x1408A48EC (PpInitializeBootDDB.c)
 *     BapdpProcessHSTIResults @ 0x1408A49CC (BapdpProcessHSTIResults.c)
 *     BapdpProcessWmdResults @ 0x1408A4A5C (BapdpProcessWmdResults.c)
 *     BapdpProcessFwUpdateResults @ 0x1408A4DBC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessEDrvHintInfo @ 0x1408A4E4C (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessBootMetadata @ 0x1408A5460 (BapdpProcessBootMetadata.c)
 *     KiAllocateCpuSetData @ 0x1408A6094 (KiAllocateCpuSetData.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x1408A7F78 (PopNetInitialize.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 *     EmpParseEntryTypes @ 0x1408A9B4C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1408A9CB4 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1408A9EDC (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1408AA038 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1408AA4CC (EmpParseRules.c)
 *     EmpParseStrings @ 0x1408AA82C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1408AAA58 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1408AAC84 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPush @ 0x1408AB1E8 (EmpRuleParserStackPush.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x1408AC1C8 (KiPerformGroupConfiguration.c)
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 *     MiInitializeDriverPtes @ 0x1408AE288 (MiInitializeDriverPtes.c)
 *     CmpInitializeHardwareConfiguration @ 0x1408AEDBC (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1408AEF00 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetVideoBiosInformation @ 0x1408AF57C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1408AF738 (CmpSetSystemBiosInformation.c)
 *     CmpGetRegistryValue @ 0x1408AFE98 (CmpGetRegistryValue.c)
 *     CmpInitializeSystemHive @ 0x1408B02A4 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x1408B0CD8 (CmpInitializePreloadedHive.c)
 *     CmpInitializeDriverStores @ 0x1408B1698 (CmpInitializeDriverStores.c)
 *     CmpParseInfBuffer @ 0x1408B1834 (CmpParseInfBuffer.c)
 *     CmpGetToken @ 0x1408B1B2C (CmpGetToken.c)
 *     CmpAppendValue @ 0x1408B1DB4 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x1408B1E38 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x1408B1EC0 (CmpAppendSection.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x1408B2DEC (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x1408B32B4 (KiComputeNumaCosts.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x1408B498C (PipCreateComputerId.c)
 *     PipResetDevices @ 0x1408B4E90 (PipResetDevices.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x1408B5198 (PnpRegMultiSzToUnicodeStrings.c)
 *     PipInitDeviceOverrideCache @ 0x1408B5318 (PipInitDeviceOverrideCache.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     PipCreateEntry @ 0x1408B6E60 (PipCreateEntry.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1408B7BC8 (CmpOpenSystemDriverHiveContext.c)
 *     CmGetSystemDriverList @ 0x1408B7D44 (CmGetSystemDriverList.c)
 *     BvgaSaveResources @ 0x1408BA8A4 (BvgaSaveResources.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1408BC7D0 (SepInitializeSingletonAttributesStructures.c)
 *     SeMakeSystemToken @ 0x1408BCBA0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1408BD0F0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1408BD32C (SeMakeAnonymousLogonToken.c)
 *     SepVariableInitialization @ 0x1408BD6E8 (SepVariableInitialization.c)
 *     SepInitSystemDacls @ 0x1408BEDD8 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1408BFB84 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1408BFF3C (PiAuCreateStandardSecurityObject.c)
 *     PfSnInitializePrefetcher @ 0x1408C05BC (PfSnInitializePrefetcher.c)
 *     WheapInitializeErrorSourceTable @ 0x1408C0DD8 (WheapInitializeErrorSourceTable.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1408C10B4 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PsInitializeQuotaSystem @ 0x1408C1AAC (PsInitializeQuotaSystem.c)
 *     FsRtlInitSystem @ 0x1408C1C40 (FsRtlInitSystem.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1408C1F7C (FsRtlGetCompatibilityModeValue.c)
 *     StartFirstUserProcess @ 0x1408C254C (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x1408C29A4 (QueryRegistryHideMachine.c)
 *     BootApplicationPersistentDataInitialize @ 0x1408C2CF0 (BootApplicationPersistentDataInitialize.c)
 *     PopEtInit @ 0x1408C3458 (PopEtInit.c)
 *     SepRmDbInitialization @ 0x1408C3D58 (SepRmDbInitialization.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1408C4278 (PspInitializeSystemPartitionPhase0.c)
 *     MiCreateTopLevelUltraMappings @ 0x1408C43B8 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeUltraSpace @ 0x1408C44CC (MiInitializeUltraSpace.c)
 *     PiLastGoodCopyKeyContents @ 0x1408C5524 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1408C55D8 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1408C6304 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x1408C6C78 (SeSecureBootRegisterPolicy.c)
 *     MiInitializeSharedUserData @ 0x1408C7258 (MiInitializeSharedUserData.c)
 *     EtwpReadConfigParameters @ 0x1408C742C (EtwpReadConfigParameters.c)
 *     PopInitPlatformSettings @ 0x1408C7854 (PopInitPlatformSettings.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1408C7C8C (CmpInitializeTrustedInstallerSid.c)
 *     PnpInitializeDeviceEvents @ 0x1408C84C4 (PnpInitializeDeviceEvents.c)
 *     WheapCreatePerProcessorInfo @ 0x1408C85BC (WheapCreatePerProcessorInfo.c)
 *     SaveNodeDistanceInformation @ 0x1408C9294 (SaveNodeDistanceInformation.c)
 *     PnpBusTypeGuidInitialize @ 0x1408C9968 (PnpBusTypeGuidInitialize.c)
 *     MfgInitSystem @ 0x1408C9EE8 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x1408CA0E4 (PoFxRegisterDebugger.c)
 *     HeadlessInit @ 0x1408CA344 (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1408DCEA0 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1408DD818 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1408DF2C0 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1408DF380 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x1408DFB40 (PipProcessPendingObjects.c)
 *     KeQueryNumaGraph @ 0x1408DFF44 (KeQueryNumaGraph.c)
 *     KiInitializeCacheErrataSupport @ 0x1408E0898 (KiInitializeCacheErrataSupport.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1408E0A50 (MiInitializeEnclaveMetadataPage.c)
 *     VhdiInitializeBootDisk @ 0x1408E2570 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1408E2D74 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1408E3160 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408E3348 (SbpStartLanman.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpUseSpecialPool @ 0x1402B91EC (ExpUseSpecialPool.c)
 *     ExAllocateHeapPool @ 0x1402BCFE4 (ExAllocateHeapPool.c)
 *     ExDeferredFreePool @ 0x1402EA030 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x140592D80 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  SIZE_T v4; // r13
  POOL_TYPE v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rsi
  ULONG v8; // r12d
  unsigned __int64 v9; // r11
  unsigned int v10; // r15d
  unsigned int v11; // r15d
  _GENERAL_LOOKASIDE_POOL *v12; // rbx
  PSLIST_ENTRY v13; // rax
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rdi
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int32 v17; // r10d
  unsigned __int64 v18; // r13
  int v19; // r9d
  int v20; // r12d
  __int64 v21; // r11
  __int64 v22; // r8
  unsigned int v23; // ebx
  unsigned int v24; // edx
  __int64 v25; // r15
  int v26; // eax
  volatile signed __int32 *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  PVOID result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 **v35; // r9
  __int64 **v36; // rbx
  __int64 v37; // r9
  __int64 HeapPages; // rax
  ULONG_PTR v39; // rbx
  struct _FAST_MUTEX *v40; // rcx
  __int64 v41; // rdx
  __int64 *v42; // rbx
  __int64 v43; // rcx
  __int64 **v44; // rax
  volatile signed __int32 *v45; // r13
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v48; // rcx
  __int64 v49; // rcx
  bool v50; // zf
  char *v51; // rcx
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // di
  __int64 v54; // rdx
  __int64 *v55; // rdi
  __int64 v56; // rax
  ULONG_PTR v57; // rax
  __int16 v58; // cx
  ULONG_PTR v59; // r9
  char v60; // cl
  __int16 *v61; // r8
  char v62; // al
  _BYTE *v63; // rax
  __int16 v64; // ax
  __int64 v65; // rcx
  __int64 *v66; // rax
  unsigned __int8 v67; // r15
  signed __int32 v68; // eax
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 Next; // rax
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  unsigned int v75; // r9d
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // ecx
  ULONG_PTR v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r9
  int v83; // r8d
  __int16 v84; // cx
  _BYTE *v85; // rax
  volatile signed __int32 v86; // eax
  int v87; // r14d
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  unsigned int v95; // edi
  void *SpecialPool; // rax
  unsigned __int64 v97; // r9
  size_t v98; // rsi
  __int64 v99; // rax
  int v100; // edx
  __int64 v101; // r9
  __int64 v102; // r10
  unsigned int v103; // ebx
  unsigned int v104; // ecx
  __int64 v105; // r13
  int v106; // eax
  volatile signed __int32 *v107; // r14
  volatile signed __int32 v108; // ecx
  __int64 v109; // rax
  __int64 v110; // rcx
  int v111; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v113; // eax
  __int64 v114; // [rsp+30h] [rbp-59h]
  __int64 v115; // [rsp+38h] [rbp-51h]
  __int64 v116; // [rsp+38h] [rbp-51h]
  __int64 v117; // [rsp+38h] [rbp-51h]
  __int64 v118; // [rsp+40h] [rbp-49h]
  void *v119; // [rsp+40h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE v120; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v121[2]; // [rsp+60h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE v122; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned int BugCheckParameter3; // [rsp+F0h] [rbp+67h]
  unsigned int BugCheckParameter3a; // [rsp+F0h] [rbp+67h]
  unsigned int BugCheckParameter3b; // [rsp+F0h] [rbp+67h]
  unsigned int v128; // [rsp+100h] [rbp+77h]
  int v129; // [rsp+108h] [rbp+7Fh]
  int v130; // [rsp+108h] [rbp+7Fh]

  v4 = NumberOfBytes;
  v5 = PoolType;
  if ( (PoolType & 0x44) == 0x44 )
    v5 = PoolType & 0xFFFFFFFB;
  if ( ExpHeapFrontendPool )
  {
    result = ExAllocateHeapPool((unsigned int)v5, NumberOfBytes, *(__int64 *)&Tag);
    if ( result )
      return result;
    goto LABEL_172;
  }
  v6 = v5 & 1;
  if ( (v5 & 0x20) == 0 )
  {
    v7 = PoolVector[v6];
    goto LABEL_6;
  }
  if ( (v5 & 1) != 0 )
  {
    v7 = MiSessionPoolVector(PoolType, NumberOfBytes, Tag);
LABEL_6:
    if ( (v5 & 1) != 0 )
      goto LABEL_7;
    goto LABEL_40;
  }
  v7 = PoolVector[0];
LABEL_40:
  if ( (v5 & 0x200) == 0 )
  {
    if ( (ExpPoolFlags & 0x400) != 0 )
      v5 |= 0x200u;
    else
      v7 += 4416LL;
  }
LABEL_7:
  if ( (ExpPoolFlags & 8) != 0 )
  {
    if ( (v5 & 0x80000080) == 0 )
      return (PVOID)VeAllocatePoolWithTagPriority(v5, NumberOfBytes, Tag, HighPoolPriority, retaddr);
    v5 &= ~0x80u;
  }
  v8 = Tag & 0x7FFFFFFF;
  v128 = v8;
  if ( !v8 )
  {
    v8 = 811884866;
    v128 = 811884866;
  }
  v9 = 2LL;
  if ( !MmSpecialPoolTag || !ExpUseSpecialPool(v4, v8) )
    goto LABEL_11;
  v95 = v5 & 0xFFFFFFDF;
  if ( (v5 & 0x21) != 0x20 )
    v95 = v5;
  SpecialPool = (void *)MmAllocateSpecialPool(v4, v8, v95, v9);
  v119 = SpecialPool;
  v97 = (unsigned __int64)SpecialPool;
  if ( !SpecialPool )
  {
    v9 = 2LL;
LABEL_11:
    if ( v4 <= 0xFE0 )
    {
      if ( !v4 )
        LODWORD(v4) = 1;
      v10 = v4 + 31;
      if ( (v5 & 4) != 0 )
      {
        v76 = ExpCacheLineSize + ((v4 + 31) & 0xFFFFFFF0) - 1;
        if ( ExpCacheLineSize == 64 )
          v77 = v76 >> 6;
        else
          v77 = v76 / ExpCacheLineSize;
        v78 = ExpCacheLineSize * (v77 + 1);
        if ( v78 > 0xFE0 )
          v5 &= ~4u;
        else
          v10 = v78;
      }
      v11 = v10 >> 4;
      if ( (_DWORD)v6 )
      {
        if ( (v5 & 0x20) != 0 )
        {
          if ( v11 <= ExpSessionPoolSmallLists )
          {
            v12 = (_GENERAL_LOOKASIDE_POOL *)(((unsigned __int64)v11 << 7) + ExpSessionPoolLookaside - 128);
            ++v12->TotalAllocates;
            v13 = RtlpInterlockedPopEntrySList(&v12->ListHead);
            if ( v13 )
              goto LABEL_20;
            v9 = 2LL;
          }
        }
        else if ( v5 >= NonPagedPool )
        {
          if ( v11 <= 0x20 )
          {
            v12 = &KeGetCurrentPrcb()->PPNPagedLookasideList[v11 + 31];
            ++v12->TotalAllocates;
            v13 = RtlpInterlockedPopEntrySList(&v12->ListHead);
            if ( v13 )
            {
LABEL_20:
              v14 = *((_QWORD *)&v13[-1].Next + 1);
              v15 = (ULONG_PTR)&v13[-1];
              BugCheckParameter4 = ExpPoolQuotaCookie ^ (unsigned __int64)&v13[-1];
              if ( v14 != BugCheckParameter4 )
                KeBugCheckEx(0x19u, 0xEuLL, v15, v14, BugCheckParameter4);
              ++v12->AllocateMisses;
              *(_BYTE *)(v15 + 3) = v5 & 0x6D | 2;
              goto LABEL_22;
            }
            v9 = 2LL;
          }
          if ( (unsigned __int16)KeNumberNodes <= 1u
            || (v75 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0], v75 >= ExpNumberOfPagedPools) )
          {
            LODWORD(v82) = 1;
            BugCheckParameter3a = 1;
            if ( ExpNumberOfPagedPools != 1 )
            {
              v82 = (unsigned int)(ExpPoolIndex + 1);
              if ( (unsigned int)v82 > ExpNumberOfPagedPools )
                v82 = 1LL;
              v83 = v82;
              ExpPoolIndex = v82;
              do
              {
                if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v82] + 16) )
                  break;
                v82 = (unsigned int)(v82 + 1);
                if ( (unsigned int)v82 > ExpNumberOfPagedPools )
                  v82 = 1LL;
              }
              while ( (_DWORD)v82 != v83 );
              BugCheckParameter3a = v82;
            }
            v7 = ExpPagedPoolDescriptor[(unsigned int)v82];
          }
          else
          {
            BugCheckParameter3a = v75 + 1;
            v7 = ExpPagedPoolDescriptor[v75 + 1];
          }
          goto LABEL_53;
        }
      }
      else
      {
        if ( v11 <= 0x20 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v32 = v11 - 1;
          if ( (v5 & 0x200) != 0 )
            v33 = v32 + 24;
          else
            v33 = v32 + 56;
          ++*((_DWORD *)&CurrentPrcb->NextThread + 24 * v33 + 1);
          v12 = (_GENERAL_LOOKASIDE_POOL *)((char *)CurrentPrcb + 96 * v33);
          v13 = RtlpInterlockedPopEntrySList(&v12->ListHead);
          if ( v13 )
            goto LABEL_20;
          v9 = 2LL;
        }
        if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
        {
          v34 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
          BugCheckParameter3a = v34;
          if ( (unsigned int)v34 >= ExpNumberOfNonPagedPools )
          {
            v34 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
            BugCheckParameter3a = ExpNumberOfNonPagedPools - 1;
          }
          v7 = ExpNonPagedPoolDescriptor[v34];
          if ( (v5 & 0x200) == 0 )
            v7 += 4416LL;
          goto LABEL_53;
        }
      }
      BugCheckParameter3a = 0;
LABEL_53:
      v129 = 0;
      v35 = (__int64 **)(v7 + 16 * (v11 - 1 + 20LL));
      while ( 1 )
      {
        v36 = v35;
        v37 = v5 & 1;
        do
        {
          if ( *v36 == (__int64 *)v36 )
            goto LABEL_56;
          v45 = (volatile signed __int32 *)(v7 + 8);
          if ( v37 )
          {
            v121[0] = 0;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            if ( ++CurrentThread->AbAllocationRegionCount != 1 )
              KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v7 + 8, KeGetCurrentIrql(), 0LL);
            AbEntrySummary = CurrentThread->AbEntrySummary;
            if ( AbEntrySummary )
            {
LABEL_71:
              _BitScanForward((unsigned int *)&v48, AbEntrySummary);
              v121[1] = v48;
              CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v48);
              v49 = 96 * v48 + 800;
              v50 = (struct _KTHREAD *)((char *)CurrentThread + v49) == 0LL;
              v51 = (char *)CurrentThread + v49;
              v116 = (__int64)v51;
              if ( !v50 )
              {
                if ( (unsigned __int64)v45 >= 0xFFFF800000000000uLL
                  && byte_1403CCF90[(((unsigned __int64)v45 >> 39) & 0x1FF) - 256] == 1 )
                {
                  SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
                  v51 = (char *)v116;
                }
                else
                {
                  SessionId = -1;
                }
                *((_DWORD *)v51 + 10) = SessionId;
                *((_QWORD *)v51 + 4) = (unsigned __int64)v45 & 0x7FFFFFFFFFFFFFFCLL;
                goto LABEL_76;
              }
            }
            else
            {
              if ( CurrentThread->AbOrphanedEntrySummary )
              {
                AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
                CurrentThread->AbOrphanedEntrySummary = 0;
                CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
                AbEntrySummary = CurrentThread->AbEntrySummary;
                goto LABEL_71;
              }
              v116 = 0LL;
              if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
                EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, v7 + 8);
            }
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_76:
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v7 + 8, (__int64)v121);
            v50 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v50
              && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !_interlockedbittestandreset(v45, 0) )
              ExpAcquireFastMutexContended(v7 + 8, v116);
            if ( v116 )
              *(_BYTE *)(v116 + 26) |= 1u;
            *(_QWORD *)(v7 + 16) = KeGetCurrentThread();
            *(_DWORD *)(v7 + 56) = CurrentIrql;
            PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
            goto LABEL_84;
          }
          v120.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 8);
          v120.LockQueue.Next = 0LL;
          v69 = KeGetCurrentIrql();
          __writecr8(v9);
          v120.OldIrql = v69;
          v70 = KeGetCurrentPrcb();
          SchedulerAssist = v70->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v70->NestingLevel <= 1u )
            {
              v111 = SchedulerAssist[5];
              SchedulerAssist[5] = v111 + 1;
              if ( v111 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              {
                KiPerformUnboostKick(v70);
                v37 = v5 & 1;
              }
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented((__int64)&v120, (volatile __int64 *)(v7 + 8));
          }
          else
          {
            v54 = _InterlockedExchange64((volatile __int64 *)v45, (__int64)&v120);
            if ( !v54 )
              goto LABEL_85;
            KxWaitForLockOwnerShip((__int64)&v120, (_QWORD *)v54);
          }
LABEL_84:
          v37 = v5 & 1;
LABEL_85:
          v55 = *v36;
          if ( *v36 != (__int64 *)v36 )
          {
            v56 = *v55;
            if ( (__int64 **)v55[1] != v36 || *(__int64 **)(v56 + 8) != v55 )
              __fastfail(3u);
            v15 = (ULONG_PTR)(v55 - 2);
            *v36 = (__int64 *)v56;
            *(_QWORD *)(v56 + 8) = v36;
            v57 = *(unsigned __int8 *)(v15 + 1);
            if ( (_DWORD)v57 != BugCheckParameter3a )
              KeBugCheckEx(0x19u, 0x23uLL, v57, BugCheckParameter3a, v15);
            v58 = *(_WORD *)(v15 + 2);
            v59 = v15;
            if ( (unsigned __int8)v58 != v11 )
            {
              v60 = v58 - v11;
              if ( *(_BYTE *)v15 )
              {
                *(_BYTE *)(v15 + 2) = v60;
                v54 = v15;
                v61 = (__int16 *)(v15 + 2);
                v62 = *(_BYTE *)(v15 + 2);
                v15 += 16LL * (unsigned __int8)*(_WORD *)(v15 + 2);
                v59 = v15;
                *(_BYTE *)v15 = v62;
                v63 = (_BYTE *)(v15 + 16LL * v11);
                if ( ((unsigned __int16)v63 & 0xFFF) != 0 )
                  *v63 = v11;
              }
              else
              {
                v54 = v15 + 16LL * v11;
                v61 = (__int16 *)(v54 + 2);
                *(_BYTE *)(v54 + 2) = v60;
                v84 = *(_WORD *)(v54 + 2);
                v85 = (_BYTE *)(v54 + 16LL * (unsigned __int8)v84);
                *(_BYTE *)v54 = v11;
                if ( ((unsigned __int16)v85 & 0xFFF) != 0 )
                  *v85 = v84;
              }
              *(_BYTE *)(v15 + 2) = v11;
              *(_BYTE *)(v15 + 1) = BugCheckParameter3a;
              *(_BYTE *)(v54 + 3) = 0;
              v64 = *v61;
              *(_DWORD *)(v54 + 4) = 1701147206;
              *(_BYTE *)(v54 + 1) = BugCheckParameter3a;
              if ( (_BYTE)v64 != 1 )
              {
                v54 += 16LL;
                v65 = v7 + 16 * ((unsigned int)(unsigned __int8)v64 - 1 + 20LL);
                v66 = *(__int64 **)(v65 + 8);
                if ( *v66 != v65 )
                  __fastfail(3u);
                *(_QWORD *)v54 = v65;
                *(_QWORD *)(v54 + 8) = v66;
                *v66 = v54;
                *(_QWORD *)(v65 + 8) = v54;
              }
            }
            *(_BYTE *)(v15 + 3) = v5 & 0x6D | 2;
            if ( v5 < NonPagedPool )
            {
              memset((void *)(v59 + 16), 0, 16LL * (unsigned __int8)*(_WORD *)(v15 + 2) - 16);
              *(_DWORD *)(v15 + 4) = v8;
            }
            if ( (v5 & 1) != 0 )
            {
              LOBYTE(v54) = 1;
              PsBoostThreadIo((__int64)KeGetCurrentThread(), v54);
              v67 = *(_BYTE *)(v7 + 56);
              *(_QWORD *)(v7 + 16) = 0LL;
              v68 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), 1, 0);
              if ( v68 )
                ExpReleaseFastMutexContended(v7 + 8, v68);
              __writecr8(v67);
              KeAbPostRelease(v7 + 8);
              goto LABEL_102;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v120, retaddr);
            }
            else
            {
              _m_prefetchw(&v120);
              Next = (__int64)v120.LockQueue.Next;
              if ( !v120.LockQueue.Next )
              {
                if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)v120.LockQueue.Lock,
                                                     0LL,
                                                     (signed __int64)&v120) == &v120 )
                  goto LABEL_110;
                Next = KxWaitForLockChainValid((__int64 *)&v120);
              }
              v120.LockQueue.Next = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            }
LABEL_110:
            v73 = KeGetCurrentPrcb();
            v74 = v73->SchedulerAssist;
            if ( v74 )
            {
              if ( v73->NestingLevel <= 1u )
              {
                v113 = v74[5] - 1;
                v74[5] = v113;
                if ( !v113 && !*((_BYTE *)v74 + 25) && !*((_BYTE *)v74 + 27) )
                  KiPerformUnboostKick(v73);
              }
            }
            __writecr8(v120.OldIrql);
LABEL_102:
            _InterlockedIncrement((volatile signed __int32 *)(v7 + 64));
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 88), 16LL * (unsigned __int8)*(_WORD *)(v15 + 2));
LABEL_22:
            v17 = v128;
            v18 = 16LL * (unsigned __int8)*(_WORD *)(v15 + 2);
            *(_DWORD *)(v15 + 4) = v128;
            if ( v128 == PoolHitTag )
              __debugbreak();
            if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
            {
              EtwTracePool(0xE20u, v5, v128, v15 + 16, v18);
              v17 = v128;
            }
            v19 = v5 & 0x20;
            if ( (v5 & 0x20) != 0 )
            {
              v22 = ExpSessionPoolTrackTable;
              v20 = ExpSessionPoolTrackTableMask;
              v21 = ExpSessionPoolTrackTableSize;
            }
            else
            {
              v20 = PoolTrackTableMask;
              v21 = PoolTrackTableSize;
              v22 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
            }
            v115 = v21;
            v118 = v22;
            v23 = v20 & ((40543 * v17) ^ ((40543 * (unsigned __int64)v17) >> 32));
            v24 = v23;
            BugCheckParameter3 = v23;
            while ( 1 )
            {
              v25 = 56LL * v23;
              v26 = *(_DWORD *)(v22 + v25);
              v27 = (volatile signed __int32 *)(v22 + v25);
              if ( v26 == v17 )
              {
                if ( (v5 & 1) != 0 )
                {
                  v28 = 8LL;
                  v29 = 10LL;
                }
                else
                {
                  v28 = 2LL;
                  v29 = 4LL;
                }
                _InterlockedIncrement64((volatile signed __int64 *)&v27[v29]);
                _InterlockedExchangeAdd64((volatile signed __int64 *)&v27[v28], v18);
                goto LABEL_36;
              }
              if ( v26 )
                goto LABEL_31;
              if ( !v19 )
              {
                v86 = *(_DWORD *)(v25 + PoolTrackTable);
                if ( v86 )
                {
                  *v27 = v86;
                  continue;
                }
              }
              if ( v23 == v21 - 1 )
              {
LABEL_31:
                v23 = v20 & (v23 + 1);
                if ( v23 == v24 )
                {
                  ExpInsertPoolTrackerExpansion(v17, v18, v5);
LABEL_36:
                  if ( (v5 & 4) != 0 )
                  {
                    *(_BYTE *)(v15 + 3) &= ~4u;
                    v79 = (ExpCacheLineSize - 1) & (-16 - v15);
                    if ( v79 )
                    {
                      v80 = v15 + v79;
                      v81 = (__int64)v79 >> 4;
                      *(_BYTE *)v80 = v81;
                      *(_BYTE *)(v80 + 2) = *(_BYTE *)(v15 + 2) - v81;
                      *(_BYTE *)(v80 + 1) = *(_BYTE *)(v15 + 1);
                      *(_BYTE *)(v80 + 3) = *(_BYTE *)(v15 + 3) | 4;
                      *(_DWORD *)(v80 + 4) = *(_DWORD *)(v15 + 4);
                      if ( (unsigned __int8)*(_WORD *)v80 > 1u )
                        *(_QWORD *)(v15 + 16) = ExpPoolQuotaCookie ^ v80;
                      v15 = v80;
                    }
                  }
                  result = (PVOID)(v15 + 16);
                  *(_QWORD *)(v15 + 16) = 0LL;
                  return result;
                }
              }
              else if ( v19 )
              {
                _InterlockedCompareExchange(v27, v17, 0);
              }
              else
              {
                KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
                if ( !*(_DWORD *)(PoolTrackTable + 56LL * v23) )
                {
                  *(_DWORD *)(PoolTrackTable + 56LL * v23) = v128;
                  *v27 = v128;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
                v17 = v128;
                v24 = BugCheckParameter3;
                v22 = v118;
                v19 = v5 & 0x20;
                v21 = v115;
              }
            }
          }
          if ( v37 )
          {
            LOBYTE(v54) = 1;
            PsBoostThreadIo((__int64)KeGetCurrentThread(), v54);
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 8));
          }
          else
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v120);
            __writecr8(v120.OldIrql);
          }
          v37 = v5 & 1;
LABEL_56:
          v36 += 2;
          v9 = 2LL;
        }
        while ( v36 != (__int64 **)(v7 + 4416) );
        v4 = 4096LL;
        HeapPages = ExAllocateHeapPages(v5 & 0x80000221, 0x1000uLL);
        v15 = HeapPages;
        if ( HeapPages )
        {
          if ( v5 < NonPagedPool )
          {
            memset((void *)(HeapPages + 16), 0, 16 * v11 - 16);
            *(_DWORD *)(v15 + 4) = v8;
          }
          *(_DWORD *)v15 = 0;
          *(_BYTE *)(v15 + 1) = BugCheckParameter3a;
          *(_BYTE *)(v15 + 2) = v11;
          *(_BYTE *)(v15 + 3) = v5 & 0x6D | 2;
          v39 = v15 + 16LL * v11;
          *(_DWORD *)v39 = 0;
          *(_BYTE *)(v39 + 2) = -(char)v11;
          *(_BYTE *)v39 = v11;
          *(_BYTE *)(v39 + 1) = BugCheckParameter3a;
          _InterlockedIncrement64((volatile signed __int64 *)(v7 + 72));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 88), 16 * v11);
          if ( *(_BYTE *)(v39 + 2) != 1 )
          {
            v40 = (struct _FAST_MUTEX *)(v7 + 8);
            if ( (v5 & 1) != 0 )
            {
              ExAcquireFastMutex(v40);
              PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
            }
            else
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v40, &v120);
            }
            v42 = (__int64 *)(v39 + 16);
            v43 = v7 + 16 * (256 - v11 - 1 + 20LL);
            v44 = *(__int64 ***)(v43 + 8);
            if ( *v44 != (__int64 *)v43 )
              __fastfail(3u);
            *v42 = v43;
            v42[1] = (__int64)v44;
            *v44 = v42;
            *(_QWORD *)(v43 + 8) = v42;
            if ( (v5 & 1) == 0 )
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v120);
              __writecr8(v120.OldIrql);
              _InterlockedIncrement((volatile signed __int32 *)(v7 + 64));
              goto LABEL_22;
            }
            LOBYTE(v41) = 1;
            PsBoostThreadIo((__int64)KeGetCurrentThread(), v41);
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 8));
          }
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 64));
          goto LABEL_22;
        }
        if ( ++v129 != 1 || (ExpPoolFlags & 0x100) == 0 )
          goto LABEL_172;
        ExDeferredFreePool((_DWORD *)v7, 0);
        v35 = (__int64 **)(v7 + 16 * (v11 - 1 + 20LL));
        v9 = 2LL;
      }
    }
    result = (PVOID)ExpAllocateBigPool(0LL, v5, v4, v8, 0);
    if ( result )
      return result;
LABEL_172:
    ++ExPoolFailures;
    if ( (v5 & 2) != 0 )
    {
      v87 = v5 & 0x200;
      v88 = 0LL;
      if ( !v87 )
        v88 = 552LL;
      v89 = qword_1403E2910[v88];
      v90 = 0LL;
      if ( !v87 )
        v90 = 552LL;
      v91 = qword_1403E28D0[v90];
      v92 = 0LL;
      if ( !v87 )
        v92 = 552LL;
      v93 = qword_1403E2908[v92];
      v94 = 0LL;
      if ( !v87 )
        v94 = 552LL;
      KeBugCheckEx(0x41u, v4, (unsigned int)qword_1403E28C8[v94] - (unsigned int)v93, (unsigned int)(v91 - v89), 0LL);
    }
    if ( (v5 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  v98 = v4 - 8;
  if ( (v5 & 0x40) == 0 )
    v98 = v4;
  if ( v5 < NonPagedPool )
  {
    memset(SpecialPool, 0, v98);
    v97 = (unsigned __int64)v119;
  }
  if ( v8 == PoolHitTag )
    __debugbreak();
  v99 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v95, v8, v97, v98);
  if ( (v95 & 0x20) != 0 )
  {
    v102 = ExpSessionPoolTrackTable;
    v100 = ExpSessionPoolTrackTableMask;
    v101 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v99) = KeGetPcr()->Prcb.Number;
    v100 = PoolTrackTableMask;
    v101 = PoolTrackTableSize;
    v102 = (__int64)*(&ExPoolTagTables + v99);
  }
  v117 = v101;
  v130 = v100;
  v114 = v102;
  v103 = v100 & ((40543 * v8) ^ ((40543 * (unsigned __int64)v8) >> 32));
  v104 = v103;
  BugCheckParameter3b = v103;
  while ( 1 )
  {
    v105 = 56LL * v103;
    v106 = *(_DWORD *)(v102 + v105);
    v107 = (volatile signed __int32 *)(v102 + v105);
    if ( v106 == v8 )
      break;
    if ( v106 )
    {
LABEL_214:
      v103 = v100 & (v103 + 1);
      if ( v103 == v104 )
      {
        ExpInsertPoolTrackerExpansion(v8, v98, v95);
        goto LABEL_220;
      }
    }
    else
    {
      if ( (v95 & 0x20) != 0 )
        goto LABEL_208;
      v108 = *(_DWORD *)(PoolTrackTable + 56LL * v103);
      if ( v108 )
      {
        *v107 = v108;
        v104 = BugCheckParameter3b;
      }
      else
      {
        v104 = BugCheckParameter3b;
LABEL_208:
        if ( v103 == v101 - 1 )
          goto LABEL_214;
        if ( (v95 & 0x20) != 0 )
        {
          _InterlockedCompareExchange(v107, v8, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v122);
          if ( !*(_DWORD *)(PoolTrackTable + 56LL * v103) )
          {
            *(_DWORD *)(PoolTrackTable + 56LL * v103) = v8;
            *v107 = v8;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v122);
          __writecr8(v122.OldIrql);
          v100 = v130;
          v101 = v117;
          v102 = v114;
          v104 = BugCheckParameter3b;
        }
      }
    }
  }
  if ( (v95 & 1) != 0 )
  {
    v109 = 8LL;
    v110 = 10LL;
  }
  else
  {
    v109 = 2LL;
    v110 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v107[v110]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v107[v109], v98);
LABEL_220:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return v119;
}

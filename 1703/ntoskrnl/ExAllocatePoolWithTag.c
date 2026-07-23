/*
 * XREFs of ExAllocatePoolWithTag @ 0x140285010
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140003628 (MiCreateCloneChain.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140003DE8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1400048FC (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140004BEC (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiAllocateAccessLog @ 0x1400067F0 (MiAllocateAccessLog.c)
 *     KeAllocateXStateContext @ 0x140007668 (KeAllocateXStateContext.c)
 *     MiViewMayContainPage @ 0x140014728 (MiViewMayContainPage.c)
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     FsRtlTruncateBaseMcb @ 0x140015700 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x1400161A0 (FsRtlAddEntry.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x140018DC0 (FsRtlCancelNotify.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140019C10 (FsRtlpOplockSendModernAppTermination.c)
 *     SeLogAccessFailure @ 0x14001BD60 (SeLogAccessFailure.c)
 *     WmipBuildTraceDeviceList @ 0x140020014 (WmipBuildTraceDeviceList.c)
 *     MiBuildMappedCluster @ 0x140020978 (MiBuildMappedCluster.c)
 *     CcAsyncCopyRead @ 0x140023470 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     IoAllocateWorkItem @ 0x140024D50 (IoAllocateWorkItem.c)
 *     CcFindBitmapRangeToDirty @ 0x140026BF0 (CcFindBitmapRangeToDirty.c)
 *     ExpExpandResourceOwnerTable @ 0x140027C24 (ExpExpandResourceOwnerTable.c)
 *     CreateNewEventEntry @ 0x14002A1AC (CreateNewEventEntry.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14002A7E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiExpandFlushMdl @ 0x14002BAD0 (MiExpandFlushMdl.c)
 *     CcAllocateInitializeMbcb @ 0x14002CC88 (CcAllocateInitializeMbcb.c)
 *     EtwpApplyEventNameFilter @ 0x14002CF40 (EtwpApplyEventNameFilter.c)
 *     PfFbBufferListAllocateTemporary @ 0x14002D5E8 (PfFbBufferListAllocateTemporary.c)
 *     SepCaptureTokenSecurityOperations @ 0x14003023C (SepCaptureTokenSecurityOperations.c)
 *     SmHpBufferAlloc @ 0x140030354 (SmHpBufferAlloc.c)
 *     SmBinaryArrayGrow @ 0x140030488 (SmBinaryArrayGrow.c)
 *     IoSetCompletionRoutineEx @ 0x140031220 (IoSetCompletionRoutineEx.c)
 *     IopVerifierExAllocatePool @ 0x140031B44 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400325BC (IopVerifierExAllocatePool_0.c)
 *     ExAllocatePoolEx @ 0x140033880 (ExAllocatePoolEx.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400364A0 (RtlpAllowsLowBoxAccess.c)
 *     FsRtlInsertPerFileContextInternal @ 0x140036BB0 (FsRtlInsertPerFileContextInternal.c)
 *     PspInsertProperty @ 0x140037728 (PspInsertProperty.c)
 *     SepCaptureHandles @ 0x140037860 (SepCaptureHandles.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1400383D4 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     MiGetWorkingSetInfo @ 0x140039594 (MiGetWorkingSetInfo.c)
 *     IoAllocateDriverObjectExtension @ 0x14003A150 (IoAllocateDriverObjectExtension.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14003B0BC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     SmArrayGrow @ 0x14003BA3C (SmArrayGrow.c)
 *     SepExpandSingletonArrays @ 0x14003C4CC (SepExpandSingletonArrays.c)
 *     ExAllocatePool @ 0x14003C640 (ExAllocatePool.c)
 *     RtlpCreateHashTable @ 0x14003CD28 (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x14003CEC4 (RtlpAllocateSecondLevelDir.c)
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14003DE8C (SepAppendAceToTokenDefaultDacl.c)
 *     SePrivilegePolicyCheck @ 0x14003E1B8 (SePrivilegePolicyCheck.c)
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14003F450 (FsRtlInitializeBaseMcbEx.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     IopVerifierExAllocatePool_1 @ 0x14004B4A8 (IopVerifierExAllocatePool_1.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140051050 (FsRtlInsertPerFileObjectContext.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053800 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140055E00 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140059EF4 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     MiCreateMdl @ 0x14005C370 (MiCreateMdl.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140065C78 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepMemAlloc @ 0x140065ED0 (AuthzBasepMemAlloc.c)
 *     SepMandatorySubProcessToken @ 0x1400662F4 (SepMandatorySubProcessToken.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140067520 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PopFxQueryBiosDeviceName @ 0x14006787C (PopFxQueryBiosDeviceName.c)
 *     IoAcquireRemoveLockEx @ 0x1400692E0 (IoAcquireRemoveLockEx.c)
 *     KsepPoolAllocatePaged @ 0x14006D900 (KsepPoolAllocatePaged.c)
 *     VfAvlReserveNode @ 0x14006E078 (VfAvlReserveNode.c)
 *     DbgUnicodeStringToAnsiString @ 0x14006FCD0 (DbgUnicodeStringToAnsiString.c)
 *     PopSetWatchdog @ 0x14006FDA8 (PopSetWatchdog.c)
 *     EmpEvaluateTargetRule @ 0x1400703A0 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140070590 (EmpEvaluateNodeLink.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400717EC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopCaptureReasonContext @ 0x14007276C (PopCaptureReasonContext.c)
 *     ExGetSessionPoolTagInfo @ 0x14007329C (ExGetSessionPoolTagInfo.c)
 *     MiCombineWorkingSet @ 0x14007369C (MiCombineWorkingSet.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiAllocateCombineProto @ 0x140078CA0 (MiAllocateCombineProto.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiInitializeMdlPages @ 0x14007A868 (MiInitializeMdlPages.c)
 *     MiObtainMdlCharges @ 0x14007B0D0 (MiObtainMdlCharges.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14007D2B8 (MiAllocateWorkingSetSwapSupport.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14008C120 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x140093620 (SeCaptureObjectTypeList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140093E50 (AuthzBasepDuplicateSecurityAttributes.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     CcInitializeVolumeCacheMap @ 0x1400AF740 (CcInitializeVolumeCacheMap.c)
 *     CcWriteBehind @ 0x1400AF884 (CcWriteBehind.c)
 *     MmProbeAndLockSelectedPages @ 0x1400B2BF0 (MmProbeAndLockSelectedPages.c)
 *     PfSnGetFileInformation @ 0x1400B7690 (PfSnGetFileInformation.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     IopAllocateIrpPrivate @ 0x1400ED9B0 (IopAllocateIrpPrivate.c)
 *     SeSetLearningModeObjectInformation @ 0x1400EE8E0 (SeSetLearningModeObjectInformation.c)
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400FEC60 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     MmCreateMdl @ 0x14010BCD0 (MmCreateMdl.c)
 *     MiAllocateModWriterEntry @ 0x14010ED60 (MiAllocateModWriterEntry.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140115180 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140115698 (RtlpUpcaseUnicodeStringPrivate.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     CcAllocateInitializeBcb @ 0x140119A5C (CcAllocateInitializeBcb.c)
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011FA24 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140121190 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x140121DA8 (SmKmAllocateMdlForLock.c)
 *     EtwpAllocateFreeBuffers @ 0x140122058 (EtwpAllocateFreeBuffers.c)
 *     WmipReceiveNotifications @ 0x1401223D4 (WmipReceiveNotifications.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     MiExpandSystemCache @ 0x140126CDC (MiExpandSystemCache.c)
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     IoMakeAssociatedIrpPriv @ 0x14012C03C (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateIrpExtension @ 0x14012C8E8 (IopAllocateIrpExtension.c)
 *     PfSnTraceBufferAllocate @ 0x14012CFC8 (PfSnTraceBufferAllocate.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x14012D4E0 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14012D7F0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x14012DA68 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     StEtaStart @ 0x14012DC18 (StEtaStart.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x14012DF60 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmAlloc @ 0x14012F798 (SmAlloc.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x14012FCAC (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     FsRtlpWaitOnIrp @ 0x140136678 (FsRtlpWaitOnIrp.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140136960 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopGetCurrentWakeInfos @ 0x14013CC34 (PopGetCurrentWakeInfos.c)
 *     KiIntRedirectConnnect @ 0x14013FFEC (KiIntRedirectConnnect.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1401432D8 (BgpFwQueryBootGraphicsInformation.c)
 *     ExAllocateTimerInternal2 @ 0x140147D90 (ExAllocateTimerInternal2.c)
 *     ExRegisterCallback @ 0x140148580 (ExRegisterCallback.c)
 *     IoWMIWriteEvent @ 0x140148670 (IoWMIWriteEvent.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140149348 (LdrUnloadAlternateResourceModuleEx.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140149D98 (MiAddPrivateFixupEntryForSystemImage.c)
 *     IopAllocateErrorLogEntry @ 0x140149F00 (IopAllocateErrorLogEntry.c)
 *     PoClearPowerRequestInternalDeferred @ 0x14014AFAC (PoClearPowerRequestInternalDeferred.c)
 *     KiIntSteerConnect @ 0x14014C4CC (KiIntSteerConnect.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14014EA10 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14014FA90 (ExpSaBinaryArrayInsert.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015051C (PiDevCfgPushCopyKeyEntry.c)
 *     RtlExpandHashTable @ 0x140150B90 (RtlExpandHashTable.c)
 *     ExAllocateAutoExpandPushLock @ 0x140151380 (ExAllocateAutoExpandPushLock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     SPCallServerHandleGetCurrentHardwareID @ 0x140152A3C (SPCallServerHandleGetCurrentHardwareID.c)
 *     KsepPoolAllocateNonPaged @ 0x14015396C (KsepPoolAllocateNonPaged.c)
 *     CcRegisterExternalCache @ 0x140153A20 (CcRegisterExternalCache.c)
 *     ExInitializeProcessor @ 0x14015412C (ExInitializeProcessor.c)
 *     MiDescribePageRun @ 0x140154454 (MiDescribePageRun.c)
 *     EmpQueueRuleUpdateState @ 0x140154B40 (EmpQueueRuleUpdateState.c)
 *     IoRegisterPriorityCallback @ 0x140155AA0 (IoRegisterPriorityCallback.c)
 *     AdtpBuildMultiSzStringListString @ 0x140156404 (AdtpBuildMultiSzStringListString.c)
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     SepAdtMarshallAuditRecord @ 0x140156654 (SepAdtMarshallAuditRecord.c)
 *     _SafeAllocBlob @ 0x140157030 (_SafeAllocBlob.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401570CC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401572B0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140157530 (RtlpMuiRegLoadLicInformation.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     IopInitDumpCapsuleSupport @ 0x140159548 (IopInitDumpCapsuleSupport.c)
 *     BapdpProcessEtwEvents @ 0x14015964C (BapdpProcessEtwEvents.c)
 *     SecureDump_ReadRegistry @ 0x14015A1A8 (SecureDump_ReadRegistry.c)
 *     MiInitializeNumaRanges @ 0x14015A3AC (MiInitializeNumaRanges.c)
 *     CcAllocateInitializeVacbArray @ 0x14015E56C (CcAllocateInitializeVacbArray.c)
 *     FsFilterInit @ 0x14015EAC4 (FsFilterInit.c)
 *     PopFxCreateDeviceCommon @ 0x14015EDB8 (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x14015EF50 (PopFxDuplicateUniqueId.c)
 *     PpmInstallNewIdleStates @ 0x14015F2A0 (PpmInstallNewIdleStates.c)
 *     PpmParkRegisterParking @ 0x14015FC70 (PpmParkRegisterParking.c)
 *     CcInitializePartition @ 0x140161450 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x1401618DC (CcInitializeAsyncRead.c)
 *     SepInitProcessAuditSd @ 0x1401627E4 (SepInitProcessAuditSd.c)
 *     SepBuildCapPolicyTable @ 0x14016292C (SepBuildCapPolicyTable.c)
 *     ExAllocateCacheAwarePushLock @ 0x140163210 (ExAllocateCacheAwarePushLock.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x1401633AC (EmpEvaluateUpdateRuleEvalState.c)
 *     ExpSaInitialize @ 0x140163CC0 (ExpSaInitialize.c)
 *     PopGetDope @ 0x140163F5C (PopGetDope.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140164458 (LdrpSetAlternateResourceModuleHandle.c)
 *     SepBuildDefaultCape @ 0x140165DC4 (SepBuildDefaultCape.c)
 *     SepAdtDetermineInsertQueue @ 0x140165FA0 (SepAdtDetermineInsertQueue.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401661AC (IopGetPhysicalMemoryBlock.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140166550 (MiInitializeWorkingSetManagerParameters.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x140166810 (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     _MuiRegAllocArray @ 0x140166BBC (_MuiRegAllocArray.c)
 *     PfFbBufferListAllocate @ 0x140168A5C (PfFbBufferListAllocate.c)
 *     SmFpPreAllocate @ 0x140168C38 (SmFpPreAllocate.c)
 *     KiSwInterruptDispatch @ 0x140174B80 (KiSwInterruptDispatch.c)
 *     CcDeferWrite @ 0x1401DD930 (CcDeferWrite.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401DF718 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmLogMcUpdateStatus @ 0x1401DFC58 (CmLogMcUpdateStatus.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E0544 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1401E2720 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x1401E3660 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1401E36F0 (FsRtlAllocatePoolWithTag.c)
 *     FsFilterAllocateCompletionStack @ 0x1401E3FD0 (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1401E48F4 (FsRtlpPostStackOverflow.c)
 *     VslAllocatePool @ 0x1401ECB60 (VslAllocatePool.c)
 *     VslGetEtwDebugId @ 0x1401ED018 (VslGetEtwDebugId.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401EE8B0 (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x1401F3B80 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F3E30 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x1401F447C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F4C88 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopQueryFullDriverPath @ 0x1401F5180 (IopQueryFullDriverPath.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401F5D34 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401F65E4 (IopVerifierExAllocatePool_3.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401F6618 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401F6B94 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401F6E00 (IopVerifierExAllocatePool_4.c)
 *     PipCreateNewDependencyEdge @ 0x1401F7B74 (PipCreateNewDependencyEdge.c)
 *     IoRequestDeviceEjectEx @ 0x1401F7E80 (IoRequestDeviceEjectEx.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1401F97E4 (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401F9854 (PiDevCfgQueryResolveValue.c)
 *     KdRegisterPowerHandler @ 0x1401FB710 (KdRegisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1401FBF90 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x1401FD844 (KeProcessorProfileControlArea.c)
 *     KeRegisterNmiCallback @ 0x1401FDA30 (KeRegisterNmiCallback.c)
 *     KeStartProfile @ 0x140201D7C (KeStartProfile.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCreateKernelStackNode @ 0x140211DB8 (MiCreateKernelStackNode.c)
 *     MiPfIssueCoalescedSupport @ 0x140213D20 (MiPfIssueCoalescedSupport.c)
 *     MiAddRangeToPartitionTree @ 0x14021D2DC (MiAddRangeToPartitionTree.c)
 *     MiInsertPteTracker @ 0x140225958 (MiInsertPteTracker.c)
 *     MmEnumerateBadPages @ 0x140226910 (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x140229004 (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x140229B4C (PpmUpdateIdleVeto.c)
 *     PopFxRegisterPluginEx @ 0x14022B7A0 (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x14022D688 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x14022DD1C (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140232B38 (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmAllocWmiEvent @ 0x140234404 (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1402345E0 (PpmWmiIdleAccountingProcedure.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402368A4 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140236A80 (PpmEventTraceProcessorIdleAccounting.c)
 *     PspReadDfssConfigurationValues @ 0x140238704 (PspReadDfssConfigurationValues.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     DbgpInsertDebugPrintCallback @ 0x14023B144 (DbgpInsertDebugPrintCallback.c)
 *     RtlpTraceDatabaseAllocate @ 0x14024069C (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x140244C34 (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x140246A0C (SepCopyObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x140247014 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402471D0 (SepVerifyDesktopAppxPackageName.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402474C4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x140247F54 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140248040 (SepValidateAndCopyGlobalEntry.c)
 *     SepFlattenAcl @ 0x14024815C (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1402482D8 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x140248690 (SepGetSidValuesDump.c)
 *     SepGetTokenSessionMapEntry @ 0x140248758 (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x1402488A0 (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x1402489F4 (SepRmCapPoolExpand.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14024A28C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14024A97C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14024F4B0 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14024F5C0 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalPageError @ 0x14024F9EC (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x1402503E0 (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantInsertMdlInfo @ 0x14025087C (MdlInvariantInsertMdlInfo.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x140252904 (WmiVerifierCopyEvent.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140254804 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140255BD8 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402567B0 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140257A30 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpInitializeCompression @ 0x140257FA8 (EtwpInitializeCompression.c)
 *     NtDrawText @ 0x140259B3C (NtDrawText.c)
 *     ExRegisterBootDevice @ 0x14025A940 (ExRegisterBootDevice.c)
 *     ExCopyWakeTimerInfo @ 0x14025CAF0 (ExCopyWakeTimerInfo.c)
 *     ExpHotAddProcessorToWorkers @ 0x14025D7D4 (ExpHotAddProcessorToWorkers.c)
 *     ExShareAddressSpaceWithDevice @ 0x14025D960 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14025E058 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14025E2A8 (ExpPrepareNewSvmDevice.c)
 *     WheapReportPersistedErrorRecord @ 0x14025F39C (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x14025F860 (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x14025FD34 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140260F88 (WheapSqmCollectWheaOscTelemetry.c)
 *     AsiAddDataToSchema @ 0x140261660 (AsiAddDataToSchema.c)
 *     sub_140262394 @ 0x140262394 (sub_140262394.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1402646C0 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140265628 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x140265F0C (BiLogFileOwnerProcess.c)
 *     _SafeReallocBlob @ 0x14026BC10 (_SafeReallocBlob.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140409CB8 (PfpStartLoggingHardFaultEvents.c)
 *     PopNewWakeInfo @ 0x14040A2B8 (PopNewWakeInfo.c)
 *     IopCaptureObjectName @ 0x14040B484 (IopCaptureObjectName.c)
 *     PopGetHwConfigurationSignature @ 0x14040BD00 (PopGetHwConfigurationSignature.c)
 *     PopCloneRange @ 0x14040DE20 (PopCloneRange.c)
 *     PopGetBitlockerKeyLocation @ 0x14040E124 (PopGetBitlockerKeyLocation.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14040EC08 (PfSnAllocateEnablePrefetcherTimer.c)
 *     BapdRecordFirmwareBootStats @ 0x14040ECB0 (BapdRecordFirmwareBootStats.c)
 *     KiInitializeProcessor @ 0x140412130 (KiInitializeProcessor.c)
 *     PnprInitiateReplaceOperation @ 0x140417290 (PnprInitiateReplaceOperation.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1404195D8 (MiZeroAllPageFiles.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14041A258 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x14041AF60 (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     WheaInitializeProcessor @ 0x14041B8E4 (WheaInitializeProcessor.c)
 *     MiBuildNewCloneDescriptor @ 0x14041E1EC (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     PfTCreateTraceDump @ 0x140420A90 (PfTCreateTraceDump.c)
 *     MiCompressRelocations @ 0x140421340 (MiCompressRelocations.c)
 *     RawInitializeVcb @ 0x1404228E4 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140422A10 (ExAllocateCacheAwareRundownProtection.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x140423750 (MiRevertRelocatedImagePfn.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140423B90 (SepScheduleImageVerificationCallbacks.c)
 *     MiGetCcAccessLog @ 0x140423E34 (MiGetCcAccessLog.c)
 *     FsRtlFindInTunnelCache @ 0x140426F10 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140427060 (FsRtlAddToTunnelCache.c)
 *     RtlpCombineAcls @ 0x140427E70 (RtlpCombineAcls.c)
 *     EtwpQueueReply @ 0x140429088 (EtwpQueueReply.c)
 *     ExpAllocateHandleTable @ 0x14042BEEC (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14042C158 (ExpAllocateTablePagedPoolNoZero.c)
 *     ObpInsertHandleCount @ 0x14042C418 (ObpInsertHandleCount.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x14042CF44 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x14042D068 (CmpDoTransWriteLogRecord.c)
 *     CmpTransAllocateTrans @ 0x14042D530 (CmpTransAllocateTrans.c)
 *     CmpLogCheckpoint @ 0x14042EAB0 (CmpLogCheckpoint.c)
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x14042F0D4 (CmpStartCLFSLog.c)
 *     FsRtlNotifyFilterReportChange @ 0x140431400 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140431F00 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x140432250 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404329C0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyInitializeSync @ 0x140432DA0 (FsRtlNotifyInitializeSync.c)
 *     FsRtlpAllocateOplock @ 0x140433450 (FsRtlpAllocateOplock.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     PspAllocateRateControl @ 0x140437220 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404372D4 (PspAddSchedulingGroupToJobChain.c)
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404394A0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpCanGrowHive @ 0x14043B1FC (CmpCanGrowHive.c)
 *     HvpMapHiveImageFromFile @ 0x14043B2E8 (HvpMapHiveImageFromFile.c)
 *     CmpClearKeyAccessBits @ 0x14043B7E0 (CmpClearKeyAccessBits.c)
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 *     AlpcpCaptureMessageData @ 0x14043D038 (AlpcpCaptureMessageData.c)
 *     PfSnArrayGrow @ 0x14043E5A8 (PfSnArrayGrow.c)
 *     ExGetPoolTagInfo @ 0x14043E8C8 (ExGetPoolTagInfo.c)
 *     EtwpCreateUmReplyObject @ 0x14043FEB4 (EtwpCreateUmReplyObject.c)
 *     NtFlushBuffersFileEx @ 0x1404401B4 (NtFlushBuffersFileEx.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140440830 (MmGetPhysicalMemoryRangesEx.c)
 *     ObpInsertDirectoryEntry @ 0x1404408EC (ObpInsertDirectoryEntry.c)
 *     ExHandleSPCall2 @ 0x140440AC4 (ExHandleSPCall2.c)
 *     AlpcpAllocateMessageFunction @ 0x1404437D0 (AlpcpAllocateMessageFunction.c)
 *     SepAssemblePrivileges @ 0x140443F78 (SepAssemblePrivileges.c)
 *     PsSetProcessWin32Process @ 0x140444B20 (PsSetProcessWin32Process.c)
 *     ObCreateSymbolicLink @ 0x14044515C (ObCreateSymbolicLink.c)
 *     _RegRtlEnumValue @ 0x140445A14 (_RegRtlEnumValue.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404462B0 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x14044655C (PipFindDeviceOverrideEntry.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x140446890 (PiDqObjectActionQueueEntryCreate.c)
 *     ExpWnfCreateProcessContext @ 0x140447564 (ExpWnfCreateProcessContext.c)
 *     EtwpAddProviderToSession @ 0x140448258 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x140448384 (EtwpFindDebugId.c)
 *     PspAssignProcessQuotaBlock @ 0x140448638 (PspAssignProcessQuotaBlock.c)
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     PiDqSerializationAlloc @ 0x140449420 (PiDqSerializationAlloc.c)
 *     ConstraintEval @ 0x14044A89C (ConstraintEval.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14044AC80 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14044ADC8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x14044B23C (SepCaptureInt64Array.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14044C490 (PiBuildDeviceNodeInstancePath.c)
 *     PnpBusTypeGuidGetIndex @ 0x14044E318 (PnpBusTypeGuidGetIndex.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14044EE88 (PiPnpRtlGetFilteredDeviceList.c)
 *     SPCallServerHandleClepKdf @ 0x14044FB70 (SPCallServerHandleClepKdf.c)
 *     MiAllocateImportList @ 0x140450710 (MiAllocateImportList.c)
 *     CmpGetVirtualizationID @ 0x140452200 (CmpGetVirtualizationID.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140453108 (PipGetRegistrySecurityWithFallback.c)
 *     PipGenerateContainerID @ 0x140453598 (PipGenerateContainerID.c)
 *     PopFxTraceDeviceRegistration @ 0x140453DB0 (PopFxTraceDeviceRegistration.c)
 *     PopLoggingInformation @ 0x140453E50 (PopLoggingInformation.c)
 *     SepUpdateLogonSessionTrack @ 0x140454C24 (SepUpdateLogonSessionTrack.c)
 *     AlpcpAllocateBuffer @ 0x140455490 (AlpcpAllocateBuffer.c)
 *     MiCreateFixupRecord @ 0x1404554F4 (MiCreateFixupRecord.c)
 *     SepCreateLogonSessionTrack @ 0x14045672C (SepCreateLogonSessionTrack.c)
 *     MIDL_user_allocate @ 0x140456AB0 (MIDL_user_allocate.c)
 *     PiDeferSetInterfaceState @ 0x1404572B4 (PiDeferSetInterfaceState.c)
 *     WmipSecurityMethod @ 0x1404575E0 (WmipSecurityMethod.c)
 *     PiDqAllocateGenericTableEntry @ 0x140457A10 (PiDqAllocateGenericTableEntry.c)
 *     CmpAllocateUnitOfWork @ 0x1404589B0 (CmpAllocateUnitOfWork.c)
 *     ObpSetDeviceMap @ 0x140458C1C (ObpSetDeviceMap.c)
 *     ExpGenuinePolicyPostProcess @ 0x140459860 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x140459A5C (ExpOsProductCacheProviderHelper.c)
 *     PiSwAddPdoAssociation @ 0x14045A204 (PiSwAddPdoAssociation.c)
 *     ExpWnfAllocateScopeInstance @ 0x14045A8C0 (ExpWnfAllocateScopeInstance.c)
 *     PiDqGrowPropertyArray @ 0x14045ACD0 (PiDqGrowPropertyArray.c)
 *     PnpAllocateGenericTableEntry @ 0x14045AE10 (PnpAllocateGenericTableEntry.c)
 *     NtNotifyChangeSession @ 0x14045AEA4 (NtNotifyChangeSession.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x14045BB88 (ExpHwidEnsurePropertyBufferLength.c)
 *     ExpWnfRegisterPermanentName @ 0x14045CAAC (ExpWnfRegisterPermanentName.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x14045CC90 (ExpHwidBiosIfGetFirmwareTable.c)
 *     MiCreateRotateView @ 0x14045D458 (MiCreateRotateView.c)
 *     PopPowerRequestAllocate @ 0x14045D5A0 (PopPowerRequestAllocate.c)
 *     PopDiagTraceThermalRequest @ 0x14045D940 (PopDiagTraceThermalRequest.c)
 *     EtwpGenerateFileName @ 0x14045E0F4 (EtwpGenerateFileName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     PoDiagCaptureUsermodeStack @ 0x14045EBA0 (PoDiagCaptureUsermodeStack.c)
 *     PerfDiagpRequestState @ 0x14045EC38 (PerfDiagpRequestState.c)
 *     PiSwAllocateGenericTableEntry @ 0x14045EC90 (PiSwAllocateGenericTableEntry.c)
 *     PiSwInterfaceCreate @ 0x14045F13C (PiSwInterfaceCreate.c)
 *     PiSwPdoPnPDispatch @ 0x14045F1F0 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14045F680 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1404602E0 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PnpCopyDevPropertyArray @ 0x1404604F4 (PnpCopyDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x1404605B8 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x140460650 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x140460720 (PnpAllocateMultiSZ.c)
 *     PiSwDeviceCreate @ 0x140460870 (PiSwDeviceCreate.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140461490 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_140461614 @ 0x140461614 (sub_140461614.c)
 *     SepSetTokenCachedHandles @ 0x140461CB4 (SepSetTokenCachedHandles.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     SepQueryNameString @ 0x1404626BC (SepQueryNameString.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140462774 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14046291C (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x140462B10 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     IoVolumeDeviceToDosName @ 0x140462E40 (IoVolumeDeviceToDosName.c)
 *     PfpPrefetchRequest @ 0x1404634E8 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1404636DC (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x140464084 (PfpVolumeOpenAndVerify.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140464A2C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140464DF0 (PiUEventQueueBroadcastEventEntry.c)
 *     PfSnAsyncPrefetchWorker @ 0x140464FF0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140465F50 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140466B7C (PfSnPreallocatePrefetchHeader.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404699E4 (ObpCaptureBoundaryDescriptor.c)
 *     SepExpandDynamic @ 0x14046A140 (SepExpandDynamic.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046A39C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046A60C (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x14046C3CC (SepProbeAndCaptureString_U.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14046C97C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     SeCaptureAcl @ 0x14046E928 (SeCaptureAcl.c)
 *     SepCreateClaimAttributes @ 0x14046F3A8 (SepCreateClaimAttributes.c)
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x1404700B4 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140470170 (SeCaptureSidAndAttributesArray.c)
 *     PspQueryRateControlHistory @ 0x140479030 (PspQueryRateControlHistory.c)
 *     AlpcAddHandleTableEntry @ 0x14047A19C (AlpcAddHandleTableEntry.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14047AEF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     ObpCallPreOperationCallbacks @ 0x140481100 (ObpCallPreOperationCallbacks.c)
 *     PiCMGetObjectProperty @ 0x140482E3C (PiCMGetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140483940 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _PnpRegQueryValueIndirect @ 0x140484BF0 (_PnpRegQueryValueIndirect.c)
 *     PiPnpRtlObjectActionCallback @ 0x140484FD0 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x14048689C (PiPnpRtlObjectEventCreate.c)
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 *     PiDqPnPGetObjectProperty @ 0x140487420 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 *     PnpGetObjectProperty @ 0x140487C44 (PnpGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14048873C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140488B58 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140488DA0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x140489110 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     _RegRtlCreateTreeTransacted @ 0x14048976C (_RegRtlCreateTreeTransacted.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PiCMGetRegistryProperty @ 0x14048A5E0 (PiCMGetRegistryProperty.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 *     CmpAllocate @ 0x14048DD10 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x14048DD74 (CmpClaimGlobalQuota.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x140493A2C (MiCreateDataFileMap.c)
 *     MiBuildImageControlArea @ 0x1404940B8 (MiBuildImageControlArea.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiCaptureImageCfgContext @ 0x140497C20 (MiCaptureImageCfgContext.c)
 *     RtlCreateRvaList @ 0x140497F7C (RtlCreateRvaList.c)
 *     NtSetInformationVirtualMemory @ 0x14049A7B0 (NtSetInformationVirtualMemory.c)
 *     PspInitializeFullProcessImageName @ 0x14049C5B4 (PspInitializeFullProcessImageName.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14049D9A8 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14049DA88 (SepAdtTokenRightAdjusted.c)
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 *     MiAllocateVad @ 0x14049E798 (MiAllocateVad.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     SepAddLuidToIndexEntry @ 0x1404A1810 (SepAddLuidToIndexEntry.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A1A64 (CmpCheckWrpKeyAccess.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404A1D38 (IopCreateSecurityDescriptorPerType.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404A1E64 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404A6744 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1404A69CC (PiUEventNotifyClient.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1404A78C8 (PnpDeviceCompletionRequestCreate.c)
 *     RtlpAllocateAtom @ 0x1404A7C88 (RtlpAllocateAtom.c)
 *     NtQueryLicenseValue @ 0x1404A7D10 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     EtwpProcessThreadImageRundown @ 0x1404B01BC (EtwpProcessThreadImageRundown.c)
 *     MiGenerateSystemImageNames @ 0x1404B3008 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     PiUpdateDriverDBCache @ 0x1404B6304 (PiUpdateDriverDBCache.c)
 *     MiConstructLoaderEntry @ 0x1404B65FC (MiConstructLoaderEntry.c)
 *     MiAllocateFixupVad @ 0x1404B70D4 (MiAllocateFixupVad.c)
 *     HvStoreModifiedData @ 0x1404B7370 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1404B7770 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x1404B7A5C (HvpFindNextDirtyBlock.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqTraceQueryCreate @ 0x1404B8E84 (PiDqTraceQueryCreate.c)
 *     PiDqQueryCreate @ 0x1404B9250 (PiDqQueryCreate.c)
 *     PiDqActionDataCreate @ 0x1404B99CC (PiDqActionDataCreate.c)
 *     PiDqQueryEvaluateFilter @ 0x1404B9CB0 (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1404BD7E4 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1404BD990 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1404BE590 (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x1404BEFD4 (PnpConcatPWSTR.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1404C2C70 (PoRegisterPowerSettingCallback.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopLogDisabledSleepReason @ 0x1404C598C (PopLogDisabledSleepReason.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404C633C (PopDiagTracePowerRequestCreate.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x1404C8910 (MiCreateVadEventBitmap.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     MiInSwapStore @ 0x1404C9F3C (MiInSwapStore.c)
 *     CmpRecordUnloadEventForHive @ 0x1404CA910 (CmpRecordUnloadEventForHive.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x1404CD318 (CmpInitializeKcbCache.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpMarkIndexDirty @ 0x1404D114C (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D1F10 (CmpRemoveSubKeyFromList.c)
 *     CmpInitHiveFromFile @ 0x1404D6800 (CmpInitHiveFromFile.c)
 *     CmpDoFileWrite @ 0x1404D76CC (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404D809C (CmpQueryFileSecurityDescriptor.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x1404D9704 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     PiDeviceRegistration @ 0x1404D9C6C (PiDeviceRegistration.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1404DA388 (PnpCreateDeviceEventEntry.c)
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404DBF74 (PnpCheckDeviceIdsChanged.c)
 *     PnpGetDeviceLocationStrings @ 0x1404DC26C (PnpGetDeviceLocationStrings.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404DE560 (PpForEachDeviceInstanceDriver.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404DF1FC (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1404DF6B8 (PiDmCacheDataEncode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DFC1C (_CmOpenDeviceContainerRegKeyWorker.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E141C (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404E1878 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404E1AF0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404E2728 (_CmOpenCommonClassRegKeyWorker.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E2D2C (PnpCallDriverQueryServiceHelper.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E47B4 (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x1404E48CC (IopAllocateUnicodeString.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     ExpHwidProcessDevice @ 0x1404E5170 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404E52A4 (ExpHwidAppendDeviceInfoBlock.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404E682C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiCMGetObjectList @ 0x1404E833C (PiCMGetObjectList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     IoQueryFileDosDeviceName @ 0x1404ECFA0 (IoQueryFileDosDeviceName.c)
 *     EtwpQueryProcessCommandLine @ 0x1404ED5D4 (EtwpQueryProcessCommandLine.c)
 *     ExpWnfWriteStateData @ 0x1404EE2D4 (ExpWnfWriteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
 *     SepDuplicateSid @ 0x1404F19E4 (SepDuplicateSid.c)
 *     SepSetTokenPackage @ 0x1404F1A70 (SepSetTokenPackage.c)
 *     EtwpSetProviderTraitsUm @ 0x1404F22A0 (EtwpSetProviderTraitsUm.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1404F3000 (EtwpGetGuidSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404F3A00 (IopGetLegacyVetoListDrivers.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x1404F49F0 (ObpGetObjectSecurity.c)
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     MiObtainSectionForDriver @ 0x1404F7528 (MiObtainSectionForDriver.c)
 *     SepCaptureUnicodeStringArray @ 0x1404F7B70 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x1404F7E70 (SeCaptureUnicodeStringStructures.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1404F93D8 (MiSnapThunk.c)
 *     EtwpEnumerateAddressSpace @ 0x1404FA9C0 (EtwpEnumerateAddressSpace.c)
 *     IopQueryNameInternal @ 0x1404FBBC0 (IopQueryNameInternal.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     PfpRpFileKeyUpdate @ 0x140502050 (PfpRpFileKeyUpdate.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 *     ObpAllocateObject @ 0x140506B40 (ObpAllocateObject.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
 *     SepCreateImpersonationTokenDacl @ 0x14050BEC0 (SepCreateImpersonationTokenDacl.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiAddSecureEntry @ 0x1405127E0 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiCopyToCfgBitMap @ 0x1405145B0 (MiCopyToCfgBitMap.c)
 *     CcCreateVacbArray @ 0x140515D0C (CcCreateVacbArray.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140516F18 (AlpcpCaptureHandleAttributeInternal.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140520D70 (PfpCopyUserPfnPrioRequest.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140526170 (AlpcpCaptureMessageDataSafe.c)
 *     NtRemoveIoCompletionEx @ 0x140527090 (NtRemoveIoCompletionEx.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     ObpCaptureObjectName @ 0x14052E190 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 *     WbSetTrapFrame @ 0x14053C120 (WbSetTrapFrame.c)
 *     sub_14053C820 @ 0x14053C820 (sub_14053C820.c)
 *     MmPrefetchPagesEx @ 0x14053D370 (MmPrefetchPagesEx.c)
 *     PfSnPopulateReadList @ 0x14053DA20 (PfSnPopulateReadList.c)
 *     PfpFileBuildReadList @ 0x14053ED28 (PfpFileBuildReadList.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405451B0 (FsRtlAllocateExtraCreateParameter.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14054C0D4 (MmLinkJobProcess.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     IoDiskIoAttributionAllocate @ 0x14054DE04 (IoDiskIoAttributionAllocate.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x14054E5D0 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14054FCD8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x14054FF60 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCaptureString @ 0x140551AE8 (EtwpCaptureString.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x1405523C0 (EtwpAddKmRegEntry.c)
 *     EtwpEnableTrace @ 0x1405524C8 (EtwpEnableTrace.c)
 *     EtwpQueueNotification @ 0x140553790 (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x140553948 (EtwpAddDataSource.c)
 *     EtwpAllocDataBlock @ 0x1405541BC (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x140554514 (EtwpUpdateFilterData.c)
 *     EtwpAllocGuidEntry @ 0x1405549DC (EtwpAllocGuidEntry.c)
 *     WmipAddProviderIdToPIList @ 0x1405551A0 (WmipAddProviderIdToPIList.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x140556854 (RtlpAllocDeallocQueryBuffer.c)
 *     WmipSDRegistryQueryRoutine @ 0x140557000 (WmipSDRegistryQueryRoutine.c)
 *     ExpCheckPortableOperatingSystem @ 0x1405578EC (ExpCheckPortableOperatingSystem.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     EtwpCreateNtFileName @ 0x140558818 (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x1405588EC (EtwpExpandFileName.c)
 *     PiCMGetDeviceIdList @ 0x140558CB8 (PiCMGetDeviceIdList.c)
 *     PipAllocateDeviceNode @ 0x140559210 (PipAllocateDeviceNode.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     IopGetRootDevices @ 0x14055973C (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessAssignResources @ 0x140559D58 (PnpProcessAssignResources.c)
 *     IopPnPDispatch @ 0x14055A4F0 (IopPnPDispatch.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x14055B3C0 (PiGetDeviceRegProperty.c)
 *     IopQueryDeviceResources @ 0x14055BA24 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14055BDB4 (PnpGetDeviceResourcesFromRegistry.c)
 *     WmipGetRegistryHideMachine @ 0x14055CB4C (WmipGetRegistryHideMachine.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14055D770 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     ObpParseSymbolicLinkEx @ 0x1405604C0 (ObpParseSymbolicLinkEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PfpRpControlRequestCopy @ 0x140561C3C (PfpRpControlRequestCopy.c)
 *     PfpRpCHashDeleteEntries @ 0x140562254 (PfpRpCHashDeleteEntries.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140564360 (PsGetAllocatedFullProcessImageName.c)
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 *     PfSnBuildDumpFromTrace @ 0x140566710 (PfSnBuildDumpFromTrace.c)
 *     PfSnScenarioAlloc @ 0x140566AE0 (PfSnScenarioAlloc.c)
 *     PfSnPrefetchScenario @ 0x140567410 (PfSnPrefetchScenario.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x1405692A8 (MUIInitializeResourceLock.c)
 *     SiGetFirmwareBootDeviceName @ 0x140569680 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14056988C (SiTranslateSymbolicLink.c)
 *     SiGetRegistryValue @ 0x140569BDC (SiGetRegistryValue.c)
 *     MiAllocateCrcList @ 0x14056A478 (MiAllocateCrcList.c)
 *     CmpBuildAdminInformation @ 0x14056AEC0 (CmpBuildAdminInformation.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14056B998 (CmpUndoDeleteKeyForTrans.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14056BBEC (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14056CC30 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14056CE48 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056CFA4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x14056E020 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpDisableDeviceInterfaces @ 0x14056E2A4 (PnpDisableDeviceInterfaces.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpAllocateCriticalMemory @ 0x140570384 (PnpAllocateCriticalMemory.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140570FF0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoRegisterPlugPlayNotification @ 0x140571300 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1405716A8 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140571770 (PnpInitializeNotifyEntry.c)
 *     MmAllocateMappingAddress @ 0x1405728D0 (MmAllocateMappingAddress.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140572E74 (PiCMGetRelatedDeviceInstance.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140573C38 (CmpCommitDeleteValueKeyUoW.c)
 *     IoCreateSystemThread @ 0x140573E70 (IoCreateSystemThread.c)
 *     PopBlackBoxUpdate @ 0x1405744A4 (PopBlackBoxUpdate.c)
 *     PiSwUpdateArrayProperties @ 0x140574884 (PiSwUpdateArrayProperties.c)
 *     ExpWnfPopulateStateData @ 0x14057499C (ExpWnfPopulateStateData.c)
 *     PopTransitionCheckpoint @ 0x140576B7C (PopTransitionCheckpoint.c)
 *     NtInitiatePowerAction @ 0x1405773F8 (NtInitiatePowerAction.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140578618 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PoInitializeBroadcast @ 0x140578768 (PoInitializeBroadcast.c)
 *     PfpSourceBuildVaArray @ 0x140578DC4 (PfpSourceBuildVaArray.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14057A008 (PfpServiceMainThreadBoostPrep.c)
 *     PopLoadResumeContext @ 0x14057A470 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x14057AC78 (PopHiberInitializeResources.c)
 *     BiUnloadHiveByName @ 0x14057BA0C (BiUnloadHiveByName.c)
 *     IopSymlinkRememberJunction @ 0x14057BD70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 *     EtwpCCSwapStart @ 0x14057CD1C (EtwpCCSwapStart.c)
 *     PopSetHiberFileMcb @ 0x14057D378 (PopSetHiberFileMcb.c)
 *     SepInformLsaOfDeletedLogon @ 0x14057DB0C (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14057DF04 (SepInformFileSystemsOfDeletedLogon.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     IoWMIQuerySingleInstance @ 0x140580670 (IoWMIQuerySingleInstance.c)
 *     WmipCountedToSz @ 0x140580CC4 (WmipCountedToSz.c)
 *     WmipQueueNotification @ 0x140581028 (WmipQueueNotification.c)
 *     WmipSendEnableDisableRequest @ 0x140581C7C (WmipSendEnableDisableRequest.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140581EA0 (IopDeviceObjectFromSymbolicName.c)
 *     WdipSemAllocatePool @ 0x140582478 (WdipSemAllocatePool.c)
 *     MiFormFullImageName @ 0x140582C88 (MiFormFullImageName.c)
 *     MiRememberUnloadedDriver @ 0x140583894 (MiRememberUnloadedDriver.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140584010 (IoWMIDeviceObjectToInstanceName.c)
 *     NtSetCachedSigningLevel2 @ 0x1405847B4 (NtSetCachedSigningLevel2.c)
 *     TtmNotifyDeviceArrival @ 0x140584B80 (TtmNotifyDeviceArrival.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140585BC8 (NtQuerySystemEnvironmentValueEx.c)
 *     SepInitializeLowBoxNumberTable @ 0x140585F48 (SepInitializeLowBoxNumberTable.c)
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x140586A18 (IopGetRegistryKeyInformation.c)
 *     MmCallDllInitialize @ 0x140586B80 (MmCallDllInitialize.c)
 *     IoQueryDeviceDescription @ 0x140587240 (IoQueryDeviceDescription.c)
 *     IopConnectLineBasedInterrupt @ 0x140587E04 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140588528 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140588E44 (IopGetInterruptConnectionData.c)
 *     EtwpSetProviderTraitsKm @ 0x1405892F4 (EtwpSetProviderTraitsKm.c)
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 *     BiGetSystemPartition @ 0x140589570 (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x140589644 (SiQuerySystemPartitionInformation.c)
 *     BiGetSystemStorePath @ 0x140589C14 (BiGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140589D30 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140589EB0 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x14058A1D0 (BiGetDriveLayoutBlock.c)
 *     BiEnumerateSubKeys @ 0x14058A920 (BiEnumerateSubKeys.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14058AC08 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14058AE94 (PopBcdReadElement.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 *     BiGetKeyName @ 0x14058BC84 (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x14058BFCC (BiConvertElementToRegistryData.c)
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
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x14058F3B8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x140592A80 (PipHardwareConfigActivateService.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405930D4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140593178 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgInitResolveContext @ 0x140593494 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgCopyObjectProperties @ 0x140593580 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405944B0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14059481C (PiDevCfgGetKeySecurityDescriptor.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140594C60 (EtwpCrimsonProvEnableCallback.c)
 *     PiControlGetDeviceStack @ 0x140595F34 (PiControlGetDeviceStack.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     WheaAddErrorSource @ 0x1405970A0 (WheaAddErrorSource.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     SPCallServerHandleClepSign @ 0x1405973B8 (SPCallServerHandleClepSign.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x140597A84 (PnpQueueQueryAndRemoveEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405980F0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     WmipAllocateSingleInstanceWnode @ 0x140598608 (WmipAllocateSingleInstanceWnode.c)
 *     SPCallServerHandleGetLicenseChallenge @ 0x1405989F8 (SPCallServerHandleGetLicenseChallenge.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405990C0 (CmpAddRemoveContainerToCLFSLog.c)
 *     MmGetChannelInformation @ 0x140599888 (MmGetChannelInformation.c)
 *     SPCallServerHandleUpdateLicense @ 0x140599CA4 (SPCallServerHandleUpdateLicense.c)
 *     SPCallServerHandleRemoveLicense @ 0x140599FC4 (SPCallServerHandleRemoveLicense.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14059A668 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14059ACD8 (RawQueryFileSystemInformation.c)
 *     PoDisableSleepStates @ 0x14059B1C0 (PoDisableSleepStates.c)
 *     PopDeleteHiberFile @ 0x14059BA44 (PopDeleteHiberFile.c)
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     PipApplyFunctionToServiceInstances @ 0x14059C6CC (PipApplyFunctionToServiceInstances.c)
 *     PiProcessDriverInstance @ 0x14059C9D0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14059CC04 (PiFindDevInstMatch.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14059D090 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiDcInitUpdateProperties @ 0x14059DB24 (PiDcInitUpdateProperties.c)
 *     PiDrvDbRegisterNode @ 0x14059E02C (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 *     EtwInitialize @ 0x14059E53C (EtwInitialize.c)
 *     EtwInitializeProcessor @ 0x14059E570 (EtwInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x14059E748 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14059E7F4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x14059E91C (IoInitializeProcessor.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14059F218 (ObpCreateDefaultObjectTypeSD.c)
 *     PsRegisterSiloMonitor @ 0x14059F3C0 (PsRegisterSiloMonitor.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x14059F9D0 (VrpInitializeLoadedDifferencingHives.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x14059FA60 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x14059FAE0 (IoRegisterShutdownNotification.c)
 *     WmipQueueRegWork @ 0x14059FF10 (WmipQueueRegWork.c)
 *     WmipRegisterOrUpdateDS @ 0x1405A01A0 (WmipRegisterOrUpdateDS.c)
 *     WmipBuildInstanceSet @ 0x1405A06AC (WmipBuildInstanceSet.c)
 *     WmipCachePtrs @ 0x1405A0DA8 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1405A0F20 (WmipSendGuidUpdateNotifications.c)
 *     WmipAllocGuidEntry @ 0x1405A11C0 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1405A12B0 (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x1405A1470 (WmipInsertMofResource.c)
 *     WmipRegisterEtwProvider @ 0x1405A15B4 (WmipRegisterEtwProvider.c)
 *     WmipGenerateMofResourceNotification @ 0x1405A168C (WmipGenerateMofResourceNotification.c)
 *     WmipQueueLegacyEtwWork @ 0x1405A17D0 (WmipQueueLegacyEtwWork.c)
 *     MiCreateNodeLists @ 0x1405A2018 (MiCreateNodeLists.c)
 *     ObCreateKernelObjectsSD @ 0x1405A2BA8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1405A2F64 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1405A316C (MiCreateMemoryEventSD.c)
 *     EmpProviderRegister @ 0x1405A3390 (EmpProviderRegister.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405A444C (CmpInitializeSystemHivesLoad.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A68C8 (CmpAdminSystemSecurityDescriptor.c)
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405A74A8 (AdtpInitializeDriveLetters.c)
 *     KeInitializeTimerTable @ 0x1405A79D0 (KeInitializeTimerTable.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405A80EC (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405A8504 (PopThermalHandlePreviousShutdown.c)
 *     CmpCmdInit @ 0x1405A8688 (CmpCmdInit.c)
 *     PoRegisterCoalescingCallback @ 0x1405A8B90 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x1405A8D44 (ExAllocateCallBack.c)
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
 *     AdtpEtwBuildString @ 0x1405ABCF0 (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x1405ABDB4 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x1405AC040 (SepGetLogonSessionAccountInfo.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
 *     PopPepRegisterDevice @ 0x1405AC508 (PopPepRegisterDevice.c)
 *     PiGetDefaultMessageString @ 0x1405AD2F8 (PiGetDefaultMessageString.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405AD458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiDmListInitEnumCallback @ 0x1405ADAE0 (PiDmListInitEnumCallback.c)
 *     EtwpEnableKeyProviders @ 0x1405AE660 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405AE838 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405AED28 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpInitializeRegistryNode @ 0x1405AF4FC (CmpInitializeRegistryNode.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     EtwpInitializeAutoLoggers @ 0x1405B059C (EtwpInitializeAutoLoggers.c)
 *     PnpReadDeviceConfiguration @ 0x1405B098C (PnpReadDeviceConfiguration.c)
 *     PnpLookupArbitersNewResources @ 0x1405B0D80 (PnpLookupArbitersNewResources.c)
 *     PnpBuildCmResourceList @ 0x1405B1360 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x1405B17E8 (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x1405B1A14 (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x1405B1FC8 (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x1405B258C (IopQueryResourceHandlerInterface.c)
 *     PnpCmResourcesToIoResources @ 0x1405B2B24 (PnpCmResourcesToIoResources.c)
 *     IopTranslateAndAdjustReqDesc @ 0x1405B2D64 (IopTranslateAndAdjustReqDesc.c)
 *     ArbAddOrdering @ 0x1405B3958 (ArbAddOrdering.c)
 *     PnpFilterResourceRequirementsList @ 0x1405B3B10 (PnpFilterResourceRequirementsList.c)
 *     ArbpBuildAllocationStack @ 0x1405B471C (ArbpBuildAllocationStack.c)
 *     ArbpGetRegistryValue @ 0x1405B5718 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1405B5AD0 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x1405B5CE0 (ArbPruneOrdering.c)
 *     ArbInitializeArbiterInstance @ 0x1405B5E18 (ArbInitializeArbiterInstance.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405B66DC (PnpHardwareConfigCreateBootDriverFlags.c)
 *     RtlGenerateClass5Guid @ 0x1405B6EC0 (RtlGenerateClass5Guid.c)
 *     LdrpQueryValueKey @ 0x1405B7ACC (LdrpQueryValueKey.c)
 *     RtlpGetWindowsPolicy @ 0x1405B87A4 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1405B88AC (RtlpMuiRegCreateRegistryInfo.c)
 *     PnpSetInterruptInformation @ 0x1405B8F9C (PnpSetInterruptInformation.c)
 *     PdcTaskClientRegister @ 0x1405B9024 (PdcTaskClientRegister.c)
 *     PdcPortOpen @ 0x1405B90D0 (PdcPortOpen.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405BA4A4 (MiCreatePageFileSpaceBitmaps.c)
 *     MiConvertInitialMemoryBlock @ 0x1405BAD50 (MiConvertInitialMemoryBlock.c)
 *     PiDmObjectManagerPopulate @ 0x1405BD940 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x1405BDA78 (PiDmObjectCreate.c)
 *     FsRtlGetTunnelParameterValue @ 0x1405BE1E0 (FsRtlGetTunnelParameterValue.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 *     PopFxConvertV1Components @ 0x1405BEE94 (PopFxConvertV1Components.c)
 *     PipAddBindingId @ 0x1405BF184 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x1405BF2BC (PipCreateDependencyNode.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmAllocatePerfCheck @ 0x1405BFEF4 (PpmAllocatePerfCheck.c)
 *     PpmIdleInitializeConcurrency @ 0x1405BFF64 (PpmIdleInitializeConcurrency.c)
 *     PpmPerfResizeHistoryAll @ 0x1405C0E1C (PpmPerfResizeHistoryAll.c)
 *     CmpInitializeNameCache @ 0x1405C140C (CmpInitializeNameCache.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     EtwpAllocateEventNameFilter @ 0x1405C1A20 (EtwpAllocateEventNameFilter.c)
 *     KeAllocateCalloutStackEx @ 0x1405C1E00 (KeAllocateCalloutStackEx.c)
 *     IopCreateCmResourceList @ 0x1405C1EF8 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x1405C1FCC (IopCombineCmResourceList.c)
 *     PopLogSleepDisabled @ 0x1405C2380 (PopLogSleepDisabled.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x1405C263C (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x1405C2B80 (PiQueryPowerDependencyRelations.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     WheapInitializeErrorSource @ 0x1405C47D4 (WheapInitializeErrorSource.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 *     ExRegisterHost @ 0x1405C4EFC (ExRegisterHost.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405C5890 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x1405C5920 (SepRmFetchGlobalSacl.c)
 *     PopRequestShutdownWait @ 0x1405C5F14 (PopRequestShutdownWait.c)
 *     SepReadAndPopulateCapes @ 0x1405C5FA4 (SepReadAndPopulateCapes.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     PiAuAllocateAndInitializeSid @ 0x1405C6F04 (PiAuAllocateAndInitializeSid.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405C7568 (NtPrivilegeObjectAuditAlarm.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     EtwpUpdateDisallowedGuids @ 0x1405C7CC4 (EtwpUpdateDisallowedGuids.c)
 *     PfpCreateEvent @ 0x1405C8E6C (PfpCreateEvent.c)
 *     CmpGetAcpiProfileInformation @ 0x1405C9074 (CmpGetAcpiProfileInformation.c)
 *     CmSetAcpiHwProfile @ 0x1405C97A8 (CmSetAcpiHwProfile.c)
 *     PiDmAllocateGenericTableEntry @ 0x1405C9F10 (PiDmAllocateGenericTableEntry.c)
 *     PnpUnloadAttachedDriver @ 0x1405CBF9C (PnpUnloadAttachedDriver.c)
 *     PspInitializeProtectedProcessParameters @ 0x1405CC41C (PspInitializeProtectedProcessParameters.c)
 *     PpmRegisterProfiles @ 0x1405CC9BC (PpmRegisterProfiles.c)
 *     WheapLogInitEvent @ 0x1405CCE38 (WheapLogInitEvent.c)
 *     _PnpCtxOpenMachine @ 0x1405CCFE4 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x1405CD1A8 (DrvDbOpenContext.c)
 *     _SysCtxOpenMachine @ 0x1405CD2E8 (_SysCtxOpenMachine.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     IoRegisterBootDriverReinitialization @ 0x1405CDA70 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x1405CDAF0 (IoRegisterDriverReinitialization.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     CreateTlgAggregateSession @ 0x1405CE0C8 (CreateTlgAggregateSession.c)
 *     PspAllocStorage @ 0x1405CE18C (PspAllocStorage.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405CE304 (FsRtlpRegisterProviderWithMUP.c)
 *     MmGetNodeChannelRanges @ 0x1405CE53C (MmGetNodeChannelRanges.c)
 *     IopCreateVpb @ 0x1405CE748 (IopCreateVpb.c)
 *     SepSetSystemPaths @ 0x1405CE854 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x1405CE94C (SepLoadNgenLocations.c)
 *     ObRegisterCallbacks @ 0x1405CEF30 (ObRegisterCallbacks.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405CF2CC (ExpRegisterFirmwareTableInformationHandler.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1405CF664 (PnpMergeFilteredResourceRequirementsList.c)
 *     SepBuildDefaultCap @ 0x1405CFDC8 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     AlpcpInitSystem @ 0x1405D0188 (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x1405D0474 (AlpcpInitializeMessageLog.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405D061C (PnpAllocateDeviceInstancePath.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405D0FEC (ArbAddMmConfigRangeAsBootReserved.c)
 *     MmInitializeHandBuiltProcess @ 0x1405D1CE0 (MmInitializeHandBuiltProcess.c)
 *     HeadlessTerminalAddResources @ 0x1405D21F0 (HeadlessTerminalAddResources.c)
 *     CmpRegisterCallbackInternal @ 0x1405D2288 (CmpRegisterCallbackInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405D2594 (PopCreateHiberFileSecurityDescriptor.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1405D2714 (EtwpUpdateSchematizedFilterData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405D2774 (ExpGetSystemPlatformBinary.c)
 *     ExpWnfAllocateScopeMap @ 0x1405D2A94 (ExpWnfAllocateScopeMap.c)
 *     IoRegisterContainerNotification @ 0x1405D2C50 (IoRegisterContainerNotification.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1405D3320 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     ExGetSystemFirmwareTable @ 0x1405D3420 (ExGetSystemFirmwareTable.c)
 *     CmpAddStringToMapping @ 0x1405D3E34 (CmpAddStringToMapping.c)
 *     PopExtendConnectionState @ 0x1405D45FC (PopExtendConnectionState.c)
 *     PiDcAllocateGenericTableEntry @ 0x1405D4940 (PiDcAllocateGenericTableEntry.c)
 *     PopConnectToPolicyDevice @ 0x1405D67E8 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x1405D6BA0 (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x1405D6C98 (PopAssociateThermalRequest.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     PfpRpCHashGrow @ 0x1405D78F8 (PfpRpCHashGrow.c)
 *     PfTAllocateBuffers @ 0x1405D8638 (PfTAllocateBuffers.c)
 *     PfSnPrefetchCacheCtxStart @ 0x1405D89F8 (PfSnPrefetchCacheCtxStart.c)
 *     WmipLegacyEtwCallback @ 0x1405D9150 (WmipLegacyEtwCallback.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 *     PspSetMinimalProcessName @ 0x1405D9BBC (PspSetMinimalProcessName.c)
 *     PopPreallocateHibernateMemory @ 0x1405D9F4C (PopPreallocateHibernateMemory.c)
 *     PnpLogDeviceConflictingResource @ 0x1405DA418 (PnpLogDeviceConflictingResource.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405DA5C8 (ExAllocatePrivateWorkerPool.c)
 *     IoInitializeTimer @ 0x1405DA990 (IoInitializeTimer.c)
 *     CcAllocateObcb @ 0x14065E5A4 (CcAllocateObcb.c)
 *     NtQueryOpenSubKeysEx @ 0x14065EFBC (NtQueryOpenSubKeysEx.c)
 *     CmSetCallbackObjectContext @ 0x140660300 (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1406624D0 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x140666DB0 (CmpBuildVirtualReplicationStack.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpCmdRenameHive @ 0x14066959C (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x140669660 (CmpDiskFullWarning.c)
 *     CmInitializeProcessor @ 0x14066A040 (CmInitializeProcessor.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14066AEF8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     CmpAllocateLayerInfoForKcb @ 0x14066D400 (CmpAllocateLayerInfoForKcb.c)
 *     CmDeleteKeyRecursive @ 0x14066DFD0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpMergeKeyValues @ 0x14066F3AC (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1406752A8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     HvpViewMapPrefetchFile @ 0x140676244 (HvpViewMapPrefetchFile.c)
 *     HvpReviveDiscardedBin @ 0x140676AA8 (HvpReviveDiscardedBin.c)
 *     HvpGetLogHeader @ 0x140676C8C (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406774D4 (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x140677748 (HvpRecoverDataReadRoutine.c)
 *     VrpAllocateKeyContext @ 0x1406794D0 (VrpAllocateKeyContext.c)
 *     VrpProcessBufferParameter @ 0x140679640 (VrpProcessBufferParameter.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140679694 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14067A1F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpAddNamespaceNodeToList @ 0x14067AC20 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14067AF54 (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14067CD10 (VrpPreOpenOrCreate.c)
 *     VrpAllocateDiffHiveEntry @ 0x14067D8C8 (VrpAllocateDiffHiveEntry.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 *     DbgkQueueUserExceptionReport @ 0x140680B08 (DbgkQueueUserExceptionReport.c)
 *     DbgkCaptureLiveDump @ 0x140681C24 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14068222C (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x140682830 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406829D0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x140682BC4 (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140682BE0 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x140682D64 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x140683820 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x140683AF8 (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x140683F60 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x140685EC0 (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x1406869D0 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x140686C10 (FsRtlpQueryValueKey.c)
 *     IoReadPartitionTable @ 0x1406870E0 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x1406872C0 (IoWritePartitionTable.c)
 *     HvlpAllocatePageListResources @ 0x140687838 (HvlpAllocatePageListResources.c)
 *     VslStartSecureProcessor @ 0x1406882A8 (VslStartSecureProcessor.c)
 *     IopAllocateGenericTableEntry @ 0x140688710 (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140688E74 (IopGetRelatedFileName.c)
 *     IopInitializeBootLogging @ 0x140689284 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140689A20 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x140689EC4 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 *     IoReplaceFileObjectName @ 0x14068BBB0 (IoReplaceFileObjectName.c)
 *     IoIsValidNameGraftingBuffer @ 0x14068C770 (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x14068CE14 (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x14068CFA0 (IoRegisterIoTracking.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14068ECF0 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14068EED8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14068F6F4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14068F920 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopFindSystemDevice @ 0x1406917D0 (IopFindSystemDevice.c)
 *     PipAddRequestToEdge @ 0x140692B10 (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x140693BA0 (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x1406946CC (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x1406948A0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140695254 (IopAllocatePassiveInterruptBlock.c)
 *     IopCombineLegacyResources @ 0x140696658 (IopCombineLegacyResources.c)
 *     IopIsPciRootBus @ 0x140696750 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140696C24 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140696CE0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140696E00 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406970F0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140697970 (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x140697D8C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x1406988C8 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x1406989F8 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406997F8 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyVariableData @ 0x140699A98 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14069AE04 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14069B6D4 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14069C2D0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14069C3A0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14069D540 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14069DA70 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14069DC50 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14069E410 (PiDevCfgResolveVariableKeyValue.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     PiProfileUpdateDeviceTree @ 0x14069FAA0 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14069FBE8 (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x1406A0270 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x1406A02D4 (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x1406A16B8 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x1406A18A4 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x1406A19BC (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1406A1B70 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x1406A1F44 (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x1406A2CAC (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406A3334 (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1406A51A4 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406A574C (PiCMGetObjectPropertyKeys.c)
 *     IopAppendLegacyVeto @ 0x1406A7284 (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x1406A7358 (IopCreateLegacyDeviceIds.c)
 *     IopQueryDockRemovalInterface @ 0x1406A7AE8 (IopQueryDockRemovalInterface.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1406A8B98 (PiQueryDeviceRelations.c)
 *     PiAuditDeviceOperation @ 0x1406A91A8 (PiAuditDeviceOperation.c)
 *     PnpRebalance @ 0x1406A9D3C (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x1406AA0D8 (IopExecuteHardwareProfileChange.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1406AD0E0 (KeInitializeSecondaryInterruptServices.c)
 *     KeInitializeUmsThread @ 0x1406AD5AC (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406B1460 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x1406B20AC (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x1406B2510 (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406B2A00 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x1406B2B60 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406B2C70 (MmGetFileNameForSection.c)
 *     MiInitializeLockedPagesTracking @ 0x1406B2DB0 (MiInitializeLockedPagesTracking.c)
 *     MiConfigureMemoryInsertion @ 0x1406B3B70 (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x1406B3E7C (MiConfigureMemoryRemoval.c)
 *     MiAllocateHotPatchPageBitMap @ 0x1406B53D8 (MiAllocateHotPatchPageBitMap.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406B58F4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiPrepareHotPatchBaseImageList @ 0x1406B5AB0 (MiPrepareHotPatchBaseImageList.c)
 *     MmSetPermanentCacheAttribute @ 0x1406B5F50 (MmSetPermanentCacheAttribute.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 *     MiConvertRunsToPages @ 0x1406B7394 (MiConvertRunsToPages.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 *     MiAllocateAweInfo @ 0x1406B84C0 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1406B8CF8 (MiResizeAweBitMap.c)
 *     NtMapUserPhysicalPages @ 0x1406B9C78 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406BA0F4 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406BA5D8 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x1406BBE40 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1406BC21C (NtInitializeEnclave.c)
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 *     MiExpandPartitionIds @ 0x1406BCBCC (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1406BCFEC (MiMakePartitionMemoryBlock.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     MiAllocateLargeZeroPages @ 0x1406BE398 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406BE7A4 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406BE99C (MiFindLargePageMemory.c)
 *     MiInitializeScrubPacket @ 0x1406BFEE8 (MiInitializeScrubPacket.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 *     MmScrubMemory @ 0x1406C04B8 (MmScrubMemory.c)
 *     ObpSetObjectAuditInfo @ 0x1406C1550 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406C1730 (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x1406C1DAC (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x1406C2974 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x1406C2A8C (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x1406C2C74 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406C3074 (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x1406C30BC (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x1406C32A4 (ObpStartRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x1406C3B40 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x1406C3FD8 (PfpQueryFileExtentsRequest.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1406C5A80 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406C6000 (PpmInstallPlatformIdleStates.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406C6C70 (PopRegisterCoolingExtensionProtection.c)
 *     PopGetPowerRequestListInfo @ 0x1406C6FE8 (PopGetPowerRequestListInfo.c)
 *     PopFxChildDevicesActive @ 0x1406C7620 (PopFxChildDevicesActive.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406C7904 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406C7E5C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x1406C82F0 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1406C8508 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x1406C8C3C (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406C9070 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopNewWakeSource @ 0x1406C9804 (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x1406C9854 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1406C9A1C (PopWakeSourceGetDeviceProperty.c)
 *     PopPdcCsDeviceNotification @ 0x1406CB6E8 (PopPdcCsDeviceNotification.c)
 *     PopDiagReadRegKeyValue @ 0x1406CC2C4 (PopDiagReadRegKeyValue.c)
 *     PopFxTracePerfRegistration @ 0x1406CE888 (PopFxTracePerfRegistration.c)
 *     PopEtAggregateGet @ 0x1406D07DC (PopEtAggregateGet.c)
 *     PopEtAllocate @ 0x1406D0D14 (PopEtAllocate.c)
 *     PopEtInternerAllocate @ 0x1406D2AF0 (PopEtInternerAllocate.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D2CD8 (PopEtProcessSnapshotCreate.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1406D36C4 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406D3A14 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x1406D3CFC (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x1406D5948 (PpmAllocateQueryTable.c)
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x1406D9DCC (TtmDispatchApi.c)
 *     TtmiWriteEventToSingleQueue @ 0x1406DAC1C (TtmiWriteEventToSingleQueue.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1406DF530 (PspSiloInitializeSystemRootSymlink.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406E1118 (PspAddProcessToWorkingSetChangeList.c)
 *     PspSetJobIoRateControlForVolume @ 0x1406E1ADC (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x1406E23CC (PspCreateSecureThread.c)
 *     PspLazyInitializeStorageExpansion @ 0x1406E4BC8 (PspLazyInitializeStorageExpansion.c)
 *     RtlpComputeMergedAcl @ 0x1406EA05C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406EA480 (RtlpCreateServerAcl.c)
 *     RtlIdnToUnicode @ 0x1406EBDB0 (RtlIdnToUnicode.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x1406F43D8 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x1406F47D8 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x1406F4890 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1406F4AF4 (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406F5610 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x1406F6B90 (SepCreateSidValuesBlock.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1406F71E0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SepAddTokenLogonSession @ 0x1406F7430 (SepAddTokenLogonSession.c)
 *     NtFilterBootOption @ 0x1406F79EC (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406F82BC (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x1406F8654 (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406F87EC (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x1406F8998 (SepBuildObjectSecurityDescriptor.c)
 *     SepDuplicateClaimAttributes @ 0x1406F9644 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406F9A28 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1406F9DD4 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1406FA138 (SepReadSingleCap.c)
 *     SddlpReAlloc @ 0x1406FC4EC (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x1406FC64C (SddlpUuidToString.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14070360C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmCreateMemoryRange @ 0x140705320 (VmCreateMemoryRange.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140705E00 (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x140706870 (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x140706DB0 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x140707490 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x140707C28 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x1407082C0 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x140708650 (WmipQuerySingleMultiple.c)
 *     WmipUnregisterEtwProvider @ 0x140708E54 (WmipUnregisterEtwProvider.c)
 *     WmipGenerateBinaryMofNotification @ 0x140708F04 (WmipGenerateBinaryMofNotification.c)
 *     EtwpLogMemInfoWs @ 0x14070B538 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x14070BAE8 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x14070C004 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x14070C11C (EtwpTraceHandle.c)
 *     EtwpAllocatePmcData @ 0x14070D624 (EtwpAllocatePmcData.c)
 *     EtwpCapturePreviousRegistryData @ 0x14070E270 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x14070E374 (EtwpCaptureRegistryData.c)
 *     EtwpSendDbgId @ 0x14070F004 (EtwpSendDbgId.c)
 *     EtwpTiQueryVad @ 0x14070FC80 (EtwpTiQueryVad.c)
 *     EtwpEnumerateWorkingSet @ 0x140710184 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x140710550 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x140710810 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140710968 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140711C20 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x140711F20 (SendCaptureStateNotificationsWorker.c)
 *     EtwpReferenceStackLookasideList @ 0x140712350 (EtwpReferenceStackLookasideList.c)
 *     EtwpUpdateStackTracing @ 0x1407123B8 (EtwpUpdateStackTracing.c)
 *     EtwpAllocatePayloadFilterData @ 0x140712504 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x14071258C (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x140712AC0 (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdatePidFilterData @ 0x140712F78 (EtwpUpdatePidFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x1407132C4 (EtwpAddWinRtProviderToSession.c)
 *     EtwpEnableStackCaching @ 0x1407135D8 (EtwpEnableStackCaching.c)
 *     EtwpPreserveLogger @ 0x140713AB0 (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x140713CDC (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x140713DCC (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLoggersWorker @ 0x140714260 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpSetSoftRestartInformation @ 0x140714364 (EtwpSetSoftRestartInformation.c)
 *     ExEnumerateSystemFirmwareTables @ 0x140714B90 (ExEnumerateSystemFirmwareTables.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x140716B30 (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x1407170BC (ExEnableHandleTracing.c)
 *     ExpGetSubscriptionPfn @ 0x140718038 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140718634 (ExStartRecordingIRTimerExpiries.c)
 *     ExpConvertArcName @ 0x140718A74 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x140718C30 (ExpConvertSignatureName.c)
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
 *     ExpUnicodeStringToNonpagedWStr @ 0x14071BE1C (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x14071C3B8 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14071C988 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x14071D9A0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x14071DCCC (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x14071E0CC (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x14071E2D0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14071E604 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x14071E874 (NtTranslateFilePath.c)
 *     ExpAllocatePoolForNode @ 0x14071EBE4 (ExpAllocatePoolForNode.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14071F280 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x14071F6EC (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x14071F96C (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x14072007C (ExpCovReadRequestBuffer.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 *     CMFAllocFn @ 0x140721030 (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x14072162C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407231F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140723410 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x140723E24 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x140724084 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x140724354 (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x140724948 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x140724BF8 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetLoadSchemaEx @ 0x140724DB4 (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x140724F84 (ApiSetpConstructPathToExtension.c)
 *     sub_1407254D4 @ 0x1407254D4 (sub_1407254D4.c)
 *     sub_140725A88 @ 0x140725A88 (sub_140725A88.c)
 *     sub_140726100 @ 0x140726100 (sub_140726100.c)
 *     sub_1407264B4 @ 0x1407264B4 (sub_1407264B4.c)
 *     sub_140726800 @ 0x140726800 (sub_140726800.c)
 *     sub_140726B4C @ 0x140726B4C (sub_140726B4C.c)
 *     sub_140727404 @ 0x140727404 (sub_140727404.c)
 *     sub_140727D68 @ 0x140727D68 (sub_140727D68.c)
 *     sub_1407282B8 @ 0x1407282B8 (sub_1407282B8.c)
 *     sub_140728F7C @ 0x140728F7C (sub_140728F7C.c)
 *     sub_140729A58 @ 0x140729A58 (sub_140729A58.c)
 *     sub_140729EF8 @ 0x140729EF8 (sub_140729EF8.c)
 *     sub_14072A730 @ 0x14072A730 (sub_14072A730.c)
 *     AdtpBuildGuidString @ 0x140732B70 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x140732C9C (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x140732D5C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140732EB4 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x14073300C (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1407330B0 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x1407332A0 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140733628 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14073382C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140733B44 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x140733CB0 (AdtpBuildUlongString.c)
 *     AdtpAppendString @ 0x140733DAC (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140733FA4 (AdtpBuildAccessesString.c)
 *     AdtpBuildUserAccountControlString @ 0x1407346C4 (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1407350F8 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1407351D4 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x14073529C (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140735698 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140735788 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x140735840 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x140735940 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x140735AEC (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140735C30 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x140735D20 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140735EE8 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140736030 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140736118 (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x14073655C (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x140736AF0 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x140737008 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x14073747C (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x140737628 (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x140737A54 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x140737BE0 (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140737D3C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140737F54 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x140738214 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407382CC (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140738574 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140738B00 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetDriveLayoutInformation @ 0x140738D80 (SiGetDriveLayoutInformation.c)
 *     SiGetEfiSystemDevice @ 0x140739078 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1407393DC (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x1407396C8 (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x1407397F0 (SiGetBiosSystemPartition.c)
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
 *     _CmServiceFilterCallback @ 0x14073E410 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x14073FEE4 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14074004C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140741C74 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1407422EC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407439F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x140746A68 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x140746DE0 (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x1407473A0 (VhdiVerifyBootDisk.c)
 *     ObGetSiloRootDirectoryPath @ 0x140747A10 (ObGetSiloRootDirectoryPath.c)
 *     ObpGetSilosRootDirectory @ 0x140747B7C (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140747D68 (RtlpLoadPolicyLanguageSpec.c)
 *     ResFwpPageOutBackground @ 0x140755980 (ResFwpPageOutBackground.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140761D60 (VfXdvDriverCaptureIoCallbacks.c)
 *     ViThunkCreateSharedExportInformation @ 0x140761F14 (ViThunkCreateSharedExportInformation.c)
 *     VfAvlInitializeTreeEx @ 0x1407622E4 (VfAvlInitializeTreeEx.c)
 *     IovpBuildDriverObjectList @ 0x140763538 (IovpBuildDriverObjectList.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140764E04 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140765540 (ViInitializeLocalSystemDescriptor.c)
 *     VfInitVerifierComponents @ 0x1407657A0 (VfInitVerifierComponents.c)
 *     ViDdiDriverEntry @ 0x140766D10 (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x14076B0DC (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x14076B29C (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14076C7EC (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14076CF8C (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x140771FE0 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x140773AC4 (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140773FC0 (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x140774658 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x1407746DC (ViThunkFindAllSpecialTables.c)
 *     VfTargetEtwRegister @ 0x140774EA0 (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140775274 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x1407755AC (ViTargetTrackContiguousMemory.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1407761E8 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x1407762F0 (ViFaultsAddTagNoDuplicates.c)
 *     VfDeadlockInitialize @ 0x14077932C (VfDeadlockInitialize.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x14077AA70 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     VfSuspectDriversAllocateEntry @ 0x14077B488 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x14077BCA4 (VfSuspectExcludedDriversAllocateEntry.c)
 *     IovpSessionDataCreate @ 0x14077CFC8 (IovpSessionDataCreate.c)
 *     VfIrpLogRecordEvent @ 0x14077EE90 (VfIrpLogRecordEvent.c)
 *     VfIrpLogRetrieveWmiData @ 0x14077F074 (VfIrpLogRetrieveWmiData.c)
 *     ViCtxAllocateIsrContext @ 0x14077F744 (ViCtxAllocateIsrContext.c)
 *     VfGetVerifierInformation @ 0x140787F5C (VfGetVerifierInformation.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 *     KdPullRemoteFile @ 0x14078D0F8 (KdPullRemoteFile.c)
 *     HdlspAddLogEntry @ 0x14078E008 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14078F564 (HdlspSetBlueScreenInformation.c)
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     KeQueryNumaGraph @ 0x1407F6610 (KeQueryNumaGraph.c)
 *     CmpGetRegistryValue @ 0x1407F66B0 (CmpGetRegistryValue.c)
 *     CmGetSystemDriverList @ 0x1407F67B8 (CmGetSystemDriverList.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     CmpSetVideoBiosInformation @ 0x1407F730C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x1407F7FE4 (PnpRegMultiSzToUnicodeStrings.c)
 *     PipInitDeviceOverrideCache @ 0x1407F8168 (PipInitDeviceOverrideCache.c)
 *     IopCreateArcNames @ 0x1407F83BC (IopCreateArcNames.c)
 *     IopStoreArcInformation @ 0x1407F8A30 (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 *     PipCreateEntry @ 0x1407FA2E0 (PipCreateEntry.c)
 *     PpInitializeBootDDB @ 0x1407FBAB8 (PpInitializeBootDDB.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 *     ExpInitSystemPhase1 @ 0x1407FDF80 (ExpInitSystemPhase1.c)
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 *     PspInitializeSiloStructures @ 0x1407FEF44 (PspInitializeSiloStructures.c)
 *     WmipInitializeSecurity @ 0x1407FF444 (WmipInitializeSecurity.c)
 *     MiInitializeSessionIds @ 0x1407FF8DC (MiInitializeSessionIds.c)
 *     MiSystemPartitionObjectCreate @ 0x1407FFB40 (MiSystemPartitionObjectCreate.c)
 *     MiInitializeRelocations @ 0x140802B04 (MiInitializeRelocations.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x140803C7C (MiInitializeMirroring.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 *     MiCreateEnclaveRegions @ 0x14080480C (MiCreateEnclaveRegions.c)
 *     MiSectionInitialization @ 0x140804AC4 (MiSectionInitialization.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 *     IopGetBootDiskInformationLite @ 0x1408053E4 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x1408055B4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x14080571C (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140805944 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x140805AA0 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x140805F54 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1408062B4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1408064DC (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1408066F4 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPush @ 0x140806C5C (EmpRuleParserStackPush.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpInitializeSystemHive @ 0x1408078A0 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1408082A4 (CmpInitializePreloadedHive.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x1408099B0 (KiPerformGroupConfiguration.c)
 *     KiAllocateCpuSetData @ 0x140809F24 (KiAllocateCpuSetData.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x14080C59C (PopNetInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x14080CC70 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x14080CD24 (IopFileUtilRename.c)
 *     IopReportBootResources @ 0x14080CF20 (IopReportBootResources.c)
 *     IopInitializeResourceMap @ 0x14080D3D8 (IopInitializeResourceMap.c)
 *     MmInitializeMemoryLimits @ 0x14080D720 (MmInitializeMemoryLimits.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x14080FDB0 (PipCreateComputerId.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x140810590 (QueryRegistryHideMachine.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
 *     BapdpProcessBootMetadata @ 0x140811B90 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140811CD8 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140811D68 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140811DF8 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x140811EE4 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140811F74 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140812044 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x140812114 (BapdpProcessSiData.c)
 *     MiInitializeDriverImages @ 0x140814868 (MiInitializeDriverImages.c)
 *     InitializePagedPool @ 0x140814FA8 (InitializePagedPool.c)
 *     CmpParseInfBuffer @ 0x14081678C (CmpParseInfBuffer.c)
 *     CmpGetToken @ 0x140816A74 (CmpGetToken.c)
 *     CmpAppendValue @ 0x140816D04 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x140816D88 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x140816E10 (CmpAppendSection.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x140817890 (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x140817D54 (KiComputeNumaCosts.c)
 *     MiBuildImportsForBootDrivers @ 0x14081828C (MiBuildImportsForBootDrivers.c)
 *     BvgaSaveResources @ 0x140819160 (BvgaSaveResources.c)
 *     CcInitializeVacbs @ 0x1408191EC (CcInitializeVacbs.c)
 *     FsRtlInitSystem @ 0x140819368 (FsRtlInitSystem.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1408196AC (FsRtlGetCompatibilityModeValue.c)
 *     PopInitPlatformSettings @ 0x140819EF8 (PopInitPlatformSettings.c)
 *     WheapInitializeErrorSourceTable @ 0x14081A088 (WheapInitializeErrorSourceTable.c)
 *     SepInitializeSingletonAttributesStructures @ 0x14081A37C (SepInitializeSingletonAttributesStructures.c)
 *     SeMakeSystemToken @ 0x14081A5B4 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14081AB04 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14081AD40 (SeMakeAnonymousLogonToken.c)
 *     SepVariableInitialization @ 0x14081B100 (SepVariableInitialization.c)
 *     SepInitSystemDacls @ 0x14081C738 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14081D17C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 *     PfSnInitializePrefetcher @ 0x14081DD1C (PfSnInitializePrefetcher.c)
 *     CmpInitializeHardwareConfiguration @ 0x14081E6D8 (CmpInitializeHardwareConfiguration.c)
 *     PsInitializeQuotaSystem @ 0x14081FDD4 (PsInitializeQuotaSystem.c)
 *     SaveNodeDistanceInformation @ 0x140820034 (SaveNodeDistanceInformation.c)
 *     BootApplicationPersistentDataInitialize @ 0x1408207B8 (BootApplicationPersistentDataInitialize.c)
 *     DbgkpCreateNotificationEvent @ 0x14082109C (DbgkpCreateNotificationEvent.c)
 *     SepRmDbInitialization @ 0x14082189C (SepRmDbInitialization.c)
 *     ExpKeyedEventInitialization @ 0x14082212C (ExpKeyedEventInitialization.c)
 *     WheapCreatePerProcessorInfo @ 0x140822420 (WheapCreatePerProcessorInfo.c)
 *     IoReportHalResourceUsage @ 0x140822900 (IoReportHalResourceUsage.c)
 *     PopUmpoInitializeChannel @ 0x140822E64 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x140823478 (SeSecureBootRegisterPolicy.c)
 *     ObpInitStackTrace @ 0x1408235D0 (ObpInitStackTrace.c)
 *     ExpInitializeSvm @ 0x140823844 (ExpInitializeSvm.c)
 *     EtwpReadConfigParameters @ 0x140823B7C (EtwpReadConfigParameters.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140824620 (CmpInitializeTrustedInstallerSid.c)
 *     PnpInitializeDeviceEvents @ 0x140824F44 (PnpInitializeDeviceEvents.c)
 *     PnpBusTypeGuidInitialize @ 0x140826080 (PnpBusTypeGuidInitialize.c)
 *     MfgInitSystem @ 0x140826610 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x14082676C (PoFxRegisterDebugger.c)
 *     HeadlessInit @ 0x140826A2C (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1408317D0 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1408320F0 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1408337B0 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140833870 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x140834030 (PipProcessPendingObjects.c)
 *     KiInitializeCacheErrataSupport @ 0x140834BBC (KiInitializeCacheErrataSupport.c)
 *     VhdiInitializeBootDisk @ 0x1408365E0 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140836DE4 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1408371D0 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408373B8 (SbpStartLanman.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpUseSpecialPool @ 0x14025B194 (ExpUseSpecialPool.c)
 *     ExDeferredFreePool @ 0x140285C90 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14051EA00 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  POOL_TYPE v5; // r14d
  __int16 v6; // dx
  int v7; // ebx
  __int64 v8; // r12
  ULONG v9; // edi
  unsigned __int64 v10; // r10
  unsigned int v11; // r13d
  unsigned int v12; // r13d
  _GENERAL_LOOKASIDE_POOL *v13; // rbx
  PSLIST_ENTRY v14; // r15
  ULONG_PTR v15; // r15
  ULONG_PTR v16; // r9
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  int v19; // r9d
  int v20; // edx
  __int64 v21; // r11
  __int64 v22; // r12
  unsigned int v23; // ebx
  unsigned int v24; // r8d
  __int64 v25; // rsi
  int v26; // ecx
  PVOID result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r8
  int v34; // r9d
  __int64 v35; // r8
  ULONG_PTR *v36; // rbx
  __int64 v37; // r8
  ULONG_PTR PoolPages; // rax
  char v39; // cl
  ULONG_PTR v40; // rbx
  int v41; // r13d
  struct _FAST_MUTEX *v42; // rcx
  __int64 v43; // rdx
  __int64 *v44; // rbx
  __int64 v45; // rcx
  __int64 **v46; // rax
  unsigned __int64 v47; // r10
  struct _KTHREAD *CurrentThread; // r15
  unsigned int AbEntrySummary; // ecx
  __int64 v50; // rax
  __int64 v51; // rcx
  bool v52; // zf
  PRTL_BALANCED_NODE v53; // rcx
  int SessionId; // eax
  __int64 v55; // rcx
  __int16 v56; // ax
  __int64 CurrentIrql; // rcx
  volatile __int64 *v58; // r15
  __int64 v59; // rdx
  ULONG_PTR v60; // r8
  ULONG_PTR v61; // r9
  ULONG_PTR v62; // rax
  ULONG_PTR v63; // rax
  char v64; // al
  _BYTE *v65; // rax
  __int16 v66; // cx
  __int64 v67; // rcx
  __int64 *v68; // rax
  unsigned __int8 v69; // si
  signed __int32 v70; // eax
  unsigned __int8 v71; // al
  __int64 Next; // rax
  unsigned int v73; // r8d
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // ecx
  ULONG_PTR v78; // rdx
  __int64 v79; // rcx
  char v80; // r8
  _BYTE *v81; // rcx
  int v82; // r10d
  unsigned int v83; // r13d
  void *SpecialPool; // rax
  unsigned __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  int v89; // r15d
  unsigned int v90; // ebx
  int v91; // edx
  __int64 v92; // r12
  int v93; // eax
  int v94; // edx
  __int64 AbOrphanedEntrySummary; // rax
  __int64 v96; // [rsp+30h] [rbp-59h]
  void *v97; // [rsp+30h] [rbp-59h]
  int Node; // [rsp+38h] [rbp-51h]
  PRTL_BALANCED_NODE Nodea; // [rsp+38h] [rbp-51h]
  PRTL_BALANCED_NODE Nodeb; // [rsp+38h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE v101; // [rsp+40h] [rbp-49h] BYREF
  int v102; // [rsp+58h] [rbp-31h]
  unsigned int v103[3]; // [rsp+5Ch] [rbp-2Dh] BYREF
  __int64 v104; // [rsp+68h] [rbp-21h]
  __int64 v105; // [rsp+70h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE v106; // [rsp+78h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp+7h] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned int BugCheckParameter3; // [rsp+F0h] [rbp+67h]
  unsigned int BugCheckParameter3a; // [rsp+F0h] [rbp+67h]
  unsigned int BugCheckParameter3b; // [rsp+F0h] [rbp+67h]
  int v112; // [rsp+108h] [rbp+7Fh]
  __int64 v113; // [rsp+108h] [rbp+7Fh]

  v5 = PoolType;
  if ( (PoolType & 0x44) == 0x44 )
    v5 = PoolType & 0xFFFFFFFB;
  v6 = ExpPoolFlags;
  v7 = v5 & 1;
  if ( (v5 & 0x20) == 0 )
  {
    v8 = PoolVector[v5 & 1];
    goto LABEL_5;
  }
  if ( (v5 & 1) != 0 )
  {
    v8 = MiSessionPoolVector(PoolType, (unsigned int)ExpPoolFlags, Tag);
LABEL_5:
    if ( (v5 & 1) != 0 )
      goto LABEL_6;
    goto LABEL_38;
  }
  v8 = PoolVector[0];
LABEL_38:
  if ( (v5 & 0x200) == 0 )
  {
    if ( (v6 & 0x400) != 0 )
      v5 |= 0x200u;
    else
      v8 += 4416LL;
  }
LABEL_6:
  if ( (v6 & 8) != 0 )
  {
    if ( (v5 & 0x80000080) == 0 )
      return (PVOID)VeAllocatePoolWithTagPriority(v5, NumberOfBytes, Tag, HighPoolPriority, retaddr);
    v5 &= ~0x80u;
  }
  v9 = Tag & 0x7FFFFFFF;
  if ( !v9 )
    v9 = 811884866;
  v10 = 2LL;
  if ( !MmSpecialPoolTag || !ExpUseSpecialPool(NumberOfBytes, v9) )
  {
LABEL_10:
    if ( NumberOfBytes > 0xFE0 )
    {
      result = (PVOID)ExpAllocateBigPool(0LL, v5, NumberOfBytes, v9, 0);
      if ( result )
        return result;
LABEL_222:
      ++ExPoolFailures;
      if ( (v5 & 2) != 0 )
        KeBugCheckEx(
          0x41u,
          NumberOfBytes,
          (unsigned int)qword_140382D08[552 * ((v5 & 0x200) == 0)]
        - (unsigned int)qword_140382D48[552 * ((v5 & 0x200) == 0)],
          (unsigned int)qword_140382D10[552 * ((v5 & 0x200) == 0)]
        - (unsigned int)qword_140382D50[552 * ((v5 & 0x200) == 0)],
          0LL);
      if ( (v5 & 0x10) != 0 )
        RtlRaiseStatus(-1073741670);
      return 0LL;
    }
    if ( !NumberOfBytes )
      LODWORD(NumberOfBytes) = 1;
    v11 = NumberOfBytes + 31;
    if ( (v5 & 4) != 0 )
    {
      v74 = ExpCacheLineSize + ((NumberOfBytes + 31) & 0xFFFFFFF0) - 1;
      if ( ExpCacheLineSize == 64 )
        v75 = v74 >> 6;
      else
        v75 = v74 / ExpCacheLineSize;
      v76 = ExpCacheLineSize * (v75 + 1);
      if ( v76 > 0xFE0 )
        v5 &= ~4u;
      else
        v11 = v76;
    }
    v12 = v11 >> 4;
    if ( v7 )
    {
      if ( (v5 & 0x20) != 0 )
      {
        if ( v12 <= ExpSessionPoolSmallLists )
        {
          v13 = (_GENERAL_LOOKASIDE_POOL *)(((unsigned __int64)v12 << 7) + ExpSessionPoolLookaside - 128);
          ++v13->TotalAllocates;
          v14 = RtlpInterlockedPopEntrySList(&v13->ListHead);
          if ( v14 )
            goto LABEL_19;
          v10 = 2LL;
        }
      }
      else if ( v5 >= NonPagedPool )
      {
        if ( v12 <= 0x20 )
        {
          v13 = &KeGetCurrentPrcb()->PPNPagedLookasideList[v12 + 31];
          ++v13->TotalAllocates;
          v14 = RtlpInterlockedPopEntrySList(&v13->ListHead);
          if ( v14 )
          {
LABEL_19:
            v15 = (ULONG_PTR)&v14[-1];
            v16 = *(_QWORD *)(v15 + 8);
            if ( v16 != (v15 ^ ExpPoolQuotaCookie) )
              KeBugCheckEx(0x19u, 0xEuLL, v15, v16, v15 ^ ExpPoolQuotaCookie);
            ++v13->AllocateMisses;
            *(_BYTE *)(v15 + 3) = v5 & 0x6D | 2;
            goto LABEL_21;
          }
          v10 = 2LL;
        }
        if ( (unsigned __int16)KeNumberNodes <= 1u )
        {
          v32 = ExpNumberOfPagedPools;
LABEL_55:
          BugCheckParameter3a = 1;
          LODWORD(v33) = 1;
          if ( v32 != 1 )
          {
            v33 = (unsigned int)(ExpPoolIndex + 1);
            if ( (unsigned int)v33 > ExpNumberOfPagedPools )
              v33 = 1LL;
            v34 = v33;
            ExpPoolIndex = v33;
            do
            {
              if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v33] + 16) )
                break;
              v33 = (unsigned int)(v33 + 1);
              if ( (unsigned int)v33 > ExpNumberOfPagedPools )
                v33 = 1LL;
            }
            while ( (_DWORD)v33 != v34 );
            BugCheckParameter3a = v33;
          }
          v8 = ExpPagedPoolDescriptor[(unsigned int)v33];
          goto LABEL_65;
        }
        v32 = ExpNumberOfPagedPools;
        v73 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
        if ( v73 >= ExpNumberOfPagedPools )
          goto LABEL_55;
        BugCheckParameter3a = v73 + 1;
        v8 = ExpPagedPoolDescriptor[v73 + 1];
LABEL_65:
        v112 = 0;
        NumberOfBytes = 4096LL;
        v102 = v5 & 1;
        v35 = v8 + 16 * (v12 - 1 + 20LL);
        v105 = v35;
        while ( 1 )
        {
          v36 = (ULONG_PTR *)v35;
          v37 = v5 & 1;
          do
          {
            if ( (ULONG_PTR *)*v36 == v36 )
            {
              v36 += 2;
              goto LABEL_69;
            }
            if ( v37 )
            {
              v103[0] = 0;
              v47 = v8 + 8;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->SpecialApcDisable;
              if ( ++CurrentThread->AbAllocationRegionCount != 1 )
                KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 8, KeGetCurrentIrql(), 0LL);
              if ( CurrentThread->AbEntrySummary )
              {
LABEL_83:
                AbEntrySummary = CurrentThread->AbEntrySummary;
                _BitScanForward((unsigned int *)&v50, AbEntrySummary);
                v103[1] = v50;
                CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v50);
                v51 = 96 * v50 + 800;
                v52 = (struct _KTHREAD *)((char *)CurrentThread + v51) == 0LL;
                v53 = (PRTL_BALANCED_NODE)((char *)CurrentThread + v51);
                Nodea = v53;
                if ( !v52 )
                {
                  if ( v47 >= 0xFFFF800000000000uLL && byte_14036D700[((v47 >> 39) & 0x1FF) - 256] == 1 )
                  {
                    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
                    v53 = Nodea;
                    v47 = v8 + 8;
                  }
                  else
                  {
                    SessionId = -1;
                  }
                  *(_DWORD *)&v53[1].0 = SessionId;
                  v53[1].Children[1] = (_RTL_BALANCED_NODE *)(v47 & 0x7FFFFFFFFFFFFFFCLL);
                  goto LABEL_88;
                }
              }
              else
              {
                if ( CurrentThread->AbOrphanedEntrySummary )
                {
                  AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
                  CurrentThread->AbOrphanedEntrySummary = 0;
                  CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
                  goto LABEL_83;
                }
                Nodea = 0LL;
                if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
                {
                  EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, v8 + 8);
                  v47 = v8 + 8;
                }
              }
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
LABEL_88:
              --CurrentThread->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, v47, v103);
              v56 = CurrentThread->SpecialApcDisable + 1;
              CurrentThread->SpecialApcDisable = v56;
              if ( !v56
                && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery(v55);
              }
              CurrentIrql = KeGetCurrentIrql();
              v104 = CurrentIrql;
              __writecr8(1uLL);
              v58 = (volatile __int64 *)(v8 + 8);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v8 + 8), 0) )
              {
                ExpAcquireFastMutexContended(v8 + 8, (__int64)Nodea);
                LOBYTE(CurrentIrql) = v104;
              }
              if ( Nodea )
                BYTE2(Nodea[1].Left) |= 1u;
              *(_QWORD *)(v8 + 16) = KeGetCurrentThread();
              *(_DWORD *)(v8 + 56) = (unsigned __int8)CurrentIrql;
              PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
              goto LABEL_96;
            }
            v58 = (volatile __int64 *)(v8 + 8);
            v101.LockQueue.Next = 0LL;
            v101.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 8);
            v71 = KeGetCurrentIrql();
            __writecr8(v10);
            v101.OldIrql = v71;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented((__int64)&v101, (volatile __int64 *)(v8 + 8));
            }
            else
            {
              v59 = _InterlockedExchange64(v58, (__int64)&v101);
              if ( !v59 )
                goto LABEL_97;
              KxWaitForLockOwnerShip((__int64)&v101, (_QWORD *)v59);
            }
LABEL_96:
            v37 = v5 & 1;
LABEL_97:
            if ( (ULONG_PTR *)*v36 != v36 )
            {
              v60 = *v36;
              v61 = *(_QWORD *)(*(_QWORD *)*v36 + 8LL);
              if ( v61 != *v36 || **(_QWORD **)(v60 + 8) != v60 )
                KeBugCheckEx(0x19u, 3uLL, v60, v61, **(_QWORD **)(v60 + 8));
              v62 = *(_QWORD *)v60;
              if ( *(ULONG_PTR **)(v60 + 8) != v36 || *(_QWORD *)(v62 + 8) != v60 )
                __fastfail(3u);
              v15 = v60 - 16;
              *v36 = v62;
              *(_QWORD *)(v62 + 8) = v36;
              v63 = *(unsigned __int8 *)(v60 - 16 + 1);
              if ( (_DWORD)v63 != BugCheckParameter3a )
                KeBugCheckEx(0x19u, 0x23uLL, v63, BugCheckParameter3a, v60 - 16);
              if ( (unsigned __int8)*(_WORD *)(v15 + 2) != v12 )
              {
                if ( *(_BYTE *)v15 )
                {
                  *(_BYTE *)(v15 + 2) -= v12;
                  v59 = v60 - 16;
                  v64 = *(_BYTE *)(v15 + 2);
                  v15 += 16LL * (unsigned __int8)*(_WORD *)(v15 + 2);
                  *(_BYTE *)v15 = v64;
                  v65 = (_BYTE *)(v15 + 16LL * v12);
                  if ( ((unsigned __int16)v65 & 0xFFF) != 0 )
                    *v65 = v12;
                }
                else
                {
                  v80 = *(_BYTE *)(v15 + 2) - v12;
                  v59 = v15 + 16LL * v12;
                  *(_BYTE *)(v59 + 2) = v80;
                  v81 = (_BYTE *)(v59 + 16LL * (unsigned __int8)*(_WORD *)(v59 + 2));
                  *(_BYTE *)v59 = v12;
                  if ( ((unsigned __int16)v81 & 0xFFF) != 0 )
                    *v81 = v80;
                }
                *(_BYTE *)(v15 + 2) = v12;
                *(_BYTE *)(v15 + 1) = BugCheckParameter3a;
                *(_BYTE *)(v59 + 3) = 0;
                v66 = *(_WORD *)(v59 + 2);
                *(_DWORD *)(v59 + 4) = 1701147206;
                *(_BYTE *)(v59 + 1) = BugCheckParameter3a;
                if ( (_BYTE)v66 != 1 )
                {
                  v59 += 16LL;
                  v67 = v8 + 16 * ((unsigned int)(unsigned __int8)v66 - 1 + 20LL);
                  v68 = *(__int64 **)(v67 + 8);
                  if ( *v68 != v67 )
                    __fastfail(3u);
                  *(_QWORD *)v59 = v67;
                  *(_QWORD *)(v59 + 8) = v68;
                  *v68 = v59;
                  *(_QWORD *)(v67 + 8) = v59;
                }
              }
              *(_BYTE *)(v15 + 3) = v5 & 0x6D | 2;
              if ( v5 < NonPagedPool )
              {
                memset((void *)(v15 + 16), 0, 16LL * (unsigned __int8)*(_WORD *)(v15 + 2) - 16);
                *(_DWORD *)(v15 + 4) = v9;
              }
              if ( v102 )
              {
                LOBYTE(v59) = 1;
                PsBoostThreadIo((__int64)KeGetCurrentThread(), v59);
                v69 = *(_BYTE *)(v8 + 56);
                *(_QWORD *)(v8 + 16) = 0LL;
                v70 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), 1, 0);
                if ( v70 )
                  ExpReleaseFastMutexContended((volatile signed __int32 *)(v8 + 8), v70);
                __writecr8(v69);
                KeAbPostRelease(v8 + 8);
LABEL_116:
                _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)(v8 + 88),
                  16LL * (unsigned __int8)*(_WORD *)(v15 + 2));
LABEL_21:
                v17 = 16LL * (unsigned __int8)*(_WORD *)(v15 + 2);
                *(_DWORD *)(v15 + 4) = v9;
                if ( v9 == PoolHitTag )
                  __debugbreak();
                v18 = DWORD1(PerfGlobalGroupMask);
                if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
                  EtwTracePool(0xE20u, v5, v9, v15 + 16, v17);
                v19 = v5 & 0x20;
                if ( (v5 & 0x20) != 0 )
                {
                  v22 = ExpSessionPoolTrackTable;
                  v20 = ExpSessionPoolTrackTableMask;
                  v21 = ExpSessionPoolTrackTableSize;
                }
                else
                {
                  LODWORD(v18) = KeGetPcr()->Prcb.Number;
                  v20 = PoolTrackTableMask;
                  v21 = PoolTrackTableSize;
                  v22 = (__int64)*(&ExPoolTagTables + v18);
                }
                v96 = v21;
                Node = v20;
                v23 = v20 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
                v24 = v23;
                BugCheckParameter3 = v23;
                while ( 1 )
                {
                  v25 = 40LL * v23;
                  v26 = *(_DWORD *)(v22 + v25);
                  if ( v26 == v9 )
                  {
                    if ( (v5 & 1) != 0 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v22 + v25 + 24));
                      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + v25 + 32), v17);
                    }
                    else
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v22 + v25 + 4));
                      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + v25 + 16), v17);
                    }
                    goto LABEL_34;
                  }
                  if ( v26 )
                    goto LABEL_30;
                  if ( !v19 )
                  {
                    v82 = *(_DWORD *)(v25 + PoolTrackTable);
                    if ( v82 )
                    {
                      *(_DWORD *)(v22 + 40LL * v23) = v82;
                      continue;
                    }
                  }
                  if ( v23 == v21 - 1 )
                  {
LABEL_30:
                    v23 = v20 & (v23 + 1);
                    if ( v23 == v24 )
                    {
                      ExpInsertPoolTrackerExpansion(v9, v17, v5);
LABEL_34:
                      if ( (v5 & 4) != 0 )
                      {
                        *(_BYTE *)(v15 + 3) &= ~4u;
                        v77 = (ExpCacheLineSize - 1) & (-16 - v15);
                        if ( v77 )
                        {
                          v78 = v15 + v77;
                          v79 = (__int64)v77 >> 4;
                          *(_BYTE *)v78 = v79;
                          *(_BYTE *)(v78 + 2) = *(_BYTE *)(v15 + 2) - v79;
                          *(_BYTE *)(v78 + 1) = *(_BYTE *)(v15 + 1);
                          *(_BYTE *)(v78 + 3) = *(_BYTE *)(v15 + 3) | 4;
                          *(_DWORD *)(v78 + 4) = *(_DWORD *)(v15 + 4);
                          if ( (unsigned __int8)*(_WORD *)v78 > 1u )
                            *(_QWORD *)(v15 + 16) = ExpPoolQuotaCookie ^ v78;
                          v15 = v78;
                        }
                      }
                      result = (PVOID)(v15 + 16);
                      *(_QWORD *)(v15 + 16) = 0LL;
                      return result;
                    }
                  }
                  else if ( v19 )
                  {
                    _InterlockedCompareExchange((volatile signed __int32 *)(v22 + v25), v9, 0);
                  }
                  else
                  {
                    KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
                    if ( !*(_DWORD *)(v25 + PoolTrackTable) )
                    {
                      *(_DWORD *)(v25 + PoolTrackTable) = v9;
                      *(_DWORD *)(v22 + 40LL * v23) = v9;
                    }
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    __writecr8(LockHandle.OldIrql);
                    v20 = Node;
                    v24 = BugCheckParameter3;
                    v19 = v5 & 0x20;
                    v21 = v96;
                  }
                }
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v101, retaddr);
                goto LABEL_123;
              }
              _m_prefetchw(&v101);
              Next = (__int64)v101.LockQueue.Next;
              if ( !v101.LockQueue.Next )
              {
                if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)v101.LockQueue.Lock,
                                                     0LL,
                                                     (signed __int64)&v101) == &v101 )
                {
LABEL_123:
                  __writecr8(v101.OldIrql);
                  goto LABEL_116;
                }
                Next = KxWaitForLockChainValid((__int64 *)&v101);
              }
              v101.LockQueue.Next = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
              goto LABEL_123;
            }
            if ( v37 )
            {
              LOBYTE(v59) = 1;
              PsBoostThreadIo((__int64)KeGetCurrentThread(), v59);
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)v58);
            }
            else
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v101);
              __writecr8(v101.OldIrql);
            }
            v37 = v5 & 1;
            v36 += 2;
LABEL_69:
            v10 = 2LL;
          }
          while ( v36 != (ULONG_PTR *)(v8 + 4416) );
          PoolPages = MiAllocatePoolPages(v5 & 0x80000221, 0x1000uLL);
          v15 = PoolPages;
          if ( PoolPages )
          {
            if ( v5 < NonPagedPool )
            {
              memset((void *)(PoolPages + 16), 0, 16 * v12 - 16);
              *(_DWORD *)(v15 + 4) = v9;
            }
            v39 = BugCheckParameter3a;
            *(_DWORD *)v15 = 0;
            *(_BYTE *)(v15 + 1) = BugCheckParameter3a;
            *(_BYTE *)(v15 + 2) = v12;
            *(_BYTE *)(v15 + 3) = v5 & 0x6D | 2;
            v40 = v15 + 16LL * v12;
            BugCheckParameter3b = 256 - v12;
            *(_DWORD *)v40 = 0;
            *(_BYTE *)(v40 + 2) = -(char)v12;
            *(_BYTE *)v40 = v12;
            *(_BYTE *)(v40 + 1) = v39;
            _InterlockedIncrement64((volatile signed __int64 *)(v8 + 72));
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 88), 16 * v12);
            if ( *(_BYTE *)(v40 + 2) != 1 )
            {
              v41 = v102;
              v42 = (struct _FAST_MUTEX *)(v8 + 8);
              if ( v102 )
              {
                ExAcquireFastMutex(v42);
                PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
              }
              else
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v42, &v101);
              }
              v44 = (__int64 *)(v40 + 16);
              v45 = v8 + 16 * (BugCheckParameter3b - 1 + 20LL);
              v46 = *(__int64 ***)(v45 + 8);
              if ( *v46 != (__int64 *)v45 )
                __fastfail(3u);
              *v44 = v45;
              v44[1] = (__int64)v46;
              *v46 = v44;
              *(_QWORD *)(v45 + 8) = v44;
              if ( !v41 )
              {
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v101);
                __writecr8(v101.OldIrql);
                _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
                goto LABEL_21;
              }
              LOBYTE(v43) = 1;
              PsBoostThreadIo((__int64)KeGetCurrentThread(), v43);
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 8));
            }
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
            goto LABEL_21;
          }
          if ( ++v112 != 1 || (ExpPoolFlags & 0x100) == 0 )
            goto LABEL_222;
          ExDeferredFreePool(v8, 0LL);
          v35 = v105;
          v10 = 2LL;
        }
      }
    }
    else
    {
      if ( v12 <= 0x20 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = v12 - 1;
        if ( (v5 & 0x200) != 0 )
          v30 = v29 + 24;
        else
          v30 = v29 + 56;
        v13 = (_GENERAL_LOOKASIDE_POOL *)((char *)CurrentPrcb + 96 * v30);
        ++v13->TotalAllocates;
        v14 = RtlpInterlockedPopEntrySList(&v13->ListHead);
        if ( v14 )
          goto LABEL_19;
        v10 = 2LL;
      }
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        v31 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
        BugCheckParameter3a = v31;
        if ( (unsigned int)v31 >= ExpNumberOfNonPagedPools )
        {
          v31 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
          BugCheckParameter3a = ExpNumberOfNonPagedPools - 1;
        }
        v8 = ExpNonPagedPoolDescriptor[v31];
        if ( (v5 & 0x200) == 0 )
          v8 += 4416LL;
        goto LABEL_65;
      }
    }
    BugCheckParameter3a = 0;
    goto LABEL_65;
  }
  v83 = v5;
  if ( (v5 & 0x21) == 0x20 )
    v83 = v5 & 0xFFFFFFDF;
  SpecialPool = (void *)MmAllocateSpecialPool(NumberOfBytes, v9, v83, v10);
  v97 = SpecialPool;
  v85 = (unsigned __int64)SpecialPool;
  if ( !SpecialPool )
  {
    v10 = 2LL;
    goto LABEL_10;
  }
  if ( (v5 & 0x40) != 0 )
    NumberOfBytes -= 8LL;
  if ( v5 < NonPagedPool )
  {
    memset(SpecialPool, 0, NumberOfBytes);
    v85 = (unsigned __int64)v97;
  }
  if ( v9 == PoolHitTag )
    __debugbreak();
  v86 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v83, v9, v85, NumberOfBytes);
  if ( (v83 & 0x20) != 0 )
  {
    v88 = ExpSessionPoolTrackTable;
    v89 = ExpSessionPoolTrackTableMask;
    v87 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v86) = KeGetPcr()->Prcb.Number;
    v87 = PoolTrackTableSize;
    v88 = (__int64)*(&ExPoolTagTables + v86);
    v89 = PoolTrackTableMask;
  }
  Nodeb = (PRTL_BALANCED_NODE)v87;
  v113 = v88;
  v90 = v89 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
  v91 = v90;
  while ( 1 )
  {
    v92 = 40LL * v90;
    v93 = *(_DWORD *)(v92 + v88);
    if ( v93 == v9 )
      break;
    if ( v93 )
    {
LABEL_204:
      v90 = v89 & (v90 + 1);
      if ( v90 == v91 )
      {
        ExpInsertPoolTrackerExpansion(v9, NumberOfBytes, v83);
        goto LABEL_209;
      }
    }
    else
    {
      if ( (v83 & 0x20) != 0 )
        goto LABEL_198;
      v94 = *(_DWORD *)(v92 + PoolTrackTable);
      if ( v94 )
      {
        *(_DWORD *)(v92 + v88) = v94;
        v91 = v89 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
      }
      else
      {
        v91 = v89 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
LABEL_198:
        if ( v90 == v87 - 1 )
          goto LABEL_204;
        if ( (v83 & 0x20) != 0 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v92 + v88), v9, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v106);
          if ( !*(_DWORD *)(v92 + PoolTrackTable) )
          {
            *(_DWORD *)(v92 + PoolTrackTable) = v9;
            *(_DWORD *)(v92 + v113) = v9;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v106);
          __writecr8(v106.OldIrql);
          v87 = (__int64)Nodeb;
          v88 = v113;
          v91 = v89 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
        }
      }
    }
  }
  if ( (v83 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v92 + v88 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v92 + v88 + 32), NumberOfBytes);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v92 + v88 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v92 + v88 + 16), NumberOfBytes);
  }
LABEL_209:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return v97;
}

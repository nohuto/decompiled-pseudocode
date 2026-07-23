/*
 * XREFs of ExAllocatePoolWithTag @ 0x1402B3110
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004C74 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400051F8 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140005504 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x14000577C (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     StEtaStart @ 0x1400058C4 (StEtaStart.c)
 *     SmAlloc @ 0x1400064E8 (SmAlloc.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14000667C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ExGetSessionPoolTagInfo @ 0x140008A6C (ExGetSessionPoolTagInfo.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140009270 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KeAllocateXStateContext @ 0x14000A8E4 (KeAllocateXStateContext.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14000B20C (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetWorkingSetInfo @ 0x14000CC00 (MiGetWorkingSetInfo.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14000DEA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     FsRtlpWaitOnIrp @ 0x14000E0E8 (FsRtlpWaitOnIrp.c)
 *     PfSnTraceBufferAllocate @ 0x1400106D0 (PfSnTraceBufferAllocate.c)
 *     MiAllocateAccessLog @ 0x140011560 (MiAllocateAccessLog.c)
 *     PfSnGetFileInformation @ 0x140012BC0 (PfSnGetFileInformation.c)
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 *     FsRtlInitializeBaseMcbEx @ 0x140015030 (FsRtlInitializeBaseMcbEx.c)
 *     SePrivilegePolicyCheck @ 0x140015260 (SePrivilegePolicyCheck.c)
 *     SepCaptureTokenSecurityOperations @ 0x14001564C (SepCaptureTokenSecurityOperations.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140016F80 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     EmpEvaluateNodeLink @ 0x140017B40 (EmpEvaluateNodeLink.c)
 *     EmpEvaluateTargetRule @ 0x140018A60 (EmpEvaluateTargetRule.c)
 *     SepMandatorySubProcessToken @ 0x140019E94 (SepMandatorySubProcessToken.c)
 *     AuthzBasepMemAlloc @ 0x14001A9C8 (AuthzBasepMemAlloc.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcAllocateInitializeMbcb @ 0x14001EB10 (CcAllocateInitializeMbcb.c)
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140020534 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcAsyncCopyRead @ 0x140020890 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     CcWriteBehind @ 0x140022B24 (CcWriteBehind.c)
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePool_0 @ 0x140024EB4 (IopVerifierExAllocatePool_0.c)
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x140069F20 (SeCaptureObjectTypeList.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     SeSetLearningModeObjectInformation @ 0x140081830 (SeSetLearningModeObjectInformation.c)
 *     IopAllocateIrpPrivate @ 0x140082210 (IopAllocateIrpPrivate.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400867C0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140089720 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140089C14 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     PpmParkSteerInterrupts @ 0x14008FDD0 (PpmParkSteerInterrupts.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400AFF9C (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopSetWatchdog @ 0x1400B1A00 (PopSetWatchdog.c)
 *     KiIntSteerConnect @ 0x1400B32A0 (KiIntSteerConnect.c)
 *     PopCaptureReasonContext @ 0x1400B54B8 (PopCaptureReasonContext.c)
 *     MiCreateMdl @ 0x1400B5D3C (MiCreateMdl.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     MiInitializeMdlPages @ 0x1400CA600 (MiInitializeMdlPages.c)
 *     MiObtainMdlCharges @ 0x1400CBE04 (MiObtainMdlCharges.c)
 *     MiCombineWorkingSet @ 0x1400CF650 (MiCombineWorkingSet.c)
 *     EtwpAllocateFreeBuffers @ 0x1400E02E8 (EtwpAllocateFreeBuffers.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400E5B10 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400E6130 (RtlpUpcaseUnicodeStringPrivate.c)
 *     MiAllocateCombineProto @ 0x1400E6D7C (MiAllocateCombineProto.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiBuildMappedCluster @ 0x1400EE1F0 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiViewMayContainPage @ 0x1400F25DC (MiViewMayContainPage.c)
 *     MiExpandSystemCache @ 0x1400F52C8 (MiExpandSystemCache.c)
 *     CcAllocateInitializeBcb @ 0x1400F755C (CcAllocateInitializeBcb.c)
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400F97C4 (DbgUnicodeStringToAnsiString.c)
 *     VfAvlReserveNode @ 0x1400F9C0C (VfAvlReserveNode.c)
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400FB110 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PopFxQueryBiosDeviceName @ 0x1400FB654 (PopFxQueryBiosDeviceName.c)
 *     IoAcquireRemoveLockEx @ 0x1400FD8A0 (IoAcquireRemoveLockEx.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1400FEDA4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     MmProbeAndLockSelectedPages @ 0x140100140 (MmProbeAndLockSelectedPages.c)
 *     RtlExpandHashTable @ 0x1401019A0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140102000 (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x14010219C (RtlpAllocateSecondLevelDir.c)
 *     IopAllocateIrpExtension @ 0x14010744C (IopAllocateIrpExtension.c)
 *     PspInsertProperty @ 0x140107AF0 (PspInsertProperty.c)
 *     FsRtlCancelNotify @ 0x1401086F0 (FsRtlCancelNotify.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140110E60 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlTruncateBaseMcb @ 0x140111220 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x140111C5C (FsRtlAddEntry.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     SeLogAccessFailure @ 0x140113BC0 (SeLogAccessFailure.c)
 *     IoWMIWriteEvent @ 0x1401157E0 (IoWMIWriteEvent.c)
 *     IoMakeAssociatedIrpPriv @ 0x140117BC4 (IoMakeAssociatedIrpPriv.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     CcInitializeVolumeCacheMap @ 0x14011B48C (CcInitializeVolumeCacheMap.c)
 *     ExpExpandResourceOwnerTable @ 0x14011D5F0 (ExpExpandResourceOwnerTable.c)
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     MiAllocateModWriterEntry @ 0x14011F3F0 (MiAllocateModWriterEntry.c)
 *     WmipReceiveNotifications @ 0x14011FCA4 (WmipReceiveNotifications.c)
 *     MiCloneCaptureVadCommit @ 0x1401207B0 (MiCloneCaptureVadCommit.c)
 *     MiCreateCloneChain @ 0x1401210D8 (MiCreateCloneChain.c)
 *     CreateNewEventEntry @ 0x1401217E4 (CreateNewEventEntry.c)
 *     MmCreateMdl @ 0x140122030 (MmCreateMdl.c)
 *     MiExpandFlushMdl @ 0x140122B1C (MiExpandFlushMdl.c)
 *     IoSetCompletionRoutineEx @ 0x140122BB0 (IoSetCompletionRoutineEx.c)
 *     ExAllocatePoolEx @ 0x140127160 (ExAllocatePoolEx.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x140127B44 (PiDevCfgPushCopyKeyEntry.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1401282DC (FsRtlpOplockSendModernAppTermination.c)
 *     IopVerifierExAllocatePool_1 @ 0x140128874 (IopVerifierExAllocatePool_1.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140128E84 (SepAppendAceToTokenDefaultDacl.c)
 *     PfFbBufferListAllocateTemporary @ 0x14012AF24 (PfFbBufferListAllocateTemporary.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012B1B8 (RtlpAllowsLowBoxAccess.c)
 *     SepCaptureHandles @ 0x14012C48C (SepCaptureHandles.c)
 *     ExRegisterCallback @ 0x14012D810 (ExRegisterCallback.c)
 *     PopGetDope @ 0x14012E384 (PopGetDope.c)
 *     IoAllocateDriverObjectExtension @ 0x14012F340 (IoAllocateDriverObjectExtension.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14012F768 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14013044C (LdrUnloadAlternateResourceModuleEx.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     ExAllocatePool @ 0x140130DE0 (ExAllocatePool.c)
 *     IopAllocateErrorLogEntry @ 0x140130E6C (IopAllocateErrorLogEntry.c)
 *     SepExpandSingletonArrays @ 0x140131D74 (SepExpandSingletonArrays.c)
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     SepAdtDetermineInsertQueue @ 0x140133BF0 (SepAdtDetermineInsertQueue.c)
 *     SepAdtMarshallAuditRecord @ 0x140133C3C (SepAdtMarshallAuditRecord.c)
 *     ExAllocateTimerInternal2 @ 0x140133FB0 (ExAllocateTimerInternal2.c)
 *     BapdpProcessEtwEvents @ 0x1401341B8 (BapdpProcessEtwEvents.c)
 *     RtlInitializeBootStatDataCache @ 0x140134704 (RtlInitializeBootStatDataCache.c)
 *     MiGetHugePageToZero @ 0x140134BB0 (MiGetHugePageToZero.c)
 *     MiZeroNodePages @ 0x1401370F0 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x140137370 (MiCreateZeroThreadContext.c)
 *     MiDescribePageRun @ 0x14013756C (MiDescribePageRun.c)
 *     MiInitializeNumaRanges @ 0x1401379AC (MiInitializeNumaRanges.c)
 *     PpmParkRegisterParking @ 0x140137E1C (PpmParkRegisterParking.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14013E750 (BgpFwQueryBootGraphicsInformation.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     EmpQueueRuleUpdateState @ 0x140140C00 (EmpQueueRuleUpdateState.c)
 *     _MuiRegAllocArray @ 0x1401415DC (_MuiRegAllocArray.c)
 *     _SafeAllocBlob @ 0x140141648 (_SafeAllocBlob.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401416EC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401418D0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140141B50 (RtlpMuiRegLoadLicInformation.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     ExInitializeProcessor @ 0x1401462B8 (ExInitializeProcessor.c)
 *     PopFxCreateDeviceCommon @ 0x1401471FC (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x140147394 (PopFxDuplicateUniqueId.c)
 *     CcInitializePartition @ 0x140147624 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x140147B98 (CcInitializeAsyncRead.c)
 *     CcAllocateInitializeVacbArray @ 0x1401480DC (CcAllocateInitializeVacbArray.c)
 *     CcCreatePartition @ 0x140148170 (CcCreatePartition.c)
 *     IoRegisterPriorityCallback @ 0x140149860 (IoRegisterPriorityCallback.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14014AFA4 (ExpSaBinaryArrayInsert.c)
 *     ExAllocateAutoExpandPushLock @ 0x14014B850 (ExAllocateAutoExpandPushLock.c)
 *     AdtpBuildMultiSzStringListString @ 0x14014CAB8 (AdtpBuildMultiSzStringListString.c)
 *     PpmInstallNewIdleStates @ 0x14014CC90 (PpmInstallNewIdleStates.c)
 *     IopGetPhysicalMemoryBlock @ 0x14014FA60 (IopGetPhysicalMemoryBlock.c)
 *     SepInitProcessAuditSd @ 0x1401511F4 (SepInitProcessAuditSd.c)
 *     ExAllocateCacheAwarePushLock @ 0x140152F00 (ExAllocateCacheAwarePushLock.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x140153194 (EmpEvaluateUpdateRuleEvalState.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     ExpSaInitialize @ 0x140154D94 (ExpSaInitialize.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     FsFilterInit @ 0x140156CF4 (FsFilterInit.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401575A0 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MmCreatePartition @ 0x140158808 (MmCreatePartition.c)
 *     SepBuildCapPolicyTable @ 0x140159584 (SepBuildCapPolicyTable.c)
 *     PopReadRegKeyValue @ 0x140159924 (PopReadRegKeyValue.c)
 *     VslpLockPagesForTransfer @ 0x140159D24 (VslpLockPagesForTransfer.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140159EF4 (MiInitializeWorkingSetManagerParameters.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x14015A170 (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     SecureDump_ReadRegistry @ 0x14015A408 (SecureDump_ReadRegistry.c)
 *     MiZeroBootLargePages @ 0x14015A634 (MiZeroBootLargePages.c)
 *     SepBuildDefaultCape @ 0x14015BD78 (SepBuildDefaultCape.c)
 *     IopInitDumpCapsuleSupport @ 0x14015BE40 (IopInitDumpCapsuleSupport.c)
 *     CcRegisterExternalCache @ 0x14015C840 (CcRegisterExternalCache.c)
 *     KsepPoolAllocateNonPaged @ 0x14015CCD8 (KsepPoolAllocateNonPaged.c)
 *     KiSwInterruptDispatch @ 0x1401694C0 (KiSwInterruptDispatch.c)
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     CcDeferWrite @ 0x1401E08A0 (CcDeferWrite.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 *     CmLogMcUpdateStatus @ 0x1401E3D98 (CmLogMcUpdateStatus.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E46A4 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1401E68E4 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x1401E7920 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1401E79B0 (FsRtlAllocatePoolWithTag.c)
 *     FsFilterAllocateCompletionStack @ 0x1401E855C (FsFilterAllocateCompletionStack.c)
 *     FsRtlInsertPerFileContext @ 0x1401E88C0 (FsRtlInsertPerFileContext.c)
 *     FsRtlpPostStackOverflow @ 0x1401E95A4 (FsRtlpPostStackOverflow.c)
 *     HvlpInitializeSvmIommuSupport @ 0x1401EED80 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpInitializeHvCrashdump @ 0x1401F0038 (HvlpInitializeHvCrashdump.c)
 *     VslAllocatePool @ 0x1401F19C0 (VslAllocatePool.c)
 *     VslGetEtwDebugId @ 0x1401F1E98 (VslGetEtwDebugId.c)
 *     BgkDisplayString @ 0x1401F3FB0 (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x1401F9540 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F9810 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x1401FA004 (IopGetSetStreamIdentifier.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401FBB70 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401FC434 (IopVerifierExAllocatePool_3.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401FC474 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401FCA14 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401FCC48 (IopVerifierExAllocatePool_4.c)
 *     PipCreateNewDependencyEdge @ 0x1401FDB90 (PipCreateNewDependencyEdge.c)
 *     IoRequestDeviceEjectEx @ 0x1401FDFB0 (IoRequestDeviceEjectEx.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1401FF600 (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401FF670 (PiDevCfgQueryResolveValue.c)
 *     KdRegisterPowerHandler @ 0x140201410 (KdRegisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x140201CA4 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x140203814 (KeProcessorProfileControlArea.c)
 *     KeRegisterNmiCallback @ 0x1402039F0 (KeRegisterNmiCallback.c)
 *     KeStartProfile @ 0x14020834C (KeStartProfile.c)
 *     KiIntRedirectConnnect @ 0x14020E8A0 (KiIntRedirectConnnect.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140213338 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCreateKernelStackNode @ 0x1402196D0 (MiCreateKernelStackNode.c)
 *     MiPfIssueCoalescedSupport @ 0x14021BD28 (MiPfIssueCoalescedSupport.c)
 *     MmGetEnclaveModuleList @ 0x140229BA0 (MmGetEnclaveModuleList.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14022AC60 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 *     MiInsertPteTracker @ 0x1402345EC (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x140234AAC (MiGetUltraMdlContext.c)
 *     MiAddRangeToPartitionTree @ 0x140236734 (MiAddRangeToPartitionTree.c)
 *     MmEnumerateBadPages @ 0x140239094 (MmEnumerateBadPages.c)
 *     PfFbBufferListAllocate @ 0x140239C30 (PfFbBufferListAllocate.c)
 *     PpmQueryPlatformStateResidency @ 0x14023BEBC (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x14023CA00 (PpmUpdateIdleVeto.c)
 *     PopFxRegisterPluginEx @ 0x14023EB10 (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x140240BF8 (PpmSetSimulatedLoad.c)
 *     PopGetCurrentWakeInfos @ 0x140241390 (PopGetCurrentWakeInfos.c)
 *     PopUpdateWakeSource @ 0x1402415D8 (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140247EB8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmAllocWmiEvent @ 0x140249934 (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x140249B10 (PpmWmiIdleAccountingProcedure.c)
 *     PopRecordPoBlackboxInformation @ 0x140249DD0 (PopRecordPoBlackboxInformation.c)
 *     PpmEventTracePreVetoAccounting @ 0x14024B918 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14024BAF0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PspReadDfssConfigurationValues @ 0x14024D7C0 (PspReadDfssConfigurationValues.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     PspIumAllocatePartitionState @ 0x14024F628 (PspIumAllocatePartitionState.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x14024FE58 (PsGetProcessEnclaveModuleInfo.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402509F0 (DbgpInsertDebugPrintCallback.c)
 *     RtlpTraceDatabaseAllocate @ 0x1402569DC (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x14025BFCC (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x14025E14C (SepCopyObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x14025E74C (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14025E908 (SepVerifyDesktopAppxPackageName.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14025EBF4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x14025F674 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025F760 (SepValidateAndCopyGlobalEntry.c)
 *     SepFlattenAcl @ 0x14025F87C (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x14025F9F8 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x14025FDB4 (SepGetSidValuesDump.c)
 *     SepGetTokenSessionMapEntry @ 0x14025FE7C (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x14025FFC0 (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x140260110 (SepRmCapPoolExpand.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140262B3C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x140264790 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x140265214 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402675D8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14026784C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140267B4C (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268CE8 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268DA4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140269500 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14026B260 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026C364 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmArrayGrow @ 0x140271A84 (SmArrayGrow.c)
 *     SmBinaryArrayGrow @ 0x140271B64 (SmBinaryArrayGrow.c)
 *     SmHpBufferAlloc @ 0x140271CC0 (SmHpBufferAlloc.c)
 *     SmFpAllocate @ 0x140272DD0 (SmFpAllocate.c)
 *     SmFpPreAllocate @ 0x140272FBC (SmFpPreAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1402731C0 (SmKmAllocateMdlForLock.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140275660 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140275770 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140275EBC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x140276010 (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x140276C40 (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantInsertMdlInfo @ 0x1402770D8 (MdlInvariantInsertMdlInfo.c)
 *     VmpPrefetchVirtualAddresses @ 0x14027936C (VmpPrefetchVirtualAddresses.c)
 *     WdipAccessCheck @ 0x140279B0C (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x140279E44 (WmiVerifierCopyEvent.c)
 *     WmipBuildTraceDeviceList @ 0x140279F5C (WmipBuildTraceDeviceList.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14027CBE8 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x14027E494 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x14027F384 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x14027F714 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpApplyEventNameFilter @ 0x14028030C (EtwpApplyEventNameFilter.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140281494 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpInitializeCompression @ 0x140281A08 (EtwpInitializeCompression.c)
 *     NtDrawText @ 0x140283894 (NtDrawText.c)
 *     ExRegisterBootDevice @ 0x140284090 (ExRegisterBootDevice.c)
 *     ExCopyWakeTimerInfo @ 0x140286420 (ExCopyWakeTimerInfo.c)
 *     ExShareAddressSpaceWithDevice @ 0x1402874A0 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x140287BA8 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x140287DE8 (ExpPrepareNewSvmDevice.c)
 *     WheapReportPersistedErrorRecord @ 0x140288F54 (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x140289414 (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1402898F4 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x14028AB58 (WheapSqmCollectWheaOscTelemetry.c)
 *     AsiAddDataToSchema @ 0x14028B238 (AsiAddDataToSchema.c)
 *     sub_14028BC04 @ 0x14028BC04 (sub_14028BC04.c)
 *     sub_14028C410 @ 0x14028C410 (sub_14028C410.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14028EA0C (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14028EEE0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14028F964 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1402901A4 (BiLogFileOwnerProcess.c)
 *     _SafeReallocBlob @ 0x140296180 (_SafeReallocBlob.c)
 *     BapdRecordFirmwareBootStats @ 0x140424BFC (BapdRecordFirmwareBootStats.c)
 *     KiInitializeProcessor @ 0x140426A8C (KiInitializeProcessor.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1404291BC (PfSnAllocateEnablePrefetcherTimer.c)
 *     PnprInitiateReplaceOperation @ 0x14042C2C0 (PnprInitiateReplaceOperation.c)
 *     IopCaptureObjectName @ 0x14042DE30 (IopCaptureObjectName.c)
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x14042EDB4 (MiZeroAllPageFiles.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1404311D8 (PfpStartLoggingHardFaultEvents.c)
 *     PopGetBitlockerKeyLocation @ 0x140431554 (PopGetBitlockerKeyLocation.c)
 *     PopNewWakeInfo @ 0x140431C7C (PopNewWakeInfo.c)
 *     PopCloneRange @ 0x14043264C (PopCloneRange.c)
 *     PopGetHwConfigurationSignature @ 0x140433310 (PopGetHwConfigurationSignature.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14043923C (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x14043AB44 (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     WheaInitializeProcessor @ 0x14043B3EC (WheaInitializeProcessor.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14043DC30 (PfpCopyUserPfnPrioRequest.c)
 *     PfpRpCHashGrow @ 0x14043DE68 (PfpRpCHashGrow.c)
 *     PfSetSuperfetchInformation @ 0x14043E10C (PfSetSuperfetchInformation.c)
 *     PfpRpControlRequestCopy @ 0x14043E4D4 (PfpRpControlRequestCopy.c)
 *     PfpRpCHashDeleteEntries @ 0x14043E6DC (PfpRpCHashDeleteEntries.c)
 *     PfpPrefetchRequest @ 0x14043F800 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x14043FA98 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x14043FDE4 (PfpVolumeOpenAndVerify.c)
 *     PfSnAsyncPrefetchWorker @ 0x140440810 (PfSnAsyncPrefetchWorker.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404412FC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPopulateReadList @ 0x140442210 (PfSnPopulateReadList.c)
 *     PfpFileBuildReadList @ 0x1404434C8 (PfpFileBuildReadList.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140443A98 (PfSnPreallocatePrefetchHeader.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     MiInSwapStore @ 0x1404443BC (MiInSwapStore.c)
 *     IoDiskIoAttributionAllocate @ 0x140445A40 (IoDiskIoAttributionAllocate.c)
 *     MiGetCcAccessLog @ 0x140446910 (MiGetCcAccessLog.c)
 *     ExGetPoolTagInfo @ 0x140446F2C (ExGetPoolTagInfo.c)
 *     PfSnArrayGrow @ 0x1404471B4 (PfSnArrayGrow.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140447D78 (PiDqGetRelativeObjectRegPath.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1404483F0 (DrvDbGetObjectSubKeyCallback.c)
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1404490D4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PoDiagCaptureUsermodeStack @ 0x140449580 (PoDiagCaptureUsermodeStack.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14044B0D0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14044C6E4 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     PiSwUpdateArrayProperties @ 0x14044D9AC (PiSwUpdateArrayProperties.c)
 *     MiCreateRotateView @ 0x14044DE28 (MiCreateRotateView.c)
 *     PiControlGetDeviceStack @ 0x14044DE98 (PiControlGetDeviceStack.c)
 *     PipFindDeviceOverrideEntry @ 0x14044E8AC (PipFindDeviceOverrideEntry.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14044F7E0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14044F9F8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14044FB54 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14045005C (CmpUndoDeleteKeyForTrans.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x140450944 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PopDiagTraceThermalRequest @ 0x1404518D8 (PopDiagTraceThermalRequest.c)
 *     PopLoggingInformation @ 0x140451CD0 (PopLoggingInformation.c)
 *     CmpClearKeyAccessBits @ 0x14045205C (CmpClearKeyAccessBits.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1404522D8 (PiDevCfgConvertPropertyFromValue.c)
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140452B80 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PfSnPrefetchScenario @ 0x140452E48 (PfSnPrefetchScenario.c)
 *     PfSnScenarioAlloc @ 0x140453130 (PfSnScenarioAlloc.c)
 *     PfSnBeginTrace @ 0x140453AA8 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x140453D1C (PfSnGetPrefetchInstructions.c)
 *     PfSnBuildDumpFromTrace @ 0x140454C80 (PfSnBuildDumpFromTrace.c)
 *     PfpRpFileKeyUpdate @ 0x140456360 (PfpRpFileKeyUpdate.c)
 *     PfTCreateTraceDump @ 0x140456970 (PfTCreateTraceDump.c)
 *     PopEtProcessSnapshotCreate @ 0x140457570 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1404582E4 (PopEtAggregateGet.c)
 *     PopEtInternerAllocate @ 0x140459760 (PopEtInternerAllocate.c)
 *     PopEtBucketsAllocate @ 0x1404599E8 (PopEtBucketsAllocate.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SeCaptureAcl @ 0x14045C3BC (SeCaptureAcl.c)
 *     SepCreateClaimAttributes @ 0x14045CE28 (SepCreateClaimAttributes.c)
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 *     MiAllocateVad @ 0x14045ED28 (MiAllocateVad.c)
 *     ExpAllocateHandleTable @ 0x14045FF04 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404608E8 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcAddHandleTableEntry @ 0x140462348 (AlpcAddHandleTableEntry.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x14046B9E8 (SepProbeAndCaptureString_U.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14046C6E4 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14046C82C (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x14046D098 (SepCaptureInt64Array.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046D188 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046D7AC (NtOpenObjectAuditAlarm.c)
 *     CmpRecordUnloadEventForHive @ 0x14046EDD4 (CmpRecordUnloadEventForHive.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     MiConstructLoaderEntry @ 0x140471244 (MiConstructLoaderEntry.c)
 *     MiAllocateFixupVad @ 0x140471D10 (MiAllocateFixupVad.c)
 *     CmpMarkIndexDirty @ 0x140472FC8 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140473308 (CmpRemoveSubKeyFromList.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     CmpAllocate @ 0x14047D780 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x14047D7E4 (CmpClaimGlobalQuota.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     SepCaptureUnicodeStringArray @ 0x140482E60 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140483170 (SeCaptureUnicodeStringStructures.c)
 *     WmipSecurityMethod @ 0x140483DC0 (WmipSecurityMethod.c)
 *     IopGetLegacyVetoListDrivers @ 0x140483F0C (IopGetLegacyVetoListDrivers.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x140484F30 (ObpGetObjectSecurity.c)
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140486964 (EtwpGetGuidSecurityDescriptor.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepSetTokenCapabilities @ 0x1404888F8 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140488A68 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140488B20 (SeCaptureSidAndAttributesArray.c)
 *     RtlpAllocateAtom @ 0x140489004 (RtlpAllocateAtom.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404893EC (ObpCaptureBoundaryDescriptor.c)
 *     EtwpAllocGuidEntry @ 0x140489654 (EtwpAllocGuidEntry.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 *     IoQueryFileDosDeviceName @ 0x14048E280 (IoQueryFileDosDeviceName.c)
 *     EtwpSetProviderTraitsUm @ 0x14048E6B0 (EtwpSetProviderTraitsUm.c)
 *     IopQueryNameInternal @ 0x14048F970 (IopQueryNameInternal.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     SepDuplicateSid @ 0x14049C980 (SepDuplicateSid.c)
 *     AlpcpAllocateBlob @ 0x1404A0EE0 (AlpcpAllocateBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404A17F0 (AlpcpCaptureMessageDataSafe.c)
 *     NtRemoveIoCompletionEx @ 0x1404A2FA0 (NtRemoveIoCompletionEx.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     ObpAllocateObject @ 0x1404AA4C0 (ObpAllocateObject.c)
 *     ObpCaptureObjectName @ 0x1404ACFE0 (ObpCaptureObjectName.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404BB8F0 (SepCreateImpersonationTokenDacl.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1404BEE60 (RtlpCombineAcls.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x1404D3274 (MiAddSecureEntry.c)
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     EtwpQueryProcessCommandLine @ 0x1404DC09C (EtwpQueryProcessCommandLine.c)
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1404DC7E4 (MiSnapThunk.c)
 *     CmpInitHiveFromFile @ 0x1404DE1EC (CmpInitHiveFromFile.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     CmpDoFileWrite @ 0x1404E0284 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404E1304 (CmpQueryFileSecurityDescriptor.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x1404E4A54 (CmpInitializeKcbCache.c)
 *     CmpCanGrowHive @ 0x1404E5930 (CmpCanGrowHive.c)
 *     HvpMapHiveImageFromFile @ 0x1404E5A1C (HvpMapHiveImageFromFile.c)
 *     PopUnicodeStringDeepCopy @ 0x1404E6130 (PopUnicodeStringDeepCopy.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404E63B0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     PopLogDisabledSleepReason @ 0x1404E8738 (PopLogDisabledSleepReason.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x1404EB3F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x1404EC474 (IopConnectMessageBasedInterrupt.c)
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 *     EtwpCaptureString @ 0x1404EDA2C (EtwpCaptureString.c)
 *     EtwpUpdateFilterData @ 0x1404EEF40 (EtwpUpdateFilterData.c)
 *     EtwpQueueNotification @ 0x1404EF84C (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x1404EFA48 (EtwpAddDataSource.c)
 *     EtwpAllocDataBlock @ 0x1404EFAC4 (EtwpAllocDataBlock.c)
 *     EtwpRegisterProvider @ 0x1404F0B1C (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x1404F0DD8 (EtwpAddKmRegEntry.c)
 *     EtwpTrackDebugIdForSession @ 0x1404F10E8 (EtwpTrackDebugIdForSession.c)
 *     EtwpFindDebugId @ 0x1404F1358 (EtwpFindDebugId.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404F1EC8 (PopDiagTracePowerRequestCreate.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404F2400 (EtwpCrimsonProvEnableCallback.c)
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x1404F3344 (MUIInitializeResourceLock.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1404F34F0 (SPCallServerHandleUpdatePolicies.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1404F5E9C (SepScheduleImageVerificationCallbacks.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     RtlCreateRvaList @ 0x1404F6AE4 (RtlCreateRvaList.c)
 *     MiCaptureImageCfgContext @ 0x1404F6C80 (MiCaptureImageCfgContext.c)
 *     MiCompressRelocations @ 0x1404F7C90 (MiCompressRelocations.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiCreateDataFileMap @ 0x1404F9DFC (MiCreateDataFileMap.c)
 *     MiBuildImageControlArea @ 0x1404FA468 (MiBuildImageControlArea.c)
 *     ExpWnfWriteStateData @ 0x1404FF464 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14050080C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140506768 (AlpcpCaptureHandleAttributeInternal.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     MiRevertRelocatedImagePfn @ 0x140509A84 (MiRevertRelocatedImagePfn.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14050A0DC (PspAddSchedulingGroupToJobChain.c)
 *     PspAllocateRateControl @ 0x14050A2A8 (PspAllocateRateControl.c)
 *     CmpQueryNameString @ 0x14050A728 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14050C860 (MmLinkJobProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryRateControlHistory @ 0x14051041C (PspQueryRateControlHistory.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     HvStoreModifiedData @ 0x1405138AC (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x140513CAC (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     PiGetDefaultMessageString @ 0x140517098 (PiGetDefaultMessageString.c)
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiDmCacheDataEncode @ 0x140518820 (PiDmCacheDataEncode.c)
 *     PnpGetDeviceLocationStrings @ 0x140518FFC (PnpGetDeviceLocationStrings.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14051B03C (PnpCallDriverQueryServiceHelper.c)
 *     PnpConcatPWSTR @ 0x14051B1D4 (PnpConcatPWSTR.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14051B940 (PiPnpRtlServiceFilterCallback.c)
 *     WmipCachePtrs @ 0x14051C200 (WmipCachePtrs.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14051C3FC (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14051CD1C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x14051D800 (_CmOpenCommonClassRegKeyWorker.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     IoWMIQuerySingleInstance @ 0x14051E700 (IoWMIQuerySingleInstance.c)
 *     ObpParseSymbolicLinkEx @ 0x14051E840 (ObpParseSymbolicLinkEx.c)
 *     WmipCountedToSz @ 0x14051F3A0 (WmipCountedToSz.c)
 *     WmipAddProviderIdToPIList @ 0x14051F6C0 (WmipAddProviderIdToPIList.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x140520BA4 (RtlpAllocDeallocQueryBuffer.c)
 *     WmipSDRegistryQueryRoutine @ 0x140520C30 (WmipSDRegistryQueryRoutine.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _PnpRegQueryValueIndirect @ 0x140522A20 (_PnpRegQueryValueIndirect.c)
 *     PiPnpRtlObjectEventCreate @ 0x140522FC4 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405232C0 (PiPnpRtlObjectActionCallback.c)
 *     PiDqPnPGetObjectProperty @ 0x140524D78 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x140524F08 (PnpAllocatePWSTR.c)
 *     PnpGetObjectProperty @ 0x14052531C (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140525460 (PiCMGetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x140526810 (PiCMGetRegistryProperty.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140526D90 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetSetDeviceStatus @ 0x140526EE0 (PiControlGetSetDeviceStatus.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140527330 (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpUnicodeStringToWstr @ 0x140527F48 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x140528FA0 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     PiDmObjectProcessPropertyChange @ 0x140528FC4 (PiDmObjectProcessPropertyChange.c)
 *     PiDqQueryEvaluateFilter @ 0x14052969C (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataCreate @ 0x14052DF68 (PiDqActionDataCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14052E168 (PiDqActionDataGetRequestedProperties.c)
 *     PiCMGetObjectList @ 0x140530BE0 (PiCMGetObjectList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1405319B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14053282C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140532AB0 (EtwpRealtimeCreateLogfile.c)
 *     _RegRtlCreateTreeTransacted @ 0x140533308 (_RegRtlCreateTreeTransacted.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     NtQueryLicenseValue @ 0x140537C90 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x140537F50 (ExQueryLicenseValueInternal.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14053A0EC (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14053A1CC (SepAdtTokenRightAdjusted.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14053B130 (FsRtlAllocateExtraCreateParameter.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 *     MiObtainSectionForDriver @ 0x140543848 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x1405439F8 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     PiUpdateDriverDBCache @ 0x140544B48 (PiUpdateDriverDBCache.c)
 *     WmipRegisterOrUpdateDS @ 0x140544FA8 (WmipRegisterOrUpdateDS.c)
 *     WmipBuildInstanceSet @ 0x1405455F8 (WmipBuildInstanceSet.c)
 *     WmipAllocGuidEntry @ 0x140545D68 (WmipAllocGuidEntry.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     PiUEventInitClientRegistrationContext @ 0x140548A48 (PiUEventInitClientRegistrationContext.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14054A09C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14054A188 (IopCreateSecurityDescriptorPerType.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14054B05C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14054BDE4 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryCreate @ 0x14054C834 (PiDqQueryCreate.c)
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
 *     PiUEventNotifyClient @ 0x14054D5CC (PiUEventNotifyClient.c)
 *     PnpInsertEventInQueue @ 0x14054DDBC (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x14054DF20 (PnpCreateDeviceEventEntry.c)
 *     ExpHwidProcessDevice @ 0x14054EC80 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14054EDB4 (ExpHwidAppendDeviceInfoBlock.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140550AC4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405520B8 (PiCMGetRelatedDeviceInstance.c)
 *     PipAllocateDeviceNode @ 0x140553840 (PipAllocateDeviceNode.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1405539C0 (PnpDeviceCompletionRequestCreate.c)
 *     PnpProcessAssignResources @ 0x140553D98 (PnpProcessAssignResources.c)
 *     RawInitializeVcb @ 0x14055456C (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140554740 (ExAllocateCacheAwareRundownProtection.c)
 *     PopFxTraceDeviceRegistration @ 0x140554D94 (PopFxTraceDeviceRegistration.c)
 *     PiDeviceRegistration @ 0x1405554E4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140555688 (PpForEachDeviceInstanceDriver.c)
 *     PiProcessDriverInstance @ 0x140555A00 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x140555C60 (PiFindDevInstMatch.c)
 *     PiDeferSetInterfaceState @ 0x140555FF8 (PiDeferSetInterfaceState.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1405565F0 (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x140556754 (IopAllocateUnicodeString.c)
 *     IoGetDeviceProperty @ 0x140556EB0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1405573EC (PiGetDeviceRegProperty.c)
 *     IopQueryDeviceResources @ 0x140557B18 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140557EA8 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpReadDeviceConfiguration @ 0x140558428 (PnpReadDeviceConfiguration.c)
 *     PnpBuildCmResourceList @ 0x140558FE8 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x140559470 (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x1405596CC (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x140559C78 (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x14055A234 (IopQueryResourceHandlerInterface.c)
 *     ArbpBuildAllocationStack @ 0x14055AE34 (ArbpBuildAllocationStack.c)
 *     PnpLookupArbitersNewResources @ 0x14055B344 (PnpLookupArbitersNewResources.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14055B814 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpAllocateCriticalMemory @ 0x14055D8C8 (PnpAllocateCriticalMemory.c)
 *     PnpUnloadAttachedDriver @ 0x14055DBD0 (PnpUnloadAttachedDriver.c)
 *     PiQueryPowerRelations @ 0x14055EFD0 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14055F3B0 (PiQueryPowerDependencyRelations.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x14055F590 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x14055F650 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14055F790 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x14055FC80 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405607E0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140560B00 (IoVolumeDeviceToDosName.c)
 *     sub_140560F84 @ 0x140560F84 (sub_140560F84.c)
 *     SepSetTokenCachedHandles @ 0x140563B44 (SepSetTokenCachedHandles.c)
 *     SepGetLowBoxNumberEntry @ 0x14056403C (SepGetLowBoxNumberEntry.c)
 *     SepQueryNameString @ 0x140564610 (SepQueryNameString.c)
 *     SepSetTokenPackage @ 0x1405646C8 (SepSetTokenPackage.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14056477C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     FsRtlFindInTunnelCache @ 0x140565C10 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140565D60 (FsRtlAddToTunnelCache.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140566CD0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140567860 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyInitializeSync @ 0x140567C60 (FsRtlNotifyInitializeSync.c)
 *     WmipSendGuidUpdateNotifications @ 0x140567D40 (WmipSendGuidUpdateNotifications.c)
 *     WmipQueueNotification @ 0x140568460 (WmipQueueNotification.c)
 *     CmpTransAllocateTrans @ 0x140568FD0 (CmpTransAllocateTrans.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x14056A9D8 (MiCreateVadEventBitmap.c)
 *     ObpInsertHandleCount @ 0x14056B608 (ObpInsertHandleCount.c)
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 *     PnpCheckDeviceIdsChanged @ 0x14056CD1C (PnpCheckDeviceIdsChanged.c)
 *     SeAppendPrivileges @ 0x14056D5D0 (SeAppendPrivileges.c)
 *     WmipGetRegistryHideMachine @ 0x140570EF8 (WmipGetRegistryHideMachine.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140571004 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     AlpcpCaptureMessageData @ 0x140571974 (AlpcpCaptureMessageData.c)
 *     ExHandleSPCall2 @ 0x14057291C (ExHandleSPCall2.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     CcCreateVacbArray @ 0x140574E98 (CcCreateVacbArray.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140575470 (MmGetPhysicalMemoryRangesEx.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140576C08 (PipGetRegistrySecurityWithFallback.c)
 *     CmpCheckWrpKeyAccess @ 0x140576EB0 (CmpCheckWrpKeyAccess.c)
 *     FsRtlpAllocateOplock @ 0x140577138 (FsRtlpAllocateOplock.c)
 *     ObpInsertDirectoryEntry @ 0x140577208 (ObpInsertDirectoryEntry.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140577AFC (EtwpRealtimeNotifyConsumers.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     EtwpCreateNtFileName @ 0x14057859C (EtwpCreateNtFileName.c)
 *     MiBuildNewCloneDescriptor @ 0x14057AB18 (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 *     ObpCallPreOperationCallbacks @ 0x14057B2D8 (ObpCallPreOperationCallbacks.c)
 *     PspInitializeFullProcessImageName @ 0x14057B454 (PspInitializeFullProcessImageName.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14057D3A8 (PsGetAllocatedFullProcessImageName.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057DBD8 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14057DDF8 (SiTranslateSymbolicLink.c)
 *     SiGetRegistryValue @ 0x14057E148 (SiGetRegistryValue.c)
 *     AlpcpAllocateMessageFunction @ 0x14057E560 (AlpcpAllocateMessageFunction.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14057E7E4 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 *     SepAssemblePrivileges @ 0x14057F150 (SepAssemblePrivileges.c)
 *     WmipQueueRegWork @ 0x14057F56C (WmipQueueRegWork.c)
 *     ObCreateSymbolicLink @ 0x14058005C (ObCreateSymbolicLink.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x140580A98 (PiDqQueryActionQueueEntryCreate.c)
 *     ConstraintEval @ 0x140580B24 (ConstraintEval.c)
 *     PsSetProcessWin32Process @ 0x140580E50 (PsSetProcessWin32Process.c)
 *     CmpDoWritethroughReparse @ 0x140581B10 (CmpDoWritethroughReparse.c)
 *     ExpWnfCreateProcessContext @ 0x14058202C (ExpWnfCreateProcessContext.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1405823DC (PiDqObjectActionQueueEntryCreate.c)
 *     PspAssignProcessQuotaBlock @ 0x140582A58 (PspAssignProcessQuotaBlock.c)
 *     MmAllocateMappingAddress @ 0x140583480 (MmAllocateMappingAddress.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14058445C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiNormalizeDeviceText @ 0x1405854E0 (PiNormalizeDeviceText.c)
 *     IoRegisterPlugPlayNotification @ 0x140585FB0 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1405862C0 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140586388 (PnpInitializeNotifyEntry.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140586694 (IopDeviceObjectFromSymbolicName.c)
 *     PiCMGetDeviceIdList @ 0x140586D80 (PiCMGetDeviceIdList.c)
 *     _RegRtlEnumValue @ 0x140588538 (_RegRtlEnumValue.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140588924 (PiBuildDeviceNodeInstancePath.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405896A4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140589748 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgInitResolveContext @ 0x140589A68 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDqSerializationAlloc @ 0x14058B1F0 (PiDqSerializationAlloc.c)
 *     SepUpdateLogonSessionTrack @ 0x14058B2E4 (SepUpdateLogonSessionTrack.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     SPCallServerHandleIsAppLicensed @ 0x14058B7CC (SPCallServerHandleIsAppLicensed.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     SepExpandDynamic @ 0x14058D3BC (SepExpandDynamic.c)
 *     SPCallServerHandleClepKdf @ 0x14058D7AC (SPCallServerHandleClepKdf.c)
 *     PnpBusTypeGuidGetIndex @ 0x14058E918 (PnpBusTypeGuidGetIndex.c)
 *     PiIommuAllocateExtension @ 0x14058F934 (PiIommuAllocateExtension.c)
 *     PipIommuRetrieveDevicePath @ 0x14058FA04 (PipIommuRetrieveDevicePath.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14058FF54 (PiPnpRtlGetFilteredDeviceList.c)
 *     ExpCheckPortableOperatingSystem @ 0x140590B7C (ExpCheckPortableOperatingSystem.c)
 *     MiAllocateImportList @ 0x1405921C0 (MiAllocateImportList.c)
 *     AlpcpAllocateBuffer @ 0x140592350 (AlpcpAllocateBuffer.c)
 *     PipGenerateContainerID @ 0x140593694 (PipGenerateContainerID.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405942D4 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     PiDqAllocateGenericTableEntry @ 0x140596B80 (PiDqAllocateGenericTableEntry.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140596BA4 (PiUEventQueueBroadcastEventEntry.c)
 *     PiQueryRemovableDeviceOverride @ 0x140598050 (PiQueryRemovableDeviceOverride.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x140598CEC (SPCallServerHandleAuthenticateCaller.c)
 *     MIDL_user_allocate @ 0x140599260 (MIDL_user_allocate.c)
 *     ExpWnfAllocateScopeInstance @ 0x140599640 (ExpWnfAllocateScopeInstance.c)
 *     PopBlackBoxUpdate @ 0x140599AD8 (PopBlackBoxUpdate.c)
 *     IopGetInterruptConnectionData @ 0x14059A6A4 (IopGetInterruptConnectionData.c)
 *     PnpAllocateGenericTableEntry @ 0x14059AA00 (PnpAllocateGenericTableEntry.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 *     MiCreateFixupRecord @ 0x14059AF70 (MiCreateFixupRecord.c)
 *     PopAnsiStringToUnicodeString @ 0x14059B0A8 (PopAnsiStringToUnicodeString.c)
 *     ExpGenuinePolicyPostProcess @ 0x14059B6E0 (ExpGenuinePolicyPostProcess.c)
 *     ExpWnfPopulateStateData @ 0x14059CAC8 (ExpWnfPopulateStateData.c)
 *     IopCreateVpb @ 0x14059CC3C (IopCreateVpb.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x14059CF4C (ExpHwidEnsurePropertyBufferLength.c)
 *     MiRememberUnloadedDriver @ 0x14059D0A4 (MiRememberUnloadedDriver.c)
 *     PnpSetInterruptInformation @ 0x14059D3B8 (PnpSetInterruptInformation.c)
 *     PnpDisableDeviceInterfaces @ 0x14059DA44 (PnpDisableDeviceInterfaces.c)
 *     PopPowerRequestAllocate @ 0x14059DCD0 (PopPowerRequestAllocate.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x14059DDC0 (ExpHwidBiosIfGetFirmwareTable.c)
 *     ExpWnfRegisterPermanentName @ 0x14059E368 (ExpWnfRegisterPermanentName.c)
 *     EtwpGenerateFileName @ 0x14059E648 (EtwpGenerateFileName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     PopAvlAllocatePowerRequestStats @ 0x14059E970 (PopAvlAllocatePowerRequestStats.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1405A0790 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405A0C10 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x1405A4610 (PipHardwareConfigActivateService.c)
 *     PiDevCfgCopyObjectProperties @ 0x1405A47EC (PiDevCfgCopyObjectProperties.c)
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405A55BC (CmpCommitSetValueKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x1405A5E80 (CmpCopySyncTree2.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405A6C70 (CmpCommitDeleteValueKeyUoW.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     SepCreateLogonSessionTrack @ 0x1405A784C (SepCreateLogonSessionTrack.c)
 *     SepInformLsaOfDeletedLogon @ 0x1405A7BCC (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1405A7F38 (SepInformFileSystemsOfDeletedLogon.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405A7FC0 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x1405A8050 (SepRmFetchGlobalSacl.c)
 *     EtwpEnableKeyProviders @ 0x1405A8170 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405A8348 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpEnableTrace @ 0x1405A88D0 (EtwpEnableTrace.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405A8A70 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpInitializeAutoLoggers @ 0x1405A8E4C (EtwpInitializeAutoLoggers.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 *     WdipSemAllocatePool @ 0x1405AACEC (WdipSemAllocatePool.c)
 *     CreateTlgAggregateSession @ 0x1405AB400 (CreateTlgAggregateSession.c)
 *     EtwpSetProviderTraitsKm @ 0x1405ABE94 (EtwpSetProviderTraitsKm.c)
 *     PopBootStatGet @ 0x1405AC1B8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1405AC38C (PopBootStatSet.c)
 *     PdcTaskClientRegister @ 0x1405ACD68 (PdcTaskClientRegister.c)
 *     PdcPortOpen @ 0x1405ACE14 (PdcPortOpen.c)
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PopDeleteHiberFile @ 0x1405ADA44 (PopDeleteHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405ADB78 (PopCreateHiberFileSecurityDescriptor.c)
 *     BiLoadSystemStore @ 0x1405ADDCC (BiLoadSystemStore.c)
 *     BiGetSystemStorePath @ 0x1405AE5C8 (BiGetSystemStorePath.c)
 *     BiEnumerateSubKeys @ 0x1405AE9F8 (BiEnumerateSubKeys.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1405AEE54 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x1405AF0E0 (PopBcdReadElement.c)
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x1405AFCB8 (BiCreateKeySecurityDescriptor.c)
 *     BiGetKeyName @ 0x1405AFEC4 (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x1405B03EC (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1405B063C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1405B06F0 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x1405B0860 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x1405B0AC8 (BiTranslateSymbolicLink.c)
 *     BiCreatePartitionDevice @ 0x1405B0C38 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1405B0F00 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutBlock @ 0x1405B110C (BiGetDriveLayoutBlock.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1405B1298 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x1405B1368 (BiVerifyBootPartition.c)
 *     BiGetSystemPartition @ 0x1405B1A94 (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x1405B1B68 (SiQuerySystemPartitionInformation.c)
 *     PopBcdSetupResumeObject @ 0x1405B1C28 (PopBcdSetupResumeObject.c)
 *     ObCreateKernelObjectsSD @ 0x1405B22C8 (ObCreateKernelObjectsSD.c)
 *     ObpSetDeviceMap @ 0x1405B2684 (ObpSetDeviceMap.c)
 *     ObpGetDosDevicesProtection @ 0x1405B289C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1405B2AA4 (MiCreateMemoryEventSD.c)
 *     MiCreateNodeLists @ 0x1405B3928 (MiCreateNodeLists.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmAllocatePerfCheck @ 0x1405B5AE4 (PpmAllocatePerfCheck.c)
 *     PpmIdleInitializeConcurrency @ 0x1405B5B54 (PpmIdleInitializeConcurrency.c)
 *     KeInitializeTimerTable @ 0x1405B79DC (KeInitializeTimerTable.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405B8098 (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405B898C (PopThermalHandlePreviousShutdown.c)
 *     PiDmListInitEnumCallback @ 0x1405B9CF0 (PiDmListInitEnumCallback.c)
 *     IopPnPDispatch @ 0x1405B9E90 (IopPnPDispatch.c)
 *     IopGetRootDevices @ 0x1405BA328 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405BA8E4 (PnpAllocateDeviceInstancePath.c)
 *     PiSwPdoPnPDispatch @ 0x1405BA930 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1405BACF0 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1405BB72C (PnpCopyDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x1405BB7F0 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x1405BB888 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x1405BB930 (PnpAllocateMultiSZ.c)
 *     PiSwDeviceCreate @ 0x1405BBB18 (PiSwDeviceCreate.c)
 *     EmpProviderRegister @ 0x1405BC000 (EmpProviderRegister.c)
 *     LdrpQueryValueKey @ 0x1405BD7BC (LdrpQueryValueKey.c)
 *     RtlpGetWindowsPolicy @ 0x1405BE4A4 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1405BE5AC (RtlpMuiRegCreateRegistryInfo.c)
 *     CmpInitializeNameCache @ 0x1405BF73C (CmpInitializeNameCache.c)
 *     CmpInitializeRegistryNode @ 0x1405C0658 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405C1760 (CmpHiveRootSecurityDescriptor.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405C2FF0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmSetAcpiHwProfile @ 0x1405C35C0 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1405C3C84 (CmpGetAcpiProfileInformation.c)
 *     DbgkpCreateNotificationEvent @ 0x1405C474C (DbgkpCreateNotificationEvent.c)
 *     PnpBootPhaseComplete @ 0x1405C4A2C (PnpBootPhaseComplete.c)
 *     _PnpCtxOpenMachine @ 0x1405C4AF8 (_PnpCtxOpenMachine.c)
 *     _SysCtxOpenMachine @ 0x1405C4CBC (_SysCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x1405C4F28 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     PiDcInitUpdateProperties @ 0x1405C5CF0 (PiDcInitUpdateProperties.c)
 *     PiDrvDbRegisterNode @ 0x1405C645C (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 *     EtwInitialize @ 0x1405C6814 (EtwInitialize.c)
 *     EtwInitializeProcessor @ 0x1405C6848 (EtwInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x1405C6974 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1405C6A20 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1405C6B3C (IoInitializeProcessor.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x1405C7438 (ObpCreateDefaultObjectTypeSD.c)
 *     PsRegisterSiloMonitor @ 0x1405C75F0 (PsRegisterSiloMonitor.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x1405C7C00 (VrpInitializeLoadedDifferencingHives.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x1405C7C90 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x1405C7D10 (IoRegisterShutdownNotification.c)
 *     WmipAddMofResource @ 0x1405C7E4C (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x1405C800C (WmipInsertMofResource.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405C8240 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405C88A0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     MmCallDllInitialize @ 0x1405C90B8 (MmCallDllInitialize.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1405C9558 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     PopFxRegisterDeviceWorker @ 0x1405CA234 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x1405CA9C8 (PopPepRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x1405CAD68 (PopFxConvertV1Components.c)
 *     RtlGenerateClass5Guid @ 0x1405CB330 (RtlGenerateClass5Guid.c)
 *     PnpFilterResourceRequirementsList @ 0x1405CB624 (PnpFilterResourceRequirementsList.c)
 *     CmpCmdInit @ 0x1405CBF00 (CmpCmdInit.c)
 *     PoRegisterCoalescingCallback @ 0x1405CC440 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x1405CC5FC (ExAllocateCallBack.c)
 *     PiDmObjectManagerPopulate @ 0x1405CD534 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x1405CD66C (PiDmObjectCreate.c)
 *     IopSymlinkUpdateECP @ 0x1405CD968 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x1405CE168 (IopSymlinkRememberJunction.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405CE8DC (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeArbiterInstance @ 0x1405CECAC (ArbInitializeArbiterInstance.c)
 *     ArbAddOrdering @ 0x1405CF598 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1405CFA50 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1405CFB10 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x1405CFB90 (ArbPruneOrdering.c)
 *     AdtpEtwBuildString @ 0x1405D0BF4 (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x1405D0CB8 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x1405D0F44 (SepGetLogonSessionAccountInfo.c)
 *     AdtpObjsInitialize @ 0x1405D1148 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405D161C (AdtpInitializeDriveLetters.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 *     IopCreateCmResourceList @ 0x1405D1D44 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x1405D1E18 (IopCombineCmResourceList.c)
 *     PnpCmResourcesToIoResources @ 0x1405D2108 (PnpCmResourcesToIoResources.c)
 *     PipAddBindingId @ 0x1405D23B4 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x1405D2434 (PipCreateDependencyNode.c)
 *     IoQueryDeviceDescription @ 0x1405D2BE0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1405D2CF4 (pIoQueryBusDescription.c)
 *     _CmEnumSubkeyCallback @ 0x1405D3230 (_CmEnumSubkeyCallback.c)
 *     SiGetBiosSystemDisk @ 0x1405D35B4 (SiGetBiosSystemDisk.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405D4DF4 (MiCreatePageFileSpaceBitmaps.c)
 *     CmpComputeLogFillLevel @ 0x1405D53F8 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1405D551C (CmpDoTransWriteLogRecord.c)
 *     PopLogSleepDisabled @ 0x1405D5670 (PopLogSleepDisabled.c)
 *     WmipSendEnableDisableRequest @ 0x1405D5EF0 (WmipSendEnableDisableRequest.c)
 *     KeAllocateCalloutStackEx @ 0x1405D60F0 (KeAllocateCalloutStackEx.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     WheaAddErrorSource @ 0x1405D6AE0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSource @ 0x1405D6C14 (WheapInitializeErrorSource.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     ExRegisterHost @ 0x1405D82F4 (ExRegisterHost.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     IopTranslateAndAdjustReqDesc @ 0x1405DA10C (IopTranslateAndAdjustReqDesc.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     PiAuAllocateAndInitializeSid @ 0x1405DAAE8 (PiAuAllocateAndInitializeSid.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405DBA30 (NtPrivilegeObjectAuditAlarm.c)
 *     PfpCreateEvent @ 0x1405DCE0C (PfpCreateEvent.c)
 *     ExpPartitionInitialize @ 0x1405DDCC4 (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolInternal @ 0x1405DDEC0 (ExpPartitionCreatePoolInternal.c)
 *     PiDmAllocateGenericTableEntry @ 0x1405DE0F0 (PiDmAllocateGenericTableEntry.c)
 *     ExpOsProductCacheProviderHelper @ 0x1405DED04 (ExpOsProductCacheProviderHelper.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     EtwpExpandFileName @ 0x1405DFEEC (EtwpExpandFileName.c)
 *     PspInitializeProtectedProcessParameters @ 0x1405E0210 (PspInitializeProtectedProcessParameters.c)
 *     PpmRegisterProfiles @ 0x1405E0DB4 (PpmRegisterProfiles.c)
 *     WheapLogInitEvent @ 0x1405E1124 (WheapLogInitEvent.c)
 *     NtNotifyChangeSession @ 0x1405E12D0 (NtNotifyChangeSession.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405E18B4 (CmpInitializeSystemHivesLoad.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E1D68 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiSwInterfaceCreate @ 0x1405E26E4 (PiSwInterfaceCreate.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     WmipGenerateMofResourceNotification @ 0x1405E2C0C (WmipGenerateMofResourceNotification.c)
 *     FsRtlGetTunnelParameterValue @ 0x1405E30E8 (FsRtlGetTunnelParameterValue.c)
 *     CmpLogCheckpoint @ 0x1405E3310 (CmpLogCheckpoint.c)
 *     IoRegisterBootDriverReinitialization @ 0x1405E3A80 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x1405E3B00 (IoRegisterDriverReinitialization.c)
 *     PiSwAddPdoAssociation @ 0x1405E3F58 (PiSwAddPdoAssociation.c)
 *     NtSetCachedSigningLevel2 @ 0x1405E4024 (NtSetCachedSigningLevel2.c)
 *     CmpStartRMLog @ 0x1405E47A8 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x1405E4A9C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405E4D1C (CmpAddRemoveContainerToCLFSLog.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1405E4F50 (IoWMIDeviceObjectToInstanceName.c)
 *     MiFormFullImageName @ 0x1405E52B4 (MiFormFullImageName.c)
 *     PspAllocStorage @ 0x1405E5360 (PspAllocStorage.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405E577C (FsRtlpRegisterProviderWithMUP.c)
 *     WmipRegisterEtwProvider @ 0x1405E5A38 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1405E5AC8 (WmipQueueLegacyEtwWork.c)
 *     MmGetNodeChannelRanges @ 0x1405E5E8C (MmGetNodeChannelRanges.c)
 *     SepSetSystemPaths @ 0x1405E63C4 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x1405E64BC (SepLoadNgenLocations.c)
 *     ObRegisterCallbacks @ 0x1405E6AE0 (ObRegisterCallbacks.c)
 *     PiDqGrowPropertyArray @ 0x1405E6F50 (PiDqGrowPropertyArray.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405E6FC0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x1405E7544 (EtwpCoverageEnsureStringBuffer.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1405E7764 (PnpMergeFilteredResourceRequirementsList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405E7994 (_CmGetMatchingCommonClassListWorker.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405E7D70 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405E7F0C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405E7FB4 (ExpRegisterFirmwareTableInformationHandler.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1405E84B8 (WmipAllocateSingleInstanceWnode.c)
 *     MmGetChannelInformation @ 0x1405E8830 (MmGetChannelInformation.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1405E97F0 (NtQuerySystemEnvironmentValueEx.c)
 *     AlpcpInitSystem @ 0x1405E99C8 (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x1405E9CB4 (AlpcpInitializeMessageLog.c)
 *     TtmNotifyDeviceArrival @ 0x1405E9F20 (TtmNotifyDeviceArrival.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405EA4A0 (_CmGetMatchingDeviceListForSubkey.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1405EB240 (SPCallServerHandleWaitForDisplayWindow.c)
 *     SepReadAndPopulateCapes @ 0x1405EB5EC (SepReadAndPopulateCapes.c)
 *     MiConvertInitialMemoryBlock @ 0x1405EB6E8 (MiConvertInitialMemoryBlock.c)
 *     IopConnectLineBasedInterrupt @ 0x1405EB7F4 (IopConnectLineBasedInterrupt.c)
 *     MmInitializeHandBuiltProcess @ 0x1405EC234 (MmInitializeHandBuiltProcess.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405EC82C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     HeadlessTerminalAddResources @ 0x1405ECC9C (HeadlessTerminalAddResources.c)
 *     CmpRegisterCallbackInternal @ 0x1405ECF38 (CmpRegisterCallbackInternal.c)
 *     ExpGetSystemPlatformBinary @ 0x1405ED510 (ExpGetSystemPlatformBinary.c)
 *     IoRegisterContainerNotification @ 0x1405ED930 (IoRegisterContainerNotification.c)
 *     ExpWnfAllocateScopeMap @ 0x1405EDB2C (ExpWnfAllocateScopeMap.c)
 *     PopRequestShutdownWait @ 0x1405EDE74 (PopRequestShutdownWait.c)
 *     CMFFlushHitsFile @ 0x1405EE9D0 (CMFFlushHitsFile.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1405EEE20 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     ExGetSystemFirmwareTable @ 0x1405EF170 (ExGetSystemFirmwareTable.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1405EF9D4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     CmpAddStringToMapping @ 0x1405EFD98 (CmpAddStringToMapping.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405F0040 (SepInitializeLowBoxNumberTable.c)
 *     SepBuildDefaultCap @ 0x1405F0484 (SepBuildDefaultCap.c)
 *     PopExtendConnectionState @ 0x1405F091C (PopExtendConnectionState.c)
 *     PiDcAllocateGenericTableEntry @ 0x1405F0C30 (PiDcAllocateGenericTableEntry.c)
 *     PoDisableSleepStates @ 0x1405F12C0 (PoDisableSleepStates.c)
 *     PiSwAllocateGenericTableEntry @ 0x1405F1F40 (PiSwAllocateGenericTableEntry.c)
 *     CcAllocateObcb @ 0x1405F2A38 (CcAllocateObcb.c)
 *     NtQueryOpenSubKeysEx @ 0x140687E00 (NtQueryOpenSubKeysEx.c)
 *     CmSetCallbackObjectContext @ 0x140689270 (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x14068B928 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140690D1C (CmVirtualKCBToRealPath.c)
 *     CmpBuildAdminInformation @ 0x140690E6C (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x1406911F8 (CmpBuildVirtualReplicationStack.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140692A38 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpCmdRenameHive @ 0x1406943BC (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x140694480 (CmpDiskFullWarning.c)
 *     CmInitializeProcessor @ 0x1406947A8 (CmInitializeProcessor.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14069557C (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 *     CmpAllocateLayerInfoForKcb @ 0x140697A70 (CmpAllocateLayerInfoForKcb.c)
 *     CmDeleteKeyRecursive @ 0x1406984C8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406998A4 (CmpSnapshotTxOwnerArray.c)
 *     CmpMergeKeyValues @ 0x140699A74 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140699C54 (CmpPreserveSystemHiveData.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14069FBE4 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvpViewMapPrefetchFile @ 0x1406A0780 (HvpViewMapPrefetchFile.c)
 *     HvpReviveDiscardedBin @ 0x1406A0FE8 (HvpReviveDiscardedBin.c)
 *     HvpGetLogHeader @ 0x1406A11C8 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406A1A10 (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x1406A1C84 (HvpRecoverDataReadRoutine.c)
 *     VrpAllocateKeyContext @ 0x1406A3AA8 (VrpAllocateKeyContext.c)
 *     VrpProcessBufferParameter @ 0x1406A3C38 (VrpProcessBufferParameter.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406A3C8C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406A491C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpAddNamespaceNodeToList @ 0x1406A5394 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1406A56CC (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x1406A7B04 (VrpPreOpenOrCreate.c)
 *     VrpAllocateDiffHiveEntry @ 0x1406A895C (VrpAllocateDiffHiveEntry.c)
 *     VrpBuildKeyPath @ 0x1406A95FC (VrpBuildKeyPath.c)
 *     DbgkQueueUserExceptionReport @ 0x1406ABCD4 (DbgkQueueUserExceptionReport.c)
 *     DbgkCaptureLiveDump @ 0x1406ACEEC (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1406AD4F4 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x1406ADB10 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x1406ADE9C (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x1406ADEC0 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x1406AE048 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x1406AEB10 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x1406AEDF0 (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x1406AF260 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x1406B12D0 (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x1406B1DD8 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x1406B2014 (FsRtlpQueryValueKey.c)
 *     IoReadPartitionTable @ 0x1406B2760 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x1406B2BA0 (IoWritePartitionTable.c)
 *     HvlpAllocatePageListResources @ 0x1406B3258 (HvlpAllocatePageListResources.c)
 *     VslStartSecureProcessor @ 0x1406B41D8 (VslStartSecureProcessor.c)
 *     IopAllocateGenericTableEntry @ 0x1406B46F0 (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x1406B4E5C (IopGetRelatedFileName.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x1406B68DC (IopValidateJunctionTarget.c)
 *     IoInitializeTimer @ 0x1406B7650 (IoInitializeTimer.c)
 *     IoReplaceFileObjectName @ 0x1406B79F0 (IoReplaceFileObjectName.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1406B8098 (IopSetFileMemoryPartitionInformation.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406B86A0 (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x1406B8D58 (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x1406B9050 (IoRegisterIoTracking.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1406BA9B4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1406BAB9C (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1406BB3C0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406BB5EC (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopFindSystemDevice @ 0x1406BD520 (IopFindSystemDevice.c)
 *     PipAddRequestToEdge @ 0x1406BE7C0 (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406BF95C (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x1406C048C (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x1406C0670 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1406C1020 (IopAllocatePassiveInterruptBlock.c)
 *     IopCombineLegacyResources @ 0x1406C2210 (IopCombineLegacyResources.c)
 *     IopIsPciRootBus @ 0x1406C2310 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x1406C27F4 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1406C28B0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1406C2A08 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406C33F0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x1406C380C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x1406C38CC (PiAuCheckTokenMembership.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x1406C46E4 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x1406C4814 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgCopyVariableData @ 0x1406C5620 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1406C6A28 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1406C72F4 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1406C77D0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x1406C78A0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1406C8A40 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1406C8F70 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1406C9910 (PiDevCfgResolveVariableKeyValue.c)
 *     PiProfileUpdateDeviceTree @ 0x1406CA3B4 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406CA50C (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x1406CABA0 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x1406CAC04 (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x1406CBF48 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x1406CC140 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x1406CC258 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1406CC410 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x1406CC7E4 (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x1406CD550 (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406CE580 (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1406D0180 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406D064C (PiCMGetObjectPropertyKeys.c)
 *     IopAppendLegacyVeto @ 0x1406D1F0C (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x1406D1FE0 (IopCreateLegacyDeviceIds.c)
 *     PnpLogDeviceConflictingResource @ 0x1406D2198 (PnpLogDeviceConflictingResource.c)
 *     IopQueryDockRemovalInterface @ 0x1406D27A8 (IopQueryDockRemovalInterface.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1406D3858 (PiQueryDeviceRelations.c)
 *     PiAuditDeviceOperation @ 0x1406D3D44 (PiAuditDeviceOperation.c)
 *     PiDmaGuardQueueInsertEntry @ 0x1406D463C (PiDmaGuardQueueInsertEntry.c)
 *     PnpRebalance @ 0x1406D4C1C (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x1406D4FB8 (IopExecuteHardwareProfileChange.c)
 *     PiEventAllocatePendingEjectRelations @ 0x1406D51B0 (PiEventAllocatePendingEjectRelations.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1406D83E0 (KeInitializeSecondaryInterruptServices.c)
 *     KeInitializeUmsThread @ 0x1406D89F0 (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406DD040 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 *     AlpcpGetPortNameInformation @ 0x1406DE1A8 (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x1406DE260 (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406DE748 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x1406DE914 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406DEA24 (MmGetFileNameForSection.c)
 *     MiInitializeLockedPagesTracking @ 0x1406DED70 (MiInitializeLockedPagesTracking.c)
 *     MiConfigureMemoryInsertion @ 0x1406DFB4C (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x1406DFE54 (MiConfigureMemoryRemoval.c)
 *     MiAllocateHotPatchPageBitMap @ 0x1406E1538 (MiAllocateHotPatchPageBitMap.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406E1B44 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiPrepareHotPatchBaseImageList @ 0x1406E1D14 (MiPrepareHotPatchBaseImageList.c)
 *     MmSetPermanentCacheAttribute @ 0x1406E2300 (MmSetPermanentCacheAttribute.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 *     MiConvertRunsToPages @ 0x1406E3F98 (MiConvertRunsToPages.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 *     MiAllocateAweInfo @ 0x1406E5194 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1406E5A4C (MiResizeAweBitMap.c)
 *     NtMapUserPhysicalPages @ 0x1406E69F4 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406E6E70 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406E734C (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x1406E9454 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1406E9854 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 *     MiAllocateLargeZeroPages @ 0x1406EB7E8 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406EBC04 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406EBD0C (MiFindLargePageMemory.c)
 *     MiAllocateCrcList @ 0x1406ECC24 (MiAllocateCrcList.c)
 *     MiExpandPartitionIds @ 0x1406EDE84 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1406EE348 (MiMakePartitionMemoryBlock.c)
 *     MmManagePartitionInitialAddMemory @ 0x1406EE638 (MmManagePartitionInitialAddMemory.c)
 *     MiInitializeScrubPacket @ 0x1406EE840 (MiInitializeScrubPacket.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 *     MmScrubMemory @ 0x1406EEF04 (MmScrubMemory.c)
 *     ObpSetObjectAuditInfo @ 0x1406EFEFC (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406F01B4 (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x1406F0828 (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x1406F13D4 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x1406F14F0 (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x1406F16D8 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406F1AE4 (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x1406F1B2C (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x1406F1D14 (ObpStartRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x1406F27CC (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x1406F2EF8 (PfpQueryFileExtentsRequest.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406F3658 (PfpServiceMainThreadBoostPrep.c)
 *     PfpSourceBuildVaArray @ 0x1406F3708 (PfpSourceBuildVaArray.c)
 *     PfTAllocateBuffers @ 0x1406F3C88 (PfTAllocateBuffers.c)
 *     PfSnPrefetchCacheCtxStart @ 0x1406F46B4 (PfSnPrefetchCacheCtxStart.c)
 *     PopLoadResumeContext @ 0x1406F5168 (PopLoadResumeContext.c)
 *     PopTransitionCheckpoint @ 0x1406F5940 (PopTransitionCheckpoint.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1406F5D30 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406F62E0 (PpmInstallPlatformIdleStates.c)
 *     PoCreateThermalRequest @ 0x1406F69D0 (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x1406F6D24 (PopAssociateThermalRequest.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406F7354 (PopRegisterCoolingExtensionProtection.c)
 *     PopGetPowerRequestListInfo @ 0x1406F7774 (PopGetPowerRequestListInfo.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1406F7FD0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxChildDevicesActive @ 0x1406F8134 (PopFxChildDevicesActive.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406F8324 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406F8878 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x1406F8D0C (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1406F8F24 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x1406F96C4 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406F9AF8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmPerfResizeHistory @ 0x1406F9D80 (PpmPerfResizeHistory.c)
 *     PopNewWakeSource @ 0x1406FA840 (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x1406FA890 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1406FAA58 (PopWakeSourceGetDeviceProperty.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     PopHiberInitializeResources @ 0x1406FBB38 (PopHiberInitializeResources.c)
 *     PopPreallocateHibernateMemory @ 0x1406FBE3C (PopPreallocateHibernateMemory.c)
 *     PopSetHiberFileMcb @ 0x1406FC2D8 (PopSetHiberFileMcb.c)
 *     PopPdcCsDeviceNotification @ 0x1406FF6C8 (PopPdcCsDeviceNotification.c)
 *     PoInitializeBroadcast @ 0x140700A98 (PoInitializeBroadcast.c)
 *     NtInitiatePowerAction @ 0x140700C9C (NtInitiatePowerAction.c)
 *     PopFxTracePerfRegistration @ 0x140705D98 (PopFxTracePerfRegistration.c)
 *     PopConnectToPolicyDevice @ 0x140706CAC (PopConnectToPolicyDevice.c)
 *     PopBootStatCheckIntegrity @ 0x140707F20 (PopBootStatCheckIntegrity.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140708D94 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1407090E0 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x1407093C8 (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x14070B6AC (PpmAllocateQueryTable.c)
 *     TtmInitCurrentSession @ 0x14070F2CC (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 *     TtmiWriteEventToSingleQueue @ 0x14071102C (TtmiWriteEventToSingleQueue.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407159B0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1407173F8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspSetJobIoRateControlForVolume @ 0x140717E94 (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x1407187FC (PspCreateSecureThread.c)
 *     PspSetMinimalProcessName @ 0x14071A600 (PspSetMinimalProcessName.c)
 *     PspLazyInitializeStorageExpansion @ 0x14071CFB8 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x14071D9F8 (RawQueryFileSystemInformation.c)
 *     RtlpComputeMergedAcl @ 0x140721F4C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140722370 (RtlpCreateServerAcl.c)
 *     RtlCheckBootStatusIntegrity @ 0x1407232B0 (RtlCheckBootStatusIntegrity.c)
 *     RtlIdnToUnicode @ 0x140724280 (RtlIdnToUnicode.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14072B970 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14072BE68 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x14072C238 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x14072C2F0 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x14072C548 (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14072D060 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x14072E6B0 (SepCreateSidValuesBlock.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x14072ECF0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SepAddTokenLogonSession @ 0x14072EF40 (SepAddTokenLogonSession.c)
 *     NtFilterBootOption @ 0x14072F5EC (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x14072FA34 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14072FE94 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepBuildDaclWithCriticalAces @ 0x1407303A4 (SepBuildDaclWithCriticalAces.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140730628 (SepBuildObjectSecurityDescriptor.c)
 *     SepDuplicateClaimAttributes @ 0x140731094 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140731478 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x140731814 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x140731B74 (SepReadSingleCap.c)
 *     SddlpReAlloc @ 0x140733EDC (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x14073403C (SddlpUuidToString.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14073B910 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmPrefetchVirtualAddresses @ 0x14073D5EC (VmPrefetchVirtualAddresses.c)
 *     VmCreateMemoryRange @ 0x14073D7F0 (VmCreateMemoryRange.c)
 *     PerfDiagpRequestState @ 0x14073E774 (PerfDiagpRequestState.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14073E7CC (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14073F4D4 (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x140740400 (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x140740940 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x14074107C (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x140741814 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x140741BCC (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x140741EB0 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x140742240 (WmipQuerySingleMultiple.c)
 *     WmipLegacyEtwCallback @ 0x140742AF0 (WmipLegacyEtwCallback.c)
 *     WmipUnregisterEtwProvider @ 0x140742E78 (WmipUnregisterEtwProvider.c)
 *     WmipGenerateBinaryMofNotification @ 0x140742F28 (WmipGenerateBinaryMofNotification.c)
 *     EtwpCreateUmReplyObject @ 0x1407441E8 (EtwpCreateUmReplyObject.c)
 *     EtwpQueueReply @ 0x140744924 (EtwpQueueReply.c)
 *     EtwpCoverageResetCP @ 0x140745254 (EtwpCoverageResetCP.c)
 *     EtwpLogMemInfoWs @ 0x14074665C (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x140746C1C (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x14074764C (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x140747764 (EtwpTraceHandle.c)
 *     EtwpAllocatePmcData @ 0x140748F0C (EtwpAllocatePmcData.c)
 *     EtwpCapturePreviousRegistryData @ 0x140749EBC (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x140749FC0 (EtwpCaptureRegistryData.c)
 *     EtwpSendDbgId @ 0x14074AC50 (EtwpSendDbgId.c)
 *     EtwpTiQueryVad @ 0x14074C920 (EtwpTiQueryVad.c)
 *     EtwpEnumerateWorkingSet @ 0x14074CE48 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x14074D630 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x14074D8FC (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x14074DA54 (EtwpPoolRunDown.c)
 *     EtwpProcessThreadImageRundown @ 0x14074E288 (EtwpProcessThreadImageRundown.c)
 *     EtwpProcessorRundown @ 0x14074E58C (EtwpProcessorRundown.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14074F788 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14074FA80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpReferenceStackLookasideList @ 0x14074FEB0 (EtwpReferenceStackLookasideList.c)
 *     EtwpUpdateStackTracing @ 0x14074FF18 (EtwpUpdateStackTracing.c)
 *     EtwpAllocateEventNameFilter @ 0x140750064 (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x14075059C (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x140750624 (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x140750BA8 (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdateLevelKwFilter @ 0x140751044 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1407510EC (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x140751190 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpTrackBinaryForSession @ 0x1407515FC (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDecodeGuidForSession @ 0x140751874 (EtwpTrackDecodeGuidForSession.c)
 *     EtwpUpdateDisallowedGuids @ 0x140751C2C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCCSwapStart @ 0x140752164 (EtwpCCSwapStart.c)
 *     EtwpAllocateLbrData @ 0x1407524FC (EtwpAllocateLbrData.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140752548 (EtwpReferenceLastBranchLookasideList.c)
 *     EtwpEnableStackCaching @ 0x14075272C (EtwpEnableStackCaching.c)
 *     EtwpPreserveLogger @ 0x140752C2C (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x140752E5C (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x140752F4C (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407533E0 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpSetSoftRestartInformation @ 0x140753500 (EtwpSetSoftRestartInformation.c)
 *     ExEnumerateSystemFirmwareTables @ 0x140753D20 (ExEnumerateSystemFirmwareTables.c)
 *     ExpWatchLicenseInfoWork @ 0x140755DD0 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x140756250 (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x140756828 (ExEnableHandleTracing.c)
 *     ExpGetSubscriptionPfn @ 0x140757714 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140757E38 (ExStartRecordingIRTimerExpiries.c)
 *     ExpConvertArcName @ 0x140758274 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x140758430 (ExpConvertSignatureName.c)
 *     ExpFindArcName @ 0x140758BA4 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x140758E6C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14075905C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140759278 (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x140759590 (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x1407597CC (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x140759AFC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14075A2BC (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14075ABF0 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x14075B25C (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x14075B52C (ExpTranslateSymbolicLink.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x14075B6B4 (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x14075BC58 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14075C268 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x14075D2B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x14075D5DC (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x14075D9E0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x14075DBE4 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14075DF18 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x14075E188 (NtTranslateFilePath.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14075F0F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x14075F55C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x14075F7DC (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x14075FEEC (ExpCovReadRequestBuffer.c)
 *     NtStartProfile @ 0x140760AE4 (NtStartProfile.c)
 *     CMFAllocFn @ 0x140760F28 (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 *     NtSystemDebugControl @ 0x140761F40 (NtSystemDebugControl.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140762CA0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140762EC0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1407638E8 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x140763B4C (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x140763E1C (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x140764410 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1407646C0 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetLoadSchemaEx @ 0x140764884 (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x140764A54 (ApiSetpConstructPathToExtension.c)
 *     sub_140764FA4 @ 0x140764FA4 (sub_140764FA4.c)
 *     sub_14076556C @ 0x14076556C (sub_14076556C.c)
 *     sub_140765BFC @ 0x140765BFC (sub_140765BFC.c)
 *     sub_140765FAC @ 0x140765FAC (sub_140765FAC.c)
 *     sub_1407662F8 @ 0x1407662F8 (sub_1407662F8.c)
 *     sub_140766654 @ 0x140766654 (sub_140766654.c)
 *     sub_140766B2C @ 0x140766B2C (sub_140766B2C.c)
 *     sub_1407673D8 @ 0x1407673D8 (sub_1407673D8.c)
 *     sub_140767D38 @ 0x140767D38 (sub_140767D38.c)
 *     sub_140768280 @ 0x140768280 (sub_140768280.c)
 *     sub_14076883C @ 0x14076883C (sub_14076883C.c)
 *     sub_140768F7C @ 0x140768F7C (sub_140768F7C.c)
 *     sub_140769454 @ 0x140769454 (sub_140769454.c)
 *     sub_14076A110 @ 0x14076A110 (sub_14076A110.c)
 *     sub_14076ABD4 @ 0x14076ABD4 (sub_14076ABD4.c)
 *     sub_14076B26C @ 0x14076B26C (sub_14076B26C.c)
 *     sub_14076B714 @ 0x14076B714 (sub_14076B714.c)
 *     sub_14076BA6C @ 0x14076BA6C (sub_14076BA6C.c)
 *     sub_14076C270 @ 0x14076C270 (sub_14076C270.c)
 *     sub_14076C850 @ 0x14076C850 (sub_14076C850.c)
 *     sub_14076CB9C @ 0x14076CB9C (sub_14076CB9C.c)
 *     sub_14076CEE8 @ 0x14076CEE8 (sub_14076CEE8.c)
 *     sub_14076D484 @ 0x14076D484 (sub_14076D484.c)
 *     AdtpBuildGuidString @ 0x140776CE4 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x140776E10 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x140776ED0 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140777028 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x140777180 (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140777224 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x140777414 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140777798 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14077799C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140777CB4 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x140777E20 (AdtpBuildUlongString.c)
 *     AdtpAppendString @ 0x140777F1C (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140778114 (AdtpBuildAccessesString.c)
 *     AdtpBuildUserAccountControlString @ 0x14077882C (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x140779394 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x140779470 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x140779538 (BiResolveLocateDevice.c)
 *     BiUnloadHiveByName @ 0x140779940 (BiUnloadHiveByName.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140779ADC (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140779BCC (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x140779C84 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x140779D84 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x140779F30 (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14077A074 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x14077A164 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14077A32C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14077A474 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14077A55C (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x14077B040 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x14077B58C (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x14077BA34 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x14077BC44 (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x14077C0B8 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x14077C250 (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14077C3A8 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x14077C5C4 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x14077C88C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14077C944 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x14077CCC8 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x14077CE20 (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14077D278 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetDriveLayoutInformation @ 0x14077D4F8 (SiGetDriveLayoutInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x14077D748 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiSystemDevice @ 0x14077D8D0 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x14077DC34 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemPartition @ 0x14077E0A0 (SiGetBiosSystemPartition.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14077E748 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14077ED08 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x14077EFA0 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x14077F7C4 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x14077FE08 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1407801E4 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140780B78 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140780D9C (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1407810BC (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140781540 (_CmGetDevicesInBaseContainerList.c)
 *     _CmServiceFilterCallback @ 0x1407828C0 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x1407840B4 (_CmGetDeviceSiblings.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140785A8C (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140786114 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x140788F7C (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1407893F0 (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x140789BCC (VhdiVerifyBootDisk.c)
 *     ObGetSiloRootDirectoryPath @ 0x14078A24C (ObGetSiloRootDirectoryPath.c)
 *     ObpGetSilosRootDirectory @ 0x14078A3BC (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14078A5B4 (RtlpLoadPolicyLanguageSpec.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 *     KdPullRemoteFile @ 0x14079A314 (KdPullRemoteFile.c)
 *     ViThunkCreateSharedExportInformation @ 0x1407A1F08 (ViThunkCreateSharedExportInformation.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407A21FC (VfXdvDriverCaptureIoCallbacks.c)
 *     VfAvlInitializeTreeEx @ 0x1407A22C0 (VfAvlInitializeTreeEx.c)
 *     IovpBuildDriverObjectList @ 0x1407A523C (IovpBuildDriverObjectList.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1407A6B30 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407A7120 (ViInitializeLocalSystemDescriptor.c)
 *     VfInitVerifierComponents @ 0x1407A7380 (VfInitVerifierComponents.c)
 *     ViDdiDriverEntry @ 0x1407A88B0 (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x1407ACDAC (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x1407ACF6C (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1407AE4B8 (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1407AEC4C (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x1407B3D88 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x1407B5880 (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1407B5D7C (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x1407B6414 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x1407B6498 (ViThunkFindAllSpecialTables.c)
 *     VfTargetEtwRegister @ 0x1407B6C5C (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1407B7034 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x1407B7378 (ViTargetTrackContiguousMemory.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1407B7FE4 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x1407B80EC (ViFaultsAddTagNoDuplicates.c)
 *     VfDeadlockInitialize @ 0x1407BB248 (VfDeadlockInitialize.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x1407BC970 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     VfSuspectDriversAllocateEntry @ 0x1407BD394 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x1407BDBB0 (VfSuspectExcludedDriversAllocateEntry.c)
 *     IovpSessionDataCreate @ 0x1407BEF34 (IovpSessionDataCreate.c)
 *     VfIrpLogRecordEvent @ 0x1407C0E64 (VfIrpLogRecordEvent.c)
 *     VfIrpLogRetrieveWmiData @ 0x1407C1048 (VfIrpLogRetrieveWmiData.c)
 *     ViCtxAllocateIsrContext @ 0x1407C1728 (ViCtxAllocateIsrContext.c)
 *     VfGetVerifierInformation @ 0x1407CA3C4 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x1407CBAE0 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x1407CD0A8 (HdlspSetBlueScreenInformation.c)
 *     ResFwpPageOutBackground @ 0x1407D0B10 (ResFwpPageOutBackground.c)
 *     CcInitializeBcbProfiler @ 0x14080C364 (CcInitializeBcbProfiler.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     SepRmDbInitialization @ 0x140827A2C (SepRmDbInitialization.c)
 *     BapdpProcessEDrvHintInfo @ 0x140828050 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1408280E0 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140828170 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x14082825C (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x1408282EC (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1408283BC (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x14082848C (BapdpProcessSiData.c)
 *     BapdpProcessBootMetadata @ 0x140828C94 (BapdpProcessBootMetadata.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 *     MiInitializeMirroring @ 0x14082ED28 (MiInitializeMirroring.c)
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 *     KiPerformGroupConfiguration @ 0x14082F088 (KiPerformGroupConfiguration.c)
 *     KiAllocateCpuSetData @ 0x14082FCF0 (KiAllocateCpuSetData.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x140831B60 (PopNetInitialize.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     BvgaSaveResources @ 0x140832FE0 (BvgaSaveResources.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 *     EmpParseEntryTypes @ 0x140833920 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140833A88 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140833CB0 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x140833E0C (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1408342C0 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140834620 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x14083484C (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140834A64 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPush @ 0x140834FD8 (EmpRuleParserStackPush.c)
 *     CmGetSystemDriverList @ 0x140835884 (CmGetSystemDriverList.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x1408388B4 (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x140838CD8 (KiComputeNumaCosts.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x14083A5CC (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeHardwareConfiguration @ 0x14083AA64 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetVideoBiosInformation @ 0x14083B210 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x14083B4EC (CmpSetSystemBiosInformation.c)
 *     CmpGetRegistryValue @ 0x14083BC50 (CmpGetRegistryValue.c)
 *     CmpInitializeSystemHive @ 0x14083BCC8 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x14083C6D0 (CmpInitializePreloadedHive.c)
 *     CmpParseInfBuffer @ 0x14083DA1C (CmpParseInfBuffer.c)
 *     CmpGetToken @ 0x14083DD14 (CmpGetToken.c)
 *     CmpAppendValue @ 0x14083DFA4 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x14083E028 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x14083E0B0 (CmpAppendSection.c)
 *     PnpInitializeDeviceEvents @ 0x14083E46C (PnpInitializeDeviceEvents.c)
 *     PnpBusTypeGuidInitialize @ 0x14083E6A4 (PnpBusTypeGuidInitialize.c)
 *     PpInitializeBootDDB @ 0x1408403F4 (PpInitializeBootDDB.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 *     ExpInitSystemPhase1 @ 0x1408429B0 (ExpInitSystemPhase1.c)
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 *     PspInitializeSiloStructures @ 0x140843AC8 (PspInitializeSiloStructures.c)
 *     WmipInitializeSecurity @ 0x140843F94 (WmipInitializeSecurity.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x140844CE4 (PnpRegMultiSzToUnicodeStrings.c)
 *     PipInitDeviceOverrideCache @ 0x140844E5C (PipInitDeviceOverrideCache.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     PipCreateEntry @ 0x140846FB8 (PipCreateEntry.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x140847C04 (PipCreateComputerId.c)
 *     MiBuildImportsForBootDrivers @ 0x140848304 (MiBuildImportsForBootDrivers.c)
 *     IopReportBootResources @ 0x140849E80 (IopReportBootResources.c)
 *     PopInitPlatformSettings @ 0x14084A0A4 (PopInitPlatformSettings.c)
 *     WheapInitializeErrorSourceTable @ 0x14084A850 (WheapInitializeErrorSourceTable.c)
 *     SepInitializeSingletonAttributesStructures @ 0x14084AB48 (SepInitializeSingletonAttributesStructures.c)
 *     SeMakeSystemToken @ 0x14084AF38 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14084B488 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14084B6C4 (SeMakeAnonymousLogonToken.c)
 *     SepVariableInitialization @ 0x14084BA80 (SepVariableInitialization.c)
 *     SepInitSystemDacls @ 0x14084D144 (SepInitSystemDacls.c)
 *     IopInitializeResourceMap @ 0x14084DD34 (IopInitializeResourceMap.c)
 *     MmInitializeMemoryLimits @ 0x14084E07C (MmInitializeMemoryLimits.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14084E620 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14084E998 (PiAuCreateStandardSecurityObject.c)
 *     PfSnInitializePrefetcher @ 0x14084F17C (PfSnInitializePrefetcher.c)
 *     SaveNodeDistanceInformation @ 0x140850634 (SaveNodeDistanceInformation.c)
 *     PsInitializeQuotaSystem @ 0x140850CF8 (PsInitializeQuotaSystem.c)
 *     MiCreateEnclaveRegions @ 0x140850F58 (MiCreateEnclaveRegions.c)
 *     FsRtlInitSystem @ 0x140851150 (FsRtlInitSystem.c)
 *     FsRtlGetCompatibilityModeValue @ 0x14085148C (FsRtlGetCompatibilityModeValue.c)
 *     StartFirstUserProcess @ 0x14085168C (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x140851AFC (QueryRegistryHideMachine.c)
 *     BootApplicationPersistentDataInitialize @ 0x140851D40 (BootApplicationPersistentDataInitialize.c)
 *     MiCreateTopLevelUltraMappings @ 0x1408525F8 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeUltraSpace @ 0x14085270C (MiInitializeUltraSpace.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140852E58 (PspInitializeSystemPartitionPhase0.c)
 *     WheapCreatePerProcessorInfo @ 0x140852F98 (WheapCreatePerProcessorInfo.c)
 *     ExpKeyedEventInitialization @ 0x140853288 (ExpKeyedEventInitialization.c)
 *     PiLastGoodCopyKeyContents @ 0x140853670 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x140853724 (IopFileUtilRename.c)
 *     IoReportHalResourceUsage @ 0x140853A90 (IoReportHalResourceUsage.c)
 *     PopUmpoInitializeChannel @ 0x1408542AC (PopUmpoInitializeChannel.c)
 *     MiSectionInitialization @ 0x14085467C (MiSectionInitialization.c)
 *     SeSecureBootRegisterPolicy @ 0x140854970 (SeSecureBootRegisterPolicy.c)
 *     ObpInitStackTrace @ 0x140854E50 (ObpInitStackTrace.c)
 *     ExpInitializeSvm @ 0x140854F50 (ExpInitializeSvm.c)
 *     MiInitializeRelocations @ 0x140855084 (MiInitializeRelocations.c)
 *     EtwpReadConfigParameters @ 0x140855378 (EtwpReadConfigParameters.c)
 *     MiInitializeSessionIds @ 0x140856228 (MiInitializeSessionIds.c)
 *     KeQueryNumaGraph @ 0x140856F94 (KeQueryNumaGraph.c)
 *     MfgInitSystem @ 0x140857D7C (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140857ED8 (PoFxRegisterDebugger.c)
 *     HeadlessInit @ 0x1408581E4 (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1408686C8 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x140868FE4 (CmpInitializeSystemBiosInformation.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x14086A3C0 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x14086A8D0 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x14086A990 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x14086B150 (PipProcessPendingObjects.c)
 *     KiInitializeCacheErrataSupport @ 0x14086BD34 (KiInitializeCacheErrataSupport.c)
 *     VhdiInitializeBootDisk @ 0x14086D810 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x14086E014 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x14086E400 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x14086E5E8 (SbpStartLanman.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KiAbFindWakeupLockEntry @ 0x1400A82C0 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 *     ExpUseSpecialPool @ 0x140284B3C (ExpUseSpecialPool.c)
 *     ExDeferredFreePool @ 0x1402B2010 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x1405096C0 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v3; // r9
  SIZE_T v5; // rdi
  POOL_TYPE v6; // esi
  int v7; // ebx
  __int64 v8; // r14
  ULONG v9; // r13d
  unsigned __int64 v10; // r11
  unsigned int v11; // r15d
  unsigned int v12; // r15d
  _GENERAL_LOOKASIDE_POOL *v13; // rdi
  PSLIST_ENTRY v14; // rbx
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v16; // r9
  unsigned __int64 v17; // r14
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r10
  __int64 v21; // r12
  unsigned int v22; // edi
  unsigned int v23; // r9d
  __int64 v24; // r15
  int v25; // eax
  PVOID result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r12
  _QWORD **v31; // r15
  _QWORD **v32; // rbx
  __int64 v33; // r15
  ULONG_PTR PoolPages; // rax
  ULONG_PTR v35; // rdi
  struct _FAST_MUTEX *v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // rdi
  __int64 v39; // rcx
  __int64 **v40; // rax
  bool v41; // zf
  volatile signed __int32 *v42; // r12
  unsigned __int8 v43; // al
  __int64 v44; // rdx
  _QWORD **v45; // rax
  _QWORD *v46; // rcx
  ULONG_PTR v47; // rax
  char v48; // al
  _BYTE *v49; // rax
  __int16 v50; // ax
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 Next; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v56; // rcx
  __int64 v57; // rcx
  char *v58; // rcx
  int SessionId; // eax
  __int64 v60; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v62; // r15
  signed __int32 v63; // eax
  unsigned int v64; // r9d
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // ecx
  ULONG_PTR v69; // rdx
  __int64 v70; // rcx
  int v71; // r8d
  char v72; // r8
  _BYTE *v73; // rcx
  char v74; // dl
  signed __int32 v75; // ecx
  signed __int32 v76; // ett
  volatile signed __int32 *v77; // r12
  volatile signed __int32 **v78; // rax
  char v79; // r12
  struct _SINGLE_LIST_ENTRY *v80; // rdx
  __int64 v81; // r12
  volatile signed __int32 *v82; // rcx
  volatile signed __int32 **v83; // rax
  char v84; // al
  char v85; // al
  __m128i *WakeupLockEntry; // rax
  __int64 v87; // r9
  int v88; // r11d
  unsigned int v89; // r15d
  void *SpecialPool; // rax
  void *v91; // r12
  size_t v92; // r14
  __int64 v93; // rax
  int v94; // edx
  __int64 v95; // r10
  __int64 v96; // r9
  unsigned int v97; // ebx
  unsigned int v98; // ecx
  __int64 v99; // rsi
  int v100; // eax
  int v101; // ecx
  __int64 AbOrphanedEntrySummary; // rax
  __int64 v103; // r9
  char IsThreadRunning; // al
  __int64 v105; // r9
  _QWORD *v106; // rdx
  __int64 v107; // rcx
  char v108; // al
  int v109; // r9d
  __int64 *v110; // r8
  char v111; // al
  int v112; // esi
  __int64 v113; // rax
  __int64 v114; // r8
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  int v120; // [rsp+30h] [rbp-69h]
  struct _KPRCB *v121; // [rsp+30h] [rbp-69h]
  int v122; // [rsp+30h] [rbp-69h]
  __int64 v123; // [rsp+38h] [rbp-61h]
  char *v124; // [rsp+38h] [rbp-61h]
  __int64 v125; // [rsp+38h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v126; // [rsp+40h] [rbp-59h] BYREF
  struct _KPRCB *v127; // [rsp+58h] [rbp-41h]
  unsigned int v128; // [rsp+60h] [rbp-39h] BYREF
  int Priority; // [rsp+64h] [rbp-35h]
  __int64 v130; // [rsp+68h] [rbp-31h]
  int v131; // [rsp+70h] [rbp-29h]
  volatile signed __int32 *v132; // [rsp+78h] [rbp-21h]
  __int64 v133; // [rsp+80h] [rbp-19h]
  __int64 v134; // [rsp+88h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+90h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned int BugCheckParameter3; // [rsp+100h] [rbp+67h]
  int BugCheckParameter3a; // [rsp+100h] [rbp+67h]
  unsigned int BugCheckParameter3b; // [rsp+100h] [rbp+67h]
  unsigned int v141; // [rsp+118h] [rbp+7Fh]
  int v142; // [rsp+118h] [rbp+7Fh]
  __int64 v143; // [rsp+118h] [rbp+7Fh]
  __int64 v144; // [rsp+118h] [rbp+7Fh]

  v5 = NumberOfBytes;
  v6 = PoolType;
  if ( (PoolType & 0x44) == 0x44 )
    v6 = PoolType & 0xFFFFFFFB;
  v7 = v6 & 1;
  if ( (v6 & 0x20) == 0 )
  {
    v8 = PoolVector[v6 & 1];
    goto LABEL_5;
  }
  if ( (v6 & 1) != 0 )
  {
    v8 = MiSessionPoolVector(PoolType, NumberOfBytes, Tag);
LABEL_5:
    if ( (v6 & 1) != 0 )
      goto LABEL_6;
    goto LABEL_38;
  }
  v8 = PoolVector[0];
LABEL_38:
  if ( (v6 & 0x200) == 0 )
  {
    if ( (ExpPoolFlags & 0x400) != 0 )
      v6 |= 0x200u;
    else
      v8 += 4416LL;
  }
LABEL_6:
  if ( (ExpPoolFlags & 8) != 0 )
  {
    if ( (v6 & 0x80000080) == 0 )
      return (PVOID)VeAllocatePoolWithTagPriority(v6, NumberOfBytes, Tag, HighPoolPriority, retaddr);
    v6 &= ~0x80u;
  }
  v9 = Tag & 0x7FFFFFFF;
  if ( !v9 )
    v9 = 811884866;
  v10 = 2LL;
  if ( !MmSpecialPoolTag || !ExpUseSpecialPool(v5, v9) )
  {
LABEL_10:
    if ( v5 > 0xFE0 )
    {
      result = (PVOID)ExpAllocateBigPool(0LL, v6, v5, v9, 0);
      if ( result )
        return result;
LABEL_253:
      ++ExPoolFailures;
      if ( (v6 & 2) != 0 )
      {
        v112 = v6 & 0x200;
        v113 = 0LL;
        if ( !v112 )
          v113 = 552LL;
        v114 = qword_14039EAD0[v113];
        v115 = 0LL;
        if ( !v112 )
          v115 = 552LL;
        v116 = qword_14039EA90[v115];
        v117 = 0LL;
        if ( !v112 )
          v117 = 552LL;
        v118 = qword_14039EAC8[v117];
        v119 = 0LL;
        if ( !v112 )
          v119 = 552LL;
        KeBugCheckEx(
          0x41u,
          v5,
          (unsigned int)qword_14039EA88[v119] - (unsigned int)v118,
          (unsigned int)(v116 - v114),
          0LL);
      }
      if ( (v6 & 0x10) != 0 )
        RtlRaiseStatus(-1073741670);
      return 0LL;
    }
    if ( !v5 )
      LODWORD(v5) = 1;
    v11 = v5 + 31;
    if ( (v6 & 4) != 0 )
    {
      v65 = ExpCacheLineSize + ((v5 + 31) & 0xFFFFFFF0) - 1;
      if ( ExpCacheLineSize == 64 )
        v66 = v65 >> 6;
      else
        v66 = v65 / ExpCacheLineSize;
      v67 = ExpCacheLineSize * (v66 + 1);
      if ( v67 > 0xFE0 )
        v6 &= ~4u;
      else
        v11 = v67;
    }
    v12 = v11 >> 4;
    LODWORD(v127) = v12;
    if ( v7 )
    {
      if ( (v6 & 0x20) != 0 )
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
      else if ( v6 >= NonPagedPool )
      {
        if ( v12 <= 0x20 )
        {
          v13 = &KeGetCurrentPrcb()->PPNPagedLookasideList[v12 + 31];
          ++v13->TotalAllocates;
          v14 = RtlpInterlockedPopEntrySList(&v13->ListHead);
          if ( v14 )
          {
LABEL_19:
            BugCheckParameter4 = (ULONG_PTR)&v14[-1];
            v16 = *(_QWORD *)(BugCheckParameter4 + 8);
            if ( v16 != (BugCheckParameter4 ^ ExpPoolQuotaCookie) )
              KeBugCheckEx(0x19u, 0xEuLL, BugCheckParameter4, v16, BugCheckParameter4 ^ ExpPoolQuotaCookie);
            ++v13->AllocateMisses;
            *(_BYTE *)(BugCheckParameter4 + 3) = v6 & 0x6D | 2;
            goto LABEL_21;
          }
          v10 = 2LL;
        }
        if ( (unsigned __int16)KeNumberNodes <= 1u
          || (v64 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0], v64 >= ExpNumberOfPagedPools) )
        {
          v3 = 1LL;
          BugCheckParameter3 = 1;
          if ( ExpNumberOfPagedPools != 1 )
          {
            v3 = (unsigned int)(ExpPoolIndex + 1);
            if ( (unsigned int)v3 > ExpNumberOfPagedPools )
              v3 = 1LL;
            v71 = v3;
            ExpPoolIndex = v3;
            do
            {
              if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v3] + 16) )
                break;
              v3 = (unsigned int)(v3 + 1);
              if ( (unsigned int)v3 > ExpNumberOfPagedPools )
                v3 = 1LL;
            }
            while ( (_DWORD)v3 != v71 );
            BugCheckParameter3 = v3;
          }
          v8 = ExpPagedPoolDescriptor[(unsigned int)v3];
        }
        else
        {
          v3 = v64 + 1;
          BugCheckParameter3 = v3;
          v8 = ExpPagedPoolDescriptor[(unsigned int)v3];
        }
        goto LABEL_52;
      }
    }
    else
    {
      if ( v12 <= 0x20 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = v12 - 1;
        if ( (v6 & 0x200) != 0 )
          v29 = v28 + 24;
        else
          v29 = v28 + 56;
        ++*((_DWORD *)&CurrentPrcb->NextThread + 24 * v29 + 1);
        v13 = (_GENERAL_LOOKASIDE_POOL *)((char *)CurrentPrcb + 96 * v29);
        v14 = RtlpInterlockedPopEntrySList(&v13->ListHead);
        if ( v14 )
          goto LABEL_19;
        v10 = 2LL;
      }
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        v3 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
        BugCheckParameter3 = v3;
        if ( (unsigned int)v3 >= ExpNumberOfNonPagedPools )
        {
          v3 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
          BugCheckParameter3 = ExpNumberOfNonPagedPools - 1;
        }
        v8 = ExpNonPagedPoolDescriptor[v3];
        if ( (v6 & 0x200) == 0 )
          v8 += 4416LL;
        goto LABEL_52;
      }
    }
    BugCheckParameter3 = 0;
LABEL_52:
    v142 = 0;
    v30 = v6 & 1;
    v31 = (_QWORD **)(v8 + 16 * (v12 - 1 + 20LL));
    v130 = (__int64)v31;
    while ( 1 )
    {
      v32 = v31;
      v33 = (unsigned int)v127;
      do
      {
        if ( *v32 == v32 )
          goto LABEL_55;
        v41 = v30 == 0;
        v42 = (volatile signed __int32 *)(v8 + 8);
        if ( !v41 )
        {
          v128 = 0;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          if ( ++CurrentThread->AbAllocationRegionCount != 1 )
            KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 8, KeGetCurrentIrql(), 0LL);
          if ( CurrentThread->AbEntrySummary )
          {
LABEL_91:
            AbEntrySummary = CurrentThread->AbEntrySummary;
            _BitScanForward((unsigned int *)&v56, AbEntrySummary);
            v131 = v56;
            CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v56);
            v57 = 96 * v56 + 800;
            v41 = (struct _KTHREAD *)((char *)CurrentThread + v57) == 0LL;
            v58 = (char *)CurrentThread + v57;
            v124 = v58;
            if ( !v41 )
            {
              if ( (unsigned __int64)v42 >= 0xFFFF800000000000uLL
                && byte_1403899D0[(((unsigned __int64)v42 >> 39) & 0x1FF) - 256] == 1 )
              {
                SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
                v58 = v124;
              }
              else
              {
                SessionId = -1;
              }
              *((_DWORD *)v58 + 10) = SessionId;
              *((_QWORD *)v58 + 4) = (unsigned __int64)v42 & 0x7FFFFFFFFFFFFFFCLL;
              goto LABEL_96;
            }
          }
          else
          {
            if ( CurrentThread->AbOrphanedEntrySummary )
            {
              AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
              CurrentThread->AbOrphanedEntrySummary = 0;
              CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
              goto LABEL_91;
            }
            v124 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, v8 + 8);
          }
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_96:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v8 + 8, &v128);
          v41 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v41
            && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v60);
          }
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset(v42, 0) )
            ExpAcquireFastMutexContended(v8 + 8, (PRTL_BALANCED_NODE)v124);
          if ( v124 )
            v124[26] |= 1u;
          *(_QWORD *)(v8 + 16) = KeGetCurrentThread();
          *(_DWORD *)(v8 + 56) = CurrentIrql;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
          goto LABEL_70;
        }
        v126.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 8);
        v126.LockQueue.Next = 0LL;
        v43 = KeGetCurrentIrql();
        __writecr8(v10);
        v126.OldIrql = v43;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)&v126, (volatile __int64 *)(v8 + 8));
        }
        else
        {
          v44 = _InterlockedExchange64((volatile __int64 *)v42, (__int64)&v126);
          if ( v44 )
            KxWaitForLockOwnerShip((__int64)&v126, (_QWORD *)v44);
        }
LABEL_70:
        if ( *v32 != v32 )
        {
          v45 = (_QWORD **)*v32;
          v46 = (_QWORD *)**v32;
          if ( (_QWORD **)(*v32)[1] != v32 || (_QWORD **)v46[1] != v45 )
            __fastfail(3u);
          *v32 = v46;
          v46[1] = v32;
          BugCheckParameter4 = (ULONG_PTR)(v45 - 2);
          v47 = *((unsigned __int8 *)v45 - 15);
          if ( (_DWORD)v47 != BugCheckParameter3 )
            KeBugCheckEx(0x19u, 0x23uLL, v47, BugCheckParameter3, BugCheckParameter4);
          if ( (unsigned __int8)*(_WORD *)(BugCheckParameter4 + 2) != (_DWORD)v33 )
          {
            if ( *(_BYTE *)BugCheckParameter4 )
            {
              *(_BYTE *)(BugCheckParameter4 + 2) -= v33;
              v44 = BugCheckParameter4;
              v48 = *(_BYTE *)(BugCheckParameter4 + 2);
              BugCheckParameter4 += 16LL * (unsigned __int8)*(_WORD *)(BugCheckParameter4 + 2);
              *(_BYTE *)BugCheckParameter4 = v48;
              v49 = (_BYTE *)(BugCheckParameter4 + 16 * v33);
              if ( ((unsigned __int16)v49 & 0xFFF) != 0 )
                *v49 = v33;
            }
            else
            {
              v72 = *(_BYTE *)(BugCheckParameter4 + 2) - v33;
              v44 = BugCheckParameter4 + 16 * v33;
              *(_BYTE *)(v44 + 2) = v72;
              v73 = (_BYTE *)(v44 + 16LL * (unsigned __int8)*(_WORD *)(v44 + 2));
              *(_BYTE *)v44 = v33;
              if ( ((unsigned __int16)v73 & 0xFFF) != 0 )
                *v73 = v72;
            }
            *(_BYTE *)(BugCheckParameter4 + 2) = v33;
            *(_BYTE *)(BugCheckParameter4 + 1) = BugCheckParameter3;
            *(_BYTE *)(v44 + 3) = 0;
            v50 = *(_WORD *)(v44 + 2);
            *(_DWORD *)(v44 + 4) = 1701147206;
            *(_BYTE *)(v44 + 1) = BugCheckParameter3;
            if ( (_BYTE)v50 != 1 )
            {
              v44 += 16LL;
              v51 = v8 + 16 * ((unsigned int)(unsigned __int8)v50 - 1 + 20LL);
              v52 = *(__int64 **)(v51 + 8);
              if ( *v52 != v51 )
                __fastfail(3u);
              *(_QWORD *)v44 = v51;
              *(_QWORD *)(v44 + 8) = v52;
              *v52 = v44;
              *(_QWORD *)(v51 + 8) = v44;
            }
          }
          *(_BYTE *)(BugCheckParameter4 + 3) = v6 & 0x6D | 2;
          if ( v6 < NonPagedPool )
          {
            memset(
              (void *)(BugCheckParameter4 + 16),
              0,
              16LL * (unsigned __int8)*(_WORD *)(BugCheckParameter4 + 2) - 16);
            *(_DWORD *)(BugCheckParameter4 + 4) = v9;
          }
          if ( (v6 & 1) == 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v126, retaddr);
            }
            else
            {
              _m_prefetchw(&v126);
              Next = (__int64)v126.LockQueue.Next;
              if ( !v126.LockQueue.Next )
              {
                if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)v126.LockQueue.Lock,
                                                     0LL,
                                                     (signed __int64)&v126) == &v126 )
                  goto LABEL_87;
                Next = KxWaitForLockChainValid((__int64 *)&v126);
              }
              v126.LockQueue.Next = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            }
LABEL_87:
            __writecr8(v126.OldIrql);
LABEL_88:
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(v8 + 88),
              16LL * (unsigned __int8)*(_WORD *)(BugCheckParameter4 + 2));
LABEL_21:
            v17 = 16LL * (unsigned __int8)*(_WORD *)(BugCheckParameter4 + 2);
            *(_DWORD *)(BugCheckParameter4 + 4) = v9;
            if ( v9 == PoolHitTag )
              __debugbreak();
            if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
              EtwTracePool(0xE20u, v6, v9, BugCheckParameter4 + 16, v17);
            v18 = v6 & 0x20;
            if ( (v6 & 0x20) != 0 )
            {
              v21 = ExpSessionPoolTrackTable;
              v19 = ExpSessionPoolTrackTableMask;
              v20 = ExpSessionPoolTrackTableSize;
            }
            else
            {
              v19 = PoolTrackTableMask;
              v20 = PoolTrackTableSize;
              v21 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
            }
            v123 = v20;
            v120 = v19;
            v22 = v19 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
            v23 = v22;
            v141 = v22;
            while ( 1 )
            {
              v24 = 56LL * v22;
              v25 = *(_DWORD *)(v24 + v21);
              if ( v25 == v9 )
              {
                if ( (v6 & 1) != 0 )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v24 + v21 + 40));
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + v21 + 32), v17);
                }
                else
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v24 + v21 + 16));
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + v21 + 8), v17);
                }
                goto LABEL_34;
              }
              if ( v25 )
                goto LABEL_30;
              if ( !v18 )
              {
                v88 = *(_DWORD *)(v24 + PoolTrackTable);
                if ( v88 )
                {
                  *(_DWORD *)(v24 + v21) = v88;
                  continue;
                }
              }
              if ( v22 == v20 - 1 )
              {
LABEL_30:
                v22 = v19 & (v22 + 1);
                if ( v22 == v23 )
                {
                  ExpInsertPoolTrackerExpansion(v9, v17, v6);
LABEL_34:
                  if ( (v6 & 4) != 0 )
                  {
                    *(_BYTE *)(BugCheckParameter4 + 3) &= ~4u;
                    v68 = (ExpCacheLineSize - 1) & (-16 - BugCheckParameter4);
                    if ( v68 )
                    {
                      v69 = BugCheckParameter4 + v68;
                      v70 = (__int64)v68 >> 4;
                      *(_BYTE *)v69 = v70;
                      *(_BYTE *)(v69 + 2) = *(_BYTE *)(BugCheckParameter4 + 2) - v70;
                      *(_BYTE *)(v69 + 1) = *(_BYTE *)(BugCheckParameter4 + 1);
                      *(_BYTE *)(v69 + 3) = *(_BYTE *)(BugCheckParameter4 + 3) | 4;
                      *(_DWORD *)(v69 + 4) = *(_DWORD *)(BugCheckParameter4 + 4);
                      if ( (unsigned __int8)*(_WORD *)v69 > 1u )
                        *(_QWORD *)(BugCheckParameter4 + 16) = ExpPoolQuotaCookie ^ v69;
                      BugCheckParameter4 = v69;
                    }
                  }
                  result = (PVOID)(BugCheckParameter4 + 16);
                  *(_QWORD *)(BugCheckParameter4 + 16) = 0LL;
                  return result;
                }
              }
              else if ( v18 )
              {
                _InterlockedCompareExchange((volatile signed __int32 *)(v24 + v21), v9, 0);
              }
              else
              {
                KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
                if ( !*(_DWORD *)(v24 + PoolTrackTable) )
                {
                  *(_DWORD *)(v24 + PoolTrackTable) = v9;
                  *(_DWORD *)(v24 + v21) = v9;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
                v18 = v6 & 0x20;
                v19 = v120;
                v23 = v141;
                v20 = v123;
              }
            }
          }
          LOBYTE(v44) = 1;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), v44);
          v62 = *(_BYTE *)(v8 + 56);
          *(_QWORD *)(v8 + 16) = 0LL;
          v63 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), 1, 0);
          if ( !v63 )
            goto LABEL_105;
          do
          {
            v74 = 0;
            v75 = v63 + 1;
            if ( (v63 & 2) == 0 )
            {
              v75 = v63 - 1;
              v74 = 1;
            }
            v76 = v63;
            v63 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v75, v63);
          }
          while ( v76 != v63 );
          if ( !v74 )
          {
LABEL_105:
            __writecr8(v62);
            KeAbPostRelease(v8 + 8);
            goto LABEL_88;
          }
          v77 = (volatile signed __int32 *)(v8 + 32);
          Priority = KeGetCurrentThread()->Priority;
          v133 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v121 = KeGetCurrentPrcb();
          KiAcquireKobjectLockSafe((volatile signed __int32 *)(v8 + 32));
          BugCheckParameter3a = 0;
          *(_DWORD *)(v8 + 36) = 1;
          v78 = *(volatile signed __int32 ***)(v8 + 40);
          if ( v78 == (volatile signed __int32 **)(v8 + 40) )
          {
LABEL_141:
            _InterlockedAnd(v77, 0xFFFFFF7F);
            v79 = Priority;
            if ( Priority )
            {
              v80 = v121->DeferredReadyListHead.Next;
              if ( v80 )
              {
                WakeupLockEntry = KiAbFindWakeupLockEntry(v8 + 8, (__int64)&v80[-27]);
                if ( WakeupLockEntry )
                  KiAbApplyWakeupBoost(v79, (__int64)WakeupLockEntry, 1LL, v87);
              }
            }
            KiExitDispatcher((__int64)v121, 0LL, 1u, 1u, v133);
            goto LABEL_105;
          }
          while ( 2 )
          {
            v81 = (__int64)v78;
            v132 = *v78;
            v82 = *v78;
            v83 = (volatile signed __int32 **)v78[1];
            if ( *((_QWORD *)v82 + 1) != v81 || *v83 != (volatile signed __int32 *)v81 )
              __fastfail(3u);
            *v83 = v82;
            *((_QWORD *)v82 + 1) = v83;
            v84 = *(_BYTE *)(v81 + 16);
            if ( v84 == 1 )
            {
              v85 = KiTryUnwaitThread((__int64)v121, v81, *(unsigned __int16 *)(v81 + 18), &v134);
              v77 = (volatile signed __int32 *)(v8 + 32);
              if ( v85 )
              {
                v41 = (*(_DWORD *)(v8 + 36))-- == 1;
                if ( v41 )
                  goto LABEL_141;
              }
              goto LABEL_248;
            }
            if ( v84 == 2 )
            {
              *(_BYTE *)(v81 + 17) = 5;
              v144 = *(_QWORD *)(v81 + 24);
              *(_QWORD *)v81 = 0LL;
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v127 = KeGetCurrentPrcb();
              v103 = (__int64)v127->CurrentThread;
              v130 = v103;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v103);
                EtwTraceEnqueueWork(v105, v81, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v144);
              v106 = (_QWORD *)(v144 + 8);
              v107 = v144;
              if ( (_QWORD *)*v106 == v106 || *(_DWORD *)(v144 + 40) >= *(_DWORD *)(v144 + 44) )
              {
LABEL_240:
                v109 = *(_DWORD *)(v107 + 4);
                *(_DWORD *)(v107 + 4) = v109 + 1;
                v110 = *(__int64 **)(v107 + 32);
                if ( *v110 != v107 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v81 = v107 + 24;
                *(_QWORD *)(v81 + 8) = v110;
                *v110 = v81;
                *(_QWORD *)(v107 + 32) = v81;
                if ( !v109 && (_QWORD *)*v106 != v106 )
                {
                  KiWakeOtherQueueWaiters((__int64)v127, v107);
                  v107 = v144;
                }
              }
              else
              {
                if ( *(_QWORD *)(v130 + 232) == v144 && *(_BYTE *)(v130 + 643) == 15 )
                {
                  v106 = (_QWORD *)(v144 + 8);
                  goto LABEL_240;
                }
                v108 = KiWakeQueueWaiter((__int64)v127, v144, v81);
                v107 = v144;
                if ( !v108 )
                {
                  v106 = (_QWORD *)(v144 + 8);
                  goto LABEL_240;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v107, 0xFFFFFF7F);
              v41 = (*(_DWORD *)(v8 + 36))-- == 1;
              v77 = (volatile signed __int32 *)(v8 + 32);
              if ( v41 )
                goto LABEL_141;
            }
            else
            {
              v111 = KiTryUnwaitThread((__int64)v121, v81, 256LL, 0LL);
              v77 = (volatile signed __int32 *)(v8 + 32);
              if ( v111 )
                --BugCheckParameter3a;
            }
LABEL_248:
            v78 = (volatile signed __int32 **)v132;
            if ( v132 == v77 + 2 )
              goto LABEL_141;
            continue;
          }
        }
        if ( (v6 & 1) != 0 )
        {
          LOBYTE(v44) = 1;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), v44);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 8));
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v126);
          __writecr8(v126.OldIrql);
        }
        v30 = v6 & 1;
LABEL_55:
        v32 += 2;
        v10 = 2LL;
      }
      while ( v32 != (_QWORD **)(v8 + 4416) );
      v5 = 4096LL;
      PoolPages = MiAllocatePoolPages(v6 & 0x80000221, 0x1000uLL, 0xFFFF800000000000uLL, v3);
      BugCheckParameter4 = PoolPages;
      if ( PoolPages )
      {
        if ( v6 < NonPagedPool )
        {
          memset((void *)(PoolPages + 16), 0, (unsigned int)(16 * v33 - 16));
          *(_DWORD *)(BugCheckParameter4 + 4) = v9;
        }
        *(_DWORD *)BugCheckParameter4 = 0;
        *(_BYTE *)(BugCheckParameter4 + 1) = BugCheckParameter3;
        *(_BYTE *)(BugCheckParameter4 + 2) = v33;
        *(_BYTE *)(BugCheckParameter4 + 3) = v6 & 0x6D | 2;
        v35 = BugCheckParameter4 + 16 * v33;
        *(_DWORD *)v35 = 0;
        *(_BYTE *)(v35 + 2) = -(char)v33;
        *(_BYTE *)v35 = v33;
        *(_BYTE *)(v35 + 1) = BugCheckParameter3;
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 72));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 88), (unsigned int)(16 * v33));
        if ( *(_BYTE *)(v35 + 2) != 1 )
        {
          v36 = (struct _FAST_MUTEX *)(v8 + 8);
          if ( (_DWORD)v30 )
          {
            ExAcquireFastMutex(v36);
            PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v36, &v126);
          }
          v38 = (__int64 *)(v35 + 16);
          v39 = v8 + 16 * ((unsigned int)(256 - v33 - 1) + 20LL);
          v40 = *(__int64 ***)(v39 + 8);
          if ( *v40 != (__int64 *)v39 )
            __fastfail(3u);
          *v38 = v39;
          v38[1] = (__int64)v40;
          *v40 = v38;
          *(_QWORD *)(v39 + 8) = v38;
          if ( !(_DWORD)v30 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v126);
            __writecr8(v126.OldIrql);
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
            goto LABEL_21;
          }
          LOBYTE(v37) = 1;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), v37);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 8));
        }
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
        goto LABEL_21;
      }
      if ( ++v142 != 1 || (ExpPoolFlags & 0x100) == 0 )
        goto LABEL_253;
      ExDeferredFreePool((_DWORD *)v8, 0);
      v31 = (_QWORD **)v130;
      v10 = 2LL;
    }
  }
  v89 = v6 & 0xFFFFFFDF;
  if ( (v6 & 0x21) != 0x20 )
    v89 = v6;
  SpecialPool = (void *)MmAllocateSpecialPool(v5, v9, v89, v10);
  v91 = SpecialPool;
  if ( !SpecialPool )
  {
    v10 = 2LL;
    goto LABEL_10;
  }
  v92 = v5 - 8;
  if ( (v6 & 0x40) == 0 )
    v92 = v5;
  if ( v6 < NonPagedPool )
    memset(SpecialPool, 0, v92);
  if ( v9 == PoolHitTag )
    __debugbreak();
  v93 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v89, v9, (unsigned __int64)v91, v92);
  if ( (v89 & 0x20) != 0 )
  {
    v96 = ExpSessionPoolTrackTable;
    v94 = ExpSessionPoolTrackTableMask;
    v95 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v93) = KeGetPcr()->Prcb.Number;
    v94 = PoolTrackTableMask;
    v95 = PoolTrackTableSize;
    v96 = (__int64)*(&ExPoolTagTables + v93);
  }
  v125 = v95;
  v122 = v94;
  v143 = v96;
  v97 = v94 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
  v98 = v97;
  BugCheckParameter3b = v97;
  while ( 1 )
  {
    v99 = 56LL * v97;
    v100 = *(_DWORD *)(v96 + v99);
    if ( v100 == v9 )
      break;
    if ( v100 )
    {
LABEL_214:
      v97 = v94 & (v97 + 1);
      if ( v97 == v98 )
      {
        ExpInsertPoolTrackerExpansion(v9, v92, v89);
        goto LABEL_219;
      }
    }
    else
    {
      if ( (v89 & 0x20) != 0 )
        goto LABEL_208;
      v101 = *(_DWORD *)(v99 + PoolTrackTable);
      if ( v101 )
      {
        *(_DWORD *)(v96 + 56LL * v97) = v101;
        v98 = BugCheckParameter3b;
      }
      else
      {
        v98 = BugCheckParameter3b;
LABEL_208:
        if ( v97 == v95 - 1 )
          goto LABEL_214;
        if ( (v89 & 0x20) != 0 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v96 + v99), v9, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v135);
          if ( !*(_DWORD *)(v99 + PoolTrackTable) )
          {
            *(_DWORD *)(v99 + PoolTrackTable) = v9;
            *(_DWORD *)(v143 + 56LL * v97) = v9;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
          __writecr8(v135.OldIrql);
          v94 = v122;
          v96 = v143;
          v95 = v125;
          v98 = BugCheckParameter3b;
        }
      }
    }
  }
  if ( (v89 & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v96 + v99 + 40));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v96 + v99 + 32), v92);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v96 + v99 + 16));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v96 + v99 + 8), v92);
  }
LABEL_219:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return v91;
}

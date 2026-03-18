/*
 * XREFs of ExAcquirePushLockSharedEx @ 0x1400F0920
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140003DE8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14000B990 (FsRtlLookupPerFileObjectContext.c)
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400250F8 (CcGetVirtualAddressIfMapped.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14002F340 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     PspNotifyProcessBackgroundTransition @ 0x1400323A0 (PspNotifyProcessBackgroundTransition.c)
 *     RtlpLookupUserFunctionTable @ 0x14003486C (RtlpLookupUserFunctionTable.c)
 *     PopDiagTraceFxRundown @ 0x140034E50 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140034FA8 (PopThermalTraceRundownEvents.c)
 *     ObpLockDirectoryShared @ 0x140044324 (ObpLockDirectoryShared.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140055720 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14005D638 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     SmpKeyedStoreReference @ 0x140062340 (SmpKeyedStoreReference.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 *     PoFxPrepareDevice @ 0x14006776C (PoFxPrepareDevice.c)
 *     PopFxResidentTimeoutRoutine @ 0x140068C50 (PopFxResidentTimeoutRoutine.c)
 *     PopPepWork @ 0x140069FFC (PopPepWork.c)
 *     sub_14006B210 @ 0x14006B210 (sub_14006B210.c)
 *     PpmIdleUsingStateSelection @ 0x14006FA48 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x14006FAA4 (PoFxSystemLatencyNotify.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14007C6D8 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14007E5E0 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PoGetIdleTimes @ 0x140088C1C (PoGetIdleTimes.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140093C70 (SeComputeAutoInheritByObjectTypeEx.c)
 *     MiObtainReferencedSecureVad @ 0x140099160 (MiObtainReferencedSecureVad.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400CE400 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14011B030 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011FD90 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x140121508 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 *     PopThermalSxExit @ 0x1401387EC (PopThermalSxExit.c)
 *     PopThermalSxEntry @ 0x14013C6B4 (PopThermalSxEntry.c)
 *     PopFxIdleDevicesFromSx @ 0x14013C8A0 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x14013C9AC (PopFxActivateDevicesForSx.c)
 *     PopFxRegisterDeviceWithPep @ 0x14015ECD4 (PopFxRegisterDeviceWithPep.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14015EFF8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PoFxStartDevicePowerManagement @ 0x1401624F0 (PoFxStartDevicePowerManagement.c)
 *     PopPepInsertDevice @ 0x1401630DC (PopPepInsertDevice.c)
 *     PopFxLowPowerEpochCallback @ 0x140166960 (PopFxLowPowerEpochCallback.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1401682C0 (PopThermalPollingPowerSettingCallback.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E1000 (HvpViewMapAcquireLockShared.c)
 *     FsRtlLookupPerFileContext @ 0x1401E4410 (FsRtlLookupPerFileContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401E44F0 (FsRtlLookupPerStreamContextInternal.c)
 *     PpmQueryPlatformStateResidency @ 0x140229004 (PpmQueryPlatformStateResidency.c)
 *     PopFxDeviceAccountingWatchdog @ 0x14022AAA4 (PopFxDeviceAccountingWatchdog.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x14022AD48 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPauseDeviceAccounting @ 0x14022B25C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14022BC4C (PopFxResumeDeviceAccounting.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14022BDAC (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopFxStartDeviceAccounting @ 0x14022BFEC (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x14022C150 (PopFxStopDeviceAccounting.c)
 *     PopPepIdleTimeoutRoutine @ 0x14022E770 (PopPepIdleTimeoutRoutine.c)
 *     PopPepPlatformStateRegistered @ 0x14022EE40 (PopPepPlatformStateRegistered.c)
 *     PopPepRemoveDevice @ 0x14022F0D0 (PopPepRemoveDevice.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14022F1B0 (PopPepResetDeviceAccountingLevel.c)
 *     PopThermalTelemetryWorker @ 0x14022F650 (PopThermalTelemetryWorker.c)
 *     PopFxAcpiPrepareDevice @ 0x140238100 (PopFxAcpiPrepareDevice.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140239AB0 (PspSetProcessTimerDelayForWin32.c)
 *     PspStorageGetObject @ 0x14023A8EC (PspStorageGetObject.c)
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140249F7C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14024A28C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14024E700 (SmKmVirtualLockCtxLockMemory.c)
 *     EtwpGetCompressionSettings @ 0x140257DD8 (EtwpGetCompressionSettings.c)
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14041D194 (AlpcpPortQueryServerSessionInfo.c)
 *     SeIsParentOfChildAppContainer @ 0x14041F820 (SeIsParentOfChildAppContainer.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14041F920 (PsQueryTotalCycleTimeProcess.c)
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140425B50 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140426B6C (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14042F794 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140430220 (AlpcpDispatchReplyToPort.c)
 *     PsReferenceImpersonationToken @ 0x140430AA0 (PsReferenceImpersonationToken.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 *     AlpcpCreateSectionView @ 0x140436460 (AlpcpCreateSectionView.c)
 *     AlpcpCreateSection @ 0x140436860 (AlpcpCreateSection.c)
 *     CmpGetCallbackObjectContext @ 0x140436E60 (CmpGetCallbackObjectContext.c)
 *     MiGetChannelInformation @ 0x14043CB04 (MiGetChannelInformation.c)
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14043D1E4 (CmpLockHashEntrySharedByKcb.c)
 *     NtAlpcDeleteSectionView @ 0x140442EE4 (NtAlpcDeleteSectionView.c)
 *     PspAssignProcessQuotaBlock @ 0x140448638 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140448804 (PspLookupProcessQuotaBlock.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140449BD8 (PiDmObjectGetCachedObjectReference.c)
 *     PfSnQueryPrefetcherInformation @ 0x140449D1C (PfSnQueryPrefetcherInformation.c)
 *     PopProcessorInformation @ 0x14044D5F4 (PopProcessorInformation.c)
 *     WdipTimeoutCheckRoutine @ 0x140454A00 (WdipTimeoutCheckRoutine.c)
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x140455E24 (ExUpdateLicenseRegistry.c)
 *     ExpGetNextCallback @ 0x14045AD40 (ExpGetNextCallback.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x14045D6C4 (ExpPutLicenseDataIntoRegistry.c)
 *     CmpEnumerateCallback @ 0x14045E600 (CmpEnumerateCallback.c)
 *     SepSetTokenLowboxNumber @ 0x140461FFC (SepSetTokenLowboxNumber.c)
 *     WdipSemDisableScenario @ 0x140467560 (WdipSemDisableScenario.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1404705E8 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpQueryRemoteView @ 0x140470DC0 (AlpcpQueryRemoteView.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140472A18 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpFlushMessagesPort @ 0x140473BC0 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14047400C (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14047478C (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404748C8 (AlpcpDispatchConnectionRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1404751D8 (NtAlpcOpenSenderProcess.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspEnforceLimits @ 0x140478970 (PspEnforceLimits.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140479260 (PspEnforceLimitsJobPostCallback.c)
 *     PsQueryStatisticsProcess @ 0x140479C70 (PsQueryStatisticsProcess.c)
 *     AlpcpLocateSectionView @ 0x14047A7F0 (AlpcpLocateSectionView.c)
 *     AlpcpEnumerateResourcesPort @ 0x14047A890 (AlpcpEnumerateResourcesPort.c)
 *     MiIsRangeFullyCommitted @ 0x14047B7F8 (MiIsRangeFullyCommitted.c)
 *     AlpcpCreateSecurityContext @ 0x14047C5D4 (AlpcpCreateSecurityContext.c)
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CEE0 (AlpcReferenceBlobByHandle.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     AlpcpReferenceConnectedPort @ 0x14047ECE0 (AlpcpReferenceConnectedPort.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     ObpCallPreOperationCallbacks @ 0x140481100 (ObpCallPreOperationCallbacks.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140485AF0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectIsEnumerable @ 0x1404881E4 (PiDmObjectIsEnumerable.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140488B58 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14048ADE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     CmpCheckNotifyAccess @ 0x14048E404 (CmpCheckNotifyAccess.c)
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 *     PsGetProcessDeepFreezeStats @ 0x1404996FC (PsGetProcessDeepFreezeStats.c)
 *     PspReferenceSystemDll @ 0x14049C278 (PspReferenceSystemDll.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1404A85DC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGetKernelDataProtection @ 0x1404AE3CC (ExpGetKernelDataProtection.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404AE480 (ExpGenuinePolicyCacheProvider.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     PopCurrentPowerState @ 0x1404C4460 (PopCurrentPowerState.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1404C7120 (PopAcquireUmpoPushLock.c)
 *     MmAcquireSessionPoolRundown @ 0x1404C7FE4 (MmAcquireSessionPoolRundown.c)
 *     CmpLockHiveListShared @ 0x1404CA4C8 (CmpLockHiveListShared.c)
 *     LockShutdownShared @ 0x1404CD430 (LockShutdownShared.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     CmpGetNextHive @ 0x1404D64B4 (CmpGetNextHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpGetLastHive @ 0x1404D861C (CmpGetLastHive.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1404E44B8 (PiDmListAddObject.c)
 *     PsQueryRuntimeProcess @ 0x1404EC620 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1404EC6F0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1404EC98C (ObpReferenceDeviceMap.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1404F1C0C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsGuidAllowed @ 0x1404F2BA0 (EtwpIsGuidAllowed.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404F4BD0 (ObpReferenceSecurityDescriptor.c)
 *     NtQueryObject @ 0x1404FAD40 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     SeCreateClientSecurityEx @ 0x14050AD10 (SeCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x14050C610 (PsReferenceImpersonationTokenEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     NtOpenProcessTokenEx @ 0x14050EFA0 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140523D60 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140524DE0 (AlpcpDispatchNewMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1405263E0 (PspChargeProcessWakeCounter.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x140526E80 (AlpcpReceiveSynchronousReply.c)
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x140534180 (CmpCallbackFillObjectContext.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     PsCaptureExceptionPort @ 0x14053F0F0 (PsCaptureExceptionPort.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 *     PspApplyJobLimitsToProcess @ 0x140549298 (PspApplyJobLimitsToProcess.c)
 *     PspGetNextJob @ 0x14054B100 (PspGetNextJob.c)
 *     PspGetPreviousProcessThread @ 0x14054EFE0 (PspGetPreviousProcessThread.c)
 *     EtwpGetNextGuidEntry @ 0x140552724 (EtwpGetNextGuidEntry.c)
 *     NtAlpcSetInformation @ 0x14055D284 (NtAlpcSetInformation.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PfpRpCHashDeleteEntries @ 0x140562254 (PfpRpCHashDeleteEntries.c)
 *     PfCheckDeprioritizeImage @ 0x140563FB4 (PfCheckDeprioritizeImage.c)
 *     PfSnIsHostingApplication @ 0x140564E38 (PfSnIsHostingApplication.c)
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140572228 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpLockHashEntryShared @ 0x1405726E4 (CmpLockHashEntryShared.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140574B50 (AlpcpMapLegacyPortRemoteView.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     PsChangeQuantumTable @ 0x1405839EC (PsChangeQuantumTable.c)
 *     WdipSemEnableScenario @ 0x140584544 (WdipSemEnableScenario.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140595E2C (PspSetProcessAffinityUpdateMode.c)
 *     PiDmListAddList @ 0x140599268 (PiDmListAddList.c)
 *     PspStorageInsertObject @ 0x1405A3ACC (PspStorageInsertObject.c)
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1405C668C (CmpGlobalLockKeyForWrite.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1405CE7C0 (ObIsDosDeviceLocallyMapped.c)
 *     ExpGetSystemPlatformBinary @ 0x1405D2774 (ExpGetSystemPlatformBinary.c)
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 *     CmSetCallbackObjectContext @ 0x140660300 (CmSetCallbackObjectContext.c)
 *     CmpLazyCommitWorker @ 0x140669230 (CmpLazyCommitWorker.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140679C08 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPreOpenOrCreate @ 0x14067CD10 (VrpPreOpenOrCreate.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14067DD84 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x14067E278 (VrpUnloadDifferencingHive.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 *     PiDmListRemoveList @ 0x1406975A4 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140697714 (PiDmListRemoveObject.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1406B1EDC (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1406B2164 (AlpcpPortQueryServerInfo.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406B26C4 (AlpcpInvokeLogCallbacks.c)
 *     ObpGetShadowDirectory @ 0x1406C0658 (ObpGetShadowDirectory.c)
 *     PopFxChildDevicesActive @ 0x1406C7620 (PopFxChildDevicesActive.c)
 *     PopFxFreeChildDevicesActiveList @ 0x1406C7804 (PopFxFreeChildDevicesActiveList.c)
 *     PopBatteryDeviceState @ 0x1406CA30C (PopBatteryDeviceState.c)
 *     PopBatteryEtwCallback @ 0x1406CA570 (PopBatteryEtwCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406CBA30 (PoThermalCounterSetCallback.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1406CBEE8 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PpmWmiGetAllData @ 0x1406CF948 (PpmWmiGetAllData.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1406D0004 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1406D0590 (PoQueryProcessEnergyTrackingState.c)
 *     PopEtGetNextEnergyTracker @ 0x1406D2724 (PopEtGetNextEnergyTracker.c)
 *     PopEtInternerLock @ 0x1406D2BC0 (PopEtInternerLock.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1406D2C20 (PopEtProcessEnumSnapshotCallback.c)
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 *     PsSwapProcessWorkingSet @ 0x1406DFE78 (PsSwapProcessWorkingSet.c)
 *     PspUpdateSingleProcessAffinity @ 0x1406E0A58 (PspUpdateSingleProcessAffinity.c)
 *     PspAssignPrimaryToken @ 0x1406E0B70 (PspAssignPrimaryToken.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406E1060 (PsReportProcessMemoryLimitViolation.c)
 *     PspMarkServerSiloAsTerminating @ 0x1406E3238 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1406E32E0 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406E33E8 (PspNotifyServerSiloTermination.c)
 *     SepIsValidProcUniqueLuid @ 0x1406F8570 (SepIsValidProcUniqueLuid.c)
 *     SmKmKeyGenGenerate @ 0x140702354 (SmKmKeyGenGenerate.c)
 *     SmcGetCacheStats @ 0x140704518 (SmcGetCacheStats.c)
 *     EtwpGetDisallowList @ 0x140709FDC (EtwpGetDisallowList.c)
 *     EtwDeleteSiloState @ 0x14070C6D8 (EtwDeleteSiloState.c)
 *     ExpSnapShotHandleTables @ 0x1407173E0 (ExpSnapShotHandleTables.c)
 *     ExFetchLicenseData @ 0x140717850 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x1407179A0 (ExGetLicenseTamperState.c)
 *     ExUpdateOsPfnInRegistry @ 0x140717D10 (ExUpdateOsPfnInRegistry.c)
 *     PopFanReportBootStartDevices @ 0x140825F90 (PopFanReportBootStartDevices.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall ExAcquirePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // ecx
  __int64 v6; // rax
  int v7; // eax
  __int16 v8; // ax
  __int64 result; // rax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // di
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v13 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_24;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v6, AbEntrySummary);
    v14 = v6;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    v2 = (__int64)&CurrentThread->LockEntries[v6];
    if ( v2 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1
        && (Process = CurrentThread->ApcState.Process, (v11 = Process[1].ActiveProcessors.Bitmap[2]) != 0)
        && Process != PsInitialSystemProcess )
      {
        v7 = *(_DWORD *)(v11 + 8);
      }
      else
      {
        v7 = -1;
      }
      *(_DWORD *)(v2 + 40) = v7;
      *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v13);
      v8 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v8;
      if ( !v8
        && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_13;
    }
LABEL_24:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_10;
  }
LABEL_13:
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return result;
}

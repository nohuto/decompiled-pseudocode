/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x14008F1B0
 * Callers:
 *     RtlpFreeHeap @ 0x14000EDEC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140036870 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     SepDesktopAppxSubProcessToken @ 0x140066484 (SepDesktopAppxSubProcessToken.c)
 *     MiProcessLoaderEntry @ 0x14006DF00 (MiProcessLoaderEntry.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14013600C (PnpUnregisterPlugPlayNotification.c)
 *     SepQueueWorkItem @ 0x140143418 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x1401481D0 (SepRmCallLsa.c)
 *     IoConfigureCrashDump @ 0x140159F78 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1401DDCA0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F11A4 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x1401FAA90 (PiSwIrpCancelStartCreate.c)
 *     RtlpSetupExtendedBlock @ 0x14023E200 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140246548 (SepInternalSetSecurityAttributesToken.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14025C060 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     PopAcquireAdaptiveLock @ 0x140420088 (PopAcquireAdaptiveLock.c)
 *     CmpTransWriteLog @ 0x14042CE64 (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x14042E67C (CmpAccountForLogReservation.c)
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x14042E8D4 (CmpTransMgrSyncHive.c)
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 *     HvpFinishPrimaryWrite @ 0x14043938C (HvpFinishPrimaryWrite.c)
 *     IoOpenDeviceRegistryKey @ 0x140443470 (IoOpenDeviceRegistryKey.c)
 *     PspJobNotificationWorker @ 0x14044A260 (PspJobNotificationWorker.c)
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     PspNotificationPacketCallback @ 0x14044D060 (PspNotificationPacketCallback.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14044E0A0 (IopSetDeviceSecurityDescriptor.c)
 *     IopDoDeferredSetInterfaceState @ 0x14044FA88 (IopDoDeferredSetInterfaceState.c)
 *     PiSwProcessParentStartIrp @ 0x140450F60 (PiSwProcessParentStartIrp.c)
 *     SepUpdateLogonSessionTrack @ 0x140454C24 (SepUpdateLogonSessionTrack.c)
 *     SepCreateLogonSessionTrack @ 0x14045672C (SepCreateLogonSessionTrack.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140457A84 (PiDcHandleCustomDeviceEvent.c)
 *     SeSetVirtualizationToken @ 0x140458B80 (SeSetVirtualizationToken.c)
 *     PspSetBackgroundJobTree @ 0x140458E30 (PspSetBackgroundJobTree.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140459530 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x14045BAC0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiSwPdoPnPDispatch @ 0x14045F1F0 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpSetLifetime @ 0x140460D68 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x140460F78 (PiSwIrpInterfaceRegister.c)
 *     IoSetDeviceInterfaceState @ 0x140461410 (IoSetDeviceInterfaceState.c)
 *     NtAdjustGroupsToken @ 0x14046D64C (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     SeSetMandatoryPolicyToken @ 0x14046E770 (SeSetMandatoryPolicyToken.c)
 *     SeSetSessionIdToken @ 0x14046E808 (SeSetSessionIdToken.c)
 *     SepReferenceLogonSessionSilo @ 0x14046F47C (SepReferenceLogonSessionSilo.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspCallJobHierarchyCallbacks @ 0x140478DC0 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140479260 (PspEnforceLimitsJobPostCallback.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140486BA8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140486D20 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PiDrvDbLoadNode @ 0x140489A54 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x140489BB8 (PiDrvDbUnloadNode.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     NtAdjustPrivilegesToken @ 0x14049CF30 (NtAdjustPrivilegesToken.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404A6548 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1404A6D00 (PnpNotifyDeviceClassChange.c)
 *     MmLockPagableDataSection @ 0x1404B2580 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x1404B2F94 (MiCancelPhase0Locking.c)
 *     PpCheckInDriverDatabase @ 0x1404B3D84 (PpCheckInDriverDatabase.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 *     CmpStopRMLog @ 0x1404CA850 (CmpStopRMLog.c)
 *     CmpBlockHiveWrites @ 0x1404D5900 (CmpBlockHiveWrites.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1404D83B0 (CmpBlockTwoHiveWrites.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     PpDeviceRegistration @ 0x1404D9BDC (PpDeviceRegistration.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404DD774 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404E2AA8 (_CmGetDeviceSoftwareKey.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E4180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x1404E4584 (PiDmListAddObjectWorker.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E4664 (PiDmAddCacheReferenceForObject.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140510380 (FsRtlAcquireFileExclusiveCommon.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     NtCreateTimer @ 0x14053EE40 (NtCreateTimer.c)
 *     PspLockJobChain @ 0x140545F4C (PspLockJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405471A8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockJobConditionally @ 0x14054755C (PspLockJobConditionally.c)
 *     PspLockRootJobFromProcess @ 0x140547770 (PspLockRootJobFromProcess.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14054BB34 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobsAndProcessExclusive @ 0x14054C4B8 (PspLockJobsAndProcessExclusive.c)
 *     PspGetNextJobProcess @ 0x14054D334 (PspGetNextJobProcess.c)
 *     IopGetRootDevices @ 0x14055973C (IopGetRootDevices.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x14055F98C (PspFreezeJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14055FCF4 (PspSetEnergyTrackingStateJobTree.c)
 *     PspJobClose @ 0x140560980 (PspJobClose.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x140560DC4 (PspLockRootJobExclusive.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140563990 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x140564F88 (PfSnCheckActionsNeeded.c)
 *     NtGetMUIRegistryInfo @ 0x140568580 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 *     PnpChainDereferenceComplete @ 0x14056D18C (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x14056D2C0 (PnpDelayedRemoveWorker.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14056D958 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpDisableDeviceInterfaces @ 0x14056E2A4 (PnpDisableDeviceInterfaces.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwIrpCleanup @ 0x140570744 (PiSwIrpCleanup.c)
 *     PiSwStopDestroy @ 0x140570B8C (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140570C2C (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405746C4 (PiSwIrpInterfacePropertySet.c)
 *     SepDeleteLogonSessionTrack @ 0x140579760 (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x1405799CC (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x14057A2F4 (WmiAcquireSmbiosLockExclusive.c)
 *     PiSwIrpPropertySet @ 0x14057D004 (PiSwIrpPropertySet.c)
 *     SepDeReferenceLogonSession @ 0x14057D950 (SepDeReferenceLogonSession.c)
 *     MiRememberUnloadedDriver @ 0x140583894 (MiRememberUnloadedDriver.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14058ECB4 (PiPnpRtlSetDeviceRegProperty.c)
 *     IoUnregisterFileSystem @ 0x14059B5D0 (IoUnregisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14059D090 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoRegisterFileSystem @ 0x14059D290 (IoRegisterFileSystem.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14059D9EC (DrvDbOpenDriverDatabaseRegKey.c)
 *     MiWriteProtectSystemImages @ 0x1405A2234 (MiWriteProtectSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x1405A8064 (MmFreeBootDriverInitializationCode.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PnpSetDevicePropertyData @ 0x1405B8E08 (PnpSetDevicePropertyData.c)
 *     IoInitializeCrashDump @ 0x1405BA5F8 (IoInitializeCrashDump.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BCF50 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1405BD2C8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405C4248 (PnpSetDeviceInterfacePropertyData.c)
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405C5890 (SepRmGlobalSaclSetWrkr.c)
 *     PpReleaseBootDDB @ 0x1405C6318 (PpReleaseBootDDB.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405CF2CC (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoEnumerateRegisteredFiltersList @ 0x1405D0AB0 (IoEnumerateRegisteredFiltersList.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1405D1220 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x1405D41F4 (NtFlushInstallUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     PiSwIrpInterfaceSetState @ 0x1405DA2A4 (PiSwIrpInterfaceSetState.c)
 *     NtCompressKey @ 0x14065EA94 (NtCompressKey.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 *     HvFoldBackUnreconciledData @ 0x14066C70C (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x140671674 (CmDumpKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 *     FsRtlCopyWrite @ 0x140684570 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140684F90 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x1406869D0 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x140686B80 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x1406887C0 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140689284 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x14068BE30 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x1406938D8 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x140693BA0 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x140693DA8 (PnpNotifyHwProfileChange.c)
 *     PiDmListRemoveObjectWorker @ 0x1406977E0 (PiDmListRemoveObjectWorker.c)
 *     PiSwIrpGetLifetime @ 0x1406A3270 (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406A5F64 (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     PopCancelDripsWatchdog @ 0x1406D4C44 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406D52E0 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x1406D5530 (PopSetDripsWatchdog.c)
 *     TtmpStopCallout @ 0x1406D7D40 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1406D8770 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1406D89A0 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1406D8DC4 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     TtmpSessionPowerControl @ 0x1406D9984 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1406D9A30 (TtmpSessionWorker.c)
 *     TtmpSetCsSessionGoal @ 0x1406D9C54 (TtmpSetCsSessionGoal.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1406D9D00 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406DA024 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x1406DA860 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1406DAAA4 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1406DAC1C (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x1406DADE0 (TtmpDeleteQueue.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1406DEAE8 (PspCreateSilo.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1406E15D4 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x1406E1C40 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x1406EB360 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x1406F0CA4 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x1406F0F14 (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x1406F6594 (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x1406F7430 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406F7524 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1406F764C (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1406F77FC (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x140715E58 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x140733FA4 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x140739AE0 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140744354 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14074764C (PnpGetDeviceInstanceRegistryValue.c)
 *     MiUnlockBootPageSections @ 0x140803A48 (MiUnlockBootPageSections.c)
 *     IopInitCrashDumpRegCallback @ 0x1408138F0 (IopInitCrashDumpRegCallback.c)
 *     MiInitializeKernelCfg @ 0x14082694C (MiInitializeKernelCfg.c)
 * Callees:
 *     ExpApplyPrewaitBoost @ 0x140025088 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x1400271B4 (ExpPrepareToWaitForResourceExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x140090240 (ExpTryAcquireResourceExclusive.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140255D0C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402561E0 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 v2; // r8
  USHORT Flag; // cx
  __int16 v6; // cx
  struct _KTHREAD *v7; // rbp
  bool v8; // si
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  BOOLEAN v12; // di
  ULONG v13; // ecx
  ULONG v15; // edi
  ULONG v16; // edi
  unsigned __int8 CurrentIrql; // r10
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v22[5]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v23; // [rsp+98h] [rbp+10h] BYREF

  Flag = Resource->Flag;
  LOBYTE(v2) = (Wait == 0) + 1;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v6 = Flag & 1;
  if ( v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > (unsigned __int8)v2 )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, (unsigned __int8)v2, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v6 )
  {
    v7 = KeGetCurrentThread();
    v8 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    __incgsdword(0x64B8u);
    v23 = 2;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v9 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, &Resource->SpinLock, &v23);
    }
    else
    {
      v9 = 0;
      v10 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&LockHandle);
      if ( v10 )
      {
        KxWaitForLockOwnerShipWithIrql(&LockHandle, v10, &v23);
        v9 = 1;
      }
    }
    if ( v9 )
    {
      _disable();
      __writecr8(v23);
    }
    v12 = ExpTryAcquireResourceExclusive(Resource, v10, v2);
    if ( v12 )
    {
      v13 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v7;
      Resource->OwnerEntry.TableSize = v13 | 8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x64BCu);
      __incgsdword(0x64A4u);
      if ( v8 )
        PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v12;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == v7 )
    {
      v15 = Resource->OwnerEntry.TableSize & 7 | ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
      Resource->OwnerEntry.TableSize = v15;
      v16 = v15 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x64C0u);
      __incgsdword(0x64A4u);
      if ( !v8 )
        return 1;
      v19 = v16;
      v20 = 65585LL;
    }
    else
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x64C8u);
        return 0;
      }
      ExpPrepareToWaitForResourceExclusive(v11, v22);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x64C4u);
      if ( v8 )
        PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
      ExpApplyPrewaitBoost();
      ExpWaitForResource(Resource, v22, 66084LL, ExpApplyRewaitBoost);
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v7;
      ExpBoostIoAfterAcquire(Resource, v7, 0LL);
      __incgsdword(0x64BCu);
      __incgsdword(0x64A4u);
      if ( !v8 )
        return 1;
      v19 = 1LL;
      v20 = 65569LL;
    }
    PerfLogExecutiveResourceAcquire(v20, Resource, v19, Resource->ContentionCount);
    return 1;
  }
  return ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
}

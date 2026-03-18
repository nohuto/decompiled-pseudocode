/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x14007FE20
 * Callers:
 *     MiProcessLoaderEntry @ 0x140015EC4 (MiProcessLoaderEntry.c)
 *     SepDesktopAppxSubProcessToken @ 0x1400198CC (SepDesktopAppxSubProcessToken.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400EF610 (FsRtlAcquireFileForModWriteEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1400F2DD0 (CcAcquireByteRangeForWrite.c)
 *     RtlpFreeHeap @ 0x14010D2BC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140126F40 (PnpUnregisterPlugPlayNotification.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x14012D070 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     SepQueueWorkItem @ 0x140133A70 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14014C140 (SepRmCallLsa.c)
 *     IoConfigureCrashDump @ 0x14014F6E4 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F6AF8 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x1402007B0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x140200D2C (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpSetupExtendedBlock @ 0x14025410C (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14025DC84 (SepInternalSetSecurityAttributesToken.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14025F174 (SeTokenSetNoChildProcessRestricted.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x140285980 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     PiSwIrpInterfacePropertySet @ 0x14044D7EC (PiSwIrpInterfacePropertySet.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140452FF8 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x140453444 (PfSnCheckActionsNeeded.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     NtAdjustGroupsToken @ 0x14045BE94 (NtAdjustGroupsToken.c)
 *     SepReferenceLogonSessionSilo @ 0x14045CEFC (SepReferenceLogonSessionSilo.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14049C600 (FsRtlAcquireFileExclusiveCommon.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     HvpFinishPrimaryWrite @ 0x1404E6964 (HvpFinishPrimaryWrite.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtCreateTimer @ 0x1404EBB0C (NtCreateTimer.c)
 *     NtGetMUIRegistryInfo @ 0x1404F25F8 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14050D218 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobChain @ 0x14050DF38 (PspLockJobChain.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 *     PspLockJobConditionally @ 0x140510BC0 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140510C18 (PspLockRootJobExclusive.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspLockJobsAndProcessExclusive @ 0x1405127BC (PspLockJobsAndProcessExclusive.c)
 *     PspFreezeJobTree @ 0x1405128B8 (PspFreezeJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x140512C00 (PspSetEnergyTrackingStateJobTree.c)
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x140516060 (MmLockPagableDataSection.c)
 *     MiCancelPhase0Locking @ 0x140516B34 (MiCancelPhase0Locking.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x140518454 (PiDmListAddObjectWorker.c)
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PnpSetDevicePropertyData @ 0x14052F3A8 (PnpSetDevicePropertyData.c)
 *     PiPnpRtlSetObjectProperty @ 0x14052F53C (PiPnpRtlSetObjectProperty.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1405337FC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140533894 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     PiDrvDbLoadNode @ 0x140533E84 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x140533FE8 (PiDrvDbUnloadNode.c)
 *     NtAdjustPrivilegesToken @ 0x1405398A0 (NtAdjustPrivilegesToken.c)
 *     PpCheckInDriverDatabase @ 0x14054466C (PpCheckInDriverDatabase.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14054D954 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x140553AF8 (PiSwProcessParentStartIrp.c)
 *     PpDeviceRegistration @ 0x140555454 (PpDeviceRegistration.c)
 *     IopDoDeferredSetInterfaceState @ 0x140555F3C (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x1405560B0 (IoSetDeviceInterfaceState.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14055CF88 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwStopDestroy @ 0x14055E5A8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x14055E648 (PiSwProcessParentRemoveIrp.c)
 *     SeSetSessionIdToken @ 0x140563A28 (SeSetSessionIdToken.c)
 *     IoOpenDeviceRegistryKey @ 0x14057EF40 (IoOpenDeviceRegistryKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x14058188C (_CmGetDeviceSoftwareKey.c)
 *     PnpNotifyDeviceClassChange @ 0x140585D88 (PnpNotifyDeviceClassChange.c)
 *     SeSetMandatoryPolicyToken @ 0x14058B13C (SeSetMandatoryPolicyToken.c)
 *     SepUpdateLogonSessionTrack @ 0x14058B2E4 (SepUpdateLogonSessionTrack.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14058E694 (IopSetDeviceSecurityDescriptor.c)
 *     CmpStopRMLog @ 0x140597D54 (CmpStopRMLog.c)
 *     PspSetBackgroundJobTree @ 0x140597E00 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x140598C58 (SeSetVirtualizationToken.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x14059B9C0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopBootLog @ 0x14059BC30 (IopBootLog.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14059BFB0 (PiPnpRtlSetDeviceRegProperty.c)
 *     MiRememberUnloadedDriver @ 0x14059D0A4 (MiRememberUnloadedDriver.c)
 *     PnpDisableDeviceInterfaces @ 0x14059DA44 (PnpDisableDeviceInterfaces.c)
 *     PopAcquireAdaptiveLock @ 0x14059FDE4 (PopAcquireAdaptiveLock.c)
 *     CmpTransMgrPrepare @ 0x1405A5024 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1405A6BC4 (CmpTransMgrSyncHive.c)
 *     SepDeReferenceLogonSession @ 0x1405A7534 (SepDeReferenceLogonSession.c)
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 *     SepCreateLogonSessionTrack @ 0x1405A784C (SepCreateLogonSessionTrack.c)
 *     SepDeleteLogonSessionTrack @ 0x1405A79E0 (SepDeleteLogonSessionTrack.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405A7FC0 (SepRmGlobalSaclSetWrkr.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     MiWriteProtectSystemImages @ 0x1405B2CF0 (MiWriteProtectSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x1405B7FF8 (MmFreeBootDriverInitializationCode.c)
 *     IopGetRootDevices @ 0x1405BA328 (IopGetRootDevices.c)
 *     PiSwPdoPnPDispatch @ 0x1405BA930 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x1405BAE84 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpCleanup @ 0x1405BBE50 (PiSwIrpCleanup.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BEE7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1405BF1F4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405C8240 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoRegisterFileSystem @ 0x1405C8440 (IoRegisterFileSystem.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405D37B8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoInitializeCrashDump @ 0x1405D46BC (IoInitializeCrashDump.c)
 *     CmpTransWriteLog @ 0x1405D5318 (CmpTransWriteLog.c)
 *     CmpAccountForLogReservation @ 0x1405D7230 (CmpAccountForLogReservation.c)
 *     PpReleaseBootDDB @ 0x1405D9614 (PpReleaseBootDDB.c)
 *     IoEnumerateRegisteredFiltersList @ 0x1405DB3D0 (IoEnumerateRegisteredFiltersList.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1405E0150 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     PnpChainDereferenceComplete @ 0x1405E4450 (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x1405E4580 (PnpDelayedRemoveWorker.c)
 *     CmpStartRMLog @ 0x1405E47A8 (CmpStartRMLog.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405E7FB4 (ExpRegisterFirmwareTableInformationHandler.c)
 *     PiSwIrpSetLifetime @ 0x1405E85F8 (PiSwIrpSetLifetime.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405EAA48 (PnpQueuePendingSurpriseRemoval.c)
 *     NtFlushInstallUILanguage @ 0x1405F0254 (NtFlushInstallUILanguage.c)
 *     IoUnregisterFileSystem @ 0x1405F20D0 (IoUnregisterFileSystem.c)
 *     NtCompressKey @ 0x140687910 (NtCompressKey.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmpBlockHiveWrites @ 0x14068F0F0 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14068F1A8 (CmpBlockTwoHiveWrites.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     HvFoldBackUnreconciledData @ 0x140696D80 (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x14069C6E4 (CmDumpKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14069E158 (CmpRefreshHive.c)
 *     FsRtlCopyWrite @ 0x1406AF960 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406B0380 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x1406B1DD8 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1406B1F84 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x1406B47A0 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x1406B5264 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x1406B7C70 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x1406BF5A8 (PiGetDeviceRegistryProperty.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1406BF880 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406BF95C (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x1406BFB64 (PnpNotifyHwProfileChange.c)
 *     PiDmListRemoveObjectWorker @ 0x1406C2FA8 (PiDmListRemoveObjectWorker.c)
 *     PiSwIrpGetLifetime @ 0x1406CDDAC (PiSwIrpGetLifetime.c)
 *     PiSwIrpInterfaceSetState @ 0x1406CDE70 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1406CE008 (PiSwIrpPropertySet.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406D0E9C (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1406D4598 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x1406D46DC (PipDgqInsertEntry.c)
 *     PopCancelDripsWatchdog @ 0x14070A52C (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14070AC40 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x14070B03C (PopSetDripsWatchdog.c)
 *     TtmpStopCallout @ 0x14070E0C8 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x14070EB00 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x14070ED30 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x14070F158 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x14070F2CC (TtmInitCurrentSession.c)
 *     TtmiRemoveQueueFromSession @ 0x14070F970 (TtmiRemoveQueueFromSession.c)
 *     TtmpSessionPowerControl @ 0x14070FD90 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x14070FE40 (TtmpSessionWorker.c)
 *     TtmpSetCsSessionGoal @ 0x140710064 (TtmpSetCsSessionGoal.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x140710110 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140710434 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x140710C70 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140710EB4 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14071102C (TtmiWriteEventToSingleQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1407178B8 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x140718000 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x1407235F0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x1407286C4 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x140728934 (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x14072E0A8 (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x14072EF40 (SepAddTokenLogonSession.c)
 *     SepBlockAccessForLogonSession @ 0x14072F038 (SepBlockAccessForLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14072F0F4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x14072F21C (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x14072F3CC (SepRemoveTokenLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140740BF8 (WmiAcquireSmbiosLockExclusive.c)
 *     ExpQuerySingleModuleInformation @ 0x140755584 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x140778114 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x14077E1E0 (_PnpCtxCloseMachine.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140789E7C (PnpGetDeviceInstanceRegistryValue.c)
 *     MiUnlockBootPageSections @ 0x1408295D8 (MiUnlockBootPageSections.c)
 *     IopInitCrashDumpRegCallback @ 0x140849F70 (IopInitCrashDumpRegCallback.c)
 *     MiInitializeKernelCfg @ 0x1408580E8 (MiInitializeKernelCfg.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceExclusive @ 0x140080760 (ExpTryAcquireResourceExclusive.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140117340 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x14011AD10 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14013F370 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14027E5C8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14027EA9C (PerfLogExecutiveResourceWait.c)
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
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  unsigned int v16; // edi
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v22[40]; // [rsp+48h] [rbp-40h] BYREF
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
    __incgsdword(0x6378u);
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
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
      if ( v8 )
        PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v12;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == v7 )
    {
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
      Resource->OwnerEntry.TableSize = *(_DWORD *)&TableSize + 8;
      v16 = (unsigned int)(*(_DWORD *)&TableSize + 8) >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x6380u);
      __incgsdword(0x6364u);
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
        __incgsdword(0x6388u);
        return 0;
      }
      ExpPrepareToWaitForResourceExclusive(v11, v22);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x6384u);
      if ( v8 )
        PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
      ExpApplyPrewaitBoost(Resource);
      ExpWaitForResource(
        &Resource->SystemResourcesList,
        (__int64)v22,
        0x10224u,
        (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v7;
      ExpBoostIoAfterAcquire(Resource, v7, 0LL);
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
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

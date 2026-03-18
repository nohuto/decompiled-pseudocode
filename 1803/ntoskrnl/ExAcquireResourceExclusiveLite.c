/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1400FFE30
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14006EBC0 (SepDesktopAppxSubProcessToken.c)
 *     SepQueueWorkItem @ 0x1400C33F8 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400C8DE0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1401346A0 (FsRtlAcquireFileForModWriteEx.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14014C068 (PnpUnregisterPlugPlayNotification.c)
 *     MiProcessLoaderEntry @ 0x140160F88 (MiProcessLoaderEntry.c)
 *     IoConfigureCrashDump @ 0x14017E260 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140233E08 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14023D5C0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14023DE00 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x14028B55C (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14028C248 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14029F55C (SepInternalSetSecurityAttributesToken.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1402A0C24 (SeTokenSetNoChildProcessRestricted.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1402B9FB0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 *     ExAcquireTimeRefreshLock @ 0x14048DB94 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14048E478 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x14048E8FC (PfSnCheckActionsNeeded.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     NtCreateTimer @ 0x1404B2E9C (NtCreateTimer.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404C1720 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtAdjustPrivilegesToken @ 0x1404EC040 (NtAdjustPrivilegesToken.c)
 *     PspLockJobChain @ 0x1404F101C (PspLockJobChain.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140502738 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140502990 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14050D26C (PnpAcquireDependencyRelationsLock.c)
 *     PnpNotifyTargetDeviceChange @ 0x14051F60C (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 *     PopAcquireAdaptiveLock @ 0x140526E68 (PopAcquireAdaptiveLock.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14052FB00 (PspSetEnergyTrackingStateJobTree.c)
 *     PspLockJobsAndProcessExclusive @ 0x140530470 (PspLockJobsAndProcessExclusive.c)
 *     PspFreezeJobTree @ 0x140530BD0 (PspFreezeJobTree.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14053154C (PspApplyWorkingSetLimitsToProcess.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspLockRootJobExclusive @ 0x140534968 (PspLockRootJobExclusive.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockJobConditionally @ 0x140534D04 (PspLockJobConditionally.c)
 *     PspLockJobExclusive @ 0x140537010 (PspLockJobExclusive.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     SepReferenceLogonSessionSilo @ 0x140544950 (SepReferenceLogonSessionSilo.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SeSetMandatoryPolicyToken @ 0x140545E8C (SeSetMandatoryPolicyToken.c)
 *     SeSetSessionIdToken @ 0x140546054 (SeSetSessionIdToken.c)
 *     NtAdjustGroupsToken @ 0x140546920 (NtAdjustGroupsToken.c)
 *     CmpStopRMLog @ 0x14054E8A0 (CmpStopRMLog.c)
 *     PiDrvDbLoadNode @ 0x140565274 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x1405653D8 (PiDrvDbUnloadNode.c)
 *     NtGetMUIRegistryInfo @ 0x140568A90 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x14056A56C (SepCreateLogonSessionTrack.c)
 *     _CmGetDeviceSoftwareKey @ 0x14056AA94 (_CmGetDeviceSoftwareKey.c)
 *     SepDeReferenceLogonSession @ 0x14056FB40 (SepDeReferenceLogonSession.c)
 *     IoOpenDeviceRegistryKey @ 0x140571100 (IoOpenDeviceRegistryKey.c)
 *     SepUpdateLogonSessionTrack @ 0x140577924 (SepUpdateLogonSessionTrack.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140578620 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     PspSetBackgroundJobTree @ 0x14057F654 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x140581960 (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140584290 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     MiCancelPhase0Locking @ 0x1405BB530 (MiCancelPhase0Locking.c)
 *     MmLockPagableDataSection @ 0x1405BB660 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     IoGetDeviceInterfaceAlias @ 0x1405C1E50 (IoGetDeviceInterfaceAlias.c)
 *     PiSwIrpCleanup @ 0x1405C529C (PiSwIrpCleanup.c)
 *     PiSwPdoPnPDispatch @ 0x1405C53E0 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x1405C59F0 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405C6164 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpStartCreateWorker @ 0x1405C6A7C (PiSwIrpStartCreateWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x1405C7250 (PnpDisableDeviceInterfaces.c)
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 *     PiSwStopDestroy @ 0x1405C8DA8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405C8E48 (PiSwProcessParentRemoveIrp.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405C91F4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpChainDereferenceComplete @ 0x1405C9C70 (PnpChainDereferenceComplete.c)
 *     IopDoDeferredSetInterfaceState @ 0x1405CA86C (IopDoDeferredSetInterfaceState.c)
 *     PiSwProcessParentStartIrp @ 0x1405CA9E0 (PiSwProcessParentStartIrp.c)
 *     PpDeviceRegistration @ 0x1405CC4FC (PpDeviceRegistration.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 *     PiPnpRtlSetObjectProperty @ 0x1405D1C74 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 *     IopGetRootDevices @ 0x1405D95DC (IopGetRootDevices.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1405DA058 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x1405DE890 (CmpTransWriteLog.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1405E06C0 (PiDmRemoveCacheReferenceForObject.c)
 *     CmpAccountForLogReservation @ 0x1405E1854 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 *     PiDmListAddObjectWorker @ 0x1405EA31C (PiDmListAddObjectWorker.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1405EB490 (WmiAcquireSmbiosLockExclusive.c)
 *     SepBlockAccessForLogonSession @ 0x1405EE51C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405F0844 (SepDeleteLogonSessionTrack.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     IoUnregisterFileSystem @ 0x1405F3EA0 (IoUnregisterFileSystem.c)
 *     CmpStartRMLog @ 0x1405F4564 (CmpStartRMLog.c)
 *     IoSetDeviceInterfaceState @ 0x1405F53C0 (IoSetDeviceInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     IoRegisterFileSystem @ 0x1405F62A0 (IoRegisterFileSystem.c)
 *     IopBootLog @ 0x1405F6E00 (IopBootLog.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     PpCheckInDriverDatabase @ 0x1405FBC08 (PpCheckInDriverDatabase.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1406024B8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpNotifyDeviceClassChange @ 0x1406027D0 (PnpNotifyDeviceClassChange.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140603064 (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140603EB0 (IoEnumerateRegisteredFiltersList.c)
 *     MiRememberUnloadedDriver @ 0x140605344 (MiRememberUnloadedDriver.c)
 *     PnpSetDevicePropertyData @ 0x1406061E8 (PnpSetDevicePropertyData.c)
 *     PiSwIrpPropertySet @ 0x140612B24 (PiSwIrpPropertySet.c)
 *     MiWriteProtectSystemImages @ 0x14061C4F0 (MiWriteProtectSystemImages.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     MmFreeBootDriverInitializationCode @ 0x1406275F8 (MmFreeBootDriverInitializationCode.c)
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140631850 (SepRmGlobalSaclSetWrkr.c)
 *     IoInitializeCrashDump @ 0x14063CE44 (IoInitializeCrashDump.c)
 *     SeExchangePrimaryToken @ 0x140640AD0 (SeExchangePrimaryToken.c)
 *     PpReleaseBootDDB @ 0x140642DD0 (PpReleaseBootDDB.c)
 *     PiSwIrpInterfaceSetState @ 0x1406465E8 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14064675C (PiSwIrpInterfaceRegister.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     PiSwIrpSetLifetime @ 0x14064D4A4 (PiSwIrpSetLifetime.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14064DD40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14064DF70 (ExpRegisterFirmwareTableInformationHandler.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140652418 (DrvDbOpenDriverDatabaseRegKey.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 *     NtFlushInstallUILanguage @ 0x1406536A4 (NtFlushInstallUILanguage.c)
 *     FsRtlCopyWrite @ 0x140714110 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140714B20 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x1407168A8 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x140716A54 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x1407193D0 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140719F14 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x14071C920 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x14071EC24 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x140724398 (PiGetDeviceRegistryProperty.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407252D0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x1407253AC (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x1407255B4 (PnpNotifyHwProfileChange.c)
 *     PiDmListRemoveObjectWorker @ 0x140729088 (PiDmListRemoveObjectWorker.c)
 *     PiSwIrpGetLifetime @ 0x1407354AC (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x14073884C (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x14073DCFC (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x14073DE40 (PipDgqInsertEntry.c)
 *     PopCancelDripsWatchdog @ 0x14076DCD4 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x14076E758 (PopSetDripsWatchdog.c)
 *     TtmpStopCallout @ 0x140771884 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x140772260 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1407724A0 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x14077292C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140772AA0 (TtmInitCurrentSession.c)
 *     TtmiRemoveQueueFromSession @ 0x1407731E0 (TtmiRemoveQueueFromSession.c)
 *     TtmpSessionPowerControl @ 0x140773604 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1407736B0 (TtmpSessionWorker.c)
 *     TtmpSetCsSessionGoal @ 0x1407738D4 (TtmpSetCsSessionGoal.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x140773980 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140773CB0 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x1407744F8 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x14077473C (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407748B0 (TtmiWriteEventToSingleQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x14077B8C8 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14077C020 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140786EC0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14078CA40 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14078CCC0 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x140793000 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1407930F8 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140793220 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1407933C0 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x1407BC050 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x1407E0E98 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x1407E6ABC (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407F2F8C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407F633C (PnpGetDeviceInstanceRegistryValue.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiUnlockBootPageSections @ 0x14089C748 (MiUnlockBootPageSections.c)
 *     PipResetDevices @ 0x1408B4E90 (PipResetDevices.c)
 *     IopInitCrashDumpRegCallback @ 0x1408BBE30 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x1400BB91C (ExpPrepareToWaitForResourceExclusive.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPrewaitBoost @ 0x1400EEEB0 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x1400F3F20 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceExclusive @ 0x140100700 (ExpTryAcquireResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140157E8C (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1402B1794 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402B1C68 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 v2; // r8
  USHORT Flag; // cx
  __int16 v6; // cx
  struct _KTHREAD *v7; // rbp
  bool v8; // si
  KSPIN_LOCK *p_SpinLock; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v12; // al
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  BOOLEAN v15; // di
  ULONG v16; // ecx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  unsigned int v19; // edi
  unsigned __int8 CurrentIrql; // r10
  struct _KTHREAD *CurrentThread; // rdx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v26[5]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v27; // [rsp+98h] [rbp+10h] BYREF

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
    p_SpinLock = &Resource->SpinLock;
    v27 = 2;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = SchedulerAssist[5];
        SchedulerAssist[5] = v22 + 1;
        if ( v22 == -1 )
        {
          v2 = *((unsigned __int8 *)SchedulerAssist + 27);
          if ( !*((_BYTE *)SchedulerAssist + 25) && !(_BYTE)v2 )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v12 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, p_SpinLock, &v27);
    }
    else
    {
      v12 = 0;
      v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
      if ( v13 )
      {
        KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v13, &v27);
        v12 = 1;
      }
    }
    if ( v12 )
    {
      _disable();
      __writecr8(v27);
    }
    v15 = ExpTryAcquireResourceExclusive(Resource, v13, v2);
    if ( v15 )
    {
      v16 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v7;
      Resource->OwnerEntry.TableSize = v16 | 8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
      if ( v8 )
        PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v15;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == v7 )
    {
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
      Resource->OwnerEntry.TableSize = *(_DWORD *)&TableSize + 8;
      v19 = (unsigned int)(*(_DWORD *)&TableSize + 8) >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x6380u);
      __incgsdword(0x6364u);
      if ( !v8 )
        return 1;
      v23 = v19;
      v24 = 65585LL;
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
      ExpPrepareToWaitForResourceExclusive(v14, v26);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x6384u);
      if ( v8 )
        PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
      ExpApplyPrewaitBoost((__int64)Resource);
      ExpWaitForResource(
        &Resource->SystemResourcesList,
        (__int64)v26,
        0x10224u,
        (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v7;
      ExpBoostIoAfterAcquire((__int64)Resource, (__int64)v7, 0);
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
      if ( !v8 )
        return 1;
      v23 = 1LL;
      v24 = 65569LL;
    }
    PerfLogExecutiveResourceAcquire(v24, Resource, v23, Resource->ContentionCount);
    return 1;
  }
  return ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
}

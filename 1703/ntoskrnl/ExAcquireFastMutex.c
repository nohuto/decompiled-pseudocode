/*
 * XREFs of ExAcquireFastMutex @ 0x1400F0060
 * Callers:
 *     RawCompletionRoutine @ 0x1400052E0 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x140005468 (RawInitiateDeleteVolume.c)
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     FsRtlAddLargeMcbEntry @ 0x140015650 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x1400156C0 (FsRtlTruncateLargeMcb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140019134 (FsRtlpCancelOplockRHIrp.c)
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140037C04 (FsRtlPrivateInitializeFileLock.c)
 *     CmpWaitForLateUnloadWorker @ 0x14006BCD0 (CmpWaitForLateUnloadWorker.c)
 *     PopGetPowerSettingValue @ 0x140072BB0 (PopGetPowerSettingValue.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400A94E0 (CcAcquireBcbLockAndVacbLock.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     CcDeleteMbcb @ 0x14011992C (CcDeleteMbcb.c)
 *     CcGetDirtyPages @ 0x14011A310 (CcGetDirtyPages.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 *     CcGetFlushedValidData @ 0x14011C7E0 (CcGetFlushedValidData.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401318A4 (FsRtlpCancelExclusiveIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14013600C (PnpUnregisterPlugPlayNotification.c)
 *     FsRtlpWaitOnIrp @ 0x140136678 (FsRtlpWaitOnIrp.c)
 *     PopRunNormalIrpWorkers @ 0x1401384A8 (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x14013CE5C (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorker @ 0x140145130 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1401495A0 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x1401557BC (PopInitilizeAcDcSettings.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     PopIrpWorkerControl @ 0x140166890 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x1401DDC20 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1401DDEE0 (CcGetLsnForFileObject.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1401E2D00 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1401E2DE0 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1401E2E90 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1401E2F10 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1401E3070 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1401E30C0 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1401E3140 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1401E3300 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E3B98 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401E3C78 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlInsertPerStreamContext @ 0x1401E4350 (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401E44F0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x1401E46E0 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x1401F8C84 (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x140206A50 (KiOpPatchCode.c)
 *     RawVerifyVolume @ 0x14023AA3C (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x14024065C (RtlpTraceDatabaseAcquireLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExDeferredFreePool @ 0x140285C90 (ExDeferredFreePool.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopFlushVolumes @ 0x14040B580 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x14040B800 (PopFlushVolumeWorker.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14041A050 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14041B9C0 (WheapCreateTriageDumpFromPreviousSession.c)
 *     RawMountVolume @ 0x140421790 (RawMountVolume.c)
 *     RawDispatch @ 0x1404219E0 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x140421BE8 (RawReadWriteDeviceControl.c)
 *     RawClose @ 0x140421CC0 (RawClose.c)
 *     RawCreate @ 0x140421D48 (RawCreate.c)
 *     RawCleanup @ 0x140421EB0 (RawCleanup.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1404223C0 (FsRtlTeardownPerStreamContexts.c)
 *     RawScanDeletedList @ 0x140422BA8 (RawScanDeletedList.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140426DA0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCache @ 0x140426F10 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140427060 (FsRtlAddToTunnelCache.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140443AF4 (KeSynchronizeWithDynamicProcessors.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140446754 (PiDqObjectManagerHandleObjectEvent.c)
 *     PfSnGetCompletedTrace @ 0x140449F58 (PfSnGetCompletedTrace.c)
 *     IopDestroyDeviceNode @ 0x14044C1A0 (IopDestroyDeviceNode.c)
 *     PnpFreeDeviceInstancePath @ 0x14044C5B0 (PnpFreeDeviceInstancePath.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14044CC04 (CmpDelayDerefKeyControlBlock.c)
 *     PnpBusTypeGuidGetIndex @ 0x14044E318 (PnpBusTypeGuidGetIndex.c)
 *     PopDiagTraceControlCallback @ 0x1404537A0 (PopDiagTraceControlCallback.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140457B18 (PiUEventFreeClientRegistrationContext.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140458AE0 (CmWorkerEngineQueueWorkItem.c)
 *     PiUEventHandleUnregisterClient @ 0x14045BC24 (PiUEventHandleUnregisterClient.c)
 *     CmpDelayFreeRMWorker @ 0x14045BFA0 (CmpDelayFreeRMWorker.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14045ED80 (PfSnTracingStateExWorkerRoutine.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140464688 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventProcessEventWorker @ 0x1404647D0 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x140464968 (PiUEventDereferenceEventEntry.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140464DF0 (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140464EF4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventBroadcastEventWorker @ 0x140469170 (PiUEventBroadcastEventWorker.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14048253C (EtwpReleaseProviderTraitsReference.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     CmpDelayCloseWorker @ 0x1404908F0 (CmpDelayCloseWorker.c)
 *     CmpDelayDerefKCBWorker @ 0x140490BA0 (CmpDelayDerefKCBWorker.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAddToDelayedClose @ 0x140491608 (CmpAddToDelayedClose.c)
 *     PfGetCompletedTrace @ 0x140498110 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x140498398 (PfTTraceListAdd.c)
 *     DbgkCopyProcessDebugPort @ 0x14049CDD4 (DbgkCopyProcessDebugPort.c)
 *     PiUEventHandleRegistration @ 0x1404A4F10 (PiUEventHandleRegistration.c)
 *     PiUEventHandleGetEvent @ 0x1404A5454 (PiUEventHandleGetEvent.c)
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x1404A5BB4 (PnpProcessDeferredRegistrations.c)
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404A6548 (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404A6744 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1404A69CC (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1404A6AA8 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1404A6B48 (PiUEventReferenceEventEntry.c)
 *     PnpNotifyDeviceClassChange @ 0x1404A6D00 (PnpNotifyDeviceClassChange.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404B8088 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1404B8CD4 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1404C2C70 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1404C4DF4 (PopGetSettingNotificationName.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1404C5030 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x1404C5114 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1404C598C (PopLogDisabledSleepReason.c)
 *     PopDispatchNotificationsToList @ 0x1404C5F9C (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1404C79F0 (PopGetSettingValue.c)
 *     CmpDelayFreeCmRm @ 0x1404CA7C4 (CmpDelayFreeCmRm.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpWorkerEngineWorker @ 0x1404CC4B0 (CmpWorkerEngineWorker.c)
 *     CmpGetMappingHiveForString @ 0x1404D3514 (CmpGetMappingHiveForString.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 *     PiQueryResourceRequirements @ 0x1404DA4E0 (PiQueryResourceRequirements.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x140510090 (FsRtlAcquireToCreateMappedSection.c)
 *     CmpRemoveFromDelayedDeref @ 0x14054DF38 (CmpRemoveFromDelayedDeref.c)
 *     PnpProcessAssignResources @ 0x140559D58 (PnpProcessAssignResources.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14055B65C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpBusTypeGuidGet @ 0x14055C1C0 (PnpBusTypeGuidGet.c)
 *     PfSnEndTrace @ 0x14056637C (PfSnEndTrace.c)
 *     PnpOrphanNotification @ 0x14056D4E8 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14056E118 (PnpCleanupDeviceRegistryValues.c)
 *     IoRegisterPlugPlayNotification @ 0x140571300 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1405716A8 (PnpDeferNotification.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 *     RawUserFsCtrl @ 0x140575564 (RawUserFsCtrl.c)
 *     PoUnregisterPowerSettingCallback @ 0x140575B50 (PoUnregisterPowerSettingCallback.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 *     PopFreeSessionState @ 0x140579608 (PopFreeSessionState.c)
 *     DbgkClearProcessDebugObject @ 0x1405860B0 (DbgkClearProcessDebugObject.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140596860 (IopReleaseResources.c)
 *     CmpRemoveFromDelayedClose @ 0x140599B64 (CmpRemoveFromDelayedClose.c)
 *     PoDisableSleepStates @ 0x14059B1C0 (PoDisableSleepStates.c)
 *     PnpBuildCmResourceLists @ 0x1405B0DE4 (PnpBuildCmResourceLists.c)
 *     PopRequestShutdownWait @ 0x1405C5F14 (PopRequestShutdownWait.c)
 *     PfTInitialize @ 0x1405C8078 (PfTInitialize.c)
 *     PoVolumeDevice @ 0x1405CB990 (PoVolumeDevice.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405CBD10 (KeRegisterProcessorChangeCallback.c)
 *     CmpAddStringToMapping @ 0x1405D3E34 (CmpAddStringToMapping.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405D6060 (WheaCrashDumpInitializationComplete.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1405D8300 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PfTStart @ 0x1405D83BC (PfTStart.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x140662E84 (CmWorkerEngineDequeueWorkItem.c)
 *     CmpAllocateKeyControlBlock @ 0x1406664FC (CmpAllocateKeyControlBlock.c)
 *     CmpRemoveHiveFromMapping @ 0x140667944 (CmpRemoveHiveFromMapping.c)
 *     DbgkOpenProcessDebugPort @ 0x14067E814 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x14067EC20 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x14067EEF8 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x14067F83C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14067FB20 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x14068029C (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x1406805D0 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140680748 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x140688B20 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x140693DA8 (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x140695D4C (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140698844 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14069FBE8 (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14069FE00 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14069FE88 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14069FF30 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1406A007C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1406A0138 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1406A0184 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1406A05D8 (PnpRemoveEventFromQueue.c)
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 *     PoReenableSleepStates @ 0x1406C6DE0 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1406C93B0 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x140717598 (ExpUpdateDebugInfo.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // ecx
  __int64 v5; // rax
  int SessionId; // eax
  __int16 v7; // ax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 AbOrphanedEntrySummary; // si
  int v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h]

  v1 = 0LL;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_19;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  v11 = v5;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  v1 = (__int64)&CurrentThread->LockEntries[v5];
  if ( !v1 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_14036D700[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v1 + 40) = SessionId;
  *(_QWORD *)(v1 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, FastMutex, &v10);
  v7 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v7;
  if ( !v7 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v1);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}

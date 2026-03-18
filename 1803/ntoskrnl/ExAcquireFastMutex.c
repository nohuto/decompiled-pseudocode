/*
 * XREFs of ExAcquireFastMutex @ 0x140103930
 * Callers:
 *     RawCompletionRoutine @ 0x140006360 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x1400066DC (RawInitiateDeleteVolume.c)
 *     CcGetFlushedValidData @ 0x14004DC70 (CcGetFlushedValidData.c)
 *     CcZeroEndOfLastPage @ 0x14005BC54 (CcZeroEndOfLastPage.c)
 *     PopGetPowerSettingValue @ 0x140074EA4 (PopGetPowerSettingValue.c)
 *     PnpDisablePnpEventWorkerWatchdog @ 0x1400753DC (PnpDisablePnpEventWorkerWatchdog.c)
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     PoRunDownDeviceObject @ 0x14009F930 (PoRunDownDeviceObject.c)
 *     CmpWaitForLateUnloadWorker @ 0x1400A1C88 (CmpWaitForLateUnloadWorker.c)
 *     FsRtlAddLargeMcbEntry @ 0x1400AFA40 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x1400AFAB0 (FsRtlTruncateLargeMcb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6F7C (FsRtlpCancelOplockRHIrp.c)
 *     CcDeleteMbcb @ 0x1400BE080 (CcDeleteMbcb.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400C4DE8 (CcAcquireBcbLockAndVacbLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400CE7E0 (FsRtlPrivateInitializeFileLock.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1400E1FF0 (CcGetDirtyPagesHelper.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140144A0C (FsRtlpCancelExclusiveIrp.c)
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x1401468A8 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14014C068 (PnpUnregisterPlugPlayNotification.c)
 *     PopRunMaximumIrpWorkers @ 0x140155118 (PopRunMaximumIrpWorkers.c)
 *     PopRunNormalIrpWorkers @ 0x140156318 (PopRunNormalIrpWorkers.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlpWaitOnIrp @ 0x14015EB9C (FsRtlpWaitOnIrp.c)
 *     PnpDeviceCompletionQueueWatchdogWorkItem @ 0x14015F0C0 (PnpDeviceCompletionQueueWatchdogWorkItem.c)
 *     PopIrpWorker @ 0x140166750 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x14016C860 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x140171BA4 (PopInitilizeAcDcSettings.c)
 *     PopIrpWorkerControl @ 0x140185100 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x140220360 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1402205A0 (CcGetLsnForFileObject.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x140224540 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x140224620 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1402246D0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x140224750 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1402248B0 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x140224910 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1402249A0 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x140224B50 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140225758 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140225838 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlInsertPerStreamContext @ 0x140226100 (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402262B0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x140226510 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x14023B5A0 (PnpDisableUserModeNotifications.c)
 *     PnpDelayedRemoveWorkerWatchdogWorkItem @ 0x14023C610 (PnpDelayedRemoveWorkerWatchdogWorkItem.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x14023C64C (PnpDisableDelayedRemoveWorkerWatchdog.c)
 *     PnpEventWorkerWatchdogWorkItem @ 0x14023C6E0 (PnpEventWorkerWatchdogWorkItem.c)
 *     KiOpPatchCode @ 0x14024B784 (KiOpPatchCode.c)
 *     RawVerifyVolume @ 0x140285CDC (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x14028ECDC (RtlpTraceDatabaseAcquireLock.c)
 *     ExDeferredFreePool @ 0x1402EA030 (ExDeferredFreePool.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopFlushVolumes @ 0x140470660 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x1404708F0 (PopFlushVolumeWorker.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x140488084 (WheapCreateTriageDumpFromPreviousSession.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140494320 (FsRtlTeardownPerStreamContexts.c)
 *     RawDispatch @ 0x1404948A0 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x140494AB4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140494B70 (RawCreate.c)
 *     RawClose @ 0x140494D08 (RawClose.c)
 *     RawCleanup @ 0x140494D90 (RawCleanup.c)
 *     RawScanDeletedList @ 0x1404953E0 (RawScanDeletedList.c)
 *     RawMountVolume @ 0x140495738 (RawMountVolume.c)
 *     CmpDelayCloseWorker @ 0x14049CE20 (CmpDelayCloseWorker.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404A9930 (CmpDelayDerefKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1404ABAC0 (CmpAllocateKeyControlBlock.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1404C146C (FsRtlAcquireToCreateMappedSection.c)
 *     DbgkCopyProcessDebugPort @ 0x1404EAE58 (DbgkCopyProcessDebugPort.c)
 *     FsRtlAddToTunnelCache @ 0x140506A20 (FsRtlAddToTunnelCache.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PfGetCompletedTrace @ 0x14050FFC4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x140510250 (PfTTraceListAdd.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14051C360 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x14051C7AC (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x14051CCD4 (PopLogDisabledSleepReason.c)
 *     PoRegisterPowerSettingCallback @ 0x14051D710 (PoRegisterPowerSettingCallback.c)
 *     PnpInsertEventInQueue @ 0x14051E7CC (PnpInsertEventInQueue.c)
 *     PiUEventProcessEventWorker @ 0x14051EAE0 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x14051EC78 (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x14051F100 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x14051F60C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14051F808 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14051FAD4 (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14051FBB8 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14051FC58 (PiUEventReferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x140520164 (PnpProcessDeferredRegistrations.c)
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 *     PopDiagTraceControlCallback @ 0x1405254B0 (PopDiagTraceControlCallback.c)
 *     IoGetDeviceProperty @ 0x140525CB0 (IoGetDeviceProperty.c)
 *     PnpBusTypeGuidGet @ 0x14052653C (PnpBusTypeGuidGet.c)
 *     PfSnEndTrace @ 0x140528AE4 (PfSnEndTrace.c)
 *     CmpWorkerEngineWorker @ 0x14054D500 (CmpWorkerEngineWorker.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14054E498 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDelayFreeCmRm @ 0x14054E814 (CmpDelayFreeCmRm.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140554C00 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCache @ 0x140554CD0 (FsRtlFindInTunnelCache.c)
 *     PopDispatchNotificationsToList @ 0x140565C38 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x140565F00 (PopGetSettingValue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1405709B4 (KeSynchronizeWithDynamicProcessors.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140573384 (PiDqObjectManagerUnregisterQuery.c)
 *     PfSnGetCompletedTrace @ 0x140573A84 (PfSnGetCompletedTrace.c)
 *     IopDestroyDeviceNode @ 0x140577FF0 (IopDestroyDeviceNode.c)
 *     CmWorkerEngineQueueWorkItem @ 0x14057F594 (CmWorkerEngineQueueWorkItem.c)
 *     CmpDelayFreeRMWorker @ 0x140581E50 (CmpDelayFreeRMWorker.c)
 *     CmpRemoveFromDelayedDeref @ 0x14058258C (CmpRemoveFromDelayedDeref.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140584AF0 (PfSnTracingStateExWorkerRoutine.c)
 *     PiUEventHandleUnregisterClient @ 0x14058B420 (PiUEventHandleUnregisterClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14058BC18 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x14058BEA4 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x14058C23C (PiUEventHandleRegistration.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140590B80 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x140591004 (EtwpSetProviderTraitsCommon.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     CmpGetMappingHiveForString @ 0x1405C0518 (CmpGetMappingHiveForString.c)
 *     PnpOrphanNotification @ 0x1405C9B68 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1405C9DB0 (PnpCleanupDeviceRegistryValues.c)
 *     PnpProcessAssignResources @ 0x1405CCC58 (PnpProcessAssignResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1405DB5D0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x1405DC08C (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1405DC3A8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1405E0490 (PiDqObjectManagerHandleObjectEvent.c)
 *     IoRegisterPlugPlayNotification @ 0x1405E22E0 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1405E26A0 (PnpDeferNotification.c)
 *     CmpRemoveFromDelayedClose @ 0x1405E2F64 (CmpRemoveFromDelayedClose.c)
 *     PnpFreeDeviceInstancePath @ 0x1405E5054 (PnpFreeDeviceInstancePath.c)
 *     PnpBusTypeGuidGetIndex @ 0x1405E52F4 (PnpBusTypeGuidGetIndex.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1405E54D8 (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1405E58A4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleVetoEvent @ 0x1405E5ED8 (PiUEventHandleVetoEvent.c)
 *     RawUserFsCtrl @ 0x1405E64CC (RawUserFsCtrl.c)
 *     PoUnregisterPowerSettingCallback @ 0x1405E8D90 (PoUnregisterPowerSettingCallback.c)
 *     PiUEventBroadcastEventWorker @ 0x1405EA4F0 (PiUEventBroadcastEventWorker.c)
 *     DbgkClearProcessDebugObject @ 0x1405EE030 (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x1405EE0DC (PopFreeSessionState.c)
 *     CmpRemoveHiveFromMapping @ 0x1405EEB4C (CmpRemoveHiveFromMapping.c)
 *     PopQueryPowerSettingUlong @ 0x1405EEC60 (PopQueryPowerSettingUlong.c)
 *     ExSwapinWorkerThreads @ 0x1405EF4EC (ExSwapinWorkerThreads.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1405F5B54 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1406027D0 (PnpNotifyDeviceClassChange.c)
 *     PoVolumeDevice @ 0x1406048A8 (PoVolumeDevice.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140605498 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     CmpAddStringToMapping @ 0x140613E3C (CmpAddStringToMapping.c)
 *     PnpBuildCmResourceLists @ 0x1406159E0 (PnpBuildCmResourceLists.c)
 *     PopRequestShutdownWait @ 0x140632064 (PopRequestShutdownWait.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 *     PfTStart @ 0x1406451D8 (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x14064C530 (KeRegisterProcessorChangeCallback.c)
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140650D08 (IopReleaseResources.c)
 *     PnpRestartDeviceNode @ 0x140651E64 (PnpRestartDeviceNode.c)
 *     WheaCrashDumpInitializationComplete @ 0x1406557F0 (WheaCrashDumpInitializationComplete.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1406F0978 (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x14070E0B8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x14070E4D0 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x14070E7A8 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x14070F184 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14070F46C (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x14070FBD8 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x14070FF04 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140710080 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407197B8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x1407255B4 (PnpNotifyHwProfileChange.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14072A9D8 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x140731B4C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140731D64 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140731DEC (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140731E94 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140731FDC (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140732098 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407320E4 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x140732800 (PnpRemoveEventFromQueue.c)
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x14075ECA0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x14075ED70 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x140761410 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x1407BD7BC (ExpUpdateDebugInfo.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rax
  char v5; // cl
  int SessionId; // eax
  bool v7; // zf
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
  LOBYTE(v4) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v4 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_19;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v4) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    CurrentThread->AbEntrySummary = v4;
  }
  v5 = v4;
  _BitScanForward((unsigned int *)&v4, (unsigned __int8)v4);
  v11 = v4;
  CurrentThread->AbEntrySummary = v5 & ~(1 << v4);
  v1 = (__int64)&CurrentThread->LockEntries[v4];
  if ( !v1 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_1403CCF90[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v1);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}

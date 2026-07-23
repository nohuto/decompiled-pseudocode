/*
 * XREFs of ExAcquireFastMutex @ 0x1400842E0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x14000E0E8 (FsRtlpWaitOnIrp.c)
 *     CcDeleteMbcb @ 0x14001EBD0 (CcDeleteMbcb.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcZeroEndOfLastPage @ 0x1400675C8 (CcZeroEndOfLastPage.c)
 *     CcGetDirtyPagesHelper @ 0x140067C40 (CcGetDirtyPagesHelper.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     PopGetPowerSettingValue @ 0x1400B16E8 (PopGetPowerSettingValue.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     CcGetFlushedValidData @ 0x1400F2BA0 (CcGetFlushedValidData.c)
 *     CcAcquireByteRangeForWrite @ 0x1400F2DD0 (CcAcquireByteRangeForWrite.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400F8C4C (CcAcquireBcbLockAndVacbLock.c)
 *     RawCompletionRoutine @ 0x1400FA230 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x1400FA43C (RawInitiateDeleteVolume.c)
 *     PoRunDownDeviceObject @ 0x1400FACA0 (PoRunDownDeviceObject.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140106D40 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140108A6C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlAddLargeMcbEntry @ 0x140111170 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x1401111E0 (FsRtlTruncateLargeMcb.c)
 *     CmpWaitForLateUnloadWorker @ 0x14011FC44 (CmpWaitForLateUnloadWorker.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140126F40 (PnpUnregisterPlugPlayNotification.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     PopInitilizeAcDcSettings @ 0x140139D88 (PopInitilizeAcDcSettings.c)
 *     PopIrpWorker @ 0x140151D80 (PopIrpWorker.c)
 *     PopIrpWorkerControl @ 0x140155FA0 (PopIrpWorkerControl.c)
 *     PopCreateDynamicIrpWorker @ 0x140156004 (PopCreateDynamicIrpWorker.c)
 *     CcRepinBcb @ 0x1401E0C60 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1401E0F40 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1401E6ED0 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1401E6FB0 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1401E7060 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1401E70E0 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1401E7240 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1401E72A0 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1401E7330 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1401E74F0 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401E7EA0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E7FC8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401E80A8 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlInsertPerStreamContext @ 0x1401E89A0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401E8B60 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x1401E8DE0 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x1401FEC30 (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x14020D3F4 (KiOpPatchCode.c)
 *     PopRunMaximumIrpWorkers @ 0x1402490CC (PopRunMaximumIrpWorkers.c)
 *     PopRunNormalIrpWorkers @ 0x140249194 (PopRunNormalIrpWorkers.c)
 *     RawVerifyVolume @ 0x1402502B4 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x14025699C (RtlpTraceDatabaseAcquireLock.c)
 *     ExDeferredFreePool @ 0x1402B2010 (ExDeferredFreePool.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PopFlushVolumeWorker @ 0x140436680 (PopFlushVolumeWorker.c)
 *     PopFlushVolumes @ 0x140436890 (PopFlushVolumes.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14043B4C8 (WheapCreateTriageDumpFromPreviousSession.c)
 *     PfSnGetCompletedTrace @ 0x140448E24 (PfSnGetCompletedTrace.c)
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     PfSnEndTrace @ 0x140454934 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x140455130 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x140457178 (PfTTraceListAdd.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14046EBF0 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDelayCloseWorker @ 0x140477EE0 (CmpDelayCloseWorker.c)
 *     CmpDelayDerefKCBWorker @ 0x1404781A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140492018 (EtwpReleaseProviderTraitsReference.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14049C358 (FsRtlAcquireToCreateMappedSection.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     CmpWorkerEngineWorker @ 0x1404E66D0 (CmpWorkerEngineWorker.c)
 *     PopDispatchNotificationsToList @ 0x1404E6D90 (PopDispatchNotificationsToList.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1404E8230 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x1404E8318 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1404E8738 (PopLogDisabledSleepReason.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 *     PopDiagTraceControlCallback @ 0x1404F1610 (PopDiagTraceControlCallback.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     DbgkCopyProcessDebugPort @ 0x14053A2F4 (DbgkCopyProcessDebugPort.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140546DB0 (FsRtlTeardownPerStreamContexts.c)
 *     RawDispatch @ 0x140547000 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x140547214 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1405472D0 (RawCreate.c)
 *     RawClose @ 0x140547450 (RawClose.c)
 *     RawCleanup @ 0x1405474D8 (RawCleanup.c)
 *     PiUEventHandleGetEvent @ 0x140548374 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x1405486E8 (PiUEventHandleRegistration.c)
 *     PiUEventProcessEventWorker @ 0x14054AE00 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x14054AF98 (PiUEventDereferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x14054B6E0 (PnpProcessDeferredRegistrations.c)
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14054BDE4 (PiUEventNotifyTargetDeviceChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x14054CFD8 (PiDqObjectManagerUnregisterQuery.c)
 *     PiUEventNotifyClient @ 0x14054D5CC (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14054D6A8 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14054D748 (PiUEventReferenceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14054DDBC (PnpInsertEventInQueue.c)
 *     PnpProcessAssignResources @ 0x140553D98 (PnpProcessAssignResources.c)
 *     RawMountVolume @ 0x140554038 (RawMountVolume.c)
 *     RawScanDeletedList @ 0x140554840 (RawScanDeletedList.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140555318 (PiUEventNotifyDeviceInterfaceChange.c)
 *     IoGetDeviceProperty @ 0x140556EB0 (IoGetDeviceProperty.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140557750 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x1405581F8 (PiQueryResourceRequirements.c)
 *     PnpBuildCmResourceLists @ 0x14055A75C (PnpBuildCmResourceLists.c)
 *     PnpBusTypeGuidGet @ 0x14055A94C (PnpBusTypeGuidGet.c)
 *     IopReleaseResources @ 0x14055B5F8 (IopReleaseResources.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     CmpRemoveFromDelayedDeref @ 0x140561668 (CmpRemoveFromDelayedDeref.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140565A70 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCache @ 0x140565C10 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140565D60 (FsRtlAddToTunnelCache.c)
 *     PopGetSettingValue @ 0x14057CFF0 (PopGetSettingValue.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14057D8A8 (KeSynchronizeWithDynamicProcessors.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1405822A0 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x140585D88 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x140585FB0 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1405862C0 (PnpDeferNotification.c)
 *     IopDestroyDeviceNode @ 0x1405887A0 (IopDestroyDeviceNode.c)
 *     PnpFreeDeviceInstancePath @ 0x140588A74 (PnpFreeDeviceInstancePath.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140588AC8 (PnpCleanupDeviceRegistryValues.c)
 *     PnpBusTypeGuidGetIndex @ 0x14058E918 (PnpBusTypeGuidGetIndex.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140595710 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14059576C (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140596BA4 (PiUEventQueueBroadcastEventEntry.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140597A78 (CmWorkerEngineQueueWorkItem.c)
 *     CmpDelayFreeCmRm @ 0x140597CC8 (CmpDelayFreeCmRm.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140597F48 (PiUEventNotifyDeviceInstanceChange.c)
 *     PoVolumeDevice @ 0x140598584 (PoVolumeDevice.c)
 *     PiUEventHandleUnregisterClient @ 0x14059BA88 (PiUEventHandleUnregisterClient.c)
 *     CmpDelayFreeRMWorker @ 0x14059C380 (CmpDelayFreeRMWorker.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14059CFE8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14059F200 (PfSnTracingStateExWorkerRoutine.c)
 *     PiUEventBroadcastEventWorker @ 0x14059F660 (PiUEventBroadcastEventWorker.c)
 *     PfTInitialize @ 0x1405DC060 (PfTInitialize.c)
 *     RawUserFsCtrl @ 0x1405DE444 (RawUserFsCtrl.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405DF540 (KeRegisterProcessorChangeCallback.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 *     CmpRemoveFromDelayedClose @ 0x1405E5FC0 (CmpRemoveFromDelayedClose.c)
 *     PnpOrphanNotification @ 0x1405EABC4 (PnpOrphanNotification.c)
 *     PopRequestShutdownWait @ 0x1405EDE74 (PopRequestShutdownWait.c)
 *     CmpAddStringToMapping @ 0x1405EFD98 (CmpAddStringToMapping.c)
 *     PoDisableSleepStates @ 0x1405F12C0 (PoDisableSleepStates.c)
 *     DbgkClearProcessDebugObject @ 0x1405F1AF4 (DbgkClearProcessDebugObject.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405F26E0 (WheaCrashDumpInitializationComplete.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x14068C564 (CmWorkerEngineDequeueWorkItem.c)
 *     CmpGetMappingHiveForString @ 0x140692058 (CmpGetMappingHiveForString.c)
 *     CmpRemoveHiveFromMapping @ 0x140692404 (CmpRemoveHiveFromMapping.c)
 *     DbgkOpenProcessDebugPort @ 0x1406A9950 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x1406A9D70 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x1406AA048 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x1406AAA14 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1406AACFC (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1406AB470 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x1406AB7A0 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x1406AB918 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1406B4B00 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x1406BFB64 (PnpNotifyHwProfileChange.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1406C4660 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406CA50C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1406CA724 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1406CA7AC (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1406CA854 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1406CA9A0 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1406CAA5C (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1406CAAA8 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1406CAF08 (PnpRemoveEventFromQueue.c)
 *     PfTCleanup @ 0x1406F3D88 (PfTCleanup.c)
 *     PfTStart @ 0x1406F3FC8 (PfTStart.c)
 *     PoReenableSleepStates @ 0x1406F74C0 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1406F9F80 (PoQueueShutdownWorkItem.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406FA220 (PoUnregisterPowerSettingCallback.c)
 *     PopFreeSessionState @ 0x1406FA384 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x140701348 (PopQueryPowerSettingUlong.c)
 *     ExpUpdateDebugInfo @ 0x140756D18 (ExpUpdateDebugInfo.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // ecx
  __int64 v5; // rax
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
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_1403899D0[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
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
  if ( v7 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
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

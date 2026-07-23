/*
 * XREFs of ExReleasePushLockEx @ 0x1400F0C70
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14000B990 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x14001B940 (FsRtlRemovePerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140020340 (ExReleaseAutoExpandPushLockExclusive.c)
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140023854 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400250F8 (CcGetVirtualAddressIfMapped.c)
 *     CcCompleteAsyncReadWorker @ 0x140028770 (CcCompleteAsyncReadWorker.c)
 *     FsRtlInsertPerFileContextInternal @ 0x140036BB0 (FsRtlInsertPerFileContextInternal.c)
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     ObpUnlockDirectory @ 0x140041474 (ObpUnlockDirectory.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140051050 (FsRtlInsertPerFileObjectContext.c)
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     EtwpUnlockBufferList @ 0x140087CE0 (EtwpUnlockBufferList.c)
 *     ObpReleaseLookupContext @ 0x140087EE4 (ObpReleaseLookupContext.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400A9478 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAllocateInitializeBcb @ 0x140119A5C (CcAllocateInitializeBcb.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     CcAsyncReadWorkerThread @ 0x140131E00 (CcAsyncReadWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 *     ExpUnlockCallbackListExclusive @ 0x14014A248 (ExpUnlockCallbackListExclusive.c)
 *     IopCleanupNotifications @ 0x140164310 (IopCleanupNotifications.c)
 *     FsRtlInsertPerStreamContext @ 0x1401E4350 (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerFileContext @ 0x1401E4410 (FsRtlLookupPerFileContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401E44F0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerFileContext @ 0x1401E45E0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1401E46E0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x1401F9C28 (PnpCancelDeviceActionRequest.c)
 *     PopReleaseAwaymodeLock @ 0x14040A7FC (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x14041A7C8 (ExShutdownSystem.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1404223C0 (FsRtlTeardownPerStreamContexts.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     NtQuerySymbolicLinkObject @ 0x140436C30 (NtQuerySymbolicLinkObject.c)
 *     CmpGetCallbackObjectContext @ 0x140436E60 (CmpGetCallbackObjectContext.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     FsRtlTeardownPerFileContexts @ 0x140443370 (FsRtlTeardownPerFileContexts.c)
 *     ObpRemoveNamespaceFromTable @ 0x140446A30 (ObpRemoveNamespaceFromTable.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140449BD8 (PiDmObjectGetCachedObjectReference.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14044E6F4 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14044E76C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCreateSymbolicLinkName @ 0x14044E9DC (ObpCreateSymbolicLinkName.c)
 *     ObCheckActiveHandles @ 0x140450584 (ObCheckActiveHandles.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451C80 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     WdipTimeoutCheckRoutine @ 0x140454A00 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140454AAC (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140454B34 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     EtwpGetTraceGuidInfo @ 0x140454F48 (EtwpGetTraceGuidInfo.c)
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 *     ObpSetDeviceMap @ 0x140458C1C (ObpSetDeviceMap.c)
 *     EtwpTrackProviderBinary @ 0x14045A320 (EtwpTrackProviderBinary.c)
 *     ExpGetNextCallback @ 0x14045AD40 (ExpGetNextCallback.c)
 *     ObpDeleteSymbolicLinkName @ 0x14045D4F8 (ObpDeleteSymbolicLinkName.c)
 *     NtMakePermanentObject @ 0x14045E520 (NtMakePermanentObject.c)
 *     CmpEnumerateCallback @ 0x14045E600 (CmpEnumerateCallback.c)
 *     WdipSemDisableScenario @ 0x140467560 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1404676B0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14046788C (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProvider @ 0x140468480 (WdipSemDisableContextProvider.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14046870C (ObSetCurrentProcessDeviceMap.c)
 *     NtCreatePrivateNamespace @ 0x1404692F4 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1404696DC (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140469798 (NtOpenPrivateNamespace.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x140480960 (EtwpDeleteRegistrationObject.c)
 *     ObpCallPreOperationCallbacks @ 0x140481100 (ObpCallPreOperationCallbacks.c)
 *     EtwpRundownNotifications @ 0x1404825D0 (EtwpRundownNotifications.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140485340 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140485AF0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140486114 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x1404881E4 (PiDmObjectIsEnumerable.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140488B58 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14048ADE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     CmpCheckNotifyAccess @ 0x14048E404 (CmpCheckNotifyAccess.c)
 *     CmpUnlockHashEntry @ 0x140490B2C (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     ObDereferenceDeviceMap @ 0x140498984 (ObDereferenceDeviceMap.c)
 *     PiDqIrpQueryGetResult @ 0x1404B80E4 (PiDqIrpQueryGetResult.c)
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqDispatch @ 0x1404B9020 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1404B9328 (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404B95DC (PiDqQuerySerializeActionQueue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     CmUnlockHiveSecurity @ 0x1404BF118 (CmUnlockHiveSecurity.c)
 *     PopUmpoProcessMessage @ 0x1404C190C (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x1404C70FC (PopReleaseUmpoPushLock.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmpUnlockHiveList @ 0x1404CC998 (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x1404CC9C0 (UnlockShutdown.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmpUnlockHashEntryByKcb @ 0x1404CFE70 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1404D0178 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1404D64B4 (CmpGetNextHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmpGetLastHive @ 0x1404D861C (CmpGetLastHive.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404DF1FC (PiDmObjectProcessPropertyChange.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1404E44B8 (PiDmListAddObject.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     ObQueryDeviceMapInformation @ 0x1404EC6F0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1404EC890 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1404EC98C (ObpReferenceDeviceMap.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404F3C20 (ObSetSecurityDescriptorInfo.c)
 *     ObpDecrementHandleCount @ 0x1404F5E48 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x140502E40 (CmpGetNameControlBlock.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     ObpFreeObject @ 0x140520A70 (ObpFreeObject.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x140534180 (CmpCallbackFillObjectContext.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14054FE00 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140552860 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpQueueNotification @ 0x140553790 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x140553BEC (EtwpReceiveNotification.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405721FC (CmpUnlockTwoSecurityCaches.c)
 *     ObRevokeHandles @ 0x140579840 (ObRevokeHandles.c)
 *     WdipSemEnableContextProvider @ 0x14057CA58 (WdipSemEnableContextProvider.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14057CBD0 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemActivateInstance @ 0x14057D1E4 (WdipSemActivateInstance.c)
 *     ObDestroyHandleRevocationBlock @ 0x14057DB94 (ObDestroyHandleRevocationBlock.c)
 *     WdipSemAllocatePool @ 0x140582478 (WdipSemAllocatePool.c)
 *     WdipSemEnableScenario @ 0x140584544 (WdipSemEnableScenario.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     PiDmListAddList @ 0x140599268 (PiDmListAddList.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 *     CmpStartSiloKeyLockTracker @ 0x1405A37F0 (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1405C668C (CmpGlobalLockKeyForWrite.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     EtwpDisallowedGuidAddition @ 0x1405C7F38 (EtwpDisallowedGuidAddition.c)
 *     WdipSemInitialize @ 0x1405CA2D0 (WdipSemInitialize.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1405CE7C0 (ObIsDosDeviceLocallyMapped.c)
 *     ObRegisterCallbacks @ 0x1405CEF30 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1405CF108 (ObpInsertCallbackByAltitude.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1405D2388 (CmpInsertCallbackInListByAltitude.c)
 *     IoRegisterContainerNotification @ 0x1405D2C50 (IoRegisterContainerNotification.c)
 *     EtwpTracingProvEnableCallback @ 0x1405D65E0 (EtwpTracingProvEnableCallback.c)
 *     CmSetCallbackObjectContext @ 0x140660300 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x140660520 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x140660A04 (CmpFreeCallbackObjectContexts.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 *     CmpCreateEmptyKey @ 0x140666F54 (CmpCreateEmptyKey.c)
 *     CmThawRegistry @ 0x140668BE4 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140668EDC (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140668FF8 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x140669230 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x14066A508 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockNameHashEntry @ 0x14066A554 (CmpUnlockNameHashEntry.c)
 *     CmpSyncNextBackupHive @ 0x14066B40C (CmpSyncNextBackupHive.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14067DA6C (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14067DD84 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x14067E278 (VrpUnloadDifferencingHive.c)
 *     IoUnregisterContainerNotification @ 0x14068C660 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406969CC (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x1406975A4 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140697714 (PiDmListRemoveObject.c)
 *     PiDqQueryUnlock @ 0x140698B28 (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x1406C0658 (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x1406C0774 (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1406C0BF0 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1406C0CC0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x1406C1550 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1406C1DAC (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1406C1EF0 (ObUnRegisterCallbacks.c)
 *     WdipSemUpdate @ 0x140705878 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x140705BB4 (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidRemoval @ 0x140709A14 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x14070A0B8 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x140711550 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14071161C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14071172C (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x140711F20 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     KiAbThreadUnboostIoPriority @ 0x14003AB10 (KiAbThreadUnboostIoPriority.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfReleasePushLock @ 0x1401125C0 (ExfReleasePushLock.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140114594 (KiAbThreadUnboostCpuPriority.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x140253214 (EtwTraceAutoBoostClearFloor.c)
 */

__int64 __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  signed __int64 v4; // rax
  signed __int64 v5; // rcx
  __int64 result; // rax
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rsi
  int v9; // ebx
  unsigned int SessionId; // r8d
  BOOL v11; // r12d
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rdi
  unsigned int v18; // eax
  unsigned __int8 v19; // r15
  char v20; // [rsp+7Ah] [rbp+12h]

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v4 - 16;
  else
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = v4,
        result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != result) )
  {
    result = ExfReleasePushLock(BugCheckParameter2);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v20 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount == 1;
    LODWORD(v12) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      goto LABEL_28;
    while ( 1 )
    {
      v15 = 1 << v14;
      v16 = v14;
      v17 = &CurrentThread->LockEntries[v16];
      v12 = ~v15 & (unsigned int)v12;
      if ( (v17->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v17->LockState.0 & 1) == 0
        && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v17->LockState.SessionId == SessionId )
      {
        v17->AcquiredByte &= ~1u;
        if ( v17->LockState.0 )
          break;
      }
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      if ( v13 )
        goto LABEL_28;
    }
    if ( !v17 )
    {
LABEL_28:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      v17->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v17->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v16].TreeNode, v12);
      v9 = v17->BoostBitmap.AllFields & 0x1FFFF;
      v18 = v17->BoostBitmap.AllFields & 0xFFFE0000;
      v17->ThreadLocalFlags &= ~1u;
      v20 = BYTE2(v9);
      v17->BoostBitmap.AllFields = v18;
      v17->LockState.0 = 0LL;
      v19 = 1 << (((char *)v17 - (char *)CurrentThread - 800) / 96);
      if ( v11 )
        CurrentThread->AbEntrySummary |= v19;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v19);
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000) != 0 )
        KiAbThreadUnboostIoPriority(&CurrentThread->Header.Lock, 0LL);
      if ( (v20 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        _InterlockedDecrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime.HighPart);
      }
      if ( (v9 & 0x7FFF) != 0 )
        KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    result = (unsigned int)++CurrentThread->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}

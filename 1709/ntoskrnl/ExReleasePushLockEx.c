/*
 * XREFs of ExReleasePushLockEx @ 0x140084E80
 * Callers:
 *     IopCleanupNotifications @ 0x1400159F4 (IopCleanupNotifications.c)
 *     ObpUnlockDirectory @ 0x1400190C8 (ObpUnlockDirectory.c)
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140020CFC (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 *     PoGetIdleTimes @ 0x14008CD70 (PoGetIdleTimes.c)
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400A5C80 (CcGetVirtualAddressIfMapped.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     EtwpUnlockBufferList @ 0x1400E0828 (EtwpUnlockBufferList.c)
 *     CcAllocateInitializeBcb @ 0x1400F755C (CcAllocateInitializeBcb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400F8C0C (CcReleaseBcbLockAndVacbLock.c)
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140100040 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140110D70 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140110E60 (FsRtlInsertPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140113B10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     CcCompleteAsyncReadWorker @ 0x140129080 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1401481D0 (CcAsyncReadWorker.c)
 *     ExpUnlockCallbackListExclusive @ 0x140157C0C (ExpUnlockCallbackListExclusive.c)
 *     CcGetNumberOfMappedPages @ 0x1401E16B0 (CcGetNumberOfMappedPages.c)
 *     CcAsyncReadWorkerThread @ 0x1401E2DE0 (CcAsyncReadWorkerThread.c)
 *     FsRtlInsertPerStreamContext @ 0x1401E89A0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerFileContext @ 0x1401E8A80 (FsRtlLookupPerFileContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401E8B60 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlReleasePushLock @ 0x1401E8C4C (FsRtlReleasePushLock.c)
 *     FsRtlRemovePerFileContext @ 0x1401E8C70 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1401E8DE0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x1401FFA48 (PnpCancelDeviceActionRequest.c)
 *     PopReleaseAwaymodeLock @ 0x1404397D0 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x14043A73C (ExShutdownSystem.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451628 (EtwpRealtimeDisconnectConsumer.c)
 *     ObMakeTemporaryObject @ 0x14046F200 (ObMakeTemporaryObject.c)
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     CmpUnlockHashEntryByKcb @ 0x140472AB8 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140472D04 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x140476DC8 (CmUnlockHiveSecurity.c)
 *     CmpUnlockHashEntry @ 0x140478118 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140478920 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCheckNotifyAccess @ 0x14047D900 (CmpCheckNotifyAccess.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x140480E00 (CmpGetNameControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404845B0 (ObSetSecurityDescriptorInfo.c)
 *     ObpDecrementHandleCount @ 0x140487254 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 *     NtOpenPrivateNamespace @ 0x140489880 (NtOpenPrivateNamespace.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140491780 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x140491B40 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1404920B0 (EtwpRundownNotifications.c)
 *     ObpFreeObject @ 0x1404A3CE0 (ObpFreeObject.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1404B4550 (CmpCallbackFillObjectContext.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 *     ObpReferenceDeviceMap @ 0x1404C64B0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1404C75E0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1404C7780 (ObfDereferenceDeviceMap.c)
 *     PopUmpoProcessMessage @ 0x1404DF2D0 (PopUmpoProcessMessage.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1404E1EC8 (CmpGetNextHive.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     CmpGetLastHive @ 0x1404E3C44 (CmpGetLastHive.c)
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     CmpUnlockHiveList @ 0x1404E61E8 (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x1404E6228 (UnlockShutdown.c)
 *     PopReleaseUmpoPushLock @ 0x1404E7834 (PopReleaseUmpoPushLock.c)
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404EF2A8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpQueueNotification @ 0x1404EF84C (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1404EFB68 (EtwpReceiveNotification.c)
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     EtwpRegisterProvider @ 0x1404F0B1C (EtwpRegisterProvider.c)
 *     ObDereferenceDeviceMap @ 0x1404FC1D4 (ObDereferenceDeviceMap.c)
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x140518388 (PiDmListAddObject.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140523648 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140523E28 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140524280 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x1405262BC (PiDmObjectIsEnumerable.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140526D90 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140527DE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x140528FC4 (PiDmObjectProcessPropertyChange.c)
 *     PiDqQuerySerializeActionQueue @ 0x14052DBC8 (PiDqQuerySerializeActionQueue.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140532954 (EtwpRealtimeUpdateConsumers.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140546DB0 (FsRtlTeardownPerStreamContexts.c)
 *     NtCreatePrivateNamespace @ 0x140548D34 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x140548F80 (ObpRegisterPrivateNamespace.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqDispatch @ 0x14054C640 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 *     PiDqIrpQueryGetResult @ 0x14054D9E8 (PiDqIrpQueryGetResult.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     NtQuerySymbolicLinkObject @ 0x14056AFF0 (NtQuerySymbolicLinkObject.c)
 *     CmpGetCallbackObjectContext @ 0x14056E72C (CmpGetCallbackObjectContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14056FCE0 (ObSetCurrentProcessDeviceMap.c)
 *     FsRtlTeardownPerFileContexts @ 0x140571E20 (FsRtlTeardownPerFileContexts.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 *     ObpCallPreOperationCallbacks @ 0x14057B2D8 (ObpCallPreOperationCallbacks.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ObpRemoveNamespaceFromTable @ 0x14058135C (ObpRemoveNamespaceFromTable.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1405874B0 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140587528 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x140587728 (ObpDeleteSymbolicLinkName.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140588424 (PiDmObjectGetCachedObjectReference.c)
 *     ObpCreateSymbolicLinkName @ 0x14058C2D8 (ObpCreateSymbolicLinkName.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     WdipTimeoutCheckRoutine @ 0x14058F6D0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14058F77C (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14058F7F4 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     ObCheckActiveHandles @ 0x14058FE88 (ObCheckActiveHandles.c)
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 *     ExpGetNextCallback @ 0x140596410 (ExpGetNextCallback.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     EtwpTrackProviderBinary @ 0x14059C9B8 (EtwpTrackProviderBinary.c)
 *     CmpEnumerateCallback @ 0x14059E760 (CmpEnumerateCallback.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405A677C (CmpUnlockTwoSecurityCaches.c)
 *     ObDestroyHandleRevocationBlock @ 0x1405A7B40 (ObDestroyHandleRevocationBlock.c)
 *     WdipSemAllocatePool @ 0x1405AACEC (WdipSemAllocatePool.c)
 *     WdipSemDisableScenario @ 0x1405AB6EC (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1405AB7E0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x1405AB884 (WdipSemEnableScenario.c)
 *     WdipSemInitialize @ 0x1405ABAE8 (WdipSemInitialize.c)
 *     ObpSetDeviceMap @ 0x1405B2684 (ObpSetDeviceMap.c)
 *     CmpStartSiloKeyLockTracker @ 0x1405BFC78 (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     EtwpGetTraceGuidInfo @ 0x1405D8AFC (EtwpGetTraceGuidInfo.c)
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1405D92E8 (CmpGlobalLockKeyForWrite.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     PiDmListAddList @ 0x1405DF40C (PiDmListAddList.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1405E55C0 (ObIsDosDeviceLocallyMapped.c)
 *     ObRegisterCallbacks @ 0x1405E6AE0 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1405E6CB8 (ObpInsertCallbackByAltitude.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1405ED038 (CmpInsertCallbackInListByAltitude.c)
 *     IoRegisterContainerNotification @ 0x1405ED930 (IoRegisterContainerNotification.c)
 *     NtMakePermanentObject @ 0x1405F21A0 (NtMakePermanentObject.c)
 *     EtwpTracingProvEnableCallback @ 0x1405F3010 (EtwpTracingProvEnableCallback.c)
 *     CmSetCallbackObjectContext @ 0x140689270 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x140689490 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x140689994 (CmpFreeCallbackObjectContexts.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmpCreateEmptyKey @ 0x140691474 (CmpCreateEmptyKey.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140693C54 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140693D70 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x140693FA0 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140694B88 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockNameHashEntry @ 0x140694BD4 (CmpUnlockNameHashEntry.c)
 *     CmpSyncNextBackupHive @ 0x140695A78 (CmpSyncNextBackupHive.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1406A8B00 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1406A8E10 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x1406A92F8 (VrpUnloadDifferencingHive.c)
 *     IoUnregisterContainerNotification @ 0x1406B8590 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406C259C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x1406C2D6C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x1406C2EDC (PiDmListRemoveObject.c)
 *     PiDqQueryUnlock @ 0x1406C494C (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x1406EF0A4 (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x1406EF22C (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1406EF6A0 (ObHandleRevocationBlockAddObject.c)
 *     ObRevokeHandles @ 0x1406EF760 (ObRevokeHandles.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1406EF7E0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x1406EFEFC (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1406F0828 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1406F0970 (ObUnRegisterCallbacks.c)
 *     WdipSemUpdate @ 0x14073DDC8 (WdipSemUpdate.c)
 *     WdipSemActivateInstance @ 0x14073EE1C (WdipSemActivateInstance.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14073EEE8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14073F128 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x14073F20C (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemDisableContextProvider @ 0x14073FE74 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x14073FFF4 (WdipSemEnableContextProvider.c)
 *     EtwpDisallowedGuidAddition @ 0x140743A34 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140743BBC (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1407445C8 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14074F0A0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14074F16C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14074F27C (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x14074FA80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407519AC (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400A7184 (KiAbThreadUnboostCpuPriority.c)
 *     ExfReleasePushLock @ 0x1400A7DD0 (ExfReleasePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadUnboostIoPriority @ 0x14012F5D0 (KiAbThreadUnboostIoPriority.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14027ADF0 (EtwTraceAutoBoostClearFloor.c)
 */

char __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v6; // rax
  __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rsi
  int v9; // ebx
  __int64 SessionId; // r8
  BOOL v11; // r15d
  unsigned int v12; // edx
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdx
  char v21; // [rsp+6Ah] [rbp+12h]

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = *(_QWORD *)BugCheckParameter2,
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != v6) )
  {
    LOBYTE(v6) = ExfReleasePushLock(BugCheckParameter2, v5);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v21 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_1403899D0[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount == 1;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      goto LABEL_28;
    while ( 1 )
    {
      v15 = 1 << v14;
      v16 = v14;
      v17 = &CurrentThread->LockEntries[v16];
      v12 &= ~v15;
      if ( (v17->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v17->LockState.0 & 1) == 0
        && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v17->LockState.SessionId == (_DWORD)SessionId )
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
      LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( (v6 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    }
    else
    {
      v17->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v17->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v16].TreeNode);
      v9 = v17->BoostBitmap.AllFields & 0x1FFFF;
      v18 = v17->BoostBitmap.AllFields & 0xFFFE0000;
      v17->ThreadLocalFlags &= ~1u;
      v21 = BYTE2(v9);
      v17->BoostBitmap.AllFields = v18;
      v17->LockState.0 = 0LL;
      v19 = ((char *)v17 - (char *)CurrentThread - 800) / 96;
      if ( v11 )
      {
        LODWORD(v6) = CurrentThread->AbEntrySummary | (1 << v19);
        CurrentThread->AbEntrySummary = v6;
      }
      else
      {
        LOBYTE(v6) = 1 << v19;
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
      }
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority(CurrentThread, 0LL, SessionId);
      if ( (v21 & 1) != 0 )
        KiAbThreadUnboostIoPriority(CurrentThread, 1LL, SessionId);
      LOBYTE(v6) = -1;
      if ( (v9 & 0x7FFF) != 0 )
        LOBYTE(v6) = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        LOBYTE(v6) = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 )
    {
      v6 = (signed __int64)&CurrentThread->152;
      if ( *(_QWORD *)v6 != v6 )
        LOBYTE(v6) = KiCheckForKernelApcDelivery();
    }
  }
  return v6;
}

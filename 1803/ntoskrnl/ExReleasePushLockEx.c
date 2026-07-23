/*
 * XREFs of ExReleasePushLockEx @ 0x140104510
 * Callers:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     ObpUnlockDirectory @ 0x140061134 (ObpUnlockDirectory.c)
 *     NtTraceEvent @ 0x1400611F0 (NtTraceEvent.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140068700 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1400687F0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1400A4FF0 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     CcCompleteAsyncReadWorker @ 0x1400C11B0 (CcCompleteAsyncReadWorker.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400C4DA8 (CcReleaseBcbLockAndVacbLock.c)
 *     EtwpUnlockBufferList @ 0x1400D44D8 (EtwpUnlockBufferList.c)
 *     CcAllocateInitializeBcb @ 0x1400DA798 (CcAllocateInitializeBcb.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400DB2F8 (CcGetVirtualAddressIfMapped.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1401396C8 (CcShouldSpinAsyncReadWorkerThread.c)
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 *     CcGetNumberOfMappedPages @ 0x14015BED0 (CcGetNumberOfMappedPages.c)
 *     IopCleanupNotifications @ 0x140160260 (IopCleanupNotifications.c)
 *     ExpUnlockCallbackListExclusive @ 0x14016D8AC (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x140178110 (CcAsyncReadWorker.c)
 *     CcAsyncReadWorkerThread @ 0x140221410 (CcAsyncReadWorkerThread.c)
 *     FsRtlInsertPerStreamContext @ 0x140226100 (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerFileContext @ 0x1402261D0 (FsRtlLookupPerFileContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402262B0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlReleasePushLock @ 0x14022638C (FsRtlReleasePushLock.c)
 *     FsRtlRemovePerFileContext @ 0x1402263B0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x140226510 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x14023C514 (PnpCancelDeviceActionRequest.c)
 *     PopReleaseAwaymodeLock @ 0x140470C14 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x140487504 (ExShutdownSystem.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140494320 (FsRtlTeardownPerStreamContexts.c)
 *     UnlockShutdown @ 0x140495AE4 (UnlockShutdown.c)
 *     CmpUnlockHiveList @ 0x140495B30 (CmpUnlockHiveList.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14049ABD4 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     CmpGetLastHive @ 0x14049BD04 (CmpGetLastHive.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x14049CD7C (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x14049D070 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404AB680 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1404AB750 (CmpGetNameControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     ObpCallPreOperationCallbacks @ 0x1404CE670 (ObpCallPreOperationCallbacks.c)
 *     CmUnlockHiveSecurity @ 0x1404E1DF8 (CmUnlockHiveSecurity.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404EB030 (ObSetSecurityDescriptorInfo.c)
 *     ObQueryDeviceMapInformation @ 0x1404FCF70 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1404FD110 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1404FD200 (ObpReferenceDeviceMap.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405040D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405071E4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405078E8 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140507E74 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140509520 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectIsEnumerable @ 0x140509AC4 (PiDmObjectIsEnumerable.c)
 *     PiDqDispatch @ 0x14050B510 (PiDqDispatch.c)
 *     PiDqQuerySerializeActionQueue @ 0x14050D2A0 (PiDqQuerySerializeActionQueue.c)
 *     ObDereferenceDeviceMap @ 0x14050EA74 (ObDereferenceDeviceMap.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpAssignSecurityToKcb @ 0x140516C04 (CmpAssignSecurityToKcb.c)
 *     PopUmpoProcessMessage @ 0x140518A1C (PopUmpoProcessMessage.c)
 *     ObpDecrementHandleCount @ 0x140519894 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x140523AD4 (PiDqIrpQueryGetResult.c)
 *     PopReleaseUmpoPushLock @ 0x14052491C (PopReleaseUmpoPushLock.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14052DB58 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14052DC1C (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipTimeoutCheckRoutine @ 0x14052DCB0 (WdipTimeoutCheckRoutine.c)
 *     ObMakeTemporaryObject @ 0x14053ECF0 (ObMakeTemporaryObject.c)
 *     NtOpenPrivateNamespace @ 0x14053FF0C (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x1405400D0 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14054031C (ObpRegisterPrivateNamespace.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmpUnlockHashEntryByKcb @ 0x14054DE30 (CmpUnlockHashEntryByKcb.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x140551288 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140551300 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405514F0 (ObpDeleteSymbolicLinkName.c)
 *     NtQuerySymbolicLinkObject @ 0x140552AC0 (NtQuerySymbolicLinkObject.c)
 *     CmpGetCallbackObjectContext @ 0x1405585B8 (CmpGetCallbackObjectContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14055FBE0 (ObSetCurrentProcessDeviceMap.c)
 *     FsRtlTeardownPerFileContexts @ 0x1405603C0 (FsRtlTeardownPerFileContexts.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ObDestroyHandleRevocationBlock @ 0x14056FD8C (ObDestroyHandleRevocationBlock.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1405772A0 (PiDmObjectGetCachedObjectReference.c)
 *     ObCheckActiveHandles @ 0x140579D34 (ObCheckActiveHandles.c)
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 *     ObpRemoveNamespaceFromTable @ 0x14057A7C8 (ObpRemoveNamespaceFromTable.c)
 *     ObpCreateSymbolicLinkName @ 0x14057B354 (ObpCreateSymbolicLinkName.c)
 *     ObpSetDeviceMap @ 0x14057D9B8 (ObpSetDeviceMap.c)
 *     ExpGetNextCallback @ 0x14057EE90 (ExpGetNextCallback.c)
 *     EtwpTrackProviderBinary @ 0x140581C38 (EtwpTrackProviderBinary.c)
 *     CmpEnumerateCallback @ 0x140584370 (CmpEnumerateCallback.c)
 *     EtwpStopLoggerInstance @ 0x140587E20 (EtwpStopLoggerInstance.c)
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14058DD40 (EtwpReceiveNotification.c)
 *     EtwpQueueNotification @ 0x14058E080 (EtwpQueueNotification.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14058E8A0 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x140590460 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x140590C14 (EtwpRundownNotifications.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140591B34 (EtwpClearSessionAndUnreferenceEntry.c)
 *     ObpFreeObject @ 0x14059CA30 (ObpFreeObject.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1405A75B0 (CmpCallbackFillObjectContext.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     NtMakePermanentObject @ 0x1405C3B90 (NtMakePermanentObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1405D2E6C (PiDmObjectProcessPropertyChange.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1405DD894 (PiDqQueryApplyObjectEvent.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405DFDF4 (CmpUnlockTwoSecurityCaches.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     PiDmListAddList @ 0x1405E6AD0 (PiDmListAddList.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1405E7028 (EtwpRealtimeDisconnectConsumer.c)
 *     PiDmListAddObject @ 0x1405EA250 (PiDmListAddObject.c)
 *     ObRevokeHandles @ 0x1405EE8C4 (ObRevokeHandles.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14060C7D8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14060C924 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x14060D4B8 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x14060D608 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x14060D740 (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x14060D9FC (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x14060DAC0 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x14060DC28 (WdipSemEnableContextProvider.c)
 *     CmpStartSiloKeyLockTracker @ 0x14062040C (CmpStartSiloKeyLockTracker.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     WdipSemInitialize @ 0x14063916C (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     WdipSemAllocatePool @ 0x1406443DC (WdipSemAllocatePool.c)
 *     CmLockKeyForWrite @ 0x140645D64 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x140645F54 (CmpGlobalLockKeyForWrite.c)
 *     ObRegisterCallbacks @ 0x14064D220 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x14064D3F4 (ObpInsertCallbackByAltitude.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140650060 (ObIsDosDeviceLocallyMapped.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140651568 (CmpInsertCallbackInListByAltitude.c)
 *     IoRegisterContainerNotification @ 0x140651FD0 (IoRegisterContainerNotification.c)
 *     EtwpTracingProvEnableCallback @ 0x140655CC0 (EtwpTracingProvEnableCallback.c)
 *     CmSetCallbackObjectContext @ 0x1406ED660 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1406ED880 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1406EDD90 (CmpFreeCallbackObjectContexts.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmpCreateEmptyKey @ 0x1406F4C7C (CmpCreateEmptyKey.c)
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1406F6E44 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x1406F6F64 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x1406F7190 (CmpLazyCommitWorker.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpSyncNextBackupHive @ 0x1406F9524 (CmpSyncNextBackupHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1406FA74C (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockNameHashEntry @ 0x1406FA798 (CmpUnlockNameHashEntry.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14070D198 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14070D4FC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x14070DA14 (VrpUnloadDifferencingHive.c)
 *     IoUnregisterContainerNotification @ 0x14071D2B0 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407285CC (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x140728E5C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140728FBC (PiDmListRemoveObject.c)
 *     PiDqQueryUnlock @ 0x14072ACF4 (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x140758584 (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x14075870C (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x140758BA0 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140758C60 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x14075938C (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x140759BF8 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140759D40 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14075F754 (PopFxDestroyDripsBlockingDeviceList.c)
 *     WdipSemUpdate @ 0x1407A10E8 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1407A15FC (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x1407A5704 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1407A5894 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1407A5FA4 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1407A62B4 (EtwpGetTraceGuidInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1407AFEC0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1407AFF8C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407B00D8 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407B0900 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407B2700 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400BA07C (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x1400D11C4 (KiAbThreadUnboostIoPriority.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1402AE7C8 (EtwTraceAutoBoostClearFloor.c)
 */

char __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, __int64 a3, __int64 a4)
{
  char v4; // bl
  signed __int64 v6; // rax
  __int64 v7; // rdx
  signed __int64 v8; // rax
  __int64 v9; // rtt
  struct _KTHREAD *CurrentThread; // rsi
  int v11; // ebx
  unsigned int SessionId; // r8d
  BOOL v13; // r12d
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  unsigned __int8 v20; // r15
  char v22; // [rsp+6Ah] [rbp+12h]

  v4 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (v6 & 2) != 0
    || (v9 = *(_QWORD *)BugCheckParameter2,
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v7, v6),
        v9 != v8) )
  {
    LOBYTE(v8) = ExfReleasePushLock((_QWORD *)BugCheckParameter2, v7, a3, a4);
  }
  if ( (v4 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0;
    v22 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_1403CCF90[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v13 = ++CurrentThread->AbAllocationRegionCount == 1;
    LODWORD(v14) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    if ( v15 )
      goto LABEL_27;
    while ( 1 )
    {
      v17 = 1 << v16;
      v18 = v16;
      v19 = &CurrentThread->LockEntries[v18];
      v14 = ~v17 & (unsigned int)v14;
      if ( (v19->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v19->LockState.0 & 1) == 0
        && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v19->LockState.SessionId == SessionId )
      {
        v19->AcquiredByte &= ~1u;
        if ( v19->LockState.0 )
          break;
      }
      v15 = !_BitScanReverse((unsigned int *)&v16, v14);
      if ( v15 )
        goto LABEL_27;
    }
    if ( !v19 )
    {
LABEL_27:
      LODWORD(v8) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( (v8 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      v19->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v19->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v18].TreeNode, v14);
      v11 = v19->BoostBitmap.AllFields & 0x1FFFF;
      LODWORD(v8) = v19->BoostBitmap.AllFields & 0xFFFE0000;
      v19->ThreadLocalFlags &= ~1u;
      v22 = BYTE2(v11);
      v19->BoostBitmap.AllFields = v8;
      v19->LockState.0 = 0LL;
      LOBYTE(v8) = -85 * ((_BYTE)v19 - (_BYTE)CurrentThread - 32);
      v20 = 1 << (((char *)v19 - (char *)CurrentThread - 800) / 96);
      if ( v13 )
        CurrentThread->AbEntrySummary |= v20;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v20);
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v11 & 0x1FFFF) != 0 )
    {
      if ( (v11 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority((__int64)CurrentThread, 0LL);
      if ( (v22 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        _InterlockedDecrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime.HighPart);
      }
      LOBYTE(v8) = -1;
      if ( (v11 & 0x7FFF) != 0 )
        LOBYTE(v8) = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread, v11 & 0x7FFF);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        LOBYTE(v8) = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v11 & 0x1FFFF);
    }
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 )
    {
      v8 = (signed __int64)&CurrentThread->152;
      if ( *(_QWORD *)v8 != v8 )
        LOBYTE(v8) = KiCheckForKernelApcDelivery();
    }
  }
  return v8;
}

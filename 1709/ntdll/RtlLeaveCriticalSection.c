/*
 * XREFs of RtlLeaveCriticalSection @ 0x1800460E0
 * Callers:
 *     RtlCreateTagHeap @ 0x180003370 (RtlCreateTagHeap.c)
 *     RtlSetProcessPreferredUILanguages @ 0x1800033D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800035F8 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x1800045FC (RtlpSetProcMergedLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180005D20 (RtlpSetProcUserMachineLangList.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180006DF0 (RtlpActivateLowFragmentationHeap.c)
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     LdrpWorkCallback @ 0x1800106E0 (LdrpWorkCallback.c)
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     RtlpEnumProcessHeaps @ 0x180012914 (RtlpEnumProcessHeaps.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800136B8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpFlushHeap @ 0x180013DA4 (RtlpFlushHeap.c)
 *     RtlpFreeUserBlock @ 0x180015054 (RtlpFreeUserBlock.c)
 *     LdrpLoadShimEngine @ 0x18001566C (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     LdrpGetLoadAsEntry @ 0x180019068 (LdrpGetLoadAsEntry.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 *     LdrpReleaseLoaderLock @ 0x18002086C (LdrpReleaseLoaderLock.c)
 *     LdrpCheckForRetryLoading @ 0x1800208D8 (LdrpCheckForRetryLoading.c)
 *     LdrpSendPostSnapNotifications @ 0x180020F14 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x180021068 (LdrpSendDllNotifications.c)
 *     LdrpDynamicShimModule @ 0x1800217FC (LdrpDynamicShimModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180032C90 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180049188 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180049840 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x180049B30 (RtlQueryEnvironmentVariable.c)
 *     RtlUnlockHeap @ 0x18004A120 (RtlUnlockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     LdrpQueueWork @ 0x18004B450 (LdrpQueueWork.c)
 *     RtlSetEnvironmentVar @ 0x18004B530 (RtlSetEnvironmentVar.c)
 *     RtlValidateHeap @ 0x18004BEC0 (RtlValidateHeap.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18004C75C (RtlpMoveHeapBetweenLists.c)
 *     RtlpComputePath @ 0x18004CA08 (RtlpComputePath.c)
 *     EtwpFlushActiveBuffers @ 0x180062C30 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x18006486C (EtwpAllocateFreeBuffers.c)
 *     RtlCreateProcessParametersEx @ 0x18006AFA0 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x18006B5D0 (RtlCreateEnvironmentEx.c)
 *     RtlExitUserProcess @ 0x180076130 (RtlExitUserProcess.c)
 *     RtlGetUserInfoHeap @ 0x180077630 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077A10 (RtlSetUserValueHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180077C88 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlSleepConditionVariableCS @ 0x1800795C0 (RtlSleepConditionVariableCS.c)
 *     LdrAddLoadAsDataTable @ 0x180079E20 (LdrAddLoadAsDataTable.c)
 *     RtlSetCurrentDirectory_U @ 0x18007A610 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x18007A798 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x18007A850 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007A934 (RtlpReferenceCurrentDirectory.c)
 *     LdrRemoveLoadAsDataTable @ 0x18007AFB0 (LdrRemoveLoadAsDataTable.c)
 *     RtlReleasePebLock @ 0x18007D640 (RtlReleasePebLock.c)
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007DA20 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetEnvironmentStrings @ 0x180085980 (RtlSetEnvironmentStrings.c)
 *     EtwpSwitchBuffer @ 0x1800863E4 (EtwpSwitchBuffer.c)
 *     AVrfDllLoadNotification @ 0x180087838 (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180087C60 (LdrRegisterDllNotification.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008B7E0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetCurrentEnvironment @ 0x18008C1C0 (RtlSetCurrentEnvironment.c)
 *     RtlCompactHeap @ 0x180090370 (RtlCompactHeap.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800907A0 (RtlGetProcessPreferredUILanguages.c)
 *     LdrDeleteEnclave @ 0x1800D0060 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D00E0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D01C0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D0260 (LdrLoadEnclaveModule.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D0568 (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800D0640 (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D0AE0 (LdrpIssueEnclaveCall.c)
 *     LdrUnregisterDllNotification @ 0x1800D1600 (LdrUnregisterDllNotification.c)
 *     LdrpCompleteProcessCloning @ 0x1800D6910 (LdrpCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D78C0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D7B40 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D8640 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800D9B20 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800DA690 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DE99C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DEBD0 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DEC60 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DED90 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 *     RtlQueryTagHeap @ 0x1800EF340 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800EF510 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF5E0 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F0D9C (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x1800F25E0 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800F2EB8 (RtlpSetupExtendedBlock.c)
 *     RtlTraceDatabaseAdd @ 0x1800FADC0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800FAFF0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800FB0D0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1800FB180 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1800FB1A0 (RtlTraceDatabaseValidate.c)
 *     RtlDebugAllocateHeap @ 0x180103090 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x18010343C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180103874 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180103A6C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180103D5C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180103EFC (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180104594 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180104758 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801048E8 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180104AEC (RtlDebugZeroHeap.c)
 *     EtwpBufferingModeFlush @ 0x1801098DC (EtwpBufferingModeFlush.c)
 *     _ResFindClose @ 0x18010FAF0 (_ResFindClose.c)
 *     _ResFindNextFileW @ 0x18010FF84 (_ResFindNextFileW.c)
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18006F920 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18009F950 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6AE0 (RtlpNotOwnerCriticalSection.c)
 */

NTSTATUS __cdecl RtlLeaveCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  bool v1; // zf
  signed __int32 v3; // edi
  void *LockSemaphore; // r8
  int v5; // edx
  signed __int32 v6; // eax

  v1 = CriticalSection->RecursionCount-- == 1;
  if ( v1 )
  {
    CriticalSection->OwningThread = 0LL;
    v3 = _InterlockedCompareExchange(&CriticalSection->LockCount, -1, -2);
    if ( v3 != -2 )
    {
      if ( (CriticalSection->LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(CriticalSection);
      LockSemaphore = CriticalSection->LockSemaphore;
      if ( !LockSemaphore )
        LockSemaphore = (void *)RtlpCreateDeferredCriticalSectionEvent(CriticalSection);
      do
      {
        v5 = v3 & 2 | 1;
        v6 = _InterlockedCompareExchange(&CriticalSection->LockCount, v5 + v3, v3);
        v1 = v3 == v6;
        v3 = v6;
      }
      while ( !v1 );
      if ( (v5 & 2) != 0 )
        RtlpUnWaitCriticalSectionEx(CriticalSection, LockSemaphore);
    }
  }
  return 0;
}

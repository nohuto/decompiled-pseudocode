/*
 * XREFs of RtlFreeHeap @ 0x18003ECC0
 * Callers:
 *     RtlGetAppContainerParent @ 0x1800017E0 (RtlGetAppContainerParent.c)
 *     LdrSetDllDirectory @ 0x180001F70 (LdrSetDllDirectory.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180002258 (LdrpLogFatalLdrEtwEvent.c)
 *     RtlCleanUpTEBLangLists @ 0x1800031C0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800043E0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegFreeStringPool @ 0x18000442C (RtlpMuiRegFreeStringPool.c)
 *     CsrFreeCaptureBuffer @ 0x180004780 (CsrFreeCaptureBuffer.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800054C4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180005920 (RtlpMuiRegFreeRegistryInfo.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180006350 (_RtlpMuiRegAddNeutralLanguage.c)
 *     CsrpConnectToServer @ 0x18000699C (CsrpConnectToServer.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180009E20 (RtlpExtendFrontEndUsageArray.c)
 *     TpAllocWork @ 0x18000A070 (TpAllocWork.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18000A49C (TppPoolUpdateTrimmedWorker.c)
 *     TppFreeThreadData @ 0x18000A664 (TppFreeThreadData.c)
 *     TppFreeDirectParamsCache @ 0x18000A6A8 (TppFreeDirectParamsCache.c)
 *     TppIopFree @ 0x18000A900 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x18000A960 (TpAllocIoCompletion.c)
 *     TpAllocPoolInternal @ 0x18000AC04 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x18000B078 (TppPoolUpdateNodeRelation.c)
 *     TppFreeWait @ 0x18000B2C0 (TppFreeWait.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18000B87C (RtlpDecRefWnfNameSubscription.c)
 *     RtlpWnfNotificationThread @ 0x18000B950 (RtlpWnfNotificationThread.c)
 *     TpAllocWait @ 0x18000BAE0 (TpAllocWait.c)
 *     TppTimerpFree @ 0x18000BC70 (TppTimerpFree.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000BEA4 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18000C4E0 (RtlpDecRefWnfUserSubscription.c)
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x18000E980 (TppPrepareDirectParams.c)
 *     TppWorkpFree @ 0x180010800 (TppWorkpFree.c)
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     RtlpTpWorkUnposted @ 0x180010F90 (RtlpTpWorkUnposted.c)
 *     RtlCreateTimer @ 0x180011160 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     RtlpTpTimerRundown @ 0x180011C54 (RtlpTpTimerRundown.c)
 *     RtlRegisterWait @ 0x180011CC0 (RtlRegisterWait.c)
 *     TppSimplepFree @ 0x180011F20 (TppSimplepFree.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180011F70 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpTpWaitRundown @ 0x180012E38 (RtlpTpWaitRundown.c)
 *     TppAlpcpFree @ 0x180013A50 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x180013B30 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180014020 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x180014300 (TppJobpFree.c)
 *     RtlpFreeUserBlockToHeap @ 0x180015220 (RtlpFreeUserBlockToHeap.c)
 *     RtlpTpTimerQueueRundown @ 0x180015460 (RtlpTpTimerQueueRundown.c)
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     RtlCreateActivationContext @ 0x180015F70 (RtlCreateActivationContext.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     EvtIntReportEventWorker @ 0x180016898 (EvtIntReportEventWorker.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180017B08 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800186DC (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800187FC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpMapResourceFile @ 0x180018AC4 (LdrpMapResourceFile.c)
 *     RtlReleaseRelativeName @ 0x180018D50 (RtlReleaseRelativeName.c)
 *     LdrpIsReparsePoint @ 0x180018D88 (LdrpIsReparsePoint.c)
 *     ResCKeOpenRuntimeView @ 0x18001AFA0 (ResCKeOpenRuntimeView.c)
 *     ResCKeDirectoryOpenMapping @ 0x18001B394 (ResCKeDirectoryOpenMapping.c)
 *     _ResQueryValueKey @ 0x18001B4B4 (_ResQueryValueKey.c)
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18001BBFC (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpFreeTraverseNodes @ 0x18001BF18 (RtlpFreeTraverseNodes.c)
 *     LdrpHandleTlsData @ 0x18001C3A8 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18001C850 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x18001CAE4 (LdrpAllocateTlsEntry.c)
 *     LdrpAcquireTlsIndex @ 0x18001CC28 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x18001CDA0 (RtlFlsAlloc.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18001E394 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpAllocatePlaceHolder @ 0x1800204C0 (LdrpAllocatePlaceHolder.c)
 *     LdrpAllocateModuleEntry @ 0x1800205E0 (LdrpAllocateModuleEntry.c)
 *     SbpDetermineDllContext @ 0x180020CFC (SbpDetermineDllContext.c)
 *     LdrpSendPostSnapNotifications @ 0x180020F14 (LdrpSendPostSnapNotifications.c)
 *     LdrpDynamicShimModule @ 0x1800217FC (LdrpDynamicShimModule.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800228B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800324B0 (RtlDoesFileExists_UstrEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180032C90 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     EtwpRegisterProvider @ 0x18003652C (EtwpRegisterProvider.c)
 *     RtlpGetCachedPath @ 0x180037E50 (RtlpGetCachedPath.c)
 *     RtlReleasePath @ 0x180038070 (RtlReleasePath.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlSetEnvironmentVar @ 0x18004B530 (RtlSetEnvironmentVar.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18004C864 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpComputePath @ 0x18004CA08 (RtlpComputePath.c)
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     RtlIdnToUnicode @ 0x18004EF00 (RtlIdnToUnicode.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18004FF0C (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180050BDC (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050F1C (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180051168 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180051984 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051DBC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180053240 (RtlpGetTokenNamedObjectPath.c)
 *     LdrpQueryValueKey @ 0x1800537A0 (LdrpQueryValueKey.c)
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x180055308 (RtlpInheritAcl.c)
 *     RtlpCombineAcls @ 0x1800569A0 (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180056F7C (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800571B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x18005B390 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 *     RtlFreeSid @ 0x18005BC00 (RtlFreeSid.c)
 *     PsspCaptureHandleInformation @ 0x18005BD74 (PsspCaptureHandleInformation.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005C080 (RtlpValidOwnerSubjectContext.c)
 *     PsspCaptureAuxiliaryPages @ 0x18005CD24 (PsspCaptureAuxiliaryPages.c)
 *     PssNtFreeSnapshot @ 0x18005D700 (PssNtFreeSnapshot.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     EtwpShutdownCompression @ 0x18005EEFC (EtwpShutdownCompression.c)
 *     EtwUnregisterTraceGuids @ 0x180060B10 (EtwUnregisterTraceGuids.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x1800610A8 (EtwpFreeStreamIndexMap.c)
 *     RtlpFreeDebugInfo @ 0x180061594 (RtlpFreeDebugInfo.c)
 *     EtwpFinalizeLogFileHeader @ 0x18006305C (EtwpFinalizeLogFileHeader.c)
 *     EtwpNotificationThread @ 0x180063910 (EtwpNotificationThread.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180064118 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180065218 (EtwpInitLoggerContext.c)
 *     EtwpGetNextAvailableLoggerId @ 0x1800656B4 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpGetRegDwordValue @ 0x180065958 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x180065C78 (EtwpQueryRegString.c)
 *     EtwRegisterTraceGuidsW @ 0x180065E10 (EtwRegisterTraceGuidsW.c)
 *     RtlCreateProcessParametersEx @ 0x18006AFA0 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x18006B5D0 (RtlCreateEnvironmentEx.c)
 *     RtlpCallVectoredHandlers @ 0x18006CBA8 (RtlpCallVectoredHandlers.c)
 *     LdrpFreeLoadContext @ 0x18006D59C (LdrpFreeLoadContext.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006DBB4 (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCreateWnfNameSubscription @ 0x18006DE60 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18006E0F0 (RtlpCreateSerializationGroup.c)
 *     RtlpHpAllocateHeap @ 0x18006F284 (RtlpHpAllocateHeap.c)
 *     RtlpFreeAllAtom @ 0x180070138 (RtlpFreeAllAtom.c)
 *     RtlpDereferenceAtom @ 0x1800705E0 (RtlpDereferenceAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x180070638 (RtlAddAtomToAtomTableEx.c)
 *     RtlDeleteFunctionTable @ 0x180072F20 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800730E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180073C20 (RtlAddGrowableFunctionTable.c)
 *     LdrpDestroyNode @ 0x180074BE8 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x180074C34 (LdrpMergeNodes.c)
 *     EtwpSetProviderTraits @ 0x1800755AC (EtwpSetProviderTraits.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180076024 (RtlpLowFragHeapAllocateFromZone.c)
 *     WerpGlobalFlagsForProcess @ 0x180076860 (WerpGlobalFlagsForProcess.c)
 *     RtlQueryImageFileKeyOption @ 0x180076CB0 (RtlQueryImageFileKeyOption.c)
 *     EtwpEventApiCallback @ 0x180077EF0 (EtwpEventApiCallback.c)
 *     LdrpFreeTls @ 0x180078198 (LdrpFreeTls.c)
 *     LdrpCleanupThreadTlsData @ 0x18007824C (LdrpCleanupThreadTlsData.c)
 *     RtlFreeActivationContextStack @ 0x180078440 (RtlFreeActivationContextStack.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180078624 (RtlpFreeActivationContextStackFrame.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180078AE8 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180079C3C (RtlpProcessIFEOKeyFilter.c)
 *     RtlSetCurrentDirectory_U @ 0x18007A610 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x18007A798 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x18007A850 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007A934 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007AA7C (RtlpCreateNewDirectoryReference.c)
 *     LdrRemoveLoadAsDataTable @ 0x18007AFB0 (LdrRemoveLoadAsDataTable.c)
 *     RtlAcquirePrivilege @ 0x18007C0D0 (RtlAcquirePrivilege.c)
 *     TpSimpleTryPost @ 0x18007C640 (TpSimpleTryPost.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     RtlDeleteSecurityObject @ 0x18007F5C0 (RtlDeleteSecurityObject.c)
 *     RtlpLoadNlsData @ 0x18007F624 (RtlpLoadNlsData.c)
 *     RtlpAddHeapToProtectedList @ 0x18007FA7C (RtlpAddHeapToProtectedList.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007FB7C (SbpRetrieveCompatibilityManifest.c)
 *     RtlpNtQueryValueKey @ 0x18007FD70 (RtlpNtQueryValueKey.c)
 *     LdrpLoadContextReplaceModule @ 0x18008041C (LdrpLoadContextReplaceModule.c)
 *     RtlpGetNormalization @ 0x180080AA0 (RtlpGetNormalization.c)
 *     RtlDeleteHashTable @ 0x180081040 (RtlDeleteHashTable.c)
 *     LdrpReleaseTlsEntry @ 0x18008129C (LdrpReleaseTlsEntry.c)
 *     RtlpInitializeWnf @ 0x180081350 (RtlpInitializeWnf.c)
 *     TpAllocCleanupGroup @ 0x180081670 (TpAllocCleanupGroup.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800819EC (LdrpLogDeprecatedDllEtwEvent.c)
 *     TppPoolpFree @ 0x180081F4C (TppPoolpFree.c)
 *     RtlDestroyEnvironment @ 0x180082200 (RtlDestroyEnvironment.c)
 *     RtlSetProtectedPolicy @ 0x1800823C0 (RtlSetProtectedPolicy.c)
 *     RtlLockModuleSection @ 0x180082A40 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180082B40 (RtlUnlockModuleSection.c)
 *     RtlpNtEnumerateSubKey @ 0x180082F60 (RtlpNtEnumerateSubKey.c)
 *     TpTrimPools @ 0x180083540 (TpTrimPools.c)
 *     TppDirectExecuteCallback @ 0x180083870 (TppDirectExecuteCallback.c)
 *     RtlAbortRXact @ 0x180084300 (RtlAbortRXact.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180084B38 (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpGetParentLangId @ 0x180085030 (LdrpGetParentLangId.c)
 *     RtlReleasePrivilege @ 0x180085270 (RtlReleasePrivilege.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085378 (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlContractHashTable @ 0x1800853F0 (RtlContractHashTable.c)
 *     TpReleaseCleanupGroup @ 0x180085910 (TpReleaseCleanupGroup.c)
 *     RtlSetEnvironmentStrings @ 0x180085980 (RtlSetEnvironmentStrings.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180085D6C (RtlpDecrementWnfSerializationGroup.c)
 *     RtlAddAttributeActionToRXact @ 0x1800860B0 (RtlAddAttributeActionToRXact.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008662C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlpRemoveVectoredHandler @ 0x180086748 (RtlpRemoveVectoredHandler.c)
 *     RtlpFreeActivationContext @ 0x180086B3C (RtlpFreeActivationContext.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x180086BA8 (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180087420 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlDefaultNpAcl @ 0x1800881D0 (RtlDefaultNpAcl.c)
 *     RtlSetSearchPathMode @ 0x1800885D0 (RtlSetSearchPathMode.c)
 *     RtlDestroyHandleTable @ 0x180088760 (RtlDestroyHandleTable.c)
 *     LdrpCheckPagesForTampering @ 0x180089CF4 (LdrpCheckPagesForTampering.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180089DF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlExpandHashTable @ 0x180089FF0 (RtlExpandHashTable.c)
 *     LdrRemoveDllDirectory @ 0x18008A4F0 (LdrRemoveDllDirectory.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008A8F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008AB7C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008ACD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlDosSearchPath_U @ 0x18008B480 (RtlDosSearchPath_U.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008B7E0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     LdrFlushAlternateResourceModules @ 0x18008BB60 (LdrFlushAlternateResourceModules.c)
 *     RtlInitializeRXact @ 0x18008BCC0 (RtlInitializeRXact.c)
 *     RtlSetCurrentEnvironment @ 0x18008C1C0 (RtlSetCurrentEnvironment.c)
 *     LdrAddDllDirectory @ 0x18008C4E0 (LdrAddDllDirectory.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008CB30 (RtlpLoadInstallLanguageFallback.c)
 *     ResCSegmentCreateAndPopulate @ 0x18008E23C (ResCSegmentCreateAndPopulate.c)
 *     ResCDirectoryCreateAndPopulate @ 0x18008EB14 (ResCDirectoryCreateAndPopulate.c)
 *     ResCHitsCreateAndPopulate @ 0x18008ED3C (ResCHitsCreateAndPopulate.c)
 *     RtlpComputeMergedAcl @ 0x18008EE24 (RtlpComputeMergedAcl.c)
 *     RtlpCheckDeviceName @ 0x18008F218 (RtlpCheckDeviceName.c)
 *     RtlpTpIoDllLoaded @ 0x18008FDD4 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x1800901F4 (RtlpTpIoAlloc.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CE750 (CsrpLocalSetupForSecureProcess.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEA00 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CED7C (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF020 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x1800CF210 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CF280 (RtlEnableThreadProfiling.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D03CC (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 *     LdrpLoadEnclaveModule @ 0x1800D0B74 (LdrpLoadEnclaveModule.c)
 *     LdrUnregisterDllNotification @ 0x1800D1600 (LdrUnregisterDllNotification.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D1BE0 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D2468 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2DEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D6570 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D6A7C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlCreateUserSecurityObject @ 0x1800D7EB0 (RtlCreateUserSecurityObject.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800D9434 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800DE060 (RtlpWnfRetryTimerCallback.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DE5B4 (RtlpLookupSafeCurDirList.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DE8E4 (RtlpSignalSystemDirsModification.c)
 *     RtlComputeImportTableHash @ 0x1800DF8F0 (RtlComputeImportTableHash.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0604 (LdrpCnvrtShortToLongFileName.c)
 *     RtlQueryModuleInformation @ 0x1800E29A0 (RtlQueryModuleInformation.c)
 *     LdrpResMapFile @ 0x1800E2DF4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E398C (LdrpResValidateFilePath.c)
 *     RtlIsUntrustedObject @ 0x1800E4C40 (RtlIsUntrustedObject.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53C0 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E5BD4 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7040 (RtlAddResourceAttributeAce.c)
 *     RtlDestroyAtomTable @ 0x1800E8890 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E8970 (RtlEmptyAtomTable.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800EA6F0 (RtlCheckBootStatusIntegrity.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EB470 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetUILanguageInfo @ 0x1800EB810 (RtlGetUILanguageInfo.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBE60 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EC800 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECA20 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x1800EF2D0 (RtlMultipleFreeHeap.c)
 *     RtlCreateUmsCompletionList @ 0x1800F3060 (RtlCreateUmsCompletionList.c)
 *     RtlCreateUmsThreadContext @ 0x1800F3180 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsCompletionList @ 0x1800F3290 (RtlDeleteUmsCompletionList.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F32F0 (RtlDeleteUmsThreadContext.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F3CA0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800F3E7C (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F6F30 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800F7058 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800F7A6C (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800F7B40 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F7C24 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F7D6C (RtlpHeapTrkTrackStack.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800F858C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800F8AAC (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlpGetWindowsPolicy @ 0x1800FB73C (RtlpGetWindowsPolicy.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FB8E4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800FBAA8 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800FBE88 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800FC520 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800FCE98 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800FD0CC (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800FEC08 (_RtlpMuiRegValidateInstalled.c)
 *     RtlDebugFreeHeap @ 0x180103A6C (RtlDebugFreeHeap.c)
 *     EtwpReceiveReplyDataBlock @ 0x180109F34 (EtwpReceiveReplyDataBlock.c)
 *     EtwpAddBinaryInfoEvents @ 0x18010A240 (EtwpAddBinaryInfoEvents.c)
 *     TppDirectUnposted @ 0x18010AAD0 (TppDirectUnposted.c)
 *     ResCCloseRuntimeView @ 0x18010BA90 (ResCCloseRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x18010BBAC (ResCKeCreateRuntimeView.c)
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x18010C21C (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x18010C424 (--$StackPush@I@@YAHIPEAX@Z.c)
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x18010C4EC (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 *     ResCDirectoryFree @ 0x18010C5EC (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x18010C818 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x18010C978 (ResCSegmentFree.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18010E524 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     BasepInitializeFindFileHandle @ 0x18010EBD8 (BasepInitializeFindFileHandle.c)
 *     _CreateSecureFileMapping @ 0x18010EE74 (_CreateSecureFileMapping.c)
 *     _ResCLoadFixedSize @ 0x18010F1DC (_ResCLoadFixedSize.c)
 *     _ResCreateFile @ 0x18010F424 (_ResCreateFile.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 *     _ResFindClose @ 0x18010FAF0 (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x18010FB90 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesEx @ 0x1801101AC (_ResGetFileAttributesEx.c)
 *     _ResGetFileAttributesW @ 0x1801102D4 (_ResGetFileAttributesW.c)
 *     ResCGetIndexedName @ 0x180110974 (ResCGetIndexedName.c)
 *     ResCGetName @ 0x180110DA8 (ResCGetName.c)
 *     ResCCultureMapCreateAndPopulate @ 0x180111438 (ResCCultureMapCreateAndPopulate.c)
 *     ResCFreeCultureMap @ 0x180111554 (ResCFreeCultureMap.c)
 *     ??$ReleaseStack@I@@YAXPEAX@Z @ 0x180111820 (--$ReleaseStack@I@@YAXPEAX@Z.c)
 *     ResCDirectoryValidateEntries @ 0x180111868 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180014FA0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x180015054 (RtlpFreeUserBlock.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3B90 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180100A6C (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x1801016FC (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x180106330 (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010674C (RtlpValidateLFHBlock.c)
 */

LOGICAL __cdecl RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  LOGICAL v6; // r14d
  unsigned __int64 v7; // rdi
  signed __int32 *v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  signed __int32 v17; // ebx
  int v18; // r8d
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  __int64 v23; // r9
  signed __int64 v24; // rdx
  __int64 *v25; // rdi
  __int64 **v26; // rbx
  signed __int32 v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD **v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // edx
  signed __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int8 v40; // al
  signed __int32 v41; // eax
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rax
  volatile signed __int32 *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  unsigned int v49; // edx
  unsigned __int8 v50; // cl
  __int64 v51; // rax
  unsigned __int16 v52; // ax
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  unsigned __int16 v56; // ax
  __int64 v57; // rcx
  char *v58; // rcx
  struct _TEB *v59; // rbx
  __int64 v60; // rdx
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v62; // rcx
  ULONG HeapProtection; // eax
  ULONG OldProtect; // [rsp+30h] [rbp-78h] BYREF
  __int64 v65; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v66; // [rsp+40h] [rbp-68h]
  int v67; // [rsp+48h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-58h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp-50h] BYREF
  int v70; // [rsp+68h] [rbp-40h]
  __int64 v71; // [rsp+C0h] [rbp+18h] BYREF
  signed __int64 v72; // [rsp+C8h] [rbp+20h]

  if ( BaseAddress )
  {
    v6 = 0;
    if ( !HeapHandle )
      RtlpLogHeapFailure(18, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      return RtlpHpFreeWithExceptionProtection((int)HeapHandle);
    if ( (RtlpHpHeapFeatures & 2) != 0 )
    {
      v6 = RtlpFreeHeapInternal((__int64)HeapHandle, (unsigned __int64)BaseAddress, Flags, &v65, &v71);
      if ( v6 && (_WORD)v71 )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(qword_18015D918 + 8LL * (unsigned __int16)v71 - 8) + 32LL),
          -v65);
      return v6;
    }
    v7 = 0LL;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
LABEL_59:
      v40 = RtlpFreeHeap((__int64)HeapHandle, Flags | 2, v7, (__int64)BaseAddress);
      v6 = v40;
      if ( v40 )
      {
LABEL_33:
        if ( (dword_180160378 & 1) != 0
          && (dword_180160378 & 2) != 0
          && HeapHandle != RtlpHpMetadataHeap
          && NtCurrentPeb()->ProcessHeap
          && (Flags & 0x10000000) == 0 )
        {
          RtlpHpStackTraceRemoveStack(HeapHandle, BaseAddress);
        }
      }
      return v6;
    }
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v7 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    }
    else if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    }
    else
    {
      v7 = (unsigned __int64)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
      if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, (_DWORD)HeapHandle, v7, 0, 0LL, 0LL);
        v7 = 0LL;
      }
    }
    if ( v7 )
    {
      if ( *((char *)BaseAddress - 1) != 5 )
        goto LABEL_15;
      if ( *(char *)(v7 + 15) >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v50 = ((unsigned __int16)(*((_WORD *)HeapHandle + 68) ^ *(_WORD *)(v7 + 8)) >> 8) ^ ((unsigned int)(*((_DWORD *)HeapHandle + 34) ^ *(_DWORD *)(v7 + 8)) >> 16);
          v70 = *((_DWORD *)HeapHandle + 34) ^ *(_DWORD *)(v7 + 8);
          if ( HIBYTE(v70) != ((unsigned __int8)v70 ^ v50) )
            goto LABEL_114;
        }
      }
      else if ( !(unsigned __int8)RtlpValidateLFHBlock(HeapHandle, v7) )
      {
LABEL_114:
        RtlpLogHeapFailure(3, (_DWORD)HeapHandle, v7, (_DWORD)BaseAddress, 0LL, 0LL);
        goto LABEL_120;
      }
      if ( *(char *)(v7 + 15) >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v53 = *(_DWORD *)(v7 + 8);
          v67 = v53;
          if ( (v53 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v67 = *((_DWORD *)HeapHandle + 34) ^ v53;
          v52 = v67;
        }
        else
        {
          v52 = *(_WORD *)(v7 + 8);
        }
      }
      else
      {
        if ( *(_WORD *)(v7 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)HeapHandle ^ (v7 >> 4)) )
          v51 = 0LL;
        else
          v51 = *(_QWORD *)(v7
                          - ((unsigned __int64)(*(_DWORD *)(v7 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ (unsigned int)(v7 >> 4)) >> 12));
        v52 = *(_WORD *)(v51 + 36);
      }
      v54 = v52;
      if ( *(_BYTE *)(v7 + 15) == 4 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v55 = *(_DWORD *)(v7 + 8);
          v67 = v55;
          if ( (v55 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v67 = *((_DWORD *)HeapHandle + 34) ^ v55;
          v56 = v67;
        }
        else
        {
          v56 = *(_WORD *)(v7 + 8);
        }
        v57 = v54 + *(_QWORD *)(v7 - 16) - v56;
      }
      else
      {
        v57 = 16LL * v52;
      }
      if ( v57 + v7 < (unsigned __int64)BaseAddress )
        goto LABEL_114;
      if ( (Flags & 0x3C000102) != 0
        || (*((char *)BaseAddress - 1) != 5
          ? (v58 = 0LL)
          : (v58 = (char *)BaseAddress - 16 * (unsigned __int8)*((char *)BaseAddress - 2)),
            (int)RtlpCallInterceptRoutine(
                   *((_DWORD *)BaseAddress - 2),
                   (_DWORD)HeapHandle,
                   (_DWORD)BaseAddress,
                   3,
                   (__int64)v58) >= 0) )
      {
LABEL_15:
        if ( *(char *)(v7 + 15) < 0 )
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))
            || (v8 = *(signed __int32 **)(v7
                                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12))) == 0LL )
          {
            LODWORD(v60) = (_DWORD)HeapHandle;
          }
          else
          {
            _m_prefetchw(v8);
            v9 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
            v10 = *(_QWORD *)v8;
            v66 = (_QWORD *)*((_QWORD *)v8 + 1);
            v11 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
            v12 = RtlpLFHKey ^ v11 ^ (unsigned int)v66 ^ *((_DWORD *)v66 + 6);
            if ( (_QWORD *)((char *)v66 + (unsigned int)v9 * HIWORD(v12) + (unsigned __int16)v12) == (_QWORD *)v7 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v14 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v14 = 2147353472LL;
              if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v11 + 24), v7 + 16, 2LL, v13);
              v15 = 100LL;
              if ( MEMORY[0x7FFE036A] <= 1u )
                v15 = 0LL;
              v16 = 0LL;
              while ( 1 )
              {
                v17 = v8[8];
                if ( (v17 & 0x80000000) == 0 && v17 == _InterlockedCompareExchange(v8 + 8, v17 | 0x80000000, v17) )
                  break;
                v16 = (unsigned int)(v16 + 1);
                if ( (unsigned int)v16 > (unsigned int)v15 )
                  goto LABEL_73;
              }
              if ( v17 == -1 )
              {
LABEL_73:
                *(_BYTE *)(v7 + 15) = 0x80;
                RtlpInterlockedPushEntrySList(v8 + 4, v7 + 16, v16, 0x8000LL);
                goto LABEL_32;
              }
              *(_BYTE *)(v7 + 15) = 0x80;
              _bittestandreset64((signed __int64 *)v66[5], v9);
              if ( *((_WORD *)v8 + 8) )
              {
                v48 = (_QWORD *)RtlpInterlockedFlushSList(v8 + 4, v15, v16, 0x8000LL);
                v18 = 0;
                while ( v48 )
                {
                  v49 = *((_DWORD *)v48 - 1);
                  ++v18;
                  v48 = (_QWORD *)*v48;
                  v9 = (unsigned __int16)(v49 >> 8);
                  _bittestandreset64((signed __int64 *)v66[5], v9);
                }
              }
              else
              {
                v18 = 0;
              }
              v19 = v18 + 1 + (unsigned __int16)v17;
              v20 = *(_QWORD *)v8;
              v21 = ((_DWORD)v9 << 16) | v19;
              if ( (_WORD)v21 != *((_WORD *)v8 + 20)
                || (v23 = *(unsigned int *)(v20 + 168),
                    v24 = *(unsigned int *)(*(_QWORD *)v20 + 32LL),
                    *(_DWORD *)(v20 + 164) == 1)
                && (unsigned int)v24 >= (unsigned int)v23
                && (v24 = (unsigned int)(v24 - v23), (unsigned int)v24 < *(_DWORD *)(*(_QWORD *)v20 + 36LL)) )
              {
                v8[8] = v21;
                if ( (v8[11] & 2) != 0 || !RtlpIsSubSegmentReuseable(v20, (__int64)v8) )
                  goto LABEL_32;
                do
                {
                  v41 = v8[11];
                  if ( !v41 || (v41 & 2) != 0 )
                    goto LABEL_32;
                }
                while ( v41 != _InterlockedCompareExchange(v8 + 11, v41 | 2, v41) );
                v42 = *(_QWORD *)v8;
                v43 = 0LL;
                while ( 1 )
                {
                  v44 = ((_BYTE)v43 + (unsigned __int8)*(_WORD *)(v42 + 174)) & 0xF;
                  v45 = *(volatile signed __int32 **)(v42 + 8 * v44 + 16);
                  v46 = v42 + 8 * v44;
                  if ( v45 )
                  {
                    if ( (v45[11] & 1) == 0
                      && v45 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                             (volatile signed __int64 *)(v46 + 16),
                                                             (signed __int64)v8,
                                                             (signed __int64)v45) )
                    {
                      _m_prefetchw((const void *)(v45 + 11));
                      if ( _InterlockedAnd(v45 + 11, 0xFFFFFFFD) == 2 )
                      {
                        v47 = **(_QWORD **)v45;
                        *(_QWORD *)v45 = 0LL;
                        RtlpInterlockedPushEntrySList(v47, v45 + 12, v43, v42);
                      }
                      goto LABEL_32;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)(v46 + 16),
                               (signed __int64)v8,
                               0LL) )
                  {
                    goto LABEL_32;
                  }
                  v43 = (unsigned int)(v43 + 1);
                  if ( (unsigned int)v43 >= 0x10 )
                  {
                    RtlpInterlockedPushEntrySList(
                      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v8 + 24LL)
                                + 8LL * *(unsigned __int16 *)(*(_QWORD *)v8 + 172LL)
                                + 1192)
                    + 144LL,
                      v8 + 12,
                      *(unsigned __int16 *)(*(_QWORD *)v8 + 172LL),
                      v42);
                    goto LABEL_32;
                  }
                }
              }
              v25 = *(__int64 **)v8;
              v26 = (__int64 **)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v8 + 8LL), 0LL);
              if ( v26 )
              {
                _m_prefetchw((char *)v26 + 44);
                if ( _InterlockedAnd((volatile signed __int32 *)v26 + 11, 0xFFFFFFF9) == 6 )
                {
                  v31 = v26 + 6;
                  v30 = **v26;
                  *v26 = 0LL;
                  goto LABEL_51;
                }
                if ( RtlpIsSubSegmentReuseable((__int64)v25, (__int64)v26) )
                {
                  do
                  {
                    v27 = *((_DWORD *)v26 + 11);
                    if ( !v27 || (v27 & 2) != 0 )
                      goto LABEL_52;
                  }
                  while ( v27 != _InterlockedCompareExchange((volatile signed __int32 *)v26 + 11, v27 | 2, v27) );
                  v20 = (__int64)*v26;
                  v28 = 0;
                  while ( 1 )
                  {
                    v29 = ((_BYTE)v28 + (unsigned __int8)*(_WORD *)(v20 + 174)) & 0xF;
                    v24 = *(_QWORD *)(v20 + 8 * v29 + 16);
                    v23 = v20 + 8 * v29;
                    if ( v24 )
                    {
                      if ( (*(_DWORD *)(v24 + 44) & 1) == 0
                        && v24 == _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)(v23 + 16),
                                    (signed __int64)v26,
                                    v24) )
                      {
                        _m_prefetchw((const void *)(v24 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v24 + 44), 0xFFFFFFFD) != 2 )
                          break;
                        v30 = **(_QWORD **)v24;
                        *(_QWORD *)v24 = 0LL;
                        v31 = (_QWORD **)(v24 + 48);
LABEL_51:
                        RtlpInterlockedPushEntrySList(v30, v31, v20, v23);
                        break;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)(v23 + 16),
                                 (signed __int64)v26,
                                 0LL) )
                    {
                      break;
                    }
                    if ( (unsigned int)++v28 >= 0x10 )
                    {
                      v31 = v26 + 6;
                      v20 = *((unsigned __int16 *)*v26 + 86);
                      v30 = *(_QWORD *)(*(_QWORD *)(**v26 + 24) + 8 * v20 + 1192) + 144LL;
                      goto LABEL_51;
                    }
                  }
                }
              }
LABEL_52:
              v32 = *v25;
              v33 = *(_QWORD *)v8;
              v34 = *(_QWORD *)(v32 + 24);
              if ( (*((_BYTE *)v8 + 38) & 3) != 0 )
              {
                BaseAddressa = (PVOID)((*((_QWORD *)v8 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
                ReservedBlockSize = RtlpGetReservedBlockSize(v8, v24, v20, v23);
                v62 = *(_QWORD *)(v34 + 24);
                RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v8 + 20);
                HeapProtection = RtlpGetHeapProtection(v62, 1LL);
                ZwProtectVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddressa,
                  &RegionSize,
                  HeapProtection,
                  &OldProtect);
              }
              *(_DWORD *)(*((_QWORD *)v8 + 1) + 20LL) = 0;
              RtlpFreeUserBlock(v34, *((unsigned __int8 **)v8 + 1), v20, v23);
              v37 = -*((unsigned __int16 *)v8 + 20);
              do
              {
                v38 = *(_QWORD *)(v33 + 160);
                LODWORD(v72) = v38 + v37;
                HIDWORD(v72) = HIDWORD(v38) - 1;
              }
              while ( v38 != _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 160), v72, v38) );
              *((_QWORD *)v8 + 1) = 0LL;
              _InterlockedIncrement((volatile signed __int32 *)(v34 + 60));
              v8[8] = 0;
              _m_prefetchw(v8 + 11);
              if ( _InterlockedAnd(v8 + 11, 0xFFFFFFFE) == 1 )
              {
                v39 = **(_QWORD **)v8;
                *(_QWORD *)v8 = 0LL;
                RtlpInterlockedPushEntrySList(v39, v8 + 12, v35, v36);
              }
LABEL_32:
              v6 = 1;
              goto LABEL_33;
            }
            v60 = *(_QWORD *)(v11 + 24);
          }
          RtlpLogHeapFailure(3, v60, v7, 0, 0LL, 0LL);
          goto LABEL_32;
        }
        goto LABEL_59;
      }
    }
LABEL_120:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v59 = NtCurrentTeb();
    v59->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v6;
  }
  return 1;
}

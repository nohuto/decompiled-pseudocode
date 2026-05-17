/*
 * XREFs of memmove @ 0x1800A6940
 * Callers:
 *     RtlLargeIntegerToChar @ 0x180001C40 (RtlLargeIntegerToChar.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180002258 (LdrpLogFatalLdrEtwEvent.c)
 *     ReportExceptionInternal @ 0x180002308 (ReportExceptionInternal.c)
 *     RtlpHpExtrasMove @ 0x180002878 (RtlpHpExtrasMove.c)
 *     sxsisol_RespectDotLocal @ 0x180002C54 (sxsisol_RespectDotLocal.c)
 *     RtlComputePrivatizedDllName_U @ 0x180002D90 (RtlComputePrivatizedDllName_U.c)
 *     RtlpMuiRegDupLanguageList @ 0x180004568 (RtlpMuiRegDupLanguageList.c)
 *     CsrCaptureMessageBuffer @ 0x180004670 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x1800046C4 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x180004A40 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x18000699C (CsrpConnectToServer.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180009E20 (RtlpExtendFrontEndUsageArray.c)
 *     TppPrepareDirectParams @ 0x18000E980 (TppPrepareDirectParams.c)
 *     LdrpRecordUnloadEvent @ 0x1800122D4 (LdrpRecordUnloadEvent.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180016640 (RtlReplaceSystemDirectoryInPath.c)
 *     LdrpProtectedCopyMemory @ 0x1800177A0 (LdrpProtectedCopyMemory.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180017B08 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800184E0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800186DC (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800187FC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpGetDataModulePath @ 0x180018EF8 (LdrpGetDataModulePath.c)
 *     EtwpTraceUmMessage @ 0x180019700 (EtwpTraceUmMessage.c)
 *     EtwpTraceUmEvent @ 0x180019A88 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x180019DB8 (EtwpRelogEvent.c)
 *     EtwpWriteToPrivateBuffers @ 0x18001A218 (EtwpWriteToPrivateBuffers.c)
 *     _ResQueryValueKey @ 0x18001B4B4 (_ResQueryValueKey.c)
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18001BBFC (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpHandleTlsData @ 0x18001C3A8 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18001C850 (LdrpAllocateTls.c)
 *     LdrpAcquireTlsIndex @ 0x18001CC28 (LdrpAcquireTlsIndex.c)
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpAllocatePlaceHolder @ 0x1800204C0 (LdrpAllocatePlaceHolder.c)
 *     LdrpSendPostSnapNotifications @ 0x180020F14 (LdrpSendPostSnapNotifications.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x18002274C (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18002BE5C (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18002D0FC (RtlpMuiRegTryToAppendLangId.c)
 *     RtlIntegerToUnicode @ 0x18002D420 (RtlIntegerToUnicode.c)
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 *     RtlCopyUnicodeString @ 0x18002DA90 (RtlCopyUnicodeString.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180031E0C (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosSearchPath_Ustr @ 0x180031F10 (RtlDosSearchPath_Ustr.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180032C90 (RtlpDosPathNameToRelativeNtPathName.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180033FC4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlpQueryEnvironmentCache @ 0x180049DCC (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x18004AC40 (RtlpScanEnvironment.c)
 *     RtlSetEnvironmentVar @ 0x18004B530 (RtlSetEnvironmentVar.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18004C864 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpComputePath @ 0x18004CA08 (RtlpComputePath.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x18004DA64 (LdrpResolveDllName.c)
 *     RtlIpv6StringToAddressW @ 0x18004E2E0 (RtlIpv6StringToAddressW.c)
 *     RtlpNameprepAsciiWorker @ 0x18004E6E4 (RtlpNameprepAsciiWorker.c)
 *     RtlCreateUnicodeString @ 0x18004EE70 (RtlCreateUnicodeString.c)
 *     RtlIdnToUnicode @ 0x18004EF00 (RtlIdnToUnicode.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18004FF0C (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlIntegerToChar @ 0x1800507F0 (RtlIntegerToChar.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800517D0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800520B4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     LdrpQueryValueKey @ 0x1800537A0 (LdrpQueryValueKey.c)
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1800554E4 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x180055AD4 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x180055F34 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x180056560 (RtlpCopyAces.c)
 *     RtlpCombineAcls @ 0x1800569A0 (RtlpCombineAcls.c)
 *     RtlCopySid @ 0x1800578A0 (RtlCopySid.c)
 *     SHA256Update @ 0x180057CF4 (SHA256Update.c)
 *     A_SHAUpdate @ 0x180058920 (A_SHAUpdate.c)
 *     PsspCaptureVaSpaceInformation @ 0x180059BCC (PsspCaptureVaSpaceInformation.c)
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 *     PsspHandleDumper @ 0x18005ACB0 (PsspHandleDumper.c)
 *     EtwpWriteBufferCompressed @ 0x18005F220 (EtwpWriteBufferCompressed.c)
 *     EtwpFinalizeLogFileHeader @ 0x18006305C (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryRegString @ 0x180065C78 (EtwpQueryRegString.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180066E90 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x180067234 (RtlpQueryRegistryDirect.c)
 *     EtwpTrackDebugIdForSession @ 0x18006761C (EtwpTrackDebugIdForSession.c)
 *     EtwpAddEventToBuffer @ 0x180067908 (EtwpAddEventToBuffer.c)
 *     RtlInsertElementGenericTableFull @ 0x180068FA0 (RtlInsertElementGenericTableFull.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800698E0 (RtlInsertElementGenericTableFullAvl.c)
 *     MD5Update @ 0x18006A640 (MD5Update.c)
 *     RtlCreateProcessParametersEx @ 0x18006AFA0 (RtlCreateProcessParametersEx.c)
 *     RtlpCopyProcString @ 0x18006B480 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18006B51C (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18006B5D0 (RtlCreateEnvironmentEx.c)
 *     RtlIpv6AddressToStringExW @ 0x18006B970 (RtlIpv6AddressToStringExW.c)
 *     RtlFormatMessageEx @ 0x18006BD70 (RtlFormatMessageEx.c)
 *     vDbgPrintExWithPrefixInternal @ 0x18006C604 (vDbgPrintExWithPrefixInternal.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006E7F0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18006F9D0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlCopySecurityDescriptor @ 0x18006FB30 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006FBF0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x18006FDD0 (RtlMakeSelfRelativeSD.c)
 *     RtlQueryAtomInAtomTable @ 0x180070340 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180070638 (RtlAddAtomToAtomTableEx.c)
 *     RtlpCopyXStateChunk @ 0x180072808 (RtlpCopyXStateChunk.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800748C0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x1800749D0 (RtlpEnsureBufferSize.c)
 *     WerpGlobalFlagsForProcess @ 0x180076860 (WerpGlobalFlagsForProcess.c)
 *     RtlQueryImageFileKeyOption @ 0x180076CB0 (RtlQueryImageFileKeyOption.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180077010 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlIpv6StringToAddressA @ 0x180077290 (RtlIpv6StringToAddressA.c)
 *     EtwpEventApiCallback @ 0x180077EF0 (EtwpEventApiCallback.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180078AE8 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrAddLoadAsDataTable @ 0x180079E20 (LdrAddLoadAsDataTable.c)
 *     RtlGetCurrentDirectory_U @ 0x18007A850 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007AA7C (RtlpCreateNewDirectoryReference.c)
 *     RtlDuplicateUnicodeString @ 0x18007ADF0 (RtlDuplicateUnicodeString.c)
 *     RtlCreateBoundaryDescriptor @ 0x18007C000 (RtlCreateBoundaryDescriptor.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007CC64 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007CEC0 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007EAD0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpAddHeapToProtectedList @ 0x18007FA7C (RtlpAddHeapToProtectedList.c)
 *     RtlpNtQueryValueKey @ 0x18007FD70 (RtlpNtQueryValueKey.c)
 *     RtlpInitParameterBlock @ 0x18007FE88 (RtlpInitParameterBlock.c)
 *     RtlIpv4AddressToStringExW @ 0x180080070 (RtlIpv4AddressToStringExW.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800819EC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetProtectedPolicy @ 0x1800823C0 (RtlSetProtectedPolicy.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180082E80 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlpNtEnumerateSubKey @ 0x180082F60 (RtlpNtEnumerateSubKey.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180084B38 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlSetEnvironmentStrings @ 0x180085980 (RtlSetEnvironmentStrings.c)
 *     RtlAddAttributeActionToRXact @ 0x1800860B0 (RtlAddAttributeActionToRXact.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180087420 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlCopyString @ 0x180087A40 (RtlCopyString.c)
 *     RtlpCopyMappedMemoryEx @ 0x180087EC8 (RtlpCopyMappedMemoryEx.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180089DF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008A8F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008ACD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlDosSearchPath_U @ 0x18008B480 (RtlDosSearchPath_U.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008B7E0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlConnectToSm @ 0x18008BE90 (RtlConnectToSm.c)
 *     LdrAddDllDirectory @ 0x18008C4E0 (LdrAddDllDirectory.c)
 *     RtlDecompressBufferLZNT1 @ 0x18008D030 (RtlDecompressBufferLZNT1.c)
 *     LZNT1CompressChunk @ 0x18008D25C (LZNT1CompressChunk.c)
 *     LdrpCorFixupImage @ 0x18008E810 (LdrpCorFixupImage.c)
 *     _ResCDupString @ 0x18008EA74 (_ResCDupString.c)
 *     RtlpCheckDeviceName @ 0x18008F218 (RtlpCheckDeviceName.c)
 *     RaiseException @ 0x180099100 (RaiseException.c)
 *     memcpy_s @ 0x18009BC40 (memcpy_s.c)
 *     memmove_s @ 0x18009BCF0 (memmove_s.c)
 *     ReadString_1 @ 0x18009EA50 (ReadString_1.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CE750 (CsrpLocalSetupForSecureProcess.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CF7C0 (RtlNtPathNameToDosPathName.c)
 *     LdrpLoadEnclaveModule @ 0x1800D0B74 (LdrpLoadEnclaveModule.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D2468 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2DEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D6570 (LdrpQueryIllegalCWDDevices.c)
 *     RtlQuerySecurityObject @ 0x1800D81C0 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D84B0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D8640 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8CB0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8E54 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DE280 (LdrUpdatePackageSearchPath.c)
 *     RtlpAddForwarderPath @ 0x1800DE478 (RtlpAddForwarderPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DE99C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DEE94 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DF11C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF454 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0604 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E0C68 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E0FC0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E17F0 (RtlSetImageMitigationPolicy.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 *     RtlReplaceSidInSd @ 0x1800E4DD0 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53C0 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E5BD4 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800E6148 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800E6380 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x1800E6CB0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7040 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7630 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E7A30 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800E9140 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800E91B0 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800E9290 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800E94A0 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800EA0CC (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800EA608 (RtlLargeIntegerToUnicode.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EB050 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBE60 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECA20 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800EFE60 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F0190 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F0AA0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpPushPageDescriptor @ 0x1800F4370 (RtlpPushPageDescriptor.c)
 *     RtlWriteNonVolatileMemory @ 0x1800F4C30 (RtlWriteNonVolatileMemory.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F4CE0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F4DA0 (RtlIpv6AddressToStringExA.c)
 *     RtlGenerate8dot3Name @ 0x1800F5810 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800F63B4 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800F78F8 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F7D6C (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x1800F8110 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FA8E8 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800FB26C (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800FD0CC (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800FD75C (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x1801006C0 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x1801021EC (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180102AEC (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpValidateHeapHeaders @ 0x180105204 (RtlpValidateHeapHeaders.c)
 *     RtlDecompressFragmentLZNT1 @ 0x180107920 (RtlDecompressFragmentLZNT1.c)
 *     MD4Update @ 0x180109180 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x180109740 (EtwTraceEventInstance.c)
 *     EtwpAddBinaryInfoEvents @ 0x18010A240 (EtwpAddBinaryInfoEvents.c)
 *     EtwpTrackBinaryForSession @ 0x18010A50C (EtwpTrackBinaryForSession.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x18010C424 (--$StackPush@I@@YAHIPEAX@Z.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18010DC60 (RtlpStackDbSegmentFindOrCreate.c)
 *     _ResFindFirstFileExW @ 0x18010FB90 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x18010FF84 (_ResFindNextFileW.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}

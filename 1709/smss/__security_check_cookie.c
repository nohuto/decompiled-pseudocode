/*
 * XREFs of __security_check_cookie @ 0x14000C4E0
 * Callers:
 *     wmain @ 0x1400014B0 (wmain.c)
 *     TraceLoggingRegisterEx @ 0x140001ACC (TraceLoggingRegisterEx.c)
 *     SmpAllocateInitialCommandBuffer @ 0x140001B5C (SmpAllocateInitialCommandBuffer.c)
 *     SmpStartCsr @ 0x140001D90 (SmpStartCsr.c)
 *     SmExecPgmEx @ 0x1400023E4 (SmExecPgmEx.c)
 *     SmpParseCommandLine @ 0x1400026F0 (SmpParseCommandLine.c)
 *     SmpEventWriteULONG @ 0x140002EC8 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140002F14 (SmpEventWriteULONGString.c)
 *     SmpLoadPnPSerializeSettings @ 0x14000308C (SmpLoadPnPSerializeSettings.c)
 *     SmpExecPgm @ 0x140003570 (SmpExecPgm.c)
 *     SmpApiCallback @ 0x140003BC0 (SmpApiCallback.c)
 *     SmpHandleConnectionRequest @ 0x140004120 (SmpHandleConnectionRequest.c)
 *     SmpDestroyControlBlock @ 0x140004BC0 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140004C4C (SmpReleaseControlBlock.c)
 *     SmpInvokeAutoChk @ 0x140004E30 (SmpInvokeAutoChk.c)
 *     SmpCreateVolumeDescriptors @ 0x140004FF0 (SmpCreateVolumeDescriptors.c)
 *     SmpTranslateSystemPartitionInformation @ 0x1400051A0 (SmpTranslateSystemPartitionInformation.c)
 *     SmpCreateVolumeDescriptor @ 0x1400054D8 (SmpCreateVolumeDescriptor.c)
 *     CreateMergeLink @ 0x140005830 (CreateMergeLink.c)
 *     SmpGetVolumeDiskNumber @ 0x140005A94 (SmpGetVolumeDiskNumber.c)
 *     SmpIsVolumeOnSCMDevice @ 0x140005BC8 (SmpIsVolumeOnSCMDevice.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x140005C64 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     SmpPagefileInitialize @ 0x140005FB8 (SmpPagefileInitialize.c)
 *     SmpConfigureSharedSessionData @ 0x140006178 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDllsInternal @ 0x140006870 (SmpInitializeKnownDllsInternal.c)
 *     SmpProcessFileRenames @ 0x1400070C0 (SmpProcessFileRenames.c)
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 *     SmpQueryDwordFromRegistry @ 0x1400079E0 (SmpQueryDwordFromRegistry.c)
 *     SmpQueryDedicatedDumpSetting @ 0x140007A6C (SmpQueryDedicatedDumpSetting.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140007C04 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000808C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCheckHybridPriority @ 0x14000831C (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x1400083B4 (SmpTrimPagingFileExtents.c)
 *     SmpProcessModuleImports @ 0x1400088B0 (SmpProcessModuleImports.c)
 *     SmpGetPagingFileSize @ 0x1400093A0 (SmpGetPagingFileSize.c)
 *     SmpCleanupStalePageFiles @ 0x1400097B4 (SmpCleanupStalePageFiles.c)
 *     SmpCheckForCrashDump @ 0x140009A80 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFiles @ 0x140009C10 (SmpSaveOldPageFiles.c)
 *     SmpInit @ 0x140009F54 (SmpInit.c)
 *     InitializeWow64OnBoot @ 0x14000A298 (InitializeWow64OnBoot.c)
 *     SmpInitializePendingRename @ 0x14000A398 (SmpInitializePendingRename.c)
 *     SmpCreateSecurityDescriptors @ 0x14000A610 (SmpCreateSecurityDescriptors.c)
 *     SmpCreateProtectedPrefixes @ 0x14000B450 (SmpCreateProtectedPrefixes.c)
 *     SmpEstablishClientSecurity @ 0x14000C064 (SmpEstablishClientSecurity.c)
 *     SmpCreateInitialSession @ 0x14000C190 (SmpCreateInitialSession.c)
 *     SmpReadSafeBootOption @ 0x14000C364 (SmpReadSafeBootOption.c)
 *     __GSHandlerCheckCommon @ 0x14000C780 (__GSHandlerCheckCommon.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F8DC (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpIsRamdiskBoot @ 0x140010074 (SmpIsRamdiskBoot.c)
 *     SmpUpdatePagefileUsageCallback @ 0x140010370 (SmpUpdatePagefileUsageCallback.c)
 *     SmpEventWriteString @ 0x1400108B4 (SmpEventWriteString.c)
 *     SmpGetCrashParameters @ 0x140010950 (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x140010A04 (SmpGetDumpDestination.c)
 *     SmpQueryFileSize @ 0x140010D38 (SmpQueryFileSize.c)
 *     SmpQueryPagefileTooSmallForDump @ 0x140010D90 (SmpQueryPagefileTooSmallForDump.c)
 *     SmpQueryPathFromRegistry @ 0x140010E14 (SmpQueryPathFromRegistry.c)
 *     SmpQuerySameVolume @ 0x140010F24 (SmpQuerySameVolume.c)
 *     SmpQueryVolumeFreeSpace @ 0x140011078 (SmpQueryVolumeFreeSpace.c)
 *     SmpSavePageFile @ 0x140011320 (SmpSavePageFile.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x1400113F8 (SmpSetDumpSecurityAndAttributes.c)
 *     SmpClearTemporaryFiles @ 0x140011A1C (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x140011EF4 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x140011FE0 (SmpForceDeleteTargetFile.c)
 *     SmpLogPFROError @ 0x1400123A0 (SmpLogPFROError.c)
 *     SmpPlatformBinaryTableExists @ 0x14001263C (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140012778 (SmpSendPlatformBinaryStatus.c)
 *     SmpSetTargetAttributes @ 0x140012A38 (SmpSetTargetAttributes.c)
 *     SmpShuffleMove @ 0x140012AB0 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140012C94 (SmpTryOverwriteReadonlyFile.c)
 *     SmpStartServerSilo @ 0x140012EC0 (SmpStartServerSilo.c)
 *     SmpUnhandledExceptionFilter @ 0x140013068 (SmpUnhandledExceptionFilter.c)
 *     PathReplaceGreedy @ 0x1400135B4 (PathReplaceGreedy.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}

/*
 * XREFs of __security_check_cookie @ 0x14000C6C0
 * Callers:
 *     wmain @ 0x1400014B0 (wmain.c)
 *     TraceLoggingRegisterEx @ 0x140001AD0 (TraceLoggingRegisterEx.c)
 *     SmpAllocateInitialCommandBuffer @ 0x140001B60 (SmpAllocateInitialCommandBuffer.c)
 *     SmpStartCsr @ 0x140001DA0 (SmpStartCsr.c)
 *     SmExecPgmEx @ 0x1400023F0 (SmExecPgmEx.c)
 *     SmpParseCommandLine @ 0x1400026F0 (SmpParseCommandLine.c)
 *     SmpEventWriteULONG @ 0x140002ECC (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140002F18 (SmpEventWriteULONGString.c)
 *     SmpLoadPnPSerializeSettings @ 0x140003090 (SmpLoadPnPSerializeSettings.c)
 *     SmpExecPgm @ 0x140003580 (SmpExecPgm.c)
 *     SmpApiCallback @ 0x140003BD0 (SmpApiCallback.c)
 *     SmpHandleConnectionRequest @ 0x140004130 (SmpHandleConnectionRequest.c)
 *     SmpDestroyControlBlock @ 0x140004BE4 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140004C70 (SmpReleaseControlBlock.c)
 *     SmpInvokeAutoChk @ 0x140004E40 (SmpInvokeAutoChk.c)
 *     SmpCreateVolumeDescriptors @ 0x140005000 (SmpCreateVolumeDescriptors.c)
 *     SmpTranslateSystemPartitionInformation @ 0x1400051B0 (SmpTranslateSystemPartitionInformation.c)
 *     SmpCreateVolumeDescriptor @ 0x1400054E8 (SmpCreateVolumeDescriptor.c)
 *     CreateMergeLink @ 0x140005840 (CreateMergeLink.c)
 *     SmpGetVolumeDiskNumber @ 0x140005A98 (SmpGetVolumeDiskNumber.c)
 *     SmpIsVolumeOnSCMDevice @ 0x140005BCC (SmpIsVolumeOnSCMDevice.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x140005C68 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     SmpConfigureSharedSessionData @ 0x140005FBC (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDllsInternal @ 0x1400066C0 (SmpInitializeKnownDllsInternal.c)
 *     SmpProcessFileRenames @ 0x140006F00 (SmpProcessFileRenames.c)
 *     SmpLoadDataFromRegistry @ 0x140007064 (SmpLoadDataFromRegistry.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400078A0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x140007D28 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCheckHybridPriority @ 0x140007FC0 (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x140008058 (SmpTrimPagingFileExtents.c)
 *     InitializeWow64OnBoot @ 0x140008154 (InitializeWow64OnBoot.c)
 *     SmpProcessModuleImports @ 0x140008660 (SmpProcessModuleImports.c)
 *     SmpGetPagingFileSize @ 0x140009154 (SmpGetPagingFileSize.c)
 *     SmpCleanupStalePageFiles @ 0x140009568 (SmpCleanupStalePageFiles.c)
 *     SmpCheckForCrashDump @ 0x140009834 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFiles @ 0x140009AF0 (SmpSaveOldPageFiles.c)
 *     SmpPagefileInitialize @ 0x140009E74 (SmpPagefileInitialize.c)
 *     SmpQueryDwordFromRegistry @ 0x14000A0D0 (SmpQueryDwordFromRegistry.c)
 *     SmpQueryDedicatedDumpSetting @ 0x14000A158 (SmpQueryDedicatedDumpSetting.c)
 *     SmpInit @ 0x14000A1E0 (SmpInit.c)
 *     SmpInitializePendingRename @ 0x14000A564 (SmpInitializePendingRename.c)
 *     SmpCreateSecurityDescriptors @ 0x14000A7E0 (SmpCreateSecurityDescriptors.c)
 *     SmpCreateProtectedPrefixes @ 0x14000B620 (SmpCreateProtectedPrefixes.c)
 *     SmpEstablishClientSecurity @ 0x14000C234 (SmpEstablishClientSecurity.c)
 *     SmpCreateInitialSession @ 0x14000C360 (SmpCreateInitialSession.c)
 *     SmpReadSafeBootOption @ 0x14000C534 (SmpReadSafeBootOption.c)
 *     __GSHandlerCheckCommon @ 0x14000C960 (__GSHandlerCheckCommon.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F924 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpIsRamdiskBoot @ 0x1400100A4 (SmpIsRamdiskBoot.c)
 *     SmpUpdatePagefileUsageCallback @ 0x1400103C0 (SmpUpdatePagefileUsageCallback.c)
 *     SmpCopyFile @ 0x1400106B0 (SmpCopyFile.c)
 *     SmpEventWriteString @ 0x1400109F8 (SmpEventWriteString.c)
 *     SmpGetCrashParameters @ 0x140010A94 (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x140010B48 (SmpGetDumpDestination.c)
 *     SmpQueryFileSize @ 0x140010E7C (SmpQueryFileSize.c)
 *     SmpQueryPagefileTooSmallForDump @ 0x140010ED4 (SmpQueryPagefileTooSmallForDump.c)
 *     SmpQueryPathFromRegistry @ 0x140010F58 (SmpQueryPathFromRegistry.c)
 *     SmpQuerySameVolume @ 0x140011068 (SmpQuerySameVolume.c)
 *     SmpQueryVolumeFreeSpace @ 0x1400111BC (SmpQueryVolumeFreeSpace.c)
 *     SmpSavePageFile @ 0x14001147C (SmpSavePageFile.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x140011568 (SmpSetDumpSecurityAndAttributes.c)
 *     SmpClearTemporaryFiles @ 0x140011C2C (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x140012104 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x1400121F0 (SmpForceDeleteTargetFile.c)
 *     SmpLogPFROError @ 0x1400125AC (SmpLogPFROError.c)
 *     SmpPlatformBinaryTableExists @ 0x140012848 (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140012984 (SmpSendPlatformBinaryStatus.c)
 *     SmpSetTargetAttributes @ 0x140012C44 (SmpSetTargetAttributes.c)
 *     SmpShuffleMove @ 0x140012CBC (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140012EA0 (SmpTryOverwriteReadonlyFile.c)
 *     SmpStartServerSilo @ 0x140013030 (SmpStartServerSilo.c)
 *     SmpUnhandledExceptionFilter @ 0x1400131D8 (SmpUnhandledExceptionFilter.c)
 *     PathReplaceGreedy @ 0x140013728 (PathReplaceGreedy.c)
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

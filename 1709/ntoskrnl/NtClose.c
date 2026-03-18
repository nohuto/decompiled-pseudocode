/*
 * XREFs of NtClose @ 0x1404AE620
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x140141770 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401418D0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     SepRmCallLsa @ 0x14014C140 (SepRmCallLsa.c)
 *     CmLogMcUpdateStatus @ 0x1401E3D98 (CmLogMcUpdateStatus.c)
 *     RtlQueryValidationRunlevel @ 0x1402564B0 (RtlQueryValidationRunlevel.c)
 *     PfpVolumeOpenAndVerify @ 0x14043FDE4 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404412FC (PfSnOpenVolumesForPrefetch.c)
 *     PfpFileBuildReadSupport @ 0x140441A30 (PfpFileBuildReadSupport.c)
 *     PfSnPrefetchMetadata @ 0x140441D14 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x140442210 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140442728 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x1404433C8 (PfpReadSupportCleanup.c)
 *     PfSnIsVolumeMounted @ 0x1404435E0 (PfSnIsVolumeMounted.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14044F7E0 (RtlCreateSystemVolumeInformationFolder.c)
 *     PfSnGetPrefetchInstructions @ 0x140453D1C (PfSnGetPrefetchInstructions.c)
 *     AlpcpConnectPort @ 0x14046378C (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x140468BE4 (AlpcpCreateConnectionPort.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 *     NtCreateRegistryTransaction @ 0x140598228 (NtCreateRegistryTransaction.c)
 *     RtlpLoadLanguageConfigList @ 0x1405BCE3C (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1405BD3D8 (_RtlpMuiRegLoadInstalled.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405C0234 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405C0658 (CmpInitializeRegistryNode.c)
 *     CmpCreatePerfKeys @ 0x1405C104C (CmpCreatePerfKeys.c)
 *     CmpInitializeLazyWriters @ 0x1405CC658 (CmpInitializeLazyWriters.c)
 *     AdtpObjsInitialize @ 0x1405D1148 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405D161C (AdtpInitializeDriveLetters.c)
 *     NtOpenRegistryTransaction @ 0x140687AA0 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x1406B4C20 (IopConnectLinkTrackingPort.c)
 *     PfpPrefetchPrivatePages @ 0x1406F2B50 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F37E4 (PfpSourceGetPrefetchSupport.c)
 *     PopEtEnergyTrackerCreate @ 0x140708870 (PopEtEnergyTrackerCreate.c)
 *     RtlpSysVolTakeOwnership @ 0x140723ACC (RtlpSysVolTakeOwnership.c)
 *     ExpWatchLicenseInfoWork @ 0x140755DD0 (ExpWatchLicenseInfoWork.c)
 *     sub_14082686C @ 0x14082686C (sub_14082686C.c)
 *     CmGetSystemDriverList @ 0x140835884 (CmGetSystemDriverList.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 *     CmpInitializeHardwareConfiguration @ 0x14083AA64 (CmpInitializeHardwareConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x14083ABA8 (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x14083CD84 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x14083CDF0 (CmpSetSystemValues.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     IopInitializeBuiltinDriver @ 0x140846850 (IopInitializeBuiltinDriver.c)
 *     SepAdtInitializeAuditingOptions @ 0x140849D38 (SepAdtInitializeAuditingOptions.c)
 *     IopInitCrashDumpRegCallback @ 0x140849F70 (IopInitCrashDumpRegCallback.c)
 *     FsRtlInitializeSmssEvent @ 0x1408512D8 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140852C8C (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140854AC8 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x1408570AC (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140868964 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140868D4C (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x140869144 (CmpSetNetworkValue.c)
 *     IopApplySystemPartitionProt @ 0x14086A3C0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x140061F40 (KeIsAttachedProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x1400A5DF0 (ObpIsKernelHandle.c)
 *     PsIsThreadTerminating @ 0x1400E6D30 (PsIsThreadTerminating.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015BB34 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402049C0 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x140283E9C (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x1405F308C (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     VfCheckUserHandle @ 0x1407B85A8 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  ULONG_PTR v1; // rsi
  char PreviousMode; // bp
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r15
  ULONG_PTR v5; // r14
  PEPROCESS v6; // r12
  signed __int64 *v7; // rbx
  signed __int64 v8; // r8
  NTSTATUS v9; // ecx
  ULONG_PTR v11; // rcx
  bool IsAttachedProcess; // al
  bool v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v1 = (ULONG_PTR)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v11);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( PreviousMode || (v1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v1 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v5 = Process[1].ActiveProcessors.Bitmap[5];
    v6 = CurrentThread->ApcState.Process;
    if ( v5 == ObpKernelHandleTable )
      return -1073741816;
  }
  else
  {
    v5 = ObpKernelHandleTable;
    v1 ^= 0xFFFFFFFF80000000uLL;
    v6 = PsInitialSystemProcess;
  }
  --CurrentThread->KernelApcDisable;
  if ( (v1 & 0x3FC) == 0 || (v7 = (signed __int64 *)ExpLookupHandleTableEntry(v5, v1)) == 0LL )
  {
LABEL_14:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v1 < 0xFFFFFFFFFFFFFFFAuLL && v1 != 0 )
    {
      ExQueryHandleExceptionsPermanency(v5, &v14, &v13);
      if ( (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v5) && v13 )
        ExHandleLogBadReference(v5, v1, PreviousMode);
      if ( PreviousMode )
      {
        if ( (NtGlobalFlag & 0x400000) != 0 || Process[1].ActiveProcessors.Bitmap[6] || *(_QWORD *)(v5 + 96) )
        {
          IsAttachedProcess = KeIsAttachedProcess();
          v9 = -1073741816;
          if ( !IsAttachedProcess )
            return KeRaiseUserException(0xC0000008);
          return v9;
        }
      }
      else if ( !PsIsThreadTerminating(CurrentThread)
             && Process[1].ActiveProcessors.Bitmap[1]
             && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
      }
    }
    v9 = -1073741816;
    if ( v1 + 6 <= 5 )
      return 0;
    return v9;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v7);
      v8 = *v7;
      if ( (*v7 & 1) != 0 )
        break;
      if ( !v8 )
        goto LABEL_14;
      ExpBlockOnLockedHandleEntry(v5, v7, v8);
    }
  }
  while ( v8 != _InterlockedCompareExchange64(v7, v8 - 1, v8) );
  return ObCloseHandleTableEntry(v5, v7, v6, v1, PreviousMode, 0);
}

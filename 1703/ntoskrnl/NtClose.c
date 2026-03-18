/*
 * XREFs of NtClose @ 0x14052EB10
 * Callers:
 *     SepRmCallLsa @ 0x1401481D0 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140157150 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401572B0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     CmLogMcUpdateStatus @ 0x1401DFC58 (CmLogMcUpdateStatus.c)
 *     RtlQueryValidationRunlevel @ 0x140240190 (RtlQueryValidationRunlevel.c)
 *     AlpcpCreateConnectionPort @ 0x140445648 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x140458340 (NtCreateRegistryTransaction.c)
 *     PfpVolumeOpenAndVerify @ 0x140464084 (PfpVolumeOpenAndVerify.c)
 *     PfSnPrefetchMetadata @ 0x1404658C0 (PfSnPrefetchMetadata.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140465F50 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x1404666C8 (PfSnIsVolumeMounted.c)
 *     NtSecureConnectPort @ 0x140470F8C (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x140474C88 (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     PfSnPopulateReadList @ 0x14053DA20 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14053DFD0 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x14053E940 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14053E99C (PfpFileBuildReadSupport.c)
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14056CC30 (RtlCreateSystemVolumeInformationFolder.c)
 *     PfpPrefetchPrivatePages @ 0x1405789F4 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x140578C50 (PfpSourceGetPrefetchSupport.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 *     CmpCreatePerfKeys @ 0x1405A4700 (CmpCreatePerfKeys.c)
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405A74A8 (AdtpInitializeDriveLetters.c)
 *     CmpInitializeLazyWriters @ 0x1405A8DA0 (CmpInitializeLazyWriters.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405AF0D8 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405AF4FC (CmpInitializeRegistryNode.c)
 *     RtlpLoadLanguageConfigList @ 0x1405B71A4 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1405B7714 (_RtlpMuiRegLoadInstalled.c)
 *     NtOpenRegistryTransaction @ 0x14065EC8C (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x140688C40 (IopConnectLinkTrackingPort.c)
 *     PopEtEnergyTrackerCreate @ 0x1406D1460 (PopEtEnergyTrackerCreate.c)
 *     RtlpSysVolTakeOwnership @ 0x1406EB860 (RtlpSysVolTakeOwnership.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 *     sub_1407F58FC @ 0x1407F58FC (sub_1407F58FC.c)
 *     CmGetSystemDriverList @ 0x1407F67B8 (CmGetSystemDriverList.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x1408075C8 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140807834 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     SepAdtInitializeAuditingOptions @ 0x140808DF4 (SepAdtInitializeAuditingOptions.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
 *     IopInitCrashDumpRegCallback @ 0x1408138F0 (IopInitCrashDumpRegCallback.c)
 *     FsRtlInitializeSmssEvent @ 0x1408194F8 (FsRtlInitializeSmssEvent.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     CmpInitializeHardwareConfiguration @ 0x14081E6D8 (CmpInitializeHardwareConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x14081E820 (CmpSetupConfigurationTree.c)
 *     CreateSystemRootLink @ 0x140821624 (CreateSystemRootLink.c)
 *     ExpInitializeCallbacks @ 0x1408219B8 (ExpInitializeCallbacks.c)
 *     IopProtectSystemPartition @ 0x140825828 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140831A70 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140831E58 (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x140832250 (CmpSetNetworkValue.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x14008BBC0 (ObpIsKernelHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401FE6D0 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x14025A50C (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14025A5F4 (ExQueryHandleExceptionsPermanency.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x1407767AC (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  ULONG_PTR v1; // rbx
  char PreviousMode; // bp
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  ULONG_PTR v5; // r14
  PEPROCESS v6; // r12
  __int64 *v7; // rdi
  __int64 v8; // r8
  NTSTATUS result; // eax
  void *v10; // rcx
  bool v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF

  v1 = (ULONG_PTR)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v10);
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
  if ( (v1 & 0x3FC) == 0 || (v7 = (__int64 *)ExpLookupHandleTableEntry(v5, v1)) == 0LL )
  {
LABEL_13:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v1 >= 0xFFFFFFFFFFFFFFFAuLL || v1 == 0 )
      goto LABEL_14;
    ExQueryHandleExceptionsPermanency(v5, &v12, &v11);
    if ( (*(_BYTE *)(v5 + 44) & 0x10) != 0 && v11 )
      ExHandleLogBadReference(v5, v1, PreviousMode);
    if ( !PreviousMode )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
        && Process[1].ActiveProcessors.Bitmap[1]
        && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
      }
      goto LABEL_14;
    }
    if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].ActiveProcessors.Bitmap[6] && !*(_QWORD *)(v5 + 96) )
    {
LABEL_14:
      result = -1073741816;
      if ( v1 + 6 <= 5 )
        return 0;
      return result;
    }
    if ( !KeIsAttachedProcess() )
      return KeRaiseUserException(0xC0000008);
    return -1073741816;
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
        goto LABEL_13;
      ExpBlockOnLockedHandleEntry(v5, v7, v8);
    }
  }
  while ( v8 != _InterlockedCompareExchange64(v7, v8 - 1, v8) );
  return ObCloseHandleTableEntry(v5, v7, v6, v1, PreviousMode, 0);
}

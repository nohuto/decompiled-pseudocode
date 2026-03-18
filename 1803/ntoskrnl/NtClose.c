/*
 * XREFs of NtClose @ 0x1405A2660
 * Callers:
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140179A88 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140179BE8 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlQueryValidationRunlevel @ 0x14028E570 (RtlQueryValidationRunlevel.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14048F544 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x14048FCC8 (PfSnIsVolumeMounted.c)
 *     PfpVolumeOpenAndVerify @ 0x140492250 (PfpVolumeOpenAndVerify.c)
 *     PfSnPrefetchMetadata @ 0x1404A0608 (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x1404A14F8 (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x1404A1900 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x1404A1E78 (PfSnGetSectionObject.c)
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     PfpReadSupportCleanup @ 0x1404BB54C (PfpReadSupportCleanup.c)
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1404E0524 (AlpcpCreateConnectionPort.c)
 *     PfSnGetPrefetchInstructions @ 0x140527FA4 (PfSnGetPrefetchInstructions.c)
 *     NtCreateRegistryTransaction @ 0x140580D98 (NtCreateRegistryTransaction.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1405C3630 (RtlCreateSystemVolumeInformationFolder.c)
 *     PfpPrefetchPrivatePages @ 0x1405E85E4 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x1405E883C (PfpSourceGetPrefetchSupport.c)
 *     CmpInitializeLazyWriters @ 0x140628674 (CmpInitializeLazyWriters.c)
 *     AdtpObjsInitialize @ 0x140632254 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140632728 (AdtpInitializeDriveLetters.c)
 *     RtlpLoadLanguageConfigList @ 0x1406352C4 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140635858 (_RtlpMuiRegLoadInstalled.c)
 *     PopEtEnergyTrackerCreate @ 0x14064E46C (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x1406EC05C (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x1407198D0 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x140787398 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B8BD4 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 *     sub_140897518 @ 0x140897518 (sub_140897518.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     SepAdtInitializeAuditingOptions @ 0x1408B2164 (SepAdtInitializeAuditingOptions.c)
 *     IopInitializeBuiltinDriver @ 0x1408B670C (IopInitializeBuiltinDriver.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 *     IopInitCrashDumpRegCallback @ 0x1408BBE30 (IopInitCrashDumpRegCallback.c)
 *     FsRtlInitializeSmssEvent @ 0x1408C1DC8 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x1408C40AC (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x1408C5094 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x1408C91B8 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1408DD13C (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x14003EC88 (ObpIsKernelHandle.c)
 *     PsIsThreadTerminating @ 0x140040C30 (PsIsThreadTerminating.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1400D182C (ExQueryHandleExceptionsPermanency.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeIsAttachedProcess @ 0x140128220 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402421A0 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x1402B8000 (ExHandleLogBadReference.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x140606130 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     VfCheckUserHandle @ 0x140825800 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  ULONG_PTR v1; // rsi
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  ULONG_PTR v5; // rbp
  PEPROCESS v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // r8
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
  if ( PreviousMode || (v1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v1 > 0xFFFFFFFFFFFFFFFDuLL )
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

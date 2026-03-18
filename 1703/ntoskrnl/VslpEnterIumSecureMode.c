/*
 * XREFs of VslpEnterIumSecureMode @ 0x14002F4C0
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x14012008C (KeRequestTerminationThread.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     KeBalanceSetManager @ 0x14015E600 (KeBalanceSetManager.c)
 *     VslExchangeEntropy @ 0x1401674B0 (VslExchangeEntropy.c)
 *     VslpIumPhase4Initialize @ 0x140167AFC (VslpIumPhase4Initialize.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401E75D0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1401E77DC (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1401E9668 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1401EA82C (HvlCollectLivedump.c)
 *     HvlpGetSecurePageList @ 0x1401EC374 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401EC5C4 (HvlpStartSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x1401ECA34 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1401ECA90 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x1401ECC48 (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x1401ECCA0 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1401ECD10 (VslEndSecurePageIteration.c)
 *     VslFastFlushSecureRangeList @ 0x1401ECD74 (VslFastFlushSecureRangeList.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401ECE54 (VslFinalizeLiveDumpInSk.c)
 *     VslFlushSecureAddressSpace @ 0x1401ECF64 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x1401ED018 (VslGetEtwDebugId.c)
 *     VslGetSecurePciEnabled @ 0x1401ED178 (VslGetSecurePciEnabled.c)
 *     VslIsTrustletRunning @ 0x1401ED2A0 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1401ED320 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1401ED47C (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslLocateHotPatchBase @ 0x1401ED4EC (VslLocateHotPatchBase.c)
 *     VslMakeProtectedPageWritable @ 0x1401ED568 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x1401ED5D4 (VslNotifyShutdown.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401ED628 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1401ED718 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x1401ED798 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1401ED864 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1401ED8E0 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1401EDA30 (VslRetrieveMailbox.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1401EDB1C (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1401EDC10 (VslSlowFlushSecureRangeList.c)
 *     VslVerifyPage @ 0x1401EDCC0 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401EDD3C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1401EDDF0 (VslpKsrEnterIumSecureMode.c)
 *     VslpSetupLiveDumpBuffer @ 0x1401EE04C (VslpSetupLiveDumpBuffer.c)
 *     KeCopyPrivilegedPage @ 0x1401FC964 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x1401FC9E8 (KeSetPagePrivilege.c)
 *     KeSecureProcess @ 0x1401FD19C (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x1401FD25C (KeUnsecureProcess.c)
 *     MiLockHotPatchPages @ 0x140211784 (MiLockHotPatchPages.c)
 *     MiDbgWriteCheck @ 0x14021B75C (MiDbgWriteCheck.c)
 *     VslCloseSecureHandle @ 0x140269F10 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x140269F60 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x140269FD0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14026A0D0 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14026A1D0 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14026A2C0 (VslFinishSecureImageValidation.c)
 *     VslMakeCodeCatalog @ 0x14026A3A0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14026A410 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14026A610 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14026A670 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x14026A750 (VslValidateDynamicCodePages.c)
 *     VslValidateSecureImagePages @ 0x14026A950 (VslValidateSecureImagePages.c)
 *     DbgkCopyProcessDebugPort @ 0x14049CDD4 (DbgkCopyProcessDebugPort.c)
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     MiMarkKernelImageCfgBits @ 0x1405858D8 (MiMarkKernelImageCfgBits.c)
 *     VslQuerySecureDevice @ 0x1405CB440 (VslQuerySecureDevice.c)
 *     NtDebugActiveProcess @ 0x140680094 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140680480 (NtRemoveProcessDebug.c)
 *     VslCreateSecureProcess @ 0x1406878D4 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x140687940 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140687A60 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140687AFC (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x140687BB0 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x140687CF0 (VslDeleteSecureSection.c)
 *     VslEnableKernelCfgTarget @ 0x140687D40 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x140687D90 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x140687E08 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x140687E54 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x140687F64 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x140687FD0 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x140688040 (VslGetSetSecureContext.c)
 *     VslIumEtwEnableCallback @ 0x1406880A0 (VslIumEtwEnableCallback.c)
 *     VslRelaxQuotas @ 0x140688124 (VslRelaxQuotas.c)
 *     VslReserveProtectedPages @ 0x140688190 (VslReserveProtectedPages.c)
 *     VslRundownSecureProcess @ 0x1406881F4 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140688244 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x1406882A8 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x140688488 (VslTerminateSecureThread.c)
 *     VslpConnectedStandbyPoCallback @ 0x140688510 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1406885C0 (VslpConnectedStandbyWnfCallback.c)
 *     VslConnectSwInterrupt @ 0x1407F6C58 (VslConnectSwInterrupt.c)
 *     MiApplyDynamicRelocations @ 0x140810CD0 (MiApplyDynamicRelocations.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeKernelCfg @ 0x14082694C (MiInitializeKernelCfg.c)
 *     PspInitPhase3 @ 0x1408269D4 (PspInitPhase3.c)
 *     VslpIumPhase0Initialize @ 0x140832A48 (VslpIumPhase0Initialize.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14002F528 (HvlQueryVsmConnection.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     HvlSwitchToVsmVtl1 @ 0x14017DDA0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x14017DEF0 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned __int8 CurrentIrql; // r12
  __int16 v7; // dx
  __int64 v8; // rcx
  unsigned __int8 v9; // r8
  __int64 v10; // r9
  NTSTATUS result; // eax
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v14; // r15
  unsigned int SecureThreadCookie; // eax
  bool v16; // r14
  int v17; // r9d
  char v18; // al
  char PreviousMode; // r13

  v4 = a3;
  LOBYTE(a3) = a1;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL, a2, a3) )
    return -1073741667;
  *(_BYTE *)v10 = v9;
  *(_WORD *)(v10 + 2) = v7;
  if ( v9 > 1u )
  {
    HvlSwitchToVsmVtl1(v8, a4);
    if ( *(_BYTE *)(a4 + 1) >= 0x80u )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0;
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled() && VslVsmEnabled )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = KeGetCurrentIrql();
  if ( v4 )
  {
    *(_DWORD *)(v12 + 4) = v4;
  }
  else
  {
    SecureThreadCookie = CurrentThread->SecureThreadCookie;
    *(_DWORD *)(v12 + 4) = SecureThreadCookie;
    if ( SecureThreadCookie )
    {
      v4 = SecureThreadCookie;
    }
    else if ( VslVsmEnabled )
    {
      if ( v14 < 2u )
      {
        result = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
        if ( result < 0 )
          return result;
      }
    }
  }
  if ( v14 == 1 )
  {
    v16 = 1;
LABEL_23:
    --CurrentThread->KernelApcDisable;
    goto LABEL_24;
  }
  v16 = CurrentThread->SecureThreadCookie == 0;
  if ( v14 )
    v16 = 0;
  if ( v16 )
    goto LABEL_23;
  while ( 1 )
  {
LABEL_24:
    HvlSwitchToVsmVtl1(0LL, a4);
    if ( *(_BYTE *)(a4 + 1) >= 0x80u )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    v18 = *(_BYTE *)(a4 + 1);
    if ( v18 == 6 )
      break;
    if ( v18 == 1 )
      goto LABEL_46;
    if ( !v4 )
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
        goto LABEL_34;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          goto LABEL_35;
        }
        break;
      case 3:
        break;
      case 5:
LABEL_34:
        PsDispatchIumService(a4);
        goto LABEL_35;
      default:
        goto LABEL_35;
    }
    if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_1403F8890 )
    {
      PreviousMode = CurrentThread->PreviousMode;
      if ( *(_BYTE *)(a4 + 1) == 3 )
        CurrentThread->PreviousMode = 0;
      *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                   KeServiceDescriptorTable
                                 + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                   a4 + 8,
                                   *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
      CurrentThread->PreviousMode = PreviousMode;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = -1073741796LL;
    }
LABEL_35:
    if ( !v4 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  __writecr8(0LL);
LABEL_46:
  if ( !v4 && v14 < 2u && VslVsmEnabled )
    KeReleaseSemaphoreEx((unsigned int)&VslpIumThreadSemaphore, 0, 1, v17, 0);
  if ( v16 )
    KeLeaveCriticalRegionThread(CurrentThread);
  if ( CurrentIrql != 15 )
    __writecr8(CurrentIrql);
  return *(_DWORD *)(a4 + 8);
}

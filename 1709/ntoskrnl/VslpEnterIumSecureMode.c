/*
 * XREFs of VslpEnterIumSecureMode @ 0x14011D800
 * Callers:
 *     KeRequestTerminationThread @ 0x1400AB560 (KeRequestTerminationThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     KeBalanceSetManager @ 0x140148E40 (KeBalanceSetManager.c)
 *     KeCopyPrivilegedPage @ 0x14014C060 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14015130C (KeSetPagePrivilege.c)
 *     VslExchangeEntropy @ 0x140159280 (VslExchangeEntropy.c)
 *     VslValidateSecureImagePages @ 0x140159BB0 (VslValidateSecureImagePages.c)
 *     VslpIumPhase4Initialize @ 0x14015C2E4 (VslpIumPhase4Initialize.c)
 *     VslGetSecurePciEnabled @ 0x14015D4C0 (VslGetSecurePciEnabled.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401EC850 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1401ECA5C (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1401EE7F8 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1401EF9DC (HvlCollectLivedump.c)
 *     HvlpGetSecurePageList @ 0x1401F1174 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401F13C4 (HvlpStartSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x1401F188C (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1401F18F0 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x1401F1AA8 (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x1401F1B00 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1401F1B70 (VslEndSecurePageIteration.c)
 *     VslFastFlushSecureRangeList @ 0x1401F1BD4 (VslFastFlushSecureRangeList.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401F1CC4 (VslFinalizeLiveDumpInSk.c)
 *     VslFlushSecureAddressSpace @ 0x1401F1DD4 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x1401F1E98 (VslGetEtwDebugId.c)
 *     VslIsTrustletRunning @ 0x1401F20B8 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1401F2140 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1401F229C (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslLocateHotPatchBase @ 0x1401F230C (VslLocateHotPatchBase.c)
 *     VslMakeProtectedPageWritable @ 0x1401F2388 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x1401F23F4 (VslNotifyShutdown.c)
 *     VslProvisionDumpEncryption @ 0x1401F2448 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401F2494 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1401F2588 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x1401F2608 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1401F26D8 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1401F2760 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1401F28B0 (VslRetrieveMailbox.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1401F299C (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1401F2A90 (VslSlowFlushSecureRangeList.c)
 *     VslTestRoutine @ 0x1401F2B50 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1401F2BA0 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401F2C1C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1401F2CD0 (VslpKsrEnterIumSecureMode.c)
 *     VslpSetupLiveDumpBuffer @ 0x1401F2D98 (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x1401F2E20 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x1401F2E70 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x1401F2EE0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1401F2FE0 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x1401F30F0 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x1401F31E0 (VslFinishSecureImageValidation.c)
 *     VslMakeCodeCatalog @ 0x1401F32C0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x1401F3330 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x1401F3480 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1401F34E0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x1401F35C0 (VslValidateDynamicCodePages.c)
 *     KeSecureProcess @ 0x140202FD4 (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x140203094 (KeUnsecureProcess.c)
 *     MiLockHotPatchPages @ 0x140219014 (MiLockHotPatchPages.c)
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14053A2F4 (DbgkCopyProcessDebugPort.c)
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 *     MiMarkKernelImageCfgBits @ 0x14059EF50 (MiMarkKernelImageCfgBits.c)
 *     VslQuerySecureDevice @ 0x1405DE3B0 (VslQuerySecureDevice.c)
 *     NtDebugActiveProcess @ 0x1406AB268 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x1406AB654 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x1406B32F4 (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x1406B3378 (VslCallEnclave.c)
 *     VslCreateEnclave @ 0x1406B355C (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x1406B3690 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x1406B3700 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x1406B3824 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1406B38C0 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x1406B3974 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x1406B3AB0 (VslDeleteSecureSection.c)
 *     VslEnableKernelCfgTarget @ 0x1406B3B00 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x1406B3B50 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x1406B3BC8 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x1406B3C14 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x1406B3D24 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x1406B3D90 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x1406B3E00 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x1406B3E64 (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x1406B3ED0 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveModule @ 0x1406B3F54 (VslLoadEnclaveModule.c)
 *     VslRelaxQuotas @ 0x1406B4054 (VslRelaxQuotas.c)
 *     VslReserveProtectedPages @ 0x1406B40C0 (VslReserveProtectedPages.c)
 *     VslRundownSecureProcess @ 0x1406B4124 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x1406B4174 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x1406B41D8 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x1406B43C0 (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x1406B4440 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x1406B44A0 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1406B4550 (VslpConnectedStandbyWnfCallback.c)
 *     VslSetCodeIntegrityPolicy @ 0x1406B45F0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1406D5614 (PipUnprotectDevice.c)
 *     PsRundownVsmEnclave @ 0x14071C0FC (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14071C150 (PsTerminateVsmEnclave.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     MiApplyDynamicRelocations @ 0x14083982C (MiApplyDynamicRelocations.c)
 *     VslConnectSwInterrupt @ 0x140856048 (VslConnectSwInterrupt.c)
 *     MiInitializeKernelCfg @ 0x1408580E8 (MiInitializeKernelCfg.c)
 *     PspInitPhase3 @ 0x14085818C (PspInitPhase3.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     HvlSwitchToVsmVtl1 @ 0x14017D720 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x14017D870 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v4; // r14
  bool v8; // bl
  unsigned __int8 CurrentIrql; // r13
  __int16 v10; // dx
  __int64 v11; // rcx
  __int64 v12; // r9
  NTSTATUS result; // eax
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v17; // bp
  unsigned int SecureThreadCookie; // eax
  char v19; // al
  char PreviousMode; // bp
  char v21; // [rsp+30h] [rbp-38h]

  v4 = 0;
  v21 = 0;
  v8 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return -1073741667;
  *(_BYTE *)v12 = a1;
  *(_WORD *)(v12 + 2) = v10;
  if ( a1 <= 2u )
  {
    if ( !KeAreInterruptsEnabled() && VslVsmEnabled )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v14);
    }
    CurrentThread = KeGetCurrentThread();
    v17 = KeGetCurrentIrql();
    if ( a1 == 1 )
    {
      *(_DWORD *)(v15 + 4) = a3;
    }
    else
    {
      if ( a3 )
      {
        *(_DWORD *)(v15 + 4) = a3;
      }
      else
      {
        SecureThreadCookie = CurrentThread->SecureThreadCookie;
        *(_DWORD *)(v15 + 4) = SecureThreadCookie;
        if ( SecureThreadCookie )
        {
          a3 = SecureThreadCookie;
        }
        else if ( v17 < 2u && VslVsmEnabled )
        {
          result = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
          if ( result < 0 )
            return result;
          v21 = 1;
        }
      }
      v8 = CurrentThread->SecureThreadCookie == 0;
    }
    if ( v17 == 1 )
    {
      v4 = 1;
    }
    else
    {
      if ( !v17 )
        v4 = v8;
      if ( !v4 )
      {
        while ( 1 )
        {
LABEL_15:
          HvlSwitchToVsmVtl1(0LL, a4);
          if ( *(char *)(a4 + 1) < 0 )
          {
            __debugbreak();
            *(_BYTE *)(a4 + 1) &= ~0x80u;
          }
          v19 = *(_BYTE *)(a4 + 1);
          if ( v19 == 1 )
          {
LABEL_18:
            if ( v21 )
              KeReleaseSemaphoreEx((__int64)&VslpIumThreadSemaphore, 0, 1);
            if ( v4 )
              KeLeaveCriticalRegionThread((__int64)CurrentThread);
            if ( CurrentIrql != 15 )
              __writecr8(CurrentIrql);
            return *(_DWORD *)(a4 + 8);
          }
          if ( v19 == 6 )
          {
            __writecr8(0LL);
            goto LABEL_18;
          }
          if ( !a3 && a1 != 1 )
            CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
          if ( !*(_BYTE *)(a4 + 1) )
          {
LABEL_42:
            PsDispatchIumService(a4);
            goto LABEL_38;
          }
          if ( *(_BYTE *)(a4 + 1) == 2 )
            break;
          if ( *(_BYTE *)(a4 + 1) == 3 )
            goto LABEL_54;
          if ( *(_BYTE *)(a4 + 1) == 5 )
            goto LABEL_42;
LABEL_38:
          if ( !a3 && a1 != 1 )
            CurrentThread->SecureThreadCookie = 0;
          *(_BYTE *)a4 = 0;
          *(_WORD *)(a4 + 2) = 0;
        }
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          goto LABEL_38;
        }
LABEL_54:
        if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_140419890 )
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
        goto LABEL_38;
      }
    }
    --CurrentThread->KernelApcDisable;
    goto LABEL_15;
  }
  HvlSwitchToVsmVtl1(v11, a4);
  if ( *(char *)(a4 + 1) < 0 )
  {
    __debugbreak();
    *(_BYTE *)(a4 + 1) &= ~0x80u;
  }
  return 0;
}

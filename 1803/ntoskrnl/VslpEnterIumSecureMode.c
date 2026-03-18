/*
 * XREFs of VslpEnterIumSecureMode @ 0x140084A44
 * Callers:
 *     KeRequestTerminationThread @ 0x140043C6C (KeRequestTerminationThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     VslFastFlushSecureRangeList @ 0x14015A0E4 (VslFastFlushSecureRangeList.c)
 *     KeCopyPrivilegedPage @ 0x14015B1EC (KeCopyPrivilegedPage.c)
 *     VslFillSecureAllocation @ 0x14015C7D0 (VslFillSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14015C8E0 (VslCreateSecureImageSection.c)
 *     VslFinishSecureImageValidation @ 0x14015C9E0 (VslFinishSecureImageValidation.c)
 *     VslPrepareSecureImageRelocations @ 0x14015CAB0 (VslPrepareSecureImageRelocations.c)
 *     VslValidateSecureImagePages @ 0x14015CDE0 (VslValidateSecureImagePages.c)
 *     VslFinalizeSecureImageHash @ 0x14015EE80 (VslFinalizeSecureImageHash.c)
 *     VslCloseSecureHandle @ 0x14015F2D0 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14015F360 (VslCreateSecureAllocation.c)
 *     VslExchangeEntropy @ 0x140163ED0 (VslExchangeEntropy.c)
 *     KeBalanceSetManager @ 0x1401777E0 (KeBalanceSetManager.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     VslpIumPhase4Initialize @ 0x1401866E8 (VslpIumPhase4Initialize.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140229EF0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x14022A0FC (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x14022C094 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x14022C9EC (HvlCollectLivedump.c)
 *     HvlpGetSecurePageList @ 0x14022ECF4 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x14022EF40 (HvlpStartSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x14022F424 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x14022F480 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x14022F550 (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x14022F5A8 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x14022F618 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x14022F67C (VslFinalizeLiveDumpInSk.c)
 *     VslFlushSecureAddressSpace @ 0x14022F78C (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x14022F804 (VslGetEtwDebugId.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14022F970 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14022FA00 (VslGetSecurePciEnabled.c)
 *     VslInitializeSecureKernelCfg @ 0x14022FB28 (VslInitializeSecureKernelCfg.c)
 *     VslIsTrustletRunning @ 0x14022FBD8 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x14022FC60 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14022FDBC (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslLocateHotPatchBase @ 0x14022FE2C (VslLocateHotPatchBase.c)
 *     VslMakeProtectedPageWritable @ 0x14022FEA8 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x14022FF14 (VslNotifyShutdown.c)
 *     VslProvisionDumpEncryption @ 0x14022FF68 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14022FFB4 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1402300A8 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x140230128 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1402301F8 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x140230280 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1402303D0 (VslRetrieveMailbox.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1402304BC (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1402305B0 (VslSlowFlushSecureRangeList.c)
 *     VslTestRoutine @ 0x140230670 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1402306C0 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14023073C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1402307F0 (VslpKsrEnterIumSecureMode.c)
 *     VslpSetupLiveDumpBuffer @ 0x1402308B8 (VslpSetupLiveDumpBuffer.c)
 *     VslMakeCodeCatalog @ 0x140230940 (VslMakeCodeCatalog.c)
 *     VslRelocateImage @ 0x1402309B0 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x140230A10 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x140230AF0 (VslValidateDynamicCodePages.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 *     KeSecureProcess @ 0x14024064C (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x14024070C (KeUnsecureProcess.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 *     PspUserThreadStartup @ 0x1404B8600 (PspUserThreadStartup.c)
 *     DbgkCopyProcessDebugPort @ 0x1404EAE58 (DbgkCopyProcessDebugPort.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     MiMarkKernelImageCfgBits @ 0x140605D78 (MiMarkKernelImageCfgBits.c)
 *     VslQuerySecureDevice @ 0x14064C460 (VslQuerySecureDevice.c)
 *     NtDebugActiveProcess @ 0x14070F9D8 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x14070FDBC (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x140717F24 (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x140717FA8 (VslCallEnclave.c)
 *     VslCreateEnclave @ 0x14071818C (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x1407182C0 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x140718330 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140718454 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1407184F0 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x1407185A4 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x1407186E0 (VslDeleteSecureSection.c)
 *     VslEnableKernelCfgTarget @ 0x140718730 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x140718780 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x1407187F8 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x140718844 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x140718954 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x1407189C0 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x140718A30 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x140718A94 (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x140718B00 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveModule @ 0x140718B84 (VslLoadEnclaveModule.c)
 *     VslRelaxQuotas @ 0x140718C84 (VslRelaxQuotas.c)
 *     VslReserveProtectedPages @ 0x140718CF0 (VslReserveProtectedPages.c)
 *     VslRundownSecureProcess @ 0x140718D54 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140718DA4 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x140718E08 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x140718FF0 (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x140719070 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x1407190D0 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140719180 (VslpConnectedStandbyWnfCallback.c)
 *     VslSetCodeIntegrityPolicy @ 0x140719220 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x140740074 (PipUnprotectDevice.c)
 *     PsRundownVsmEnclave @ 0x14077FC2C (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14077FC80 (PsTerminateVsmEnclave.c)
 *     MiRelocateBootImage @ 0x1408ADD30 (MiRelocateBootImage.c)
 *     MiGetNewAddressForBootImage @ 0x1408AE02C (MiGetNewAddressForBootImage.c)
 *     VslConnectSwInterrupt @ 0x1408B7998 (VslConnectSwInterrupt.c)
 *     MiApplyDynamicRelocations @ 0x1408BB388 (MiApplyDynamicRelocations.c)
 *     PspInitPhase3 @ 0x1408CA2EC (PspInitPhase3.c)
 *     VslBindNtIum @ 0x1408DE168 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x1408DE2A4 (VslpIumPhase0Initialize.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140084C68 (HvlQueryVsmConnection.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     HvlSwitchToVsmVtl1 @ 0x1401A7320 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1401A7470 (VslpDispatchIumSyscall.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v4; // r14
  bool v8; // bl
  unsigned __int8 CurrentIrql; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v17; // bp
  unsigned int SecureThreadCookie; // eax
  int v19; // r9d
  char v20; // dl
  NTSTATUS result; // eax
  unsigned int v22; // eax
  char PreviousMode; // bp
  char v24; // [rsp+30h] [rbp-38h]

  v4 = 0;
  v24 = 0;
  v8 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return -1073741667;
  *(_BYTE *)v13 = a1;
  *(_WORD *)(v13 + 2) = v10;
  if ( a1 <= 2u )
  {
    if ( !(unsigned __int8)KeAreInterruptsEnabled(v11, v10, v12, v13) && VslVsmEnabled )
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
          v24 = 1;
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
LABEL_13:
          HvlSwitchToVsmVtl1(0LL, a4);
          v20 = *(_BYTE *)(a4 + 1);
          if ( v20 < 0 )
          {
            __debugbreak();
            *(_BYTE *)(a4 + 1) &= ~0x80u;
            v20 = *(_BYTE *)(a4 + 1);
          }
          if ( v20 == 1 )
          {
LABEL_16:
            if ( v24 )
              KeReleaseSemaphoreEx((unsigned int)&VslpIumThreadSemaphore, 0, 1, v19, 0);
            if ( v4 )
              KeLeaveCriticalRegionThread(CurrentThread);
            if ( CurrentIrql != 15 )
              __writecr8(CurrentIrql);
            return *(_DWORD *)(a4 + 8);
          }
          if ( v20 == 6 )
          {
            __writecr8(0LL);
            goto LABEL_16;
          }
          if ( !a3 && a1 != 1 )
          {
            CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
            v20 = *(_BYTE *)(a4 + 1);
          }
          if ( !v20 )
          {
LABEL_44:
            PsDispatchIumService(a4);
            goto LABEL_37;
          }
          if ( v20 == 2 )
            break;
          if ( v20 == 3 )
            goto LABEL_53;
          if ( v20 == 5 )
            goto LABEL_44;
LABEL_37:
          if ( !a3 && a1 != 1 )
            CurrentThread->SecureThreadCookie = 0;
          *(_BYTE *)a4 = 0;
          *(_WORD *)(a4 + 2) = 0;
        }
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          goto LABEL_37;
        }
LABEL_53:
        v22 = *(unsigned __int16 *)(a4 + 2);
        if ( v22 < (unsigned int)xmmword_140464890 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( v20 == 3 )
          {
            CurrentThread->PreviousMode = 0;
            LOWORD(v22) = *(_WORD *)(a4 + 2);
          }
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v22) >> 4),
                                       a4 + 8,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v22) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *(_QWORD *)(a4 + 8) = -1073741796LL;
        }
        goto LABEL_37;
      }
    }
    --CurrentThread->KernelApcDisable;
    goto LABEL_13;
  }
  HvlSwitchToVsmVtl1(v11, a4);
  if ( *(char *)(a4 + 1) < 0 )
  {
    __debugbreak();
    *(_BYTE *)(a4 + 1) &= ~0x80u;
  }
  return 0;
}

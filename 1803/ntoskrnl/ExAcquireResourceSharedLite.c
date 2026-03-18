/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140100120
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x14005E4CC (SepTrustLevelCheck.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x14006B894 (SeTokenGetNoChildProcessRestricted.c)
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     SepAcquireOrderedReadLocks @ 0x1400BB64C (SepAcquireOrderedReadLocks.c)
 *     McGenControlCallbackV2 @ 0x1400D0F20 (McGenControlCallbackV2.c)
 *     SepFilterCheck @ 0x140101D80 (SepFilterCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x14013D610 (LdrpKrnGetDataTableEntry.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401721B8 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiDeleteBootRange @ 0x140178A94 (MiDeleteBootRange.c)
 *     IoFillTriageDumpBuffer @ 0x140233034 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140235DE0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1402A0898 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1402A0BC4 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1402A0E30 (SeSetSecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1402A104C (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     AlpcpExposeTokenAttribute @ 0x1404CA720 (AlpcpExposeTokenAttribute.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404D4070 (EtwpGetSidExtendedHeaderItem.c)
 *     SeQueryUserSidToken @ 0x1404D4FE8 (SeQueryUserSidToken.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtDuplicateToken @ 0x1404DCD80 (NtDuplicateToken.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     SepValidLabelSubjectContext @ 0x1404EBF4C (SepValidLabelSubjectContext.c)
 *     SeQuerySessionIdTokenEx @ 0x140501900 (SeQuerySessionIdTokenEx.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140508230 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14050834C (PiPnpRtlGetCurrentOperation.c)
 *     PiDmEnumObjectsWithCallback @ 0x140509908 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     SeQuerySecurityAttributesToken @ 0x14050B450 (SeQuerySecurityAttributesToken.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14050D26C (PnpAcquireDependencyRelationsLock.c)
 *     PiGetRelatedDevice @ 0x140525AFC (PiGetRelatedDevice.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405361A8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x140536740 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x140537038 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x140537444 (PspLockRootJobShared.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140546170 (NtQuerySecurityAttributesToken.c)
 *     SeIsTokenAssignableToProcess @ 0x140562F14 (SeIsTokenAssignableToProcess.c)
 *     SeQuerySessionIdToken @ 0x140568610 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x140569EF0 (SepValidOwnerSubjectContext.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PspValidateJobAffinityState @ 0x140579080 (PspValidateJobAffinityState.c)
 *     SeQueryServerSiloToken @ 0x14057B7C0 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x14057EB98 (PspSetProcessPriorityClass.c)
 *     PnpGetDevicePropertyData @ 0x140587428 (PnpGetDevicePropertyData.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14058A1CC (ExpGetSystemFirmwareTableInformation.c)
 *     WmipGetSMBiosTableData @ 0x14058A404 (WmipGetSMBiosTableData.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopReleaseDeviceResources @ 0x1405C8A58 (IopReleaseDeviceResources.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1405CB3B0 (PiUpdateDevicePanel.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiQueryAndAllocateBootResources @ 0x1405DB788 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1405DC08C (PiQueryResourceRequirements.c)
 *     PiCreateDeviceInstanceKey @ 0x1405E3E6C (PiCreateDeviceInstanceKey.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140603064 (IopSetDeviceSecurityDescriptor.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140615AE0 (IopWriteAllocatedResourcesToRegistry.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
 *     SepGetLogonSessionAccountInfo @ 0x14063D7B8 (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x14064E3F0 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x140713E90 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140714110 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1407148C0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140714B20 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140719F14 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x140722CB0 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140727E88 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407285CC (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x140728DFC (PiDmGetObjectCount.c)
 *     MmGetSectionRange @ 0x14074CDF0 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x14077A520 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x14077ACB8 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x14078AB40 (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x140790BE0 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1407925AC (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x14079456C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140794680 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140794738 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x1407A2D14 (WmipFindSMBiosStructure.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1407F6210 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140815C38 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140815DC0 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140159678 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  PERESOURCE v2; // rbx
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *CurrentThread; // rdx
  void *OwnerEntryForLegacyShim; // rsi
  BOOLEAN v9; // bl

  v2 = Resource;
  LOBYTE(Resource) = (Wait == 0) + 1;
  if ( (v2->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v2, 0LL, 0LL);
  v4 = v2->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > (unsigned __int8)Resource )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, (unsigned __int8)Resource, 0LL);
    if ( CurrentIrql >= 2u )
    {
      LODWORD(Resource) = KeGetPcr()->Prcb.DpcRequestSummary;
      if ( ((unsigned int)Resource & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v4 )
    return ExpAcquireResourceSharedLite(v2, Wait);
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(Resource);
  v9 = ExAcquireFastResourceShared((ULONG_PTR)v2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v9 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v9;
}

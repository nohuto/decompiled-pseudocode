/*
 * XREFs of ExAcquireResourceSharedLite @ 0x1400800D0
 * Callers:
 *     SeTokenGetNoChildProcessRestricted @ 0x140019830 (SeTokenGetNoChildProcessRestricted.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x14006A120 (SepTrustLevelCheck.c)
 *     SepFilterCheck @ 0x14007F470 (SepFilterCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400AEA0C (LdrpKrnGetDataTableEntry.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 *     SepAcquireOrderedReadLocks @ 0x14011C15C (SepAcquireOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x140129858 (IopCreateSecurityCheck.c)
 *     MiDeleteBootRange @ 0x140142F9C (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401499C8 (MmVerifyCallbackFunctionCheckFlags.c)
 *     McGenControlCallbackV2 @ 0x1401558F0 (McGenControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1401F5B40 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1401F89B0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x14025EDE8 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14025F114 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14025F380 (SeSetSecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14025F5A0 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpLockHiveFlusherShared @ 0x140476D5C (CmpLockHiveFlusherShared.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14047AD50 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     NtQuerySecurityAttributesToken @ 0x140482C50 (NtQuerySecurityAttributesToken.c)
 *     SeQuerySecurityAttributesToken @ 0x14048C9E0 (SeQuerySecurityAttributesToken.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14049CA10 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpExposeTokenAttribute @ 0x14049F750 (AlpcpExposeTokenAttribute.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     SeLockSubjectContext @ 0x1404A6DD0 (SeLockSubjectContext.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     NtDuplicateToken @ 0x1404C66A0 (NtDuplicateToken.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     CmpTrimHive @ 0x1404E6254 (CmpTrimHive.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 *     SeQueryUserSidToken @ 0x1405034B0 (SeQueryUserSidToken.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     PspValidateJobAffinityState @ 0x14050CB68 (PspValidateJobAffinityState.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14050E678 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x14050F8C0 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x14050FED0 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x1405106D0 (PspLockRootJobShared.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14052447C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140524598 (PiPnpRtlGetCurrentOperation.c)
 *     PiDmEnumObjectsWithCallback @ 0x140526100 (PiDmEnumObjectsWithCallback.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     SeQuerySessionIdTokenEx @ 0x1405286B0 (SeQuerySessionIdTokenEx.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     SepValidLabelSubjectContext @ 0x1405395EC (SepValidLabelSubjectContext.c)
 *     PnpGetDevicePropertyData @ 0x14054F4F8 (PnpGetDevicePropertyData.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PiGetRelatedDevice @ 0x140556A98 (PiGetRelatedDevice.c)
 *     PiQueryAndAllocateBootResources @ 0x140557908 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1405581F8 (PiQueryResourceRequirements.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14055A85C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopReleaseDeviceResources @ 0x14055E154 (IopReleaseDeviceResources.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140570C40 (ExpGetSystemFirmwareTableInformation.c)
 *     WmipGetSMBiosTableData @ 0x140570DF8 (WmipGetSMBiosTableData.c)
 *     SeIsTokenAssignableToProcess @ 0x140573A88 (SeIsTokenAssignableToProcess.c)
 *     SeQuerySessionIdToken @ 0x140577340 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x14057ED30 (SepValidOwnerSubjectContext.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiCreateDeviceInstanceKey @ 0x14058A748 (PiCreateDeviceInstanceKey.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14058E694 (IopSetDeviceSecurityDescriptor.c)
 *     SeQueryServerSiloToken @ 0x1405911E0 (SeQueryServerSiloToken.c)
 *     PipGenerateContainerID @ 0x140593694 (PipGenerateContainerID.c)
 *     PspSetProcessPriorityClass @ 0x140595250 (PspSetProcessPriorityClass.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140595330 (CmpUpdateHiveRootCellFlags.c)
 *     MmIsDriverVerifyingByAddress @ 0x14059DC50 (MmIsDriverVerifyingByAddress.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     MmBackSystemImageWithPagefile @ 0x1405C861C (MmBackSystemImageWithPagefile.c)
 *     SepGetLogonSessionAccountInfo @ 0x1405D0F44 (SepGetLogonSessionAccountInfo.c)
 *     IopInvalidateVolumesForDevice @ 0x1405E359C (IopInvalidateVolumesForDevice.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     HvFoldBackDirtyData @ 0x140696CC0 (HvFoldBackDirtyData.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     FsRtlCopyRead @ 0x1406AF6E0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1406AF960 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1406B0120 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406B0380 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x1406B5264 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x1406BDC40 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406C1E54 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406C259C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x1406C2D0C (PiDmGetObjectCount.c)
 *     MmEnumerateSystemImages @ 0x1406E2040 (MmEnumerateSystemImages.c)
 *     MmGetSectionRange @ 0x1406E21A8 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x14071648C (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x140716B3C (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x1407271C0 (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x14072C834 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x14072E50C (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x140730C80 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140730D94 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140730E4C (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x140740C54 (WmipFindSMBiosStructure.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140789D50 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x1407A8C08 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407A8D88 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  PERESOURCE v2; // rbx
  BOOLEAN v3; // di
  __int16 v4; // ax
  struct _KTHREAD *CurrentThread; // r8
  void *OwnerEntryForLegacyShim; // rsi
  BOOLEAN v8; // bl

  v2 = Resource;
  v3 = Wait;
  LOBYTE(Resource) = (Wait == 0) + 1;
  if ( (v2->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v2, 0LL, 0LL);
  v4 = v2->Flag & 1;
  if ( v4 )
  {
    *(_QWORD *)&Wait = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( Wait > (unsigned __int8)Resource )
      KeBugCheckEx(0x1C6u, 0LL, Wait, (unsigned __int8)Resource, 0LL);
    if ( Wait >= 2u )
    {
      LODWORD(Resource) = KeGetPcr()->Prcb.DpcRequestSummary;
      if ( ((unsigned int)Resource & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !Wait && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v4 )
    return ExpAcquireResourceSharedLite(v2, v3);
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(Resource, Wait);
  v8 = ExAcquireFastResourceShared((ULONG_PTR)v2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v8 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v8;
}

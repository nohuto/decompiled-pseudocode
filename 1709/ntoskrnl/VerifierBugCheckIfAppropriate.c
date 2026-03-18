/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x1407B01F4
 * Callers:
 *     VfFailDeviceNode @ 0x140159A80 (VfFailDeviceNode.c)
 *     VerifierFreeTrackedPool @ 0x140227388 (VerifierFreeTrackedPool.c)
 *     VfFailDriver @ 0x1402767E0 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x140276810 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x140277224 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140277414 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x1407A4DE8 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1407A5000 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x1407A50B0 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x1407A5C04 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1407A5D04 (MmCheckMapIoSpace.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1407A61A0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1407A62A0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1407A653C (ViFreeTrackedPool.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1407A9680 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x1407A9910 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1407A9970 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x1407A9B40 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x1407A9DA4 (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x1407AAAD0 (VfAllocateCommonBufferEx.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1407B0D0C (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1407B27E0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x1407B4060 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1407B44D4 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1407B4630 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1407B48F8 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1407B4924 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x1407B5748 (ViErrorFinishReport.c)
 *     VfTargetEtwUnregister @ 0x1407B6D48 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1407B7244 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1407B72C0 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x1407B76A8 (VfPoolCheckForLeaks.c)
 *     VfCheckUserHandle @ 0x1407B85A8 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1407B8800 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1407B8974 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x1407B8ED0 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1407B9130 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1407B9370 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1407B9430 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1407B94F0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407B97A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1407B9830 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1407B98C0 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1407BA150 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1407BA380 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x1407BA570 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407BA5E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x1407BA808 (ViKeWaitSanityChecks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1407BDF2C (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x1407BE688 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x1407BE8D0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1407BEA20 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1407BEB40 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x1407BEC48 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1407BECDC (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1407BEDFC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1407BF520 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1407BF870 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407BFABC (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x1407BFC04 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1407BFCCC (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1407C2030 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1407C21CC (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1407C220C (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1407C37C0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407C38B0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407C39E0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1407C3B10 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1407C3C80 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1407C3E40 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1407C3F40 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1407C4070 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1407C43E0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1407C44F0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1407C45E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1407C47D0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1407C48D0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1407C4A10 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1407C4B50 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1407C4BE0 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1407C4EC8 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1407C4FC0 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1407C5480 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x1407C55A0 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x1407C5730 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1407C77A0 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x1407CA114 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1407CA1CC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407CA264 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x1407CA6E0 (ExAllocatePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 BugCheckParameter4)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0;
  if ( (MmVerifierData & 0x400000) != 0 )
  {
    if ( CurrentIrql > 2u )
      return result;
    if ( ViXdvTipUtils )
    {
      if ( (VfFlightOptions & 1) == 0 || !(*(unsigned int (__fastcall **)(_QWORD))(ViXdvTipUtils + 16))(BugCheckCode) )
        return (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, __int64))(ViXdvTipUtils + 8))(
                 BugCheckCode,
                 BugCheckParameter1,
                 BugCheckParameter2,
                 BugCheckParameter3,
                 BugCheckParameter4);
    }
    else
    {
      result = VfFlightOptions & 1;
      if ( !(_BYTE)result )
        return result;
    }
  }
  v12 = ViVerifierBugcheckAttributes;
  while ( *(_DWORD *)v12 != BugCheckCode || *((_DWORD *)v12 + 1) != BugCheckParameter1 )
  {
    ++v11;
    v12 = (__int64 *)((char *)v12 + 12);
    if ( v11 >= 0xD )
      goto LABEL_13;
  }
  if ( VfVerifyMode >= *((_DWORD *)v12 + 2) )
LABEL_13:
    KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  v13 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
  result = BugCheckParameter4;
  *((_QWORD *)&ViBugcheckLog + v13 + 4) = BugCheckParameter4;
  *((_DWORD *)&ViBugcheckLog + 2 * v13) = BugCheckCode;
  *((_QWORD *)&ViBugcheckLog + v13 + 1) = BugCheckParameter1;
  *((_QWORD *)&ViBugcheckLog + v13 + 2) = BugCheckParameter2;
  *((_QWORD *)&ViBugcheckLog + v13 + 3) = BugCheckParameter3;
  return result;
}

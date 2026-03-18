/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x14081D3A4
 * Callers:
 *     VfFailDeviceNode @ 0x14016E100 (VfFailDeviceNode.c)
 *     VerifierFreeTrackedPool @ 0x140260484 (VerifierFreeTrackedPool.c)
 *     VfFailDriver @ 0x1402A9900 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1402A9930 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1402AA340 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1402AA534 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x140811DB4 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140811FCC (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x140812080 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x140812BD4 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140812CD4 (MmCheckMapIoSpace.c)
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140813230 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140813360 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x140813698 (ViFreeTrackedPool.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1408166B0 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x140816970 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1408169D0 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x140816BA0 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x140816E2C (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x140817B70 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140817C50 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x14081DEB8 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x14081F990 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140821210 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140821688 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1408217F0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140821AC8 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140821AF4 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x140821EC0 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1408223B8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140822434 (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x14082343C (ViErrorFinishReport.c)
 *     VfPoolCheckForLeaks @ 0x1408248DC (VfPoolCheckForLeaks.c)
 *     VfCheckUserHandle @ 0x140825800 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140825A90 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140825C04 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x140826170 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1408263F0 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140826650 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140826710 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1408267D0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x140826A80 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140826B10 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x140826C00 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1408274B0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1408276E8 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x140827910 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x140827980 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x140827BB0 (ViKeWaitSanityChecks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14082B304 (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x14082BAF4 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x14082BD30 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14082BE80 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14082BFA0 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x14082C0A8 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14082C13C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14082C25C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14082C990 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14082CD70 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14082CFFC (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x14082D144 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x14082D20C (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x14082F570 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x14082F72C (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x14082F76C (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140830D40 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140830E30 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140830F50 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140831070 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1408311D0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140831370 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140831460 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140831580 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x140831900 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140831A70 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140831B50 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140831D30 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140831E30 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140831F70 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1408320B0 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x140832140 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140832428 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140832520 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1408329E0 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x140832B00 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x140832C90 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x140834D00 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x140837674 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x14083772C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x140837C50 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140837DBC (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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

/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x14076EF94
 * Callers:
 *     VfFailDeviceNode @ 0x14014AA70 (VfFailDeviceNode.c)
 *     VerifierFreeTrackedPool @ 0x14021AAE8 (VerifierFreeTrackedPool.c)
 *     VfFailDriver @ 0x14024FFD0 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x140250000 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1402509C4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140250BB4 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     MmCheckMdlPages @ 0x140763EF4 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140763FF4 (MmCheckMapIoSpace.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1407644A0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1407645A0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x14076481C (ViFreeTrackedPool.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x140767AF0 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x140767D00 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x140767D60 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x140767F20 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x140768154 (VfIoCompletionCheckState.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x14076EEEC (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x140770A50 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x1407722B0 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140772724 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140772880 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140772B38 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140772B64 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140773998 (ViErrorFinishReport.c)
 *     VfTargetEtwUnregister @ 0x140774F8C (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140775484 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1407754F4 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x1407758E8 (VfPoolCheckForLeaks.c)
 *     VfCheckUserHandle @ 0x1407767AC (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140776A10 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140776B74 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x1407770A0 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1407772C0 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1407774EC (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x14077759C (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x14077764C (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407778E0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140777970 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x140777A50 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140778270 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1407784A0 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x140778690 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407786F4 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x140778910 (ViKeWaitSanityChecks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14077C010 (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x14077C760 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x14077C990 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14077CAE0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14077CC00 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x14077CD08 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14077CD90 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14077CEA4 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14077D5C0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14077D900 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14077DB38 (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x14077DC74 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x14077DD24 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140780030 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1407801CC (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x14078020C (ViExCheckAPCsDisabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140781D30 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x140782050 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140782160 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140782250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140782440 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140782540 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140782680 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1407827C0 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x140782850 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140782B38 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140782C30 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1407830F0 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x140783210 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x140783390 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1407853C0 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x140787CB4 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140787D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x14078826C (ExAllocatePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG BugCheckCode,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        __int64 BugCheckParameter4)
{
  __int64 result; // rax
  unsigned int v9; // r9d
  __int64 *v10; // r8
  __int64 v11; // rcx

  if ( (MmVerifierData & 0x400000) == 0 || (result = (unsigned int)VfFlightOptions, (VfFlightOptions & 1) != 0) )
  {
    v9 = 0;
    v10 = ViVerifierBugcheckAttributes;
    while ( *(_DWORD *)v10 != BugCheckCode || *((_DWORD *)v10 + 1) != a2 )
    {
      ++v9;
      v10 = (__int64 *)((char *)v10 + 12);
      if ( v9 >= 0xD )
        goto LABEL_7;
    }
    if ( VfVerifyMode >= *((_DWORD *)v10 + 2) )
LABEL_7:
      KeBugCheckEx(BugCheckCode, a2, a3, a4, BugCheckParameter4);
    v11 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
    result = BugCheckParameter4;
    *((_QWORD *)&ViBugcheckLog + v11 + 4) = BugCheckParameter4;
    *((_DWORD *)&ViBugcheckLog + 2 * v11) = BugCheckCode;
    *((_QWORD *)&ViBugcheckLog + v11 + 1) = a2;
    *((_QWORD *)&ViBugcheckLog + v11 + 2) = a3;
    *((_QWORD *)&ViBugcheckLog + v11 + 3) = a4;
  }
  return result;
}

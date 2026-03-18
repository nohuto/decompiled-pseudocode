/*
 * XREFs of MiReturnCommit @ 0x14000A1A0
 * Callers:
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiDeleteKernelStack @ 0x140025C60 (MiDeleteKernelStack.c)
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x140033DD0 (MiChargeForLockedPage.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiCleanupPageTablePages @ 0x1400493E0 (MiCleanupPageTablePages.c)
 *     MiDeleteSegmentPages @ 0x14004B184 (MiDeleteSegmentPages.c)
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x14004ECC4 (MiUnlockPageTableCharges.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x1400717C0 (MiObtainSystemCharges.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiFreePageFileHashPfns @ 0x140080B6C (MiFreePageFileHashPfns.c)
 *     MmReleaseResourceCharge @ 0x140097824 (MmReleaseResourceCharge.c)
 *     MiUnlockCodePage @ 0x1400A19C0 (MiUnlockCodePage.c)
 *     MiDecrementCloneBlockReference @ 0x1400AD8A4 (MiDecrementCloneBlockReference.c)
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 *     MiObtainMdlCharges @ 0x1400B3AB8 (MiObtainMdlCharges.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MiFreeContiguousPages @ 0x1400C98C4 (MiFreeContiguousPages.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MiObtainPoolCharges @ 0x14013307C (MiObtainPoolCharges.c)
 *     MiReleaseWriteInProgressCharges @ 0x140134F38 (MiReleaseWriteInProgressCharges.c)
 *     MiReturnPoolCharges @ 0x140134F8C (MiReturnPoolCharges.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     MiDeleteSystemPageTableTail @ 0x140137870 (MiDeleteSystemPageTableTail.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14013A8EC (MiAcquireNonPagedResources.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiReferenceCloneProto @ 0x140141EDC (MiReferenceCloneProto.c)
 *     MiDeleteSessionPdes @ 0x140155518 (MiDeleteSessionPdes.c)
 *     MiGetFileHashPage @ 0x140155748 (MiGetFileHashPage.c)
 *     MiSessionUpdateImageCharges @ 0x140169974 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x14016FFA4 (MiStoreChargeReservedPages.c)
 *     MiDeleteBootRange @ 0x140178A94 (MiDeleteBootRange.c)
 *     MiReturnSplitPageCharges @ 0x140186104 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x140251398 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402515B8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeLargePages @ 0x140268BB8 (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14026BCF0 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14026BE44 (MiReturnCrossPartitionCombineCharges.c)
 *     MiRebuildLargePage @ 0x14026D668 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 *     MiDecommitRegion @ 0x1404AE180 (MiDecommitRegion.c)
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140512E90 (MiDeleteVadBitmap.c)
 *     MiRemoveVadCharges @ 0x14059D690 (MiRemoveVadCharges.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1405ED150 (MiDeleteLeakedSessionPool.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MiChargeSystemImageCommitment @ 0x1405F8AB4 (MiChargeSystemImageCommitment.c)
 *     MiReturnSystemImageCommitment @ 0x140605C64 (MiReturnSystemImageCommitment.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     MiMarkBootGuardPage @ 0x14062B064 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 *     MiGetLargePagesForSystemMapping @ 0x14074D840 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x14074EA48 (MiDeletePagingFiles.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x14017DDB4 (MiSyncCommitSignals.c)
 */

unsigned __int64 __fastcall MiReturnCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedCommit; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rtt

  result = *(_QWORD *)(a1 + 6208);
  v3 = a2;
  if ( !result )
    goto LABEL_2;
  while ( 1 )
  {
    v9 = a2;
    if ( a2 > result )
      v9 = result;
    v10 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6208), result - v9, result);
    if ( v10 == result )
      break;
    if ( !result )
      goto LABEL_2;
  }
  v3 = a2 - v9;
  if ( a2 != v9 )
  {
LABEL_2:
    if ( (ULONG_PTR *)a1 == &MiSystemPartition
      && (CurrentPrcb = KeGetCurrentPrcb(),
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
          CachedCommit = CurrentPrcb->CachedCommit,
          v3 + CachedCommit <= 0x100) )
    {
      while ( 1 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                                 v3 + CachedCommit,
                                 CachedCommit);
        if ( (int)result == CachedCommit )
          break;
        CachedCommit = (int)result;
        if ( (int)result + v3 > 0x100 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7400), -(__int64)v3);
      v7 = *(_QWORD *)(a1 + 6176);
      if ( v6 >= v7 && v6 - v3 < v7 )
        return MiSyncCommitSignals(a1, 0LL);
      v8 = *(_QWORD *)(a1 + 6168);
      result = v6 - v3;
      if ( v6 >= v8 && result < v8 )
        return MiSyncCommitSignals(a1, 0LL);
    }
  }
  return result;
}

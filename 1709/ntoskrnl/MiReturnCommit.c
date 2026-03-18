/*
 * XREFs of MiReturnCommit @ 0x140036530
 * Callers:
 *     MmReleaseResourceCharge @ 0x140006508 (MmReleaseResourceCharge.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiDeleteSegmentPages @ 0x14001F644 (MiDeleteSegmentPages.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MiDeleteKernelStack @ 0x1400328D0 (MiDeleteKernelStack.c)
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiUnlockCodePage @ 0x1400BD400 (MiUnlockCodePage.c)
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400C01C4 (MiReturnNonPagedPoolCharges.c)
 *     MiCleanupPageTablePages @ 0x1400C3F04 (MiCleanupPageTablePages.c)
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 *     MiObtainMdlCharges @ 0x1400CBE04 (MiObtainMdlCharges.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1400CF9DC (MiAcquireNonPagedResources.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiReferenceCloneProto @ 0x1400EA030 (MiReferenceCloneProto.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400EFDE0 (MiReleaseWriteInProgressCharges.c)
 *     MiFreePageFileHashPfns @ 0x1400F0478 (MiFreePageFileHashPfns.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400F74DC (MiObtainNonPagedPoolCharges.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x14010CA64 (MiUnlockPageTableCharges.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiFreeContiguousPages @ 0x140118318 (MiFreeContiguousPages.c)
 *     MiObtainSystemCharges @ 0x1401227CC (MiObtainSystemCharges.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiStoreChargeReservedPages @ 0x140137414 (MiStoreChargeReservedPages.c)
 *     MiReturnSplitPageCharges @ 0x14013907C (MiReturnSplitPageCharges.c)
 *     MiDeleteBootRange @ 0x140142F9C (MiDeleteBootRange.c)
 *     MiSessionUpdateImageCharges @ 0x14014B984 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     MiReleaseCommitForResetPages @ 0x1402130A8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140213338 (MiReleaseOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiDeleteSessionPdes @ 0x14021989C (MiDeleteSessionPdes.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x140224310 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140231884 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140231B2C (MiReturnCrossPartitionCombineCharges.c)
 *     MiGetFileHashPage @ 0x140231FD0 (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     MiChargeSegmentCommit @ 0x140460540 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiDecommitRegion @ 0x1404952E0 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x140495BC0 (MiRemoveVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     MiChargeSystemImageCommitment @ 0x1404F5E38 (MiChargeSystemImageCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x1404FB8C4 (MiDeleteVadBitmap.c)
 *     MmDeleteProcessAddressSpace @ 0x1404FB9A4 (MmDeleteProcessAddressSpace.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x14059E9C8 (MiReturnSystemImageCommitment.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MiMarkBootGuardPage @ 0x1405B76A0 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MiDeleteSessionDriverProtos @ 0x1405ED4B4 (MiDeleteSessionDriverProtos.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E3110 (MiDeleteLeakedSessionPool.c)
 *     MiDeletePagingFiles @ 0x1406E4640 (MiDeletePagingFiles.c)
 *     MiCleanPhysicalProcessPages @ 0x1406E54AC (MiCleanPhysicalProcessPages.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406EB778 (MiFreeSubsectionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
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
  unsigned __int64 v9; // rtt

  result = *(_QWORD *)(a1 + 5120);
  v3 = a2;
  if ( !result )
    goto LABEL_2;
  while ( 1 )
  {
    v8 = a2;
    if ( a2 > result )
      v8 = result;
    v9 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5120), result - v8, result);
    if ( v9 == result )
      break;
    if ( !result )
      goto LABEL_2;
  }
  v3 = a2 - v8;
  if ( a2 != v8 )
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
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6320), -(__int64)v3);
      v7 = *(_QWORD *)(a1 + 5088);
      if ( v6 >= v7 && v6 - v3 < v7 )
        return MiSyncCommitSignals(a1, 0LL, v3, v7);
      v7 = *(_QWORD *)(a1 + 5080);
      result = v6 - v3;
      if ( v6 >= v7 && result < v7 )
        return MiSyncCommitSignals(a1, 0LL, v3, v7);
    }
  }
  return result;
}

/*
 * XREFs of MiReturnCommit @ 0x1400CE240
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     MiReleaseWriteInProgressCharges @ 0x140015008 (MiReleaseWriteInProgressCharges.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x14001769C (MiUnlockPageTableCharges.c)
 *     MiDeleteKernelStack @ 0x140023CD4 (MiDeleteKernelStack.c)
 *     MiObtainSystemCharges @ 0x14002D65C (MiObtainSystemCharges.c)
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiAcquireNonPagedResources @ 0x14003CAA4 (MiAcquireNonPagedResources.c)
 *     MmReleaseResourceCharge @ 0x14005DBF8 (MmReleaseResourceCharge.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiFreeCombineBlock @ 0x140079210 (MiFreeCombineBlock.c)
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 *     MiObtainMdlCharges @ 0x14007B0D0 (MiObtainMdlCharges.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiFreePageFileHashPfns @ 0x140083F7C (MiFreePageFileHashPfns.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x1400CCDF0 (MiChargeForLockedPage.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiCleanupPageTablePages @ 0x14010AD58 (MiCleanupPageTablePages.c)
 *     MiObtainNonPagedPoolCharges @ 0x14010ECE0 (MiObtainNonPagedPoolCharges.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MiDeleteSegmentPages @ 0x1401190A4 (MiDeleteSegmentPages.c)
 *     MiFreeContiguousPages @ 0x1401233D4 (MiFreeContiguousPages.c)
 *     MiReturnNonPagedPoolCharges @ 0x140126068 (MiReturnNonPagedPoolCharges.c)
 *     MiDeleteSessionPdes @ 0x14013BC30 (MiDeleteSessionPdes.c)
 *     MiGetFileHashPage @ 0x14013D880 (MiGetFileHashPage.c)
 *     MiSessionUpdateImageCharges @ 0x140144324 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x140154858 (MiStoreChargeReservedPages.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     MiDeleteBootRange @ 0x14015D2A0 (MiDeleteBootRange.c)
 *     MiReturnSplitPageCharges @ 0x1401677FC (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x14020C108 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1402196E0 (MiAttemptPageFileReductionApc.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiGetSubsectionCharges @ 0x14022129C (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140499A8C (MiDeleteVadBitmap.c)
 *     MiDecommitRegion @ 0x140499E58 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiChargeSystemImageCommitment @ 0x1404B0FE4 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 *     MiChargeSegmentCommit @ 0x14054A0F0 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x14057AA70 (MiDeleteLeakedSessionPool.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MiDeleteSessionDriverProtos @ 0x140585040 (MiDeleteSessionDriverProtos.c)
 *     MiReturnSystemImageCommitment @ 0x140585528 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x1405A7878 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 *     MiDeletePagingFiles @ 0x1406B79FC (MiDeletePagingFiles.c)
 *     MiCleanPhysicalProcessPages @ 0x1406B87E4 (MiCleanPhysicalProcessPages.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406BE328 (MiFreeSubsectionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x140159D20 (MiSyncCommitSignals.c)
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

  result = *(_QWORD *)(a1 + 4992);
  v3 = a2;
  if ( !result )
    goto LABEL_2;
  while ( 1 )
  {
    v9 = a2;
    if ( a2 > result )
      v9 = result;
    v10 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4992), result - v9, result);
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
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6128), -(__int64)v3);
      v7 = *(_QWORD *)(a1 + 4960);
      if ( v6 >= v7 && v6 - v3 < v7 )
        return MiSyncCommitSignals(a1, 0LL);
      v8 = *(_QWORD *)(a1 + 4952);
      result = v6 - v3;
      if ( v6 >= v8 && result < v8 )
        return MiSyncCommitSignals(a1, 0LL);
    }
  }
  return result;
}

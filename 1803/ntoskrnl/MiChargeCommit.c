/*
 * XREFs of MiChargeCommit @ 0x140119760
 * Callers:
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x140033DD0 (MiChargeForLockedPage.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiObtainSystemCharges @ 0x1400717C0 (MiObtainSystemCharges.c)
 *     MmChargeResources @ 0x140097798 (MmChargeResources.c)
 *     MiObtainMdlCharges @ 0x1400B3AB8 (MiObtainMdlCharges.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MiChargeForWriteInProgressPage @ 0x140131D70 (MiChargeForWriteInProgressPage.c)
 *     MiObtainPoolCharges @ 0x14013307C (MiObtainPoolCharges.c)
 *     MiAcquireNonPagedResources @ 0x14013A8EC (MiAcquireNonPagedResources.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiReferenceCloneProto @ 0x140141EDC (MiReferenceCloneProto.c)
 *     MiGetFileHashPage @ 0x140155748 (MiGetFileHashPage.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x14016FFA4 (MiStoreChargeReservedPages.c)
 *     MiInitializeCommitment @ 0x14017DAD8 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140251154 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResourcesForce @ 0x140252618 (MiAcquireNonPagedResourcesForce.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14026BCF0 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402701E8 (MiMakePageBad.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     MiChargeSystemImageCommitment @ 0x1405F8AB4 (MiChargeSystemImageCommitment.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 *     MiAllocateDummyPage @ 0x14089BBF0 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x1408BAAB8 (MiInitializeGapFrames.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x1400BC040 (MiReplenishLocalCommit.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     MiSyncCommitSignals @ 0x14017DDB4 (MiSyncCommitSignals.c)
 *     MiIssuePageExtendRequest @ 0x14025F94C (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x140265768 (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x140265884 (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x1402658F0 (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 CachedCommit; // rdx
  signed __int32 v7; // eax
  unsigned int v9; // ebp
  int v10; // r13d
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  signed __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  int v26; // eax
  bool v27; // cc
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rdx
  __int64 v31; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    CachedCommit = CurrentPrcb->CachedCommit;
    if ( a2 <= CachedCommit )
    {
      do
      {
        v7 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
               CachedCommit - a2,
               CachedCommit);
        if ( v7 == CachedCommit )
          return 1LL;
        CachedCommit = v7;
      }
      while ( a2 <= v7 );
    }
  }
  v9 = a3 | 2;
  v10 = 0;
  if ( (a3 & 4) == 0 )
    v9 = a3;
  if ( (v9 & 8) == 0 )
  {
    if ( (v9 & 7) != 0 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(a1 + 6192);
    goto LABEL_13;
  }
  v9 |= 2u;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    v9 |= 4u;
    v11 = 0LL;
LABEL_13:
    v31 = v11;
    goto LABEL_14;
  }
  v11 = 64LL;
  v31 = 64LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 6864) >> 6 < 0x40uLL )
  {
    v11 = *(_QWORD *)(a1 + 6864) >> 6;
    v31 = v11;
  }
  do
  {
    while ( 1 )
    {
LABEL_14:
      v12 = *(_QWORD *)(a1 + 7400);
      v13 = v12 + a2;
      if ( v12 + a2 <= v12 || v13 + v11 < v13 )
      {
        if ( (v9 & 4) == 0 )
        {
          if ( (v9 & 2) == 0 )
          {
            ++*(_DWORD *)(a1 + 7580);
            if ( (v9 & 1) == 0 )
              MiCauseOverCommitPopup(a1);
            MiPulseCommitSignal(a1);
          }
          return 0LL;
        }
        if ( !v11 )
          ++dword_1403CBEA0;
        goto LABEL_61;
      }
      v14 = *(_QWORD *)(a1 + 7528);
      if ( v13 + v11 <= v14 )
      {
        if ( !v10 && v13 >= 95 * (v14 / 0x64) )
        {
          MiApplyCommitDelay(a1, v9, *(_QWORD *)(a1 + 7528));
          v11 = v31;
          v10 = 1;
        }
        goto LABEL_20;
      }
      v25 = *(_QWORD *)(a1 + 6176);
      if ( v13 >= v25 && v12 < v25 )
      {
        MiPulseCommitSignal(a1);
        v11 = v31;
      }
      if ( (v9 & 4) != 0 )
        break;
      if ( (v9 & 2) != 0 )
        return 0LL;
      if ( v14 == *(_QWORD *)(a1 + 6152) )
      {
        ++*(_DWORD *)(a1 + 7572);
        if ( (ULONG_PTR *)a1 != &MiSystemPartition )
          return 0LL;
        v26 = MiIssuePageExtendRequest(a1, a2, 2 * (v9 & 1) + 8);
        if ( (v9 & 1) != 0 )
          return 0LL;
        if ( !v26 )
        {
          MiCauseOverCommitPopup(a1);
          return 0LL;
        }
        v11 = v31;
        goto LABEL_20;
      }
      if ( (v9 & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 7576);
        MiIssuePageExtendRequest(a1, 4096LL, 2LL);
        return 0LL;
      }
      if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 0LL) )
      {
        ++*(_DWORD *)(a1 + 7568);
        MiCauseOverCommitPopup(a1);
        return 0LL;
      }
      v11 = v31;
    }
    if ( !v11 )
      ++dword_1403CBE9C;
LABEL_61:
    if ( a2 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6208), a2);
      return 1LL;
    }
LABEL_20:
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7400), v13, v12);
  }
  while ( v12 != v15 );
  v16 = *(_QWORD *)(a1 + 6176);
  v17 = a2 + v15;
  if ( v17 >= v16 && v12 < v16 || (v18 = *(_QWORD *)(a1 + 6168), v17 >= v18) && v12 < v18 )
  {
    MiSyncCommitSignals(a1, 0LL);
    v11 = v31;
  }
  if ( v17 > *(_QWORD *)(a1 + 6144) )
    *(_QWORD *)(a1 + 6144) = v17;
  if ( (v9 & 2) != 0 )
    return 1LL;
  v19 = *(_QWORD *)(a1 + 7528);
  v20 = v19 / 0xA;
  if ( v17 >= 9 * (v19 / 0xA) )
  {
    v27 = v17 <= v19;
    if ( v17 < v19 )
    {
      if ( v19 - v17 >= 0x400000 )
        goto LABEL_30;
      v27 = v17 <= v19;
    }
    if ( v27 )
    {
      v28 = *(_QWORD *)(a1 + 6152);
      if ( v19 < v28 && v17 < v28 )
      {
        if ( v20 > 0x40000 )
          v20 = 0x40000LL;
        v29 = v28 - v19;
        v30 = v20 - v17;
        if ( v30 + v19 <= v29 )
          v29 = v30 + v19;
        MiIssuePageExtendRequest(a1, v29, 2LL);
        v11 = v31;
      }
    }
  }
LABEL_30:
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    return 1LL;
  if ( (v9 & 1) == 0 && v17 >= *(_QWORD *)(a1 + 6176) && v19 == *(_QWORD *)(a1 + 6152) )
  {
    MiFreeExcessSegments();
    v11 = v31;
  }
  v21 = CurrentPrcb->CachedCommit;
  if ( v21 >= 0x80 )
    return 1LL;
  v22 = 256 - v21;
  v23 = 256 - v21 + v17;
  if ( v23 <= v17 )
    return 1LL;
  v24 = v11 + v23;
  if ( v24 <= v17 || v24 > v19 )
    return 1LL;
  MiReplenishLocalCommit(a1, (__int64)CurrentPrcb, v17, v22);
  return 1LL;
}

/*
 * XREFs of MiChargeCommit @ 0x14003AB20
 * Callers:
 *     MmChargeResources @ 0x140005A48 (MmChargeResources.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 *     MiObtainMdlCharges @ 0x1400CBE04 (MiObtainMdlCharges.c)
 *     MiAcquireNonPagedResources @ 0x1400CF9DC (MiAcquireNonPagedResources.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiReferenceCloneProto @ 0x1400EA030 (MiReferenceCloneProto.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400F74DC (MiObtainNonPagedPoolCharges.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiChargeForWriteInProgressPage @ 0x14011F45C (MiChargeForWriteInProgressPage.c)
 *     MiObtainSystemCharges @ 0x1401227CC (MiObtainSystemCharges.c)
 *     MiStoreChargeReservedPages @ 0x140137414 (MiStoreChargeReservedPages.c)
 *     MiInitializeCommitment @ 0x14014FC00 (MiInitializeCommitment.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140212D64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResourcesForce @ 0x140214450 (MiAcquireNonPagedResourcesForce.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x140224310 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140231884 (MiGetCrossPartitionCombineCharges.c)
 *     MiGetFileHashPage @ 0x140231FD0 (MiGetFileHashPage.c)
 *     MiMakePageBad @ 0x1402385C8 (MiMakePageBad.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     MiChargeSegmentCommit @ 0x140460540 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiChargeSystemImageCommitment @ 0x1404F5E38 (MiChargeSystemImageCommitment.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 *     MiAllocateDummyPage @ 0x14082C7C0 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x140849A88 (MiInitializeGapFrames.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     MiReplenishLocalCommit @ 0x14011CEE0 (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
 *     MiApplyCommitDelay @ 0x1402221A8 (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x1402222C8 (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x140222334 (MiPulseCommitSignal.c)
 *     MiIssuePageExtendRequest @ 0x1402266AC (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 CachedCommit; // rdx
  signed __int32 v9; // eax
  unsigned int i; // eax
  unsigned int v12; // r15d
  __int64 v13; // r10
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rbx
  signed __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  int v27; // eax
  bool v28; // cc
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // [rsp+50h] [rbp+8h]

  v4 = 0;
  if ( (unsigned int)InitializationPhase > 1 && !(_DWORD)a3 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      ;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    CachedCommit = CurrentPrcb->CachedCommit;
    if ( a2 <= CachedCommit )
    {
      do
      {
        v9 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
               CachedCommit - a2,
               CachedCommit);
        if ( v9 == CachedCommit )
          return 1LL;
        CachedCommit = v9;
      }
      while ( a2 <= v9 );
    }
  }
  v12 = a3 | 2;
  if ( (a3 & 4) == 0 )
    v12 = a3;
  if ( (v12 & 8) != 0 )
  {
    v12 |= 2u;
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      v13 = 64LL;
      v32 = 64LL;
      if ( (ULONG_PTR *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 5776) >> 6 < 0x40uLL )
      {
        v13 = *(_QWORD *)(a1 + 5776) >> 6;
        v32 = v13;
      }
    }
    else
    {
      v12 |= 4u;
      v32 = 0LL;
      v13 = 0LL;
    }
  }
  else if ( (v12 & 7) != 0 )
  {
    v13 = 0LL;
    v32 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 5104);
    v32 = v13;
  }
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1 + 6320);
      v15 = a2 + v14;
      if ( a2 + v14 <= v14 || v15 + v13 < v15 )
      {
        if ( (v12 & 4) == 0 )
        {
          if ( (v12 & 2) == 0 )
          {
            ++*(_DWORD *)(a1 + 6492);
            if ( (v12 & 1) == 0 )
              MiCauseOverCommitPopup(a1);
            MiPulseCommitSignal(a1);
          }
          return 0LL;
        }
        if ( !v13 )
          ++dword_140388C04;
        goto LABEL_65;
      }
      v16 = *(_QWORD *)(a1 + 6440);
      if ( v15 + v13 <= v16 )
      {
        if ( !v4 && v15 >= 95 * (v16 / 0x64) )
        {
          MiApplyCommitDelay(a1, v12, *(_QWORD *)(a1 + 6440));
          v13 = v32;
          v4 = 1;
        }
        goto LABEL_22;
      }
      v26 = *(_QWORD *)(a1 + 5088);
      if ( v15 >= v26 && v14 < v26 )
      {
        MiPulseCommitSignal(a1);
        v13 = v32;
      }
      if ( (v12 & 4) != 0 )
        break;
      if ( (v12 & 2) != 0 )
        return 0LL;
      if ( v16 == *(_QWORD *)(a1 + 5064) )
      {
        ++*(_DWORD *)(a1 + 6484);
        if ( (ULONG_PTR *)a1 != &MiSystemPartition )
          return 0LL;
        v27 = MiIssuePageExtendRequest(a1, a2, 2 * (v12 & 1) + 8, 0LL);
        if ( (v12 & 1) != 0 || !v27 )
        {
          if ( (v12 & 1) == 0 )
            MiCauseOverCommitPopup(a1);
          return 0LL;
        }
        v13 = v32;
        goto LABEL_22;
      }
      if ( (v12 & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 6488);
        MiIssuePageExtendRequest(a1, 4096LL, 2LL, 0LL);
        return 0LL;
      }
      if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 0LL, 255LL) )
      {
        ++*(_DWORD *)(a1 + 6480);
        MiCauseOverCommitPopup(a1);
        return 0LL;
      }
      v13 = v32;
    }
    if ( !v13 )
      ++dword_140388C00;
LABEL_65:
    if ( a2 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5120), a2);
      return 1LL;
    }
LABEL_22:
    v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6320), v15, v14);
  }
  while ( v14 != v17 );
  v18 = *(_QWORD *)(a1 + 5088);
  v19 = a2 + v17;
  if ( v19 >= v18 && v14 < v18 || (v20 = *(_QWORD *)(a1 + 5080), v19 >= v20) && v14 < v20 )
  {
    MiSyncCommitSignals(a1, 0LL, a3, a4);
    v13 = v32;
  }
  if ( v19 > *(_QWORD *)(a1 + 5056) )
    *(_QWORD *)(a1 + 5056) = v19;
  if ( (v12 & 2) != 0 )
    return 1LL;
  v21 = *(_QWORD *)(a1 + 6440);
  v22 = v21 / 0xA;
  if ( v19 >= 9 * (v21 / 0xA) )
  {
    v28 = v19 <= v21;
    if ( v19 < v21 )
    {
      if ( v21 - v19 >= 0x400000 )
        goto LABEL_32;
      v28 = v19 <= v21;
    }
    if ( v28 )
    {
      v29 = *(_QWORD *)(a1 + 5064);
      if ( v21 < v29 && v19 < v29 )
      {
        if ( v22 > 0x40000 )
          v22 = 0x40000LL;
        v30 = v29 - v21;
        v31 = v22 - v19;
        if ( v31 + v21 <= v30 )
          v30 = v31 + v21;
        MiIssuePageExtendRequest(a1, v30, 2LL, 0LL);
        v13 = v32;
      }
    }
  }
LABEL_32:
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    return 1LL;
  if ( (v12 & 1) == 0 && v19 >= *(_QWORD *)(a1 + 5088) && v21 == *(_QWORD *)(a1 + 5064) )
  {
    MiFreeExcessSegments();
    v13 = v32;
  }
  v23 = CurrentPrcb->CachedCommit;
  if ( v23 >= 0x80 )
    return 1LL;
  v24 = v19;
  v25 = 256 - v23 + v19;
  if ( v25 <= v24 || v25 + v13 <= v24 || v25 + v13 > v21 )
    return 1LL;
  MiReplenishLocalCommit(a1, CurrentPrcb);
  return 1LL;
}

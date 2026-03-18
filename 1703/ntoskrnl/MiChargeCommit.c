/*
 * XREFs of MiChargeCommit @ 0x1400D0C60
 * Callers:
 *     MiObtainSystemCharges @ 0x14002D65C (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x14003CAA4 (MiAcquireNonPagedResources.c)
 *     MmChargeResources @ 0x14005DC3C (MmChargeResources.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiObtainMdlCharges @ 0x14007B0D0 (MiObtainMdlCharges.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiChargeForLockedPage @ 0x1400CCDF0 (MiChargeForLockedPage.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiDeletePageTableHierarchy @ 0x1401052C0 (MiDeletePageTableHierarchy.c)
 *     MiObtainNonPagedPoolCharges @ 0x14010ECE0 (MiObtainNonPagedPoolCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x14010EDCC (MiChargeForWriteInProgressPage.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MiGetFileHashPage @ 0x14013D880 (MiGetFileHashPage.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x140154858 (MiStoreChargeReservedPages.c)
 *     MiInitializeCommitment @ 0x140159A60 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1402196E0 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x14022129C (MiGetSubsectionCharges.c)
 *     MiMakePageBad @ 0x140225FD8 (MiMakePageBad.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiChargeSystemImageCommitment @ 0x1404B0FE4 (MiChargeSystemImageCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 *     MiChargeSegmentCommit @ 0x14054A0F0 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     MiAllocateDummyPage @ 0x14080276C (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x1400265EC (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x140159D20 (MiSyncCommitSignals.c)
 *     MiTrimSegmentCache @ 0x140167B80 (MiTrimSegmentCache.c)
 *     MiCauseOverCommitPopup @ 0x140218018 (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x140218078 (MiPulseCommitSignal.c)
 *     MiIssuePageExtendRequest @ 0x14021A1F0 (MiIssuePageExtendRequest.c)
 *     MiIssuePageExtendRequestNoWait @ 0x14021A398 (MiIssuePageExtendRequestNoWait.c)
 */

__int64 __fastcall MiChargeCommit(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 CachedCommit)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // bp
  __int64 v6; // rsi
  signed __int32 v7; // eax
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  signed __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  bool v25; // cc
  char *v26; // rcx
  unsigned __int64 v27; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = CachedCommit;
  v6 = a1;
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
        a1 = v7;
        if ( v7 == CachedCommit )
          return 1LL;
        CachedCommit = v7;
      }
      while ( a2 <= v7 );
    }
  }
  if ( (v4 & 4) != 0 )
    v4 |= 2u;
  if ( (v4 & 8) != 0 )
  {
    v4 |= 2u;
    a1 = *((unsigned int *)&KeGetCurrentThread()[1].SwapListEntry + 3);
    if ( (a1 & 2) == 0 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      v9 = 64LL;
      if ( (ULONG_PTR *)v6 != &MiSystemPartition && *(_QWORD *)(v6 + 5584) >> 6 < 0x40uLL )
        v9 = *(_QWORD *)(v6 + 5584) >> 6;
    }
    else
    {
      v4 |= 4u;
      v9 = 0LL;
    }
  }
  else if ( (v4 & 7) != 0 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v6 + 4976);
  }
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 6128);
      v11 = v10 + a2;
      if ( v10 + a2 <= v10 || v11 + v9 < v11 )
      {
        if ( (v4 & 4) == 0 )
        {
          if ( (v4 & 2) == 0 )
          {
            ++*(_DWORD *)(v6 + 6300);
            if ( (v4 & 1) == 0 )
              MiCauseOverCommitPopup(v6, a2, CachedCommit);
            MiPulseCommitSignal(v6, a2, CachedCommit);
          }
          return 0LL;
        }
        if ( !v9 )
          ++dword_14036CA0C;
        goto LABEL_54;
      }
      v12 = *(_QWORD *)(v6 + 6248);
      if ( v11 + v9 <= v12 )
        goto LABEL_14;
      v22 = *(_QWORD *)(v6 + 4960);
      if ( v11 >= v22 && v10 < v22 )
        MiPulseCommitSignal(v6, a2, CachedCommit);
      if ( (v4 & 4) != 0 )
        break;
      if ( (v4 & 2) != 0 )
        return 0LL;
      if ( v12 == *(_QWORD *)(v6 + 4936) )
      {
        ++*(_DWORD *)(v6 + 6292);
        MiTrimSegmentCache(a1, a2, CachedCommit);
        if ( (v4 & 1) == 0 )
          MiCauseOverCommitPopup(v6, v23, v24);
        return 0LL;
      }
      if ( (v4 & 1) != 0 )
      {
        ++*(_DWORD *)(v6 + 6296);
        MiIssuePageExtendRequestNoWait(v6, 4096LL, 0LL);
        return 0LL;
      }
      if ( !(unsigned int)MiIssuePageExtendRequest(v6, a2, 255LL, 0LL) )
      {
        ++*(_DWORD *)(v6 + 6288);
        MiCauseOverCommitPopup(v6, a2, CachedCommit);
        return 0LL;
      }
    }
    if ( !v9 )
      ++dword_14036CA08;
LABEL_54:
    if ( a2 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 4992), a2);
      return 1LL;
    }
LABEL_14:
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 6128), v11, v10);
  }
  while ( v10 != v13 );
  v14 = *(_QWORD *)(v6 + 4960);
  v15 = a2 + v13;
  if ( v15 >= v14 && v10 < v14 || (v16 = *(_QWORD *)(v6 + 4952), v15 >= v16) && v10 < v16 )
    MiSyncCommitSignals(v6, 0LL);
  if ( v15 > *(_QWORD *)(v6 + 4928) )
    *(_QWORD *)(v6 + 4928) = v15;
  if ( (v4 & 2) != 0 )
    return 1LL;
  v17 = *(_QWORD *)(v6 + 6248);
  v18 = v17 / 0xA;
  if ( v15 >= 9 * (v17 / 0xA) )
  {
    v25 = v15 <= v17;
    if ( v15 < v17 )
    {
      if ( v17 - v15 >= 0x400000 )
        goto LABEL_25;
      v25 = v15 <= v17;
    }
    if ( v25 )
    {
      a1 = *(_QWORD *)(v6 + 4936);
      if ( v17 < a1 && v15 < a1 )
      {
        if ( v18 > 0x40000 )
          v18 = 0x40000LL;
        v26 = (char *)(a1 - v17);
        v27 = v17 - v15 + v18;
        if ( v27 > (unsigned __int64)v26 )
          v27 = (unsigned __int64)v26;
        MiIssuePageExtendRequestNoWait(v6, v27, 0LL);
      }
    }
  }
LABEL_25:
  if ( (ULONG_PTR *)v6 != &MiSystemPartition )
    return 1LL;
  if ( (v4 & 1) == 0 && v15 >= *(_QWORD *)(v6 + 4960) && v17 == *(_QWORD *)(v6 + 4936) )
    MiTrimSegmentCache(a1, v18, CachedCommit);
  v19 = CurrentPrcb->CachedCommit;
  if ( v19 >= 0x80 )
    return 1LL;
  v20 = v15;
  v21 = 256 - v19 + v15;
  if ( v21 <= v20 || v21 + v9 <= v20 || v21 + v9 > v17 )
    return 1LL;
  MiReplenishLocalCommit(v6, (__int64)CurrentPrcb, v20, 256 - v19);
  return 1LL;
}

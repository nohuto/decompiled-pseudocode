/*
 * XREFs of KeShouldYieldProcessor @ 0x1401091E0
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140009DA8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiDeleteSystemPageTables @ 0x1400F6F60 (MiDeleteSystemPageTables.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiLargeFreePageToMdl @ 0x14012630C (MiLargeFreePageToMdl.c)
 *     MiInsertViewOfPhysicalSection @ 0x1401519F8 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPageCallback @ 0x140212FA0 (MiReleaseCommitForResetPageCallback.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140215640 (MiEmptyWsPrivatePagesCallback.c)
 *     MiDecrementLargeSubsections @ 0x140222780 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x140222C04 (MiEnableLargeSubsection.c)
 *     MiConvertPfnsForLargePage @ 0x14022E29C (MiConvertPfnsForLargePage.c)
 *     MiUpdateLargePagePfns @ 0x14022EB28 (MiUpdateLargePagePfns.c)
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 *     MiScrubLargeMappedPage @ 0x1402387C4 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x14027B8F8 (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  LOGICAL v1; // edi
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // ebp
  unsigned int v5; // esi
  _KTHREAD *NextThread; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v5 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_8;
      goto LABEL_18;
    }
LABEL_5:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v5 )
    {
LABEL_15:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
      _enable();
      v5 = 0;
      goto LABEL_8;
    }
LABEL_18:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v5 = 5;
      goto LABEL_8;
    }
    if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
    {
      v5 = 6;
      goto LABEL_8;
    }
    goto LABEL_15;
  }
  v5 = 0;
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v5 = 2;
  }
  else
  {
    if ( !CurrentPrcb->QuantumEnd )
    {
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v5 = 4;
        goto LABEL_8;
      }
      goto LABEL_5;
    }
    v5 = 3;
  }
LABEL_8:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v5, DpcWatchdogCount, DpcTimeCount);
  LOBYTE(v1) = v5 != 0;
  return v1;
}

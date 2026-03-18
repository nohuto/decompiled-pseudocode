/*
 * XREFs of KeShouldYieldProcessor @ 0x14000D660
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiLargeFreePageToMdl @ 0x140074CE4 (MiLargeFreePageToMdl.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14007C430 (MiEmptyWsPrivatePagesCallback.c)
 *     MiDeleteSystemPageTables @ 0x14008283C (MiDeleteSystemPageTables.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140123508 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140162EEC (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPageCallback @ 0x14020C030 (MiReleaseCommitForResetPageCallback.c)
 *     MiDecrementLargeSubsections @ 0x1402184D4 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x140218958 (MiEnableLargeSubsection.c)
 *     MiTransferPartitionPageRun @ 0x14021EA0C (MiTransferPartitionPageRun.c)
 *     MiConvertPfnsForLargePage @ 0x1402215E4 (MiConvertPfnsForLargePage.c)
 *     MiUpdateLargePagePfns @ 0x140221CB0 (MiUpdateLargePagePfns.c)
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x140253C08 (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // ebx
  LOGICAL v2; // edi
  unsigned int DpcTimeCount; // esi
  volatile int DpcRequestSummary; // edx
  __int64 v5; // r9
  _KTHREAD *NextThread; // rax
  unsigned int v8; // ebp

  CurrentPrcb = KeGetCurrentPrcb();
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  v2 = 1;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v5 = 1LL;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
      {
        v8 = 1;
        goto LABEL_8;
      }
      goto LABEL_21;
    }
LABEL_5:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !(_DWORD)v5 )
    {
LABEL_17:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler();
      _enable();
      v8 = 0;
      goto LABEL_8;
    }
LABEL_21:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v8 = 5;
      goto LABEL_8;
    }
    if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
    {
      v8 = 6;
      goto LABEL_8;
    }
    goto LABEL_17;
  }
  v5 = 0LL;
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v8 = 2;
  }
  else
  {
    if ( !CurrentPrcb->QuantumEnd )
    {
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v8 = 4;
        goto LABEL_8;
      }
      goto LABEL_5;
    }
    v8 = 3;
  }
LABEL_8:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v8, DpcWatchdogCount, DpcTimeCount, v5);
  if ( !v8 )
    return 0;
  return v2;
}

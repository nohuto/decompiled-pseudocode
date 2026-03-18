/*
 * XREFs of KeShouldYieldProcessor @ 0x1400A9D70
 * Callers:
 *     MiLargeFreePageToMdl @ 0x140002D74 (MiLargeFreePageToMdl.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiQueryAddressSpan @ 0x1400B1200 (MiQueryAddressSpan.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402520D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiDeleteSessionPoolRange @ 0x14025BEE8 (MiDeleteSessionPoolRange.c)
 *     MiDecrementLargeSubsections @ 0x14025D3E0 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x140262490 (MiCreatePageTablesForPhysicalRange.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiConvertPfnsForLargePage @ 0x1402688E0 (MiConvertPfnsForLargePage.c)
 *     MiUpdateLargePagePfns @ 0x1402690D8 (MiUpdateLargePagePfns.c)
 *     MiTransferPartitionPageRun @ 0x14026FE30 (MiTransferPartitionPageRun.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402AF2A8 (EtwTraceShouldYieldProcessor.c)
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
      KiResetGlobalDpcWatchdogProfiler();
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

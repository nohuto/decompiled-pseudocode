/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0
 * Callers:
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     MiRemoveSecureEntry @ 0x140099290 (MiRemoveSecureEntry.c)
 *     MiInsertPrivateVad @ 0x140099410 (MiInsertPrivateVad.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x140099790 (MiDereferenceControlAreaBySection.c)
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009A340 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14009A420 (MiGetWsAndInsertVad.c)
 *     MiComputeContiguousSubsectionPte @ 0x14009ACA0 (MiComputeContiguousSubsectionPte.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14009AD50 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x14025635C (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // r8
  char v5; // di
  unsigned __int64 v6; // rax
  int InterruptCount; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rax
  int v13; // [rsp+60h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v6) << 32;
    v8 = v6;
  }
  else
  {
    v8 = v13;
    v5 = 0;
    InterruptCount = v13;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  LOBYTE(a2) = v3;
  v9 = ExpAcquireSpinLockExclusive(a1, a2);
  v10 = v9;
  if ( v9 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v9;
  }
  if ( v5 )
  {
    v11 = __rdtsc();
    LOBYTE(v9) = PerfLogSpinLockAcquire((__int64)a1, v11, v11 - v8, v10, InterruptCount, 3);
  }
  return v9;
}

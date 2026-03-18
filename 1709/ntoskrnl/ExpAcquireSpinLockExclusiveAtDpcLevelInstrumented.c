/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC
 * Callers:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14001ACD0 (MmDoesFileHaveUserWritableReferences.c)
 *     CcSetDirtyPinnedData @ 0x14001B660 (CcSetDirtyPinnedData.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140038190 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiMakeHyperRangeAccessible @ 0x14003E8F0 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiCountSharedPages @ 0x1400592B0 (MiCountSharedPages.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009F9C0 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14009FAE0 (MiGetWsAndInsertVad.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiComputeContiguousSubsectionPte @ 0x1400A1AE0 (MiComputeContiguousSubsectionPte.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiInsertPrivateVad @ 0x14010C710 (MiInsertPrivateVad.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x14027EC18 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // di
  unsigned __int64 v5; // rax
  int InterruptCount; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rax
  int v12; // [rsp+60h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v7 = v5;
  }
  else
  {
    v7 = v12;
    v4 = 0;
    InterruptCount = v12;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v8 = ExpAcquireSpinLockExclusive(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v8;
  }
  if ( v4 )
  {
    v10 = __rdtsc();
    LOBYTE(v8) = PerfLogSpinLockAcquire((__int64)a1, v10, v10 - v7, v9, InterruptCount, 3);
  }
  return v8;
}

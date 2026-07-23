/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x1400E6200
 * Callers:
 *     MiSetTrimWhileAgingState @ 0x1400042E0 (MiSetTrimWhileAgingState.c)
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiOutSwapWorkingSet @ 0x140062EF0 (MiOutSwapWorkingSet.c)
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 *     MiCleanWorkingSet @ 0x14007A220 (MiCleanWorkingSet.c)
 *     MiBeginProcessClean @ 0x14007F22C (MiBeginProcessClean.c)
 *     MmEnforceWorkingSetLimit @ 0x14008A9B8 (MmEnforceWorkingSetLimit.c)
 *     MiReleaseWalkLocks @ 0x1400B5D98 (MiReleaseWalkLocks.c)
 *     MiFreePhysicalView @ 0x1400B7EB0 (MiFreePhysicalView.c)
 *     MiMakeSecureExclusive @ 0x1400C6E3C (MiMakeSecureExclusive.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     MiDeleteCloneZombies @ 0x1400C9564 (MiDeleteCloneZombies.c)
 *     MiDeleteRotateAndStopFaults @ 0x1400D0A74 (MiDeleteRotateAndStopFaults.c)
 *     MiWaitForRotateToComplete @ 0x1400D0B30 (MiWaitForRotateToComplete.c)
 *     MiRotateComplete @ 0x1400D1034 (MiRotateComplete.c)
 *     MiRemoveSecureEntry @ 0x1400E46F0 (MiRemoveSecureEntry.c)
 *     MiInsertPrivateVad @ 0x1400E4BE4 (MiInsertPrivateVad.c)
 *     MiInsertVadEvent @ 0x1400E4C88 (MiInsertVadEvent.c)
 *     MiGetWsAndInsertVad @ 0x1400E6090 (MiGetWsAndInsertVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140138D9C (MiUnlockProbePacketWorkingSet.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 *     MiLockDownWorkingSet @ 0x140140AFC (MiLockDownWorkingSet.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1401424AC (MiDoneWithThisPageGetAnother.c)
 *     MiCreateForkWsles @ 0x1401427C8 (MiCreateForkWsles.c)
 *     MiCloneCaptureVadCommit @ 0x140142A00 (MiCloneCaptureVadCommit.c)
 *     MiCreateCloneChain @ 0x140143330 (MiCreateCloneChain.c)
 *     MmStealTopLevelPage @ 0x140143AFC (MmStealTopLevelPage.c)
 *     MiDeleteSessionAddressSpace @ 0x140153D40 (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x140154B38 (MiSessionRemoveImage.c)
 *     MiClearNonPagedBitMapBits @ 0x140160DA4 (MiClearNonPagedBitMapBits.c)
 *     MiCountSystemImageCommitment @ 0x140169A08 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x140178A94 (MiDeleteBootRange.c)
 *     MiFreeUnusedPfnPages @ 0x14017A360 (MiFreeUnusedPfnPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 *     MiClearCommitReleaseState @ 0x140250524 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140251154 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140251398 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402515B8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x140251B6C (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140251BF0 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140251DD0 (MmSetCommitReleaseEligibility.c)
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MiRemoveVadEvent @ 0x140258C0C (MiRemoveVadEvent.c)
 *     MiReInsertPlaceholderVad @ 0x140268574 (MiReInsertPlaceholderVad.c)
 *     MiRemovePlaceholderVad @ 0x140268600 (MiRemovePlaceholderVad.c)
 *     MiInsertLargeUserMapping @ 0x140268D44 (MiInsertLargeUserMapping.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiCreateInitialSystemWsles @ 0x1408AD704 (MiCreateInitialSystemWsles.c)
 *     MiReturnDriverLoadPages @ 0x1408E0BF0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1400D2920 (MiDeleteDeferredCloneDescriptors.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  int v4; // esi
  _SLIST_ENTRY *v5; // r14
  LONG *v6; // rbx
  _KPROCESS *Process; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v10; // r8
  int v11; // eax
  _SLIST_ENTRY *Next; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+48h] [rbp+10h]

  v4 = 0;
  v5 = 0LL;
  v14 = *(_DWORD *)(a1 + 184);
  if ( (v14 & 7) == 2 )
    v6 = &dword_1403CCD40;
  else
    v6 = (LONG *)(a1 + 192);
  if ( (v14 & 7) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( *(_WORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 336LL) )
        v5 = MiDeleteDeferredCloneDescriptors((__int64)Process);
    }
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v4 = 1;
  MiCheckProcessShadow(a1, 2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v11;
      if ( !v11 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  __writecr8(a2);
  if ( v5 )
  {
    do
    {
      Next = v5->Next;
      ExFreePoolWithTag(v5, 0);
      v5 = Next;
    }
    while ( Next );
  }
  if ( !v4 && ((v14 & 0x8000000) != 0 || (v14 & 0x4000000) != 0 || (v14 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1);
    MiUnlockWorkingSetShared(a1, a2, v10);
  }
}

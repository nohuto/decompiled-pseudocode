/*
 * XREFs of KxWaitForLockChainValid @ 0x1400889A0
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     IopGetMountFlag @ 0x140060E20 (IopGetMountFlag.c)
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140086160 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400880C0 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     IopDereferenceVpbAndFree @ 0x140088C00 (IopDereferenceVpbAndFree.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140089390 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400A4600 (ExpRemovePoolTrackerExpansion.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F3D30 (AlpcpLookasidePacketCallbackRoutine.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140100730 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140106870 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1401069A0 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x140106AE0 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x140106CD0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140107070 (IopCheckVpbMounted.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
    result = *a1;
  }
  while ( !*a1 );
  return result;
}

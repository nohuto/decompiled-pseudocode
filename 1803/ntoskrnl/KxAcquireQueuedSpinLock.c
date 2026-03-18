/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1400E01A0
 * Callers:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140001390 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140003CC0 (MiTryUnlinkNodeLargePage.c)
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14002E460 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     CcLazyWriteScan @ 0x140042058 (CcLazyWriteScan.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     MiSignalLargePageRebuild @ 0x1400809A4 (MiSignalLargePageRebuild.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     MmEnforceWorkingSetLimit @ 0x14008A9B8 (MmEnforceWorkingSetLimit.c)
 *     CcSetLogHandleForFileEx @ 0x1400B5910 (CcSetLogHandleForFileEx.c)
 *     WmipNotificationIrpCancel @ 0x1400B7120 (WmipNotificationIrpCancel.c)
 *     CcIsThereDirtyLoggedPages @ 0x1400BA390 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x1400BF4BC (CcWaitForUninitializeCacheMap.c)
 *     MiVolunteerForTrimFirst @ 0x1400C4778 (MiVolunteerForTrimFirst.c)
 *     CcUpdateTimeOnLogHandles @ 0x1400C5008 (CcUpdateTimeOnLogHandles.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     MiUpdatePageAttributeStamp @ 0x1400C95F8 (MiUpdatePageAttributeStamp.c)
 *     MiGetPerfectColorHeadPage @ 0x1400D4EA0 (MiGetPerfectColorHeadPage.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     CcSetAdditionalCacheAttributes @ 0x1400DC480 (CcSetAdditionalCacheAttributes.c)
 *     MiReturnNonPagedPoolPde @ 0x1400DC5A0 (MiReturnNonPagedPoolPde.c)
 *     CcSetParallelFlushFile @ 0x1400DC970 (CcSetParallelFlushFile.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDeviceReference @ 0x1400DF830 (IoGetAttachedDeviceReference.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x1400E07F0 (CcSetAdditionalCacheAttributesEx.c)
 *     MiRemoveWsleList @ 0x1400E1950 (MiRemoveWsleList.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiCoalesceFreeLargePages @ 0x1400E89A0 (MiCoalesceFreeLargePages.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x140122A90 (MiIncreaseAvailablePages.c)
 *     CcSetLoggedDataThreshold @ 0x14014CA90 (CcSetLoggedDataThreshold.c)
 *     MiPurgeLargeZeroNodePages @ 0x14014F82C (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiRebuildLargePages @ 0x140155E10 (MiRebuildLargePages.c)
 *     MiLockMemoryLists @ 0x140156F50 (MiLockMemoryLists.c)
 *     MiMirrorNodeLargePages @ 0x1401571B0 (MiMirrorNodeLargePages.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x140157BB0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x140157DF4 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140157FDC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x140158310 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x140158600 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x140158940 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140158BE0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401596CC (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x14015BD90 (CcNotifyExternalCaches.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14016D9F0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CcIsThereDirtyDataEx @ 0x1402206A0 (CcIsThereDirtyDataEx.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140242250 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140242290 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x14025E6E8 (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x14025F79C (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x140264534 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x140264F48 (MiFreeListPageContentsChanged.c)
 *     MiUnlinkPageFromBadList @ 0x140265518 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x140265B58 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1402B9D00 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExShareAddressSpaceWithDevice @ 0x1402BB7A0 (ExShareAddressSpaceWithDevice.c)
 *     ExDeferredFreePool @ 0x1402EA030 (ExDeferredFreePool.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  __int64 v2; // r11
  volatile __int64 *v3; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  int v7; // eax
  bool v8; // zf

  v2 = a1;
  v3 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5];
      v8 = v7 == -1;
      result = (unsigned int)(v7 + 1);
      SchedulerAssist[5] = result;
      if ( v8 )
      {
        result = *((unsigned __int8 *)SchedulerAssist + 25);
        if ( !(_BYTE)result && !*((_BYTE *)SchedulerAssist + 27) )
          result = KiPerformUnboostKick(CurrentPrcb);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(v2, v3);
  if ( _InterlockedExchange64(v3, v2) )
    return KxWaitForLockOwnerShip(v2);
  return result;
}

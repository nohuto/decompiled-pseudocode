/*
 * XREFs of MiLockWorkingSetShared @ 0x140025A60
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 *     MiCombineWorkingSet @ 0x140004854 (MiCombineWorkingSet.c)
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiDeleteKernelStack @ 0x140025C60 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     MiLockWorkingSetOptimal @ 0x140048EC8 (MiLockWorkingSetOptimal.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiDeleteSystemPageTables @ 0x14004975C (MiDeleteSystemPageTables.c)
 *     MiEncodeProtoFill @ 0x14004AAA0 (MiEncodeProtoFill.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiAllowProtectionChange @ 0x140062454 (MiAllowProtectionChange.c)
 *     MiInitializeWorkingSetList @ 0x14006A7A0 (MiInitializeWorkingSetList.c)
 *     MmQueryWorkingSetInformation @ 0x14006CEF8 (MmQueryWorkingSetInformation.c)
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14007FE08 (MmQuerySystemWorkingSetInformation.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetInitiate @ 0x1400839D0 (MiEmptyWorkingSetInitiate.c)
 *     MiQueryAddressSpan @ 0x1400B1200 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x1400B1DE0 (MiComparePteProtections.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x1400B4D9C (MiLockProtoPage.c)
 *     MiConvertAndFlushWsleVas @ 0x1400BAC24 (MiConvertAndFlushWsleVas.c)
 *     MiLockProbePacketWorkingSet @ 0x1400BBD14 (MiLockProbePacketWorkingSet.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400BDA54 (MiFlushDirtyBitsToPfn.c)
 *     MiMakeProtoLeafValid @ 0x1400BF71C (MiMakeProtoLeafValid.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MmQueryCommitReleaseState @ 0x1400C6588 (MmQueryCommitReleaseState.c)
 *     MiLockPageTableRange @ 0x1400C6CEC (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x1400CE14C (MiUnlockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x1400CF100 (MmCheckProcessShadow.c)
 *     MmStoreDecommitVirtualMemory @ 0x1400CFD8C (MmStoreDecommitVirtualMemory.c)
 *     MmRemoveExecuteGrants @ 0x1400D10BC (MmRemoveExecuteGrants.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiClearNonPagedPtes @ 0x1401354A0 (MiClearNonPagedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiGetWorkingSetInfoEx @ 0x140144614 (MiGetWorkingSetInfoEx.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiLeapPrefetch @ 0x140154650 (MiLeapPrefetch.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140185724 (MiGetWsAndMakePageTablesNx.c)
 *     MiFaultInPagedPool @ 0x14018630C (MiFaultInPagedPool.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x1402519D4 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x140251EB4 (MiExceptionForMappedVa.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402520D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiGetFileOnlyRanges @ 0x140252864 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x14025382C (MiReacquireWalkLocks.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402577EC (MmRemoveSystemCacheFromDump.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x14025AB14 (MmUpdateOldWorkingSetPages.c)
 *     MiDeleteSessionPoolRange @ 0x14025BEE8 (MiDeleteSessionPoolRange.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x140262490 (MiCreatePageTablesForPhysicalRange.c)
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     MiCountCommittedPages @ 0x140263AB4 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402649B4 (MiWriteEnclavePte.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 *     MiInsertLargeUserMapping @ 0x140268D44 (MiInsertLargeUserMapping.c)
 *     MiScrubAweMappedPage @ 0x140270278 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiMarkLargePageMappings @ 0x140898CBC (MiMarkLargePageMappings.c)
 *     MiAddLoaderHalIoMappings @ 0x14089C610 (MiAddLoaderHalIoMappings.c)
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  unsigned __int8 v1; // al
  LONG *v2; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v6; // ett
  __int64 result; // rax
  int v8; // eax

  v1 = *(_BYTE *)(a1 + 184) & 7;
  if ( v1 >= 6u )
  {
    result = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  else
  {
    if ( v1 == 2 )
      v2 = &dword_1403CCD40;
    else
      v2 = (LONG *)(a1 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v8 = SchedulerAssist[5];
          SchedulerAssist[5] = v8 + 1;
          if ( v8 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v2);
      v6 = *v2 & 0x7FFFFFFF;
      if ( v6 != _InterlockedCompareExchange(v2, v6 + 1, v6) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        ExpWaitForSpinLockSharedAndAcquire(v2, CurrentIrql);
      }
    }
    if ( v2[1] )
      _InterlockedExchange(v2 + 1, 0);
    return CurrentIrql;
  }
  return result;
}

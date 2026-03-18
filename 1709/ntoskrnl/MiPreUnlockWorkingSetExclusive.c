/*
 * XREFs of MiPreUnlockWorkingSetExclusive @ 0x140057900
 * Callers:
 *     MiInitializeWorkingSetList @ 0x1400145B4 (MiInitializeWorkingSetList.c)
 *     MiDirtySystemCachePte @ 0x14001E5F0 (MiDirtySystemCachePte.c)
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiDeleteKernelStack @ 0x1400328D0 (MiDeleteKernelStack.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiRemoveSecureEntry @ 0x140034510 (MiRemoveSecureEntry.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiMakeHyperRangeAccessible @ 0x14003E8F0 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 *     MiGetWsAndInsertVad @ 0x14009FAE0 (MiGetWsAndInsertVad.c)
 *     MiInsertVadEvent @ 0x1400A59A0 (MiInsertVadEvent.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x1400D00F0 (MiJumpStackTarget.c)
 *     MmStealTopLevelPage @ 0x1400D08FC (MmStealTopLevelPage.c)
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiConvertAndFlushWsleVas @ 0x1400E6890 (MiConvertAndFlushWsleVas.c)
 *     MiInsertPrivateVad @ 0x14010C710 (MiInsertPrivateVad.c)
 *     MiMarkPteDirty @ 0x140117FA4 (MiMarkPteDirty.c)
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 *     MiEncodeProtoFill @ 0x14012459C (MiEncodeProtoFill.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 *     MiMakeProtoLeafValid @ 0x140128454 (MiMakeProtoLeafValid.c)
 *     MiCountSystemImageCommitment @ 0x14014BA18 (MiCountSystemImageCommitment.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140213E14 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiLockHotPatchPages @ 0x140219014 (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MiDeleteSessionAddressSpace @ 0x140221670 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPoolRange @ 0x140221EC4 (MiDeleteSessionPoolRange.c)
 *     MiInsertLargeUserMapping @ 0x14022E6A4 (MiInsertLargeUserMapping.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MiForceAgeWorkingSet @ 0x14021D508 (MiForceAgeWorkingSet.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 */

__int64 __fastcall MiPreUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  unsigned int v6; // eax
  char v7; // al
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8

  CurrentThread = KeGetCurrentThread();
  result = *(unsigned int *)(a1 + 192);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v6 = BYTE3(result);
    if ( (v6 & 8) != 0 )
    {
      *(_BYTE *)(a1 + 195) = v6 & 0xF7;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      if ( !MiForcedTrim(a1, a2) && (*(_BYTE *)(a1 + 192) & 0x40) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 120);
        if ( v8 > *(_QWORD *)(a1 + 152) )
        {
          if ( (*(_DWORD *)(a1 + 4) & 0xF) != 0 )
            v9 = v8 - 1;
          else
            v9 = *(_QWORD *)(a1 + 152);
          MiReduceWs(a1, a2, v9);
        }
      }
    }
    v7 = *(_BYTE *)(a1 + 195);
    if ( (v7 & 4) != 0 )
    {
      *(_BYTE *)(a1 + 195) = v7 & 0xFB;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiForceAgeWorkingSet(a1, a2);
    }
    result = *(unsigned __int8 *)(a1 + 195);
    if ( (result & 0x10) != 0 )
    {
      *(_BYTE *)(a1 + 195) = result & 0xEF;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      result = MiReduceWs(a1, a2, *(_QWORD *)(a1 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  return result;
}

/*
 * XREFs of MiPreUnlockWorkingSetExclusive @ 0x1400D6900
 * Callers:
 *     MiDeleteKernelStack @ 0x140023CD4 (MiDeleteKernelStack.c)
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     MiJumpStackTarget @ 0x140040A00 (MiJumpStackTarget.c)
 *     MiInitializeWorkingSetList @ 0x1400644D4 (MiInitializeWorkingSetList.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertAndFlushWsleVas @ 0x14007FA24 (MiConvertAndFlushWsleVas.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiRemoveSecureEntry @ 0x140099290 (MiRemoveSecureEntry.c)
 *     MiInsertPrivateVad @ 0x140099410 (MiInsertPrivateVad.c)
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     MiGetWsAndInsertVad @ 0x14009A420 (MiGetWsAndInsertVad.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400FA3B0 (MiSetReadOnlyOnSectionView.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiEncodeProtoFill @ 0x140119844 (MiEncodeProtoFill.c)
 *     MmStealTopLevelPage @ 0x14013497C (MmStealTopLevelPage.c)
 *     MiDeleteSessionAddressSpace @ 0x14013E414 (MiDeleteSessionAddressSpace.c)
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020CE14 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiLockHotPatchPages @ 0x140211784 (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     MiDeleteSessionPoolRange @ 0x140217EB8 (MiDeleteSessionPoolRange.c)
 *     MiInsertLargeUserMapping @ 0x14022181C (MiInsertLargeUserMapping.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 * Callees:
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiForceAgeWorkingSet @ 0x140214F58 (MiForceAgeWorkingSet.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 */

char __fastcall MiPreUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  char result; // al
  char v5; // al
  char v6; // al
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8

  result = *(_BYTE *)(a1 + 195);
  if ( (result & 0x10) == 0 )
  {
    if ( (result & 8) != 0 )
    {
      *(_BYTE *)(a1 + 195) = *(_BYTE *)(a1 + 195) & 0xE7 | 0x10;
      if ( ((MiForcedTrim(a1, a2) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (*(_BYTE *)(a1 + 192) & 0x40) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 120);
        if ( v7 > *(_QWORD *)(a1 + 152) )
        {
          if ( (*(_DWORD *)(a1 + 4) & 0xF) != 0 )
            v8 = v7 - 1;
          else
            v8 = *(_QWORD *)(a1 + 152);
          MiReduceWs(a1, a2, v8);
        }
      }
    }
    v5 = *(_BYTE *)(a1 + 195);
    if ( (v5 & 4) != 0 )
    {
      *(_BYTE *)(a1 + 195) = v5 & 0xEB | 0x10;
      MiForceAgeWorkingSet(a1, a2);
    }
    v6 = *(_BYTE *)(a1 + 195);
    if ( (v6 & 0x20) != 0 )
    {
      *(_BYTE *)(a1 + 195) = v6 & 0xCF | 0x10;
      MiReduceWs(a1, a2, *(_QWORD *)(a1 + 152));
    }
    result = *(_BYTE *)(a1 + 195);
    if ( (result & 0x10) != 0 )
    {
      result &= ~0x10u;
      *(_BYTE *)(a1 + 195) = result;
    }
  }
  return result;
}

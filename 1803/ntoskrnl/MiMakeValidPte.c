/*
 * XREFs of MiMakeValidPte @ 0x14002EB00
 * Callers:
 *     MiUnmapMdlCommon @ 0x140001568 (MiUnmapMdlCommon.c)
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002E730 (MiDecrementAndInsertStandbyPages.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiUnlinkStandbyBatch @ 0x1400306A0 (MiUnlinkStandbyBatch.c)
 *     MiMapArbitraryPage @ 0x1400323B0 (MiMapArbitraryPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiInitializeSystemPageTable @ 0x140071268 (MiInitializeSystemPageTable.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400A5A10 (MiAssignNonPagedPoolPtes.c)
 *     MiUnlinkStandbyPfn @ 0x1400BBD84 (MiUnlinkStandbyPfn.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 *     MiZeroLargePage @ 0x140138310 (MiZeroLargePage.c)
 *     MiMapSinglePage @ 0x140138578 (MiMapSinglePage.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiMapMdlCommon @ 0x14013B6DC (MiMapMdlCommon.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiBuildForkPageTable @ 0x1401422DC (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x140142578 (MiFinishLastForkPageTable.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014F088 (MmMapMemoryDumpMdlEx.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiCopySinglePage @ 0x14015B52C (MiCopySinglePage.c)
 *     MiMapWithLargePages @ 0x140177EDC (MiMapWithLargePages.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeNewUltraHugeContext @ 0x14017BE2C (MiInitializeNewUltraHugeContext.c)
 *     MiFillGapPtes @ 0x14017C8E0 (MiFillGapPtes.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 *     MiMapFrame @ 0x140256814 (MiMapFrame.c)
 *     MiInitializeSlowPte @ 0x140258228 (MiInitializeSlowPte.c)
 *     MiJoinBitmapPages @ 0x14025B96C (MiJoinBitmapPages.c)
 *     MiMakeLargePageTable @ 0x14025BAE8 (MiMakeLargePageTable.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140260E34 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x14026153C (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x140261C58 (MiInsertLargeVadMapping.c)
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeProtoPfn @ 0x1402681CC (MiInitializeProtoPfn.c)
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x140270A34 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x14062B9A4 (MiInitializeShadowPageTable.c)
 *     MmAllocateNonCachedMemory @ 0x14074B6C0 (MmAllocateNonCachedMemory.c)
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140751D24 (MiCreateHardwareEnclave.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
 *     MmChangeKernelCfgBitmap @ 0x1407543C8 (MmChangeKernelCfgBitmap.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 *     MiDeleteLargePfnBitMap @ 0x140756B40 (MiDeleteLargePfnBitMap.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     MiInitializeDummyPages @ 0x140899A78 (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x14089ABC4 (MxMapVa.c)
 *     MxCopyPage @ 0x14089B084 (MxCopyPage.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x14089BA60 (MxFillPhysicalPage.c)
 *     MiMapBBTMemory @ 0x14089D6E4 (MiMapBBTMemory.c)
 *     MiInitializeTbFlush @ 0x14089D77C (MiInitializeTbFlush.c)
 *     MiInitializeSystemImagePage @ 0x1408ADBC0 (MiInitializeSystemImagePage.c)
 *     MiInitializeGapFrames @ 0x1408BAAB8 (MiInitializeGapFrames.c)
 *     MiInitializeSharedUserData @ 0x1408C7258 (MiInitializeSharedUserData.c)
 *     MiMapDummyPages @ 0x1408C7D9C (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1408E0A50 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax

  v4 = a3;
  v5 = a3 & 0x1F;
  v6 = (a2 & 0xFFFFFFFFFLL) << 12;
  v7 = v6 | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = v6 | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x121;
  }
  else
  {
    v8 = (__int64)(a1 << 25) >> 16;
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v7 = v6 | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
      }
      else if ( (a3 & 0x4000000) == 0 )
      {
        v7 = v6 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v5] & 0x7FFF000000000E7FLL | 0x21;
      }
      if ( (unsigned int)MiUserPdeOrAbove(a1, v6, a3, a4) )
        v7 |= 4uLL;
    }
    v9 = v7 | 4;
    if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
      v9 = v7;
    if ( v8 < 0xFFFF800000000000uLL )
    {
      v10 = HIBYTE(word_1403CB7D0);
    }
    else if ( byte_1403CCF90[((v8 >> 39) & 0x1FF) - 256] == 1 )
    {
      v10 = 0;
    }
    else if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v10 = 0;
    }
    else if ( v8 > qword_1403CBB70 || v8 < qword_1403CD100 )
    {
      v10 = (unsigned __int8)word_1403CB7D0;
    }
    else
    {
      v10 = HIBYTE(word_1403CB7D0);
    }
    v11 = v9 | 0x100;
    if ( !v10 )
      v11 = v9;
  }
  v12 = v11 | 0x42;
  if ( v4 >= 0 || (v5 & 5) != 4 )
    v12 = v11;
  if ( (v4 & 0x40000000) != 0 )
    v12 &= ~4uLL;
  if ( (v4 & 0x20000000) != 0 )
    v12 = ((unsigned __int16)v12 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100 ^ (unsigned __int64)v12;
  v13 = v12 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v4 & 0x8000000) == 0 )
    v13 = v12;
  v14 = v13 | 0x80;
  if ( (v4 & 0x4000000) == 0 )
    v14 = v13;
  return v14 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}

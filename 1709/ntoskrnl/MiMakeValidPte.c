/*
 * XREFs of MiMakeValidPte @ 0x140036F30
 * Callers:
 *     MiMapArbitraryPage @ 0x140008F00 (MiMapArbitraryPage.c)
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x14001E98C (MiUnlinkStandbyPfn.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiMakeTransitionPteValid @ 0x14002C750 (MiMakeTransitionPteValid.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiUnlinkStandbyBatch @ 0x140036990 (MiUnlinkStandbyBatch.c)
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400C38C0 (MiAssignNonPagedPoolPtes.c)
 *     MiInitializeSystemPageTable @ 0x1400C42AC (MiInitializeSystemPageTable.c)
 *     MiMakeLargePageTable @ 0x1400C46E8 (MiMakeLargePageTable.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiMapSinglePage @ 0x1400CD194 (MiMapSinglePage.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiBuildForkPageTable @ 0x1400CEA74 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1400CED2C (MiFinishLastForkPageTable.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiConfirmPageIsZero @ 0x1401026D0 (MiConfirmPageIsZero.c)
 *     MiInsertPhysicalPteMapping @ 0x1401184C0 (MiInsertPhysicalPteMapping.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MiFillGapPtes @ 0x14014BE54 (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 *     MiMapWithLargePages @ 0x14014F450 (MiMapWithLargePages.c)
 *     MiUnmapMdlCommon @ 0x140150654 (MiUnmapMdlCommon.c)
 *     MiInitializeNewUltraHugeContext @ 0x140153B68 (MiInitializeNewUltraHugeContext.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MiCopySinglePage @ 0x1402179B4 (MiCopySinglePage.c)
 *     MiMapFrame @ 0x140219E5C (MiMapFrame.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 *     MiInitializeSlowPte @ 0x14021C0C4 (MiInitializeSlowPte.c)
 *     MiJoinBitmapPages @ 0x1402201F0 (MiJoinBitmapPages.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiEnableLargeSubsection @ 0x140222C04 (MiEnableLargeSubsection.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140227C44 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1402283A0 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x140228908 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x14022E010 (MiInitializeProtoPfn.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x140238F30 (MiScrubPage.c)
 *     MiAllocateTopLevelPage @ 0x14043CD94 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14043CFEC (MiInitializeShadowPageTable.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MmAllocateNonCachedMemory @ 0x1406E0780 (MmAllocateNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406E3220 (MiFillPagedPoolLockedDown.c)
 *     MiProtectAweRegion @ 0x1406E568C (MiProtectAweRegion.c)
 *     NtMapUserPhysicalPages @ 0x1406E69F4 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406E6E70 (NtMapUserPhysicalPagesScatter.c)
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1406E8318 (MiCreateHardwareEnclave.c)
 *     MiProtectEnclavePages @ 0x1406E8DE4 (MiProtectEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 *     MmChangeKernelCfgBitmap @ 0x1406EA590 (MmChangeKernelCfgBitmap.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 *     MiDeleteLargePfnBitMap @ 0x1406ED6C0 (MiDeleteLargePfnBitMap.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x14082A2CC (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x14082B594 (MxMapVa.c)
 *     MxCopyPage @ 0x14082BAD0 (MxCopyPage.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     MiInitializeSystemImagePage @ 0x140837D74 (MiInitializeSystemImagePage.c)
 *     MiInitializeTbFlush @ 0x140849448 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x140849A88 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140856878 (MiMapDummyPages.c)
 *     MiMapBBTMemory @ 0x14085826C (MiMapBBTMemory.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax

  v5 = a3 & 0x1F;
  v6 = ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x121;
  }
  else
  {
    v7 = (__int64)(a1 << 25) >> 16;
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v6 = ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
      }
      else if ( (a3 & 0x4000000) == 0 )
      {
        v6 = ((a2 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v5] & 0x7FFF000000000E7FLL | 0x21;
      }
      if ( (unsigned int)MiUserPdeOrAbove(a1) )
        v6 |= 4uLL;
    }
    v8 = v6 | 4;
    if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
      v8 = v6;
    if ( v7 >= 0xFFFF800000000000uLL )
    {
      if ( byte_1403899D0[((v7 >> 39) & 0x1FF) - 256] == 1 )
      {
        v9 = 0;
      }
      else if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v7 < qword_140389B40 || (v9 = HIBYTE(word_1403885F8), v7 > qword_140388958) )
          v9 = (unsigned __int8)word_1403885F8;
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = HIBYTE(word_1403885F8);
    }
    v10 = v8 | 0x100;
    if ( !v9 )
      v10 = v8;
  }
  if ( a3 < 0 && (v5 & 5) == 4 )
    v10 |= 0x42uLL;
  v11 = v10 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (a3 & 0x40000000) == 0 )
    v11 = v10;
  if ( (a3 & 0x20000000) != 0 )
    v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100;
  v12 = v11 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v12 = v11;
  v13 = v12 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v13 = v12;
  return v13 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}

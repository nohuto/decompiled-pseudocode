/*
 * XREFs of MiMakeValidPte @ 0x1400A12B0
 * Callers:
 *     MiBuildForkPageTable @ 0x140002C30 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x140002EB4 (MiFinishLastForkPageTable.c)
 *     MiMapSinglePage @ 0x140025508 (MiMapSinglePage.c)
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x140028268 (MiUnlinkStandbyPfn.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiReadyStandbyPageForActive @ 0x14009BFE0 (MiReadyStandbyPageForActive.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiMapArbitraryPage @ 0x1400A39B0 (MiMapArbitraryPage.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400B2F20 (MiAssignNonPagedPoolPtes.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiConfirmPageIsZero @ 0x1401041F0 (MiConfirmPageIsZero.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiMapLargePagesToZero @ 0x140129880 (MiMapLargePagesToZero.c)
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 *     MmMapMemoryDumpMdlEx @ 0x140137880 (MmMapMemoryDumpMdlEx.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MiMapWithLargePages @ 0x14014734C (MiMapWithLargePages.c)
 *     MiFillGapPtes @ 0x14015A794 (MiFillGapPtes.c)
 *     MiPfnRangeIsZero @ 0x14015B174 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x14015B698 (MiDemoteLargePage.c)
 *     MiInitializeNewUltraHugeContext @ 0x14015C7C0 (MiInitializeNewUltraHugeContext.c)
 *     MiGetUltraMapping @ 0x14015C940 (MiGetUltraMapping.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x14020F570 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 *     MiCopySinglePage @ 0x140210384 (MiCopySinglePage.c)
 *     MiMapFrame @ 0x14021236C (MiMapFrame.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     MiInitializeSlowPte @ 0x140214098 (MiInitializeSlowPte.c)
 *     MiJoinBitmapPages @ 0x140216A20 (MiJoinBitmapPages.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MiEnableLargeSubsection @ 0x140218958 (MiEnableLargeSubsection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14021B390 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x14021BAAC (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x14021BFD8 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x14022136C (MiInitializeProtoPfn.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 *     MiAllocateTopLevelPage @ 0x14041D294 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14057EF68 (MiMapNewSession.c)
 *     MmAllocateNonCachedMemory @ 0x1406B4790 (MmAllocateNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 *     MiProtectAweRegion @ 0x1406B89C4 (MiProtectAweRegion.c)
 *     NtMapUserPhysicalPages @ 0x1406B9C78 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406BA0F4 (NtMapUserPhysicalPagesScatter.c)
 *     MiAddPagesToEnclave @ 0x1406BA74C (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x1406BB880 (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406BBB84 (MiProtectEnclavePages.c)
 *     MmChangeKernelCfgBitmap @ 0x1406BD7B0 (MmChangeKernelCfgBitmap.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 *     MiDeleteLargePfnBitMap @ 0x1406BFB38 (MiDeleteLargePfnBitMap.c)
 *     MiInitializeDummyPages @ 0x1408002FC (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x1408015E0 (MxMapVa.c)
 *     MxCopyPage @ 0x140801AEC (MxCopyPage.c)
 *     MxSwapPages @ 0x140802304 (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x1408025BC (MxFillPhysicalPage.c)
 *     MiInitializeTbFlush @ 0x140802CC8 (MiInitializeTbFlush.c)
 *     MiMapBBTMemory @ 0x14080308C (MiMapBBTMemory.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     MiMapDummyPages @ 0x140813A24 (MiMapDummyPages.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     MiInitializeSystemImagePage @ 0x140816130 (MiInitializeSystemImagePage.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax

  v5 = a3 & 0x1F;
  v6 = ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x21;
  v7 = word_14036C2A8;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v5] & 0xFFFF000000000E7FuLL | 0x121;
  }
  else
  {
    v8 = (__int64)(a1 << 25) >> 16;
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
    if ( a1 <= 0xFFFFF6BFFFFFFF78uLL )
      v6 |= 4uLL;
    if ( v8 >= 0xFFFF800000000000uLL )
    {
      if ( byte_14036D700[((v8 >> 39) & 0x1FF) - 256] == 1 )
      {
        v9 = 0;
      }
      else if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v8 < qword_14036D870 || (v9 = HIBYTE(word_14036C2A8), v8 > qword_14036C5D0) )
          v9 = v7;
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = HIBYTE(word_14036C2A8);
    }
    v10 = v6 | 0x100;
    if ( !v9 )
      v10 = v6;
    v11 = v10;
  }
  if ( a3 < 0 && (v5 & 5) == 4 )
    v11 |= 0x42uLL;
  v12 = v11 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (a3 & 0x40000000) == 0 )
    v12 = v11;
  if ( (a3 & 0x20000000) != 0 )
    v12 ^= ((unsigned __int16)v12 ^ (unsigned __int16)(v7 << 8)) & 0x100;
  v13 = v12 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v13 = v12;
  v14 = v13 | 0x80;
  if ( (a3 & 0x4000000) == 0 )
    v14 = v13;
  return v14 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}

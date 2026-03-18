/*
 * XREFs of MiWriteValidPteNewPage @ 0x140031C10
 * Callers:
 *     MiDirtySystemCachePte @ 0x14001E5F0 (MiDirtySystemCachePte.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400B0398 (MiFlushDirtyBitsToPfn.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1400CDE24 (MiTradeActivePage.c)
 *     MiCopyKstack @ 0x1400D0608 (MiCopyKstack.c)
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiMakeCombineCandidateClean @ 0x1400EB5A4 (MiMakeCombineCandidateClean.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiMarkPteDirty @ 0x140117FA4 (MiMarkPteDirty.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 *     MiRevokeExecutePte @ 0x140125040 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x140150654 (MiUnmapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14015B444 (MiGetWsAndMakePageTablesNx.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 *     MiValidVirtualizationFault @ 0x140228F84 (MiValidVirtualizationFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x140229C98 (MiMoveDirtyBitsToPfns.c)
 *     MiProtectAweRegion @ 0x1406E568C (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1406E8DE4 (MiProtectEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 *     MxCreatePfns @ 0x14082BE2C (MxCreatePfns.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     MiProtectSharedUserPage @ 0x1408574D4 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 PteShadow; // rax
  __int64 v3; // r9
  unsigned __int64 *v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  PteShadow = *a1;
  v3 = a2;
  v4 = a1;
  v5 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, *a1);
  v6 = v3 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(PteShadow) & 0xF | (16 * ((PteShadow >> 60) & 7))) << 56);
  *v4 = v6;
  result = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    result = v5;
    if ( (unsigned __int64)v4 <= v5 )
      return MiWritePteShadow(v4, v6);
  }
  return result;
}

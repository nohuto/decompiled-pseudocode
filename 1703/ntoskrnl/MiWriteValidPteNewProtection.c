/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140100C50
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiReplacePageTablePage @ 0x140023E74 (MiReplacePageTablePage.c)
 *     MiDirtySystemCachePte @ 0x14002A408 (MiDirtySystemCachePte.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiFlushDirtyBitsToPfn @ 0x140071DE8 (MiFlushDirtyBitsToPfn.c)
 *     MiRevokeExecutePte @ 0x140078450 (MiRevokeExecutePte.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiNoFaultFound @ 0x1400B0400 (MiNoFaultFound.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400D10C0 (MiMoveDirtyBitsToPfns.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiMakeCombineCandidateClean @ 0x140100A60 (MiMakeCombineCandidateClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140167358 (MiGetWsAndMakePageTablesNx.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 *     MiMarkPteDirty @ 0x140212530 (MiMarkPteDirty.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 *     MiValidVirtualizationFault @ 0x14021C39C (MiValidVirtualizationFault.c)
 *     MiProtectAweRegion @ 0x1406B89C4 (MiProtectAweRegion.c)
 *     MiDeleteEnclavePages @ 0x1406BB880 (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406BBB84 (MiProtectEnclavePages.c)
 *     MxCreatePfns @ 0x140801D90 (MxCreatePfns.c)
 *     MiProtectSharedUserPage @ 0x14081347C (MiProtectSharedUserPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWriteValidPteNewProtection(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r9
  unsigned __int64 *v3; // r10
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  *v3 = v2 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(v1) & 0xF | (16 * ((v1 >> 60) & 7))) << 56);
  result = MiPteInShadowRange(v3);
  if ( (_DWORD)result )
    return MiWritePteShadow(v5);
  return result;
}

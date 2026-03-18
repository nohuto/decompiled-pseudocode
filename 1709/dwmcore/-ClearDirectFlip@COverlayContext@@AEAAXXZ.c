/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180066ECC
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180067654 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x180075ED8 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = *((_QWORD *)this + 131);
  if ( v2 )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(*(_QWORD *)(v2 + 32) + 48LL, 1LL);
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 131);
    if ( v3 )
      (**v3)(v3, 1LL);
    *((_QWORD *)this + 131) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xq(v3, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 11), 0LL);
  }
}

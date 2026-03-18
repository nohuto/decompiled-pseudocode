/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800715B0
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180071BB8 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800211D4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = *((_QWORD *)this + 121);
  if ( v2 )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v2 + 32) + 48LL), 1, 0);
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 121);
    if ( v3 )
      (**v3)(v3, 1LL);
    *((_QWORD *)this + 121) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd(v3, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 10), 0LL);
  }
}

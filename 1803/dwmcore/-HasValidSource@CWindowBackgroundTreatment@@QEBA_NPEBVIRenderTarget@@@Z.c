/*
 * XREFs of ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x18000BDF4
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000BF08 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800602F0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z @ 0x18000BB28 (-GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEAVIRenderTarget@@@Z @ 0x18000C664 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CWindowBackgroundTreatment::HasValidSource(
        CWindowBackgroundTreatment *this,
        int (__fastcall ***a2)(const struct IRenderTarget *, GUID *, CHwDisplayRenderTarget **))
{
  CWindowBackgroundTreatment *v3; // rcx
  CWindowBackgroundTreatment *i; // rax
  bool v6; // zf
  struct IRenderTarget *ConsistentIRenderTargetNoRef; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 359) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 48LL))(
           *((_QWORD *)this + 8),
           18LL) )
    {
      return 1;
    }
    v6 = *((_QWORD *)this + 17) == 0LL;
    return !v6;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v3 = (CWindowBackgroundTreatment *)*((_QWORD *)this + 10);
    for ( i = *(CWindowBackgroundTreatment **)v3; i != v3; i = *(CWindowBackgroundTreatment **)i )
    {
      if ( !*((_QWORD *)i + 3) )
        return 0;
    }
    if ( !a2 )
      return 1;
    ConsistentIRenderTargetNoRef = CWindowBackgroundTreatment::GetConsistentIRenderTargetNoRef(v3, a2);
    std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
      (char *)this + 72,
      &v8,
      &ConsistentIRenderTargetNoRef);
    v6 = v8 == *((_QWORD *)this + 10);
    return !v6;
  }
  return 0;
}

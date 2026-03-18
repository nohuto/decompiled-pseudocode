/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEAVIRenderTarget@@@Z @ 0x18000C664
 * Callers:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x18000BDF4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRenderTarget@@@Z @ 0x18000BE88 (-GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRender.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
        __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *i; // r9
  _QWORD *v12; // rax

  v5 = std::_Hash_bytes(a3, 8uLL);
  v7 = v6[3];
  v8 = v6[6] & v5;
  v9 = v6[1];
  v10 = 2 * v8;
  for ( i = *(_QWORD **)(v7 + 16 * v8); ; i = (_QWORD *)*i )
  {
    v12 = *(_QWORD *)(v7 + 8 * v10) == v9 ? (_QWORD *)v6[1] : **(_QWORD ***)(v7 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v9;
  return a2;
}

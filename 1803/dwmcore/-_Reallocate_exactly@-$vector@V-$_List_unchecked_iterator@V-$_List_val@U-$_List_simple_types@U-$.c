/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800B92BC
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800B9208 (-_Init@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Micr.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800BC700 (-_Init@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CChannelContext * const,float>>>>>::_Reallocate_exactly(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 result; // rax

  v4 = (a1[1] - *a1) >> 3;
  v5 = std::_Allocate<std::_Default_allocate_traits<1>>(a2, 8LL);
  v6 = (_QWORD *)*a1;
  v7 = v5;
  v8 = (_QWORD *)v5;
  v9 = 0LL;
  v10 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > (unsigned __int64)a1[1] )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      ++v9;
      *v8++ = *v6++;
    }
    while ( v9 != v10 );
    v6 = (_QWORD *)*a1;
  }
  if ( v6 )
    std::_Deallocate(v6, (a1[2] - (__int64)v6) >> 3, 8uLL);
  *a1 = v7;
  a1[1] = v7 + 8 * v4;
  result = v7 + 8 * a2;
  a1[2] = result;
  return result;
}

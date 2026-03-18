/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@@Z @ 0x1800BC78C
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800BC700 (-_Init@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x18016BCC4 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVIRende.c)
 */

void **__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CChannelContext * const,float>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        void ***a3)
{
  void **result; // rax
  void ***v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r11
  __int64 v10; // rsi
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  void ***i; // rcx
  unsigned __int64 j; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  void ***v20; // r8
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(void ****)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v16 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v17 = v16 + v7;
      if ( v16 + v7 < a2 )
        v17 = a2;
    }
    else
    {
      v17 = a2;
    }
    if ( v4 )
      std::_Deallocate(v4, v7, 8uLL);
    result = (void **)std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>>>>::_Buy(
                        a1,
                        v17);
    for ( i = *(void ****)a1; a2; --a2 )
    {
      result = *a3;
      *i++ = *a3;
    }
    goto LABEL_8;
  }
  v10 = 0LL;
  if ( a2 > v8 )
  {
    v11 = 0LL;
    v12 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4 + 7LL) >> 3;
    if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 8) )
      v12 = 0LL;
    if ( v12 )
    {
      if ( v12 >= 2 )
      {
        result = *a3;
        if ( v4 > a3 || &v4[v12 - 1] < a3 )
        {
          v15 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v11 += 2LL;
          while ( v11 != v15 );
          v18 = 8 * v15;
          memset64(v4, (unsigned __int64)result, v18 >> 3);
          v4 = (void ***)((char *)v4 + v18);
        }
      }
      while ( v11 != v12 )
      {
        result = *a3;
        ++v11;
        *v4++ = *a3;
      }
    }
    i = *(void ****)(a1 + 8);
    for ( j = a2 - v8; j; --j )
    {
      result = *a3;
      *i++ = *a3;
    }
LABEL_8:
    *(_QWORD *)(a1 + 8) = i;
    return result;
  }
  v19 = a2;
  v20 = &v4[v19];
  v21 = (v19 * 8) >> 3;
  if ( v4 > v20 )
    v21 = 0LL;
  if ( v21 )
  {
    if ( v21 >= 2 )
    {
      result = *a3;
      if ( v4 > a3 || &v4[v21 - 1] < a3 )
      {
        v22 = v21 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v10 += 2LL;
        while ( v10 != v22 );
        v23 = 8 * v22;
        memset64(v4, (unsigned __int64)result, v23 >> 3);
        v4 = (void ***)((char *)v4 + v23);
      }
    }
    while ( v10 != v21 )
    {
      result = *a3;
      ++v10;
      *v4++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v20;
  return result;
}

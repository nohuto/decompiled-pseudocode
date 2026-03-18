/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@@Z @ 0x1800D5598
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800D4B2C (-_Init@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uh.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x18016BCC4 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVIRende.c)
 */

void **__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        char *a3)
{
  void **result; // rax
  char *v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r11
  __int64 v10; // rsi
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  char *i; // rcx
  unsigned __int64 j; // rbx
  unsigned __int64 v15; // rbx
  char *v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(char **)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v22 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v23 = v22 + v7;
      if ( v22 + v7 < a2 )
        v23 = a2;
    }
    else
    {
      v23 = a2;
    }
    if ( v4 )
      std::_Deallocate(v4, v7, 8uLL);
    result = (void **)std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>>>>::_Buy(
                        a1,
                        v23);
    for ( i = *(char **)a1; a2; --a2 )
    {
      result = *(void ***)a3;
      *(_QWORD *)i = *(_QWORD *)a3;
      i += 8;
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
        result = *(void ***)a3;
        if ( v4 > a3 || &v4[8 * v12 - 8] < a3 )
        {
          v20 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v11 += 2LL;
          while ( v11 != v20 );
          v21 = 8 * v20;
          memset64(v4, (unsigned __int64)result, v21 >> 3);
          v4 += v21;
        }
      }
      while ( v11 != v12 )
      {
        result = *(void ***)a3;
        ++v11;
        *(_QWORD *)v4 = *(_QWORD *)a3;
        v4 += 8;
      }
    }
    i = *(char **)(a1 + 8);
    for ( j = a2 - v8; j; --j )
    {
      result = *(void ***)a3;
      *(_QWORD *)i = *(_QWORD *)a3;
      i += 8;
    }
LABEL_8:
    *(_QWORD *)(a1 + 8) = i;
    return result;
  }
  v15 = 8 * a2;
  v16 = &v4[v15];
  v17 = v15 >> 3;
  if ( v4 > v16 )
    v17 = 0LL;
  if ( v17 )
  {
    if ( v17 >= 2 )
    {
      result = *(void ***)a3;
      if ( v4 > a3 || &v4[8 * v17 - 8] < a3 )
      {
        v18 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v10 += 2LL;
        while ( v10 != v18 );
        v19 = 8 * v18;
        memset64(v4, (unsigned __int64)result, v19 >> 3);
        v4 += v19;
      }
    }
    while ( v10 != v17 )
    {
      result = *(void ***)a3;
      ++v10;
      *(_QWORD *)v4 = *(_QWORD *)a3;
      v4 += 8;
    }
  }
  *(_QWORD *)(a1 + 8) = v16;
  return result;
}

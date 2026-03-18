/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x18016BECC
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x18016BDE4 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x18016BCC4 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVIRende.c)
 */

char __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>>>::assign(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        const void ***a3)
{
  const void **v3; // rax
  char *v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r11
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  const void ***i; // rcx
  __int64 v13; // rsi
  __int64 v14; // r10
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 j; // rbx
  unsigned __int64 v19; // rbx
  char *v20; // r8
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  const void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = (char *)*a1;
  v7 = (__int64)(a1[2] - *a1) >> 3;
  v8 = (__int64)(a1[1] - *a1) >> 3;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v10 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v11 = v10 + v7;
      if ( v10 + v7 < a2 )
        v11 = a2;
    }
    else
    {
      v11 = a2;
    }
    if ( v4 )
      std::_Deallocate(v4, v7, 8uLL);
    LOBYTE(v3) = std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>>>>::_Buy(
                   a1,
                   v11);
    for ( i = (const void ***)*a1; a2; --a2 )
    {
      v3 = *a3;
      *i++ = *a3;
    }
LABEL_27:
    a1[1] = (unsigned __int64)i;
    return (char)v3;
  }
  v13 = 0LL;
  if ( a2 > v8 )
  {
    v14 = 0LL;
    v15 = (a1[1] - (unsigned __int64)v4 + 7) >> 3;
    if ( (unsigned __int64)v4 > a1[1] )
      v15 = 0LL;
    if ( v15 )
    {
      if ( v15 >= 2 )
      {
        v3 = *a3;
        if ( v4 > (char *)a3 || &v4[8 * v15 - 8] < (char *)a3 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v14 += 2LL;
          while ( v14 != v16 );
          v17 = 8 * v16;
          memset64(v4, (unsigned __int64)v3, v17 >> 3);
          v4 += v17;
        }
      }
      while ( v14 != v15 )
      {
        v3 = *a3;
        ++v14;
        *(_QWORD *)v4 = *a3;
        v4 += 8;
      }
    }
    i = (const void ***)a1[1];
    for ( j = a2 - v8; j; --j )
    {
      v3 = *a3;
      *i++ = *a3;
    }
    goto LABEL_27;
  }
  v19 = 8 * a2;
  v20 = &v4[v19];
  v21 = v19 >> 3;
  if ( v4 > v20 )
    v21 = 0LL;
  if ( v21 )
  {
    if ( v21 >= 2 )
    {
      v3 = *a3;
      if ( v4 > (char *)a3 || &v4[8 * v21 - 8] < (char *)a3 )
      {
        v22 = v21 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v13 += 2LL;
        while ( v13 != v22 );
        v23 = 8 * v22;
        memset64(v4, (unsigned __int64)v3, v23 >> 3);
        v4 += v23;
      }
    }
    while ( v13 != v21 )
    {
      v3 = *a3;
      ++v13;
      *(_QWORD *)v4 = *a3;
      v4 += 8;
    }
  }
  a1[1] = (unsigned __int64)v20;
  return (char)v3;
}

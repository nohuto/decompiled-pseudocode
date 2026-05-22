/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18000A554
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninit_alloc_fill_n1@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_KV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@0@PEAV10@_KAEBV10@AEAV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@0@U?$integral_constant@_N$0A@@0@@Z @ 0x18000A8CC (--$_Uninit_alloc_fill_n1@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  size_t v12; // rdi
  void *v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 *v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // r8
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx

  v3 = *(unsigned __int64 **)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v8 = a2;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v9 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v10 = v9 + v7;
      if ( v9 + v7 < v8 )
        v10 = v8;
    }
    else
    {
      v10 = v8;
    }
    if ( !v3 )
      goto LABEL_15;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v7 < 0x1000 )
      {
LABEL_14:
        operator delete(v3);
LABEL_15:
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        if ( v10 )
        {
          if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
            std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
          v12 = 8 * v10;
          if ( v12 < 0x1000 )
          {
            v14 = operator new(v12);
          }
          else
          {
            if ( v12 + 39 < v12 )
              std::_Default_allocate_traits<1>::_Fail();
            v13 = operator new(v12 + 39);
            v14 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *(v14 - 1) = v13;
          }
          *(_QWORD *)a1 = v14;
          *(_QWORD *)(a1 + 8) = v14;
          *(_QWORD *)(a1 + 16) = v12 + *(_QWORD *)a1;
        }
        v15 = *(unsigned __int64 **)a1;
LABEL_38:
        *(_QWORD *)(a1 + 8) = std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>> *,unsigned __int64,std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>>(
                                v15,
                                v8,
                                a3);
        return;
      }
      if ( ((unsigned __int8)v3 & 0x1F) == 0 )
      {
        v11 = *(v3 - 1);
        if ( v11 < (unsigned __int64)v3 && (unsigned __int64)v3 - v11 - 8 <= 0x1F )
        {
          v3 = (unsigned __int64 *)*(v3 - 1);
          goto LABEL_14;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v7, v9);
    __debugbreak();
  }
  v16 = 0LL;
  if ( a2 > v6 )
  {
    v17 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3 + 7LL) >> 3;
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 8) )
      v17 = 0LL;
    if ( v17 )
    {
      if ( v17 >= 2 && (v3 > a3 || &v3[v17 - 1] < a3) )
      {
        v18 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v16 += 2LL;
        while ( v16 != v18 );
        v19 = 8 * v18;
        memset64(v3, *a3, v19 >> 3);
        v3 = (unsigned __int64 *)((char *)v3 + v19);
      }
      while ( v16 != v17 )
      {
        ++v16;
        *v3++ = *a3;
      }
    }
    v15 = *(unsigned __int64 **)(a1 + 8);
    v8 -= v6;
    goto LABEL_38;
  }
  v20 = &v3[a2];
  v21 = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v3 > v20 )
    v21 = 0LL;
  if ( v21 )
  {
    if ( v21 >= 2 && (v3 > a3 || &v3[v21 - 1] < a3) )
    {
      v22 = v21 & 0xFFFFFFFFFFFFFFFEuLL;
      do
        v16 += 2LL;
      while ( v16 != v22 );
      v23 = 8 * v22;
      memset64(v3, *a3, v23 >> 3);
      v3 = (unsigned __int64 *)((char *)v3 + v23);
    }
    while ( v16 != v21 )
    {
      ++v16;
      *v3++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v20;
}

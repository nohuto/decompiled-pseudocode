/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000A7B8
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninit_alloc_fill_n1@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_KU?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@0@PEAV10@_KAEBV10@AEAU?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@@0@U?$integral_constant@_N$0A@@0@@Z @ 0x18000AAB0 (--$_Uninit_alloc_fill_n1@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>>>::assign(
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
  void *v12; // rax
  unsigned __int64 *v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r10
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx

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
          v12 = std::_Allocate(v10, 8uLL);
          *(_QWORD *)a1 = v12;
          *(_QWORD *)(a1 + 8) = v12;
          *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 8 * v10;
        }
        v13 = *(unsigned __int64 **)a1;
LABEL_34:
        *(_QWORD *)(a1 + 8) = std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>(
                                v13,
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
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
  }
  v14 = 0LL;
  if ( a2 > v6 )
  {
    v15 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3 + 7LL) >> 3;
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 8) )
      v15 = 0LL;
    if ( v15 )
    {
      if ( v15 >= 2 && (v3 > a3 || &v3[v15 - 1] < a3) )
      {
        v16 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v14 += 2LL;
        while ( v14 != v16 );
        v17 = 8 * v16;
        memset64(v3, *a3, v17 >> 3);
        v3 = (unsigned __int64 *)((char *)v3 + v17);
      }
      while ( v14 != v15 )
      {
        ++v14;
        *v3++ = *a3;
      }
    }
    v13 = *(unsigned __int64 **)(a1 + 8);
    v8 -= v6;
    goto LABEL_34;
  }
  v18 = &v3[a2];
  v19 = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v3 > v18 )
    v19 = 0LL;
  if ( v19 )
  {
    if ( v19 >= 2 && (v3 > a3 || &v3[v19 - 1] < a3) )
    {
      v20 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      do
        v14 += 2LL;
      while ( v14 != v20 );
      v21 = 8 * v20;
      memset64(v3, *a3, v21 >> 3);
      v3 = (unsigned __int64 *)((char *)v3 + v21);
    }
    while ( v14 != v19 )
    {
      ++v14;
      *v3++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v18;
}

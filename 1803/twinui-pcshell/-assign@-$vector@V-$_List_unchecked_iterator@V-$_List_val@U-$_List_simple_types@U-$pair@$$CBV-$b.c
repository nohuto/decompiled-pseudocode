/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@Z @ 0x180072D48
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180072278 (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ??$_Uninit_alloc_fill_n1@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_KV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@0@PEAV10@_KAEBV10@AEAV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@@0@U?$integral_constant@_N$0A@@0@@Z @ 0x18009133C (--$_Uninit_alloc_fill_n1@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x1801CFA28 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUComp.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r11
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 *v17; // r10
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx

  v3 = *(unsigned __int64 **)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v6 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v14 = v6 >> 1;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) )
    {
      v15 = v14 + v6;
      if ( v14 + v6 < a2 )
        v15 = a2;
    }
    else
    {
      v15 = a2;
    }
    if ( v3 )
      std::_Deallocate(v3, v6, 8uLL);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>::_Buy(
      a1,
      v15);
    v13 = *(unsigned __int64 **)a1;
    goto LABEL_14;
  }
  v9 = 0LL;
  if ( a2 > v7 )
  {
    v10 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3 + 7LL) >> 3;
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 8) )
      v10 = 0LL;
    if ( v10 )
    {
      if ( v10 >= 2 && (v3 > a3 || &v3[v10 - 1] < a3) )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v9 += 2LL;
        while ( v9 != v11 );
        v12 = 8 * v11;
        memset64(v3, *a3, v12 >> 3);
        v3 = (unsigned __int64 *)((char *)v3 + v12);
      }
      while ( v9 != v10 )
      {
        ++v9;
        *v3++ = *a3;
      }
    }
    v13 = *(unsigned __int64 **)(a1 + 8);
    a2 -= v7;
LABEL_14:
    *(_QWORD *)(a1 + 8) = std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>> *,unsigned __int64,std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>>>>(
                            v13,
                            a2,
                            a3);
    return;
  }
  v16 = a2;
  v17 = &v3[v16];
  v18 = (v16 * 8) >> 3;
  if ( v3 > v17 )
    v18 = 0LL;
  if ( v18 )
  {
    if ( v18 >= 2 && (v3 > a3 || &v3[v18 - 1] < a3) )
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
      do
        v9 += 2LL;
      while ( v9 != v19 );
      v20 = 8 * v19;
      memset64(v3, *a3, v20 >> 3);
      v3 = (unsigned __int64 *)((char *)v3 + v20);
    }
    while ( v9 != v18 )
    {
      ++v9;
      *v3++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v17;
}

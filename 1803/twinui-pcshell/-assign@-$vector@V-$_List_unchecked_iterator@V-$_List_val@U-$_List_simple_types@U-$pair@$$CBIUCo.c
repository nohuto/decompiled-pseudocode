/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x18025F7E0
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x18025F548 (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninit_alloc_fill_n1@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_KV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@0@PEAV10@_KAEBV10@AEAV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@@0@U?$integral_constant@_N$0A@@0@@Z @ 0x1801C7694 (--$_Uninit_alloc_fill_n1@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simpl_ea_1801C7694.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x1801CFA28 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUComp.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>::assign(
        char **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  char *v3; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r11
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  char *v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  char *v17; // r10
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx

  v3 = *a1;
  v6 = (a1[2] - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( a2 > v6 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v9 = v6 >> 1;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) )
    {
      v10 = v9 + v6;
      if ( v9 + v6 < a2 )
        v10 = a2;
    }
    else
    {
      v10 = a2;
    }
    if ( v3 )
      std::_Deallocate(v3, v6, 8uLL);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>::_Buy(
      a1,
      v10);
    v11 = *a1;
LABEL_24:
    a1[1] = (char *)std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>> *,unsigned __int64,std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>>(
                      v11,
                      a2,
                      a3);
    return;
  }
  v12 = 0LL;
  if ( a2 > v7 )
  {
    v13 = (unsigned __int64)(a1[1] - v3 + 7) >> 3;
    if ( v3 > a1[1] )
      v13 = 0LL;
    if ( v13 )
    {
      if ( v13 >= 2 && (v3 > (char *)a3 || &v3[8 * v13 - 8] < (char *)a3) )
      {
        v14 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v12 += 2LL;
        while ( v12 != v14 );
        v15 = 8 * v14;
        memset64(v3, *a3, v15 >> 3);
        v3 += v15;
      }
      while ( v12 != v13 )
      {
        ++v12;
        *(_QWORD *)v3 = *a3;
        v3 += 8;
      }
    }
    v11 = a1[1];
    a2 -= v7;
    goto LABEL_24;
  }
  v16 = 8 * a2;
  v17 = &v3[v16];
  v18 = v16 >> 3;
  if ( v3 > v17 )
    v18 = 0LL;
  if ( v18 )
  {
    if ( v18 >= 2 && (v3 > (char *)a3 || &v3[8 * v18 - 8] < (char *)a3) )
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
      do
        v12 += 2LL;
      while ( v12 != v19 );
      v20 = 8 * v19;
      memset64(v3, *a3, v20 >> 3);
      v3 += v20;
    }
    while ( v12 != v18 )
    {
      ++v12;
      *(_QWORD *)v3 = *a3;
      v3 += 8;
    }
  }
  a1[1] = v17;
}

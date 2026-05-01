/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEBA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@2@AEBI@Z @ 0x1800FA7E4
 * Callers:
 *     ?count@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800FA89C (-count@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1800729F8 (-_End@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18008DAB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 v5; // rbp
  __int64 i; // r10
  __int64 v7; // r14
  __int64 **v8; // rax
  __int64 *v9; // r10
  int *v10; // r11
  int v11; // esi
  _QWORD *v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1[6] & std::_Hash_bytes(a3, 4uLL);
  for ( i = *(_QWORD *)(a1[3] + 16 * v5); ; i = *v9 )
  {
    v7 = i;
    v8 = (__int64 **)std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_End(
                       (__int64)a1,
                       &v17,
                       v5);
    if ( v9 == *v8 )
      break;
    v11 = *v10;
    if ( *((_DWORD *)v9 + 4) == *v10 )
    {
      do
        v12 = std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_End(
                (__int64)a1,
                &v17,
                v5);
      while ( v13 != *v12 && v11 == *(_DWORD *)(v13 + 16) );
      if ( v7 != v13 )
      {
        *a2 = v14;
        a2[1] = v13;
        return a2;
      }
      break;
    }
  }
  v15 = a1[1];
  *a2 = v15;
  a2[1] = v15;
  return a2;
}

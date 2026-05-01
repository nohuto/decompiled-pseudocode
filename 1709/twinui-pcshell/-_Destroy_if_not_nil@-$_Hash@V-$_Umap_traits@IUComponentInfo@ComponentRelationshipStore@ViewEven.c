/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1801C8EE8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo____0___::_Insert_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo__________::_1_::catch$116 @ 0x1801F77B0 (_std--_Hash_std--_Umap_traits_unsigned_int_Windows--Internal--OneCore--ViewEventHandlers--Compon.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1801C75E8 (-erase@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        _QWORD **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::erase(
           a1 + 8,
           &v3,
           a2);
}

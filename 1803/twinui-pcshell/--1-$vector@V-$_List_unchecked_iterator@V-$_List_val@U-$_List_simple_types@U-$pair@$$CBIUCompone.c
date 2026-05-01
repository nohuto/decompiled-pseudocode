/*
 * XREFs of ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18025CF30
 * Callers:
 *     _std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64____::_1_::catch$57 @ 0x18014A5D1 (_std--vector_unsigned_short_____ptr64_std--allocator_unsigned_short_____ptr64___--vector_unsigne.c)
 *     ??1?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x18014A81C (--1-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@XZ.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18014A854 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?CompareStringVector@SelectionData@StartLayout@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x18014AC14 (-CompareStringVector@SelectionData@StartLayout@@AEAAXV-$vector@PEAGV-$allocator@PEAG@std@@@std@@.c)
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$20 @ 0x1801913F3 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$20.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo____0___::_Hash_std::_Umap_traits_unsigned_int_Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo____0____::_1_::dtor$1 @ 0x1801C7C4B (_std--_Hash_std--_Umap_traits_unsigned_int_Windows--Internal--OneCore--ViewEventHan_ea_1801C7C4B.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$28 @ 0x1801C7DE7 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801C7DE7.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$39 @ 0x18025CDEB (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$39.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

/*
 * XREFs of ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18008C630
 * Callers:
 *     _StartLayout::SelectionData::GetSelectionScore_::_1_::dtor$0 @ 0x18019BBC3 (_StartLayout--SelectionData--GetSelectionScore_--_1_--dtor$0.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$50 @ 0x18019BC8F (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$50.c)
 *     __lambda_4e68ad2abbd0bb666338069fbee19963_::operator()_::_1_::dtor$1 @ 0x18019BCBB (__lambda_4e68ad2abbd0bb666338069fbee19963_--operator()_--_1_--dtor$1.c)
 *     _std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64____::_1_::dtor$0 @ 0x18019BE17 (_std--vector_unsigned_short_____ptr64_std--allocator_unsigned_short_____ptr64___--vector_unsigne.c)
 *     _std::_Wrap_alloc_std::allocator_ParsedPenWorkspaceLayout___::construct_ParsedPenWorkspaceLayout_ParsedPenWorkspaceLayout__::_1_::dtor$7 @ 0x18019BF5A (_std--_Wrap_alloc_std--allocator_ParsedPenWorkspaceLayout___--construct_ParsedPenWo_ea_18019BF5A.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$54 @ 0x18019D1CA (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$54.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$13 @ 0x18019DF16 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_18019DF16.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$48 @ 0x18019DF46 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_18019DF46.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$83 @ 0x18019DF79 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_18019DF79.c)
 *     _XamlTaskbarManager_CreateInstance_::_1_::dtor$21 @ 0x1801A003D (_XamlTaskbarManager_CreateInstance_--_1_--dtor$21.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>>>(
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

/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@2@_K@Z @ 0x1800FDFCC
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo__std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_______::_Buynode0_::_1_::catch$14 @ 0x18019EC9A (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_int_const__Windows--Internal--OneCore.c)
 *     _std::_List_buy_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo__std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_____::_Buynode_unsigned_int_&___ptr64_Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo__::_1_::catch$23 @ 0x1801A5360 (_std--_List_buy_std--pair_unsigned_int_const__Windows--Internal--OneCore--ViewEventHandlers--Com.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>,void *>>>::deallocate(
        __int64 a1,
        char *a2)
{
  std::_Deallocate(a2, 1uLL, 0x60uLL);
}

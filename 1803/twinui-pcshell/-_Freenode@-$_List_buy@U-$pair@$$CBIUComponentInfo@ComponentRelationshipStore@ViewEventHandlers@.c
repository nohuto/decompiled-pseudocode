/*
 * XREFs of ?_Freenode@?$_List_buy@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@2@@Z @ 0x180072AFC
 * Callers:
 *     ?erase@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x180072ABC (-erase@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 *     ?clear@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1801D0DD0 (-clear@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 * Callees:
 *     ??1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x180072C2C (--1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall std::_List_buy<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::_Freenode(
        __int64 a1,
        __int64 a2)
{
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo((Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)(a2 + 24));
  std::_Deallocate((void *)a2, 1uLL, 0x68uLL);
}

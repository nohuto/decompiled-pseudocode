/*
 * XREFs of ??1?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x180128BF0
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$47 @ 0x1801EE14C (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801EE14C.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$82 @ 0x1801EE17F (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801EE17F.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x180128D2C (-clear@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 */

void __fastcall std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::~list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>(
        void **a1)
{
  std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::clear(a1);
  operator delete(*a1);
}

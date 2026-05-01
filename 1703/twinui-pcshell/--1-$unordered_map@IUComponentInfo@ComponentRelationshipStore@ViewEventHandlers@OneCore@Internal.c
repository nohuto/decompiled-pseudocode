/*
 * XREFs of ??1?$unordered_map@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$hash@I@std@@U?$equal_to@I@8@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@@std@@QEAA@XZ @ 0x1800ED9DC
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$2 @ 0x18019DF56 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_18019DF56.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?clear@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800FDE2C (-clear@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 */

void __fastcall std::unordered_map<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>::~unordered_map<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v2) >> 3, 8uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::clear(a1 + 8);
  std::_Deallocate(*(char **)(a1 + 8), 1uLL, 0x60uLL);
}

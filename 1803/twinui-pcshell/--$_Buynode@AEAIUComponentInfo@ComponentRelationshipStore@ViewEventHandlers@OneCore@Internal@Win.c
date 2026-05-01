/*
 * XREFs of ??$_Buynode@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_List_buy@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@1@PEAU21@0AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x180072B30
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x18002F190 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IPEAUIInspectable@@@Z @ 0x180030570 (-RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ??$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1800FA744 (--$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@2@PEAU32@0@Z @ 0x180072BE0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUComponentInfo@ComponentRelationshipSt.c)
 */

__int64 __fastcall std::_List_buy<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::_Buynode<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 result; // rax
  _QWORD *v7; // r8

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>::_Buynode0(a1);
  try
  {
    *(_DWORD *)(result + 16) = *a4;
    *(_QWORD *)(result + 24) = *(_QWORD *)a5;
    *(_DWORD *)(result + 32) = *(_DWORD *)(a5 + 8);
    *(_DWORD *)(result + 36) = *(_DWORD *)(a5 + 12);
    v7 = (_QWORD *)(a5 + 16);
    *(_QWORD *)(result + 40) = 0LL;
    if ( result + 40 != a5 + 16 )
    {
      *(_QWORD *)(result + 40) = *v7;
      *v7 = 0LL;
    }
    *(_DWORD *)(result + 56) = 0;
    *(_DWORD *)(result + 60) = *(_DWORD *)(a5 + 36);
    *(_DWORD *)(result + 64) = *(_DWORD *)(a5 + 40);
    *(_QWORD *)(result + 72) = *(_QWORD *)(a5 + 48);
    *(_QWORD *)(a5 + 48) = 0LL;
    *(_QWORD *)(result + 80) = *(_QWORD *)(a5 + 56);
    *(_QWORD *)(a5 + 56) = 0LL;
    *(_QWORD *)(result + 88) = *(_QWORD *)(a5 + 64);
    *(_QWORD *)(a5 + 64) = 0LL;
    *(_BYTE *)(result + 96) = *(_BYTE *)(a5 + 72) != 0;
    *(_QWORD *)(result + 48) = *(_QWORD *)(a5 + 24);
  }
  catch ( ... )
  {
    std::_Deallocate((void *)result, 1uLL, 0x68uLL);
    throw;
  }
  return result;
}

/*
 * XREFs of ??$_Buynode@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_List_buy@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@1@PEAU21@0AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x18017C49C
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1801789F0 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJI@Z @ 0x18017931C (-PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@2@PEAU32@0@Z @ 0x180100B90 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUComponentInfo@ComponentRelationshipSt.c)
 */

char *__fastcall std::_List_buy<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::_Buynode<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
        __int64 a1,
        char *a2,
        char *a3,
        _DWORD *a4,
        __int64 a5)
{
  char *result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r9

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    if ( result != (char *)-16LL )
    {
      *((_DWORD *)result + 4) = *a4;
      v7 = a5;
      *((_QWORD *)result + 3) = *(_QWORD *)a5;
      *((_DWORD *)result + 8) = *(_DWORD *)(a5 + 8);
      *((_DWORD *)result + 9) = *(_DWORD *)(a5 + 12);
      v8 = (_QWORD *)(a5 + 16);
      *((_QWORD *)result + 5) = 0LL;
      if ( result + 40 != (char *)(a5 + 16) )
      {
        *((_QWORD *)result + 5) = *v8;
        *v8 = 0LL;
      }
      *((_DWORD *)result + 14) = 0;
      *((_DWORD *)result + 15) = *(_DWORD *)(a5 + 36);
      *((_QWORD *)result + 8) = 0LL;
      *((_QWORD *)result + 9) = 0LL;
      *((_QWORD *)result + 10) = *(_QWORD *)(a5 + 56);
      *(_QWORD *)(a5 + 56) = 0LL;
      result[88] = *(_BYTE *)(a5 + 64) != 0;
      *((_QWORD *)result + 6) = *(_QWORD *)(a5 + 24);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>,void *>>>::deallocate(
      v7,
      result);
    throw;
  }
  return result;
}

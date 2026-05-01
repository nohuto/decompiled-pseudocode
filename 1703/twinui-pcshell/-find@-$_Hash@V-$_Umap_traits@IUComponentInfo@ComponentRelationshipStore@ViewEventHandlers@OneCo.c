/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18017A2A0
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x180178DF0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1801790D0 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 *     ?PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJI@Z @ 0x18017931C (-PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801795C0 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?GetHostProcessIdForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAI@Z @ 0x180179690 (-GetHostProcessIdForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     ?GetViewForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180179710 (-GetViewForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?GetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentStateFlags@2345@@Z @ 0x1801797A0 (-GetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Interna.c)
 *     ?GetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x180179820 (-GetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEven.c)
 *     ?GetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAE@Z @ 0x1801798A0 (-GetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@.c)
 *     ?SetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x180179930 (-SetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEven.c)
 *     ?SetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4CRSComponentStateFlags@2345@@Z @ 0x1801799A0 (-SetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Interna.c)
 *     ?SetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIE@Z @ 0x180179A10 (-SetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@.c)
 *     ?GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180179BA0 (-GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 *     ?SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x180179E10 (-SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
        _QWORD *a1,
        __int64 **a2,
        _DWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // r10
  __int64 *j; // rax
  __int64 v13; // rcx

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v4 = 0x100000001B3LL * (v7 ^ v4);
  }
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = (__int64 *)a1[1];
  v11 = 2 * v8;
  for ( j = *(__int64 **)(v9 + 16 * v8); ; j = (__int64 *)*j )
  {
    v13 = *(__int64 **)(v9 + 8 * v11) == v10 ? (__int64)v10 : **(_QWORD **)(v9 + 8 * v11 + 8);
    if ( j == (__int64 *)v13 )
      break;
    if ( *((_DWORD *)j + 4) == *a3 )
    {
      *a2 = j;
      return a2;
    }
  }
  *a2 = v10;
  return a2;
}

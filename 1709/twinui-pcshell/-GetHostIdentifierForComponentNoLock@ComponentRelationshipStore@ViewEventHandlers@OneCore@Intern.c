/*
 * XREFs of ?GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801C5C60
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C50E0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C5310 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801C5D20 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponentNoLock(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        int a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *a3,
        struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *a4)
{
  __int64 v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    (char *)this + 160,
    &v9,
    &v10);
  v7 = v9;
  if ( v9 != *((_QWORD *)this + 21) )
  {
    *(_QWORD *)a4 = *(_QWORD *)(v9 + 24);
    *((_DWORD *)a4 + 2) = *(_DWORD *)(v7 + 32);
    goto LABEL_4;
  }
  *(_QWORD *)a4 = 0LL;
  *((_DWORD *)a4 + 2) = 0;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    (char *)this + 224,
    &v9,
    &v10);
  v7 = v9;
  if ( v9 != *((_QWORD *)this + 29) )
  {
LABEL_4:
    if ( a3 )
      *(_DWORD *)a3 = *(_DWORD *)(v7 + 60);
    return 0LL;
  }
  if ( a3 )
    *(_DWORD *)a3 = 0;
  return 0LL;
}

/*
 * XREFs of ?SetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4CRSComponentStateFlags@2345@@Z @ 0x18002FB40
 * Callers:
 *     ?SetComponentStateFlagsForComponent@ViewEventDispatcher@@UEAAJIW4CRSComponentStateFlags@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x180034270 (-SetComponentStateFlagsForComponent@ViewEventDispatcher@@UEAAJIW4CRSComponentStateFlags@ViewEven.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetComponentStateFlagsForComponent(
        RTL_SRWLOCK *a1,
        int a2,
        int a3)
{
  RTL_SRWLOCK *v3; // rdi
  unsigned int v6; // ebx
  _DWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = a1 + 9;
  AcquireSRWLockShared(a1 + 9);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &a1[19],
    &v8,
    &v9);
  if ( v8 == a1[20].Ptr )
  {
    v6 = -2140667901;
  }
  else
  {
    v8[14] = a3;
    v6 = 0;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v6;
}

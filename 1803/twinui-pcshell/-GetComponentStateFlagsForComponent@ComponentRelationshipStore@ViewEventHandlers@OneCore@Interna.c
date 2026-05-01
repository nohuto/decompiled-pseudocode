/*
 * XREFs of ?GetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentStateFlags@2345@@Z @ 0x18002FBC0
 * Callers:
 *     ?GetComponentStateFlagsForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentStateFlags@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x180034560 (-GetComponentStateFlagsForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentStateFlags@ViewE.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentStateFlagsForComponent(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentStateFlags *a3)
{
  RTL_SRWLOCK *v3; // rdi
  unsigned int v6; // ebx
  _DWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  *(_DWORD *)a3 = 0;
  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[19],
    &v8,
    &v9);
  if ( v8 == this[20].Ptr )
  {
    v6 = -2140667901;
  }
  else
  {
    v6 = 0;
    *(_DWORD *)a3 = v8[14];
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v6;
}

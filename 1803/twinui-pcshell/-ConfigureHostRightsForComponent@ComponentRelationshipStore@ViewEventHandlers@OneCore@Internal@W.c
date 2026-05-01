/*
 * XREFs of ?ConfigureHostRightsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4HostRightFlags@Core@UI@5@0@Z @ 0x180030460
 * Callers:
 *     ?ConfigureHostRightsForComponent@ViewEventDispatcher@@UEAAJIW4HostRightFlags@Core@UI@Windows@@0@Z @ 0x180034170 (-ConfigureHostRightsForComponent@ViewEventDispatcher@@UEAAJIW4HostRightFlags@Core@UI@Windows@@0@.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ConfigureHostRightsForComponent(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        int a4)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int v8; // ebx
  _DWORD *v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = a1 + 9;
  AcquireSRWLockShared(a1 + 9);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &a1[19],
    &v10,
    &v11);
  if ( v10 == a1[20].Ptr )
  {
    v8 = -2140667901;
  }
  else
  {
    v10[16] = a4 & a3 | v10[16] & ~a3;
    v8 = 0;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v8;
}

/*
 * XREFs of ?SetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIE@Z @ 0x1800304F0
 * Callers:
 *     ?SetIsModalDialogEnabled@ViewEventDispatcher@@UEAAJIE@Z @ 0x180034120 (-SetIsModalDialogEnabled@ViewEventDispatcher@@UEAAJIE@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetIsModalDialogEnabled(
        RTL_SRWLOCK *this,
        int a2,
        char a3)
{
  RTL_SRWLOCK *v3; // rdi
  _BYTE *v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[19],
    &v7,
    &v8);
  if ( v7 == this[20].Ptr )
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 2154299395LL;
  }
  else
  {
    v7[96] = a3 != 0;
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 0LL;
  }
}

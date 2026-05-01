/*
 * XREFs of ?GetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAE@Z @ 0x1801C6040
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetIsModalDialogEnabled(
        RTL_SRWLOCK *this,
        int a2,
        bool *a3)
{
  RTL_SRWLOCK *v3; // rdi
  _BYTE *v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = this + 10;
  AcquireSRWLockShared(this + 10);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[20],
    &v7,
    &v8);
  if ( v7 == this[21].Ptr )
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 2154299395LL;
  }
  else
  {
    *a3 = v7[96] != 0;
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 0LL;
  }
}

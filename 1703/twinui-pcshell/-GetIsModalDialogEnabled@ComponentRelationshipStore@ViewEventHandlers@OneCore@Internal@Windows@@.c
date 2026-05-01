/*
 * XREFs of ?GetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAE@Z @ 0x1801798A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18017A2A0 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetIsModalDialogEnabled(
        RTL_SRWLOCK *this,
        int a2,
        bool *a3)
{
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF
  _BYTE *v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 8, &SRWLock);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[18],
    &v9,
    &v8);
  if ( v9 == this[19].Ptr )
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 2147943568LL;
  }
  else
  {
    v5 = SRWLock;
    *a3 = v9[88] != 0;
    if ( v5 )
      ReleaseSRWLockShared(v5);
    return 0LL;
  }
}

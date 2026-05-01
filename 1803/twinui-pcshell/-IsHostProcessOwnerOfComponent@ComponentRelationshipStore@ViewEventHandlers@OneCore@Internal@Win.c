/*
 * XREFs of ?IsHostProcessOwnerOfComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIIPEAE@Z @ 0x18002FC50
 * Callers:
 *     ?IsHostProcessOwnerOfComponent@ViewEventDispatcher@@UEAAJIIPEAE@Z @ 0x180034220 (-IsHostProcessOwnerOfComponent@ViewEventDispatcher@@UEAAJIIPEAE@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 *     ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E50 (--1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsHostProcessOwnerOfComponent(
        RTL_SRWLOCK *this,
        int a2,
        int a3,
        unsigned __int8 *a4)
{
  RTL_SRWLOCK *v4; // rbx
  int v8; // ebx
  __int64 result; // rax
  _DWORD *v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = this + 9;
  *a4 = 0;
  v11 = a3;
  AcquireSRWLockShared(this + 9);
  v12 = v4;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[19],
    &v10,
    &v11);
  if ( v10 == this[20].Ptr )
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return 0LL;
  }
  else
  {
    v8 = v10[9];
    Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared((Microsoft::WRL::Wrappers::Details::SyncLockShared *)&v12);
    result = 0LL;
    if ( a2 == v8 )
      *a4 = 1;
  }
  return result;
}

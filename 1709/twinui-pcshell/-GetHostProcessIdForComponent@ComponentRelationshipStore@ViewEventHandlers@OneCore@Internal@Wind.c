/*
 * XREFs of ?GetHostProcessIdForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAI@Z @ 0x1801C5DD0
 * Callers:
 *     ?IsHostProcessOwnerOfComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIIPEAE@Z @ 0x1801C5B50 (-IsHostProcessOwnerOfComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostProcessIdForComponent(
        RTL_SRWLOCK *this,
        int a2,
        unsigned int *a3)
{
  RTL_SRWLOCK *v3; // rdi
  unsigned int v6; // ebx
  _DWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  *a3 = 0;
  v3 = this + 10;
  AcquireSRWLockShared(this + 10);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[20],
    &v8,
    &v9);
  if ( v8 == this[21].Ptr )
  {
    v6 = -2140667901;
  }
  else
  {
    v6 = 0;
    *a3 = v8[9];
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v6;
}

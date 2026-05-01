/*
 * XREFs of ?GetViewForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180030100
 * Callers:
 *     ?GetViewForComponent@ViewEventDispatcher@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180034520 (-GetViewForComponent@ViewEventDispatcher@@UEAAJIPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewForComponent(
        RTL_SRWLOCK *this,
        int a2,
        struct IInspectable **a3)
{
  RTL_SRWLOCK *v3; // rbp
  unsigned int v7; // esi
  volatile signed __int64 **v8; // rbx
  volatile signed __int64 *v9; // rdx
  unsigned int (__fastcall *v10)(__int64); // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  volatile signed __int64 **v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  v7 = 0;
  v15 = a2;
  *a3 = 0LL;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[19],
    &v14,
    &v15);
  v8 = v14;
  if ( v14 == this[20].Ptr )
  {
    v7 = -2140667901;
    goto LABEL_13;
  }
  v9 = v14[5];
  if ( !v9 )
  {
LABEL_11:
    *a3 = (struct IInspectable *)v8[5];
    goto LABEL_13;
  }
  v10 = *(unsigned int (__fastcall **)(__int64))(*v9 + 8);
  if ( v10 != Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::AddRef )
  {
    v10((__int64)v14[5]);
    goto LABEL_11;
  }
  v11 = *((_QWORD *)v9 + 69);
  while ( v11 >= 0 )
  {
    if ( (_DWORD)v11 == 0x7FFFFFFF )
      goto LABEL_11;
    v12 = v11;
    v11 = _InterlockedCompareExchange64(v9 + 69, v11 + 1, v11);
    if ( v12 == v11 )
    {
      *a3 = (struct IInspectable *)v8[5];
      goto LABEL_13;
    }
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v11 + 16));
  *a3 = (struct IInspectable *)v8[5];
LABEL_13:
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v7;
}

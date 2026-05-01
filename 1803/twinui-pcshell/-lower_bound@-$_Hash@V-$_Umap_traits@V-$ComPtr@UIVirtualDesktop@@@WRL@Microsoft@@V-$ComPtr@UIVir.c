/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18025FF74
 * Callers:
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18025DE44 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18025F170 (-VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@_K@Z @ 0x1800FA60C (-_End@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventH_ea_1800FA60C.c)
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        struct IUnknown **a3)
{
  struct IUnknown *v6; // rbx
  int v7; // eax
  __int64 v8; // r14
  __int64 *i; // rbx
  struct IUnknown *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *a3 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v15);
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))(*a3)->lpVtbl->QueryInterface)(
           *a3,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v15);
    if ( v7 >= 0 )
    {
      v6 = v15;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v15);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        21LL,
        (__int64)"internal\\shell\\private\\inc\\WrlStlInterop.h",
        (const char *)(unsigned int)v7);
      v6 = *a3;
      Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)&v15);
    }
  }
  else
  {
    v6 = 0LL;
  }
  v8 = (unsigned __int64)v6 & a1[6];
  for ( i = *(__int64 **)(a1[3] + 16 * v8); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)*std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_End(
                            (__int64)a1,
                            &v15,
                            v8) )
    {
      *a2 = (__int64 *)a1[1];
      return a2;
    }
    v10 = (struct IUnknown *)i[2];
    if ( !v10 && !*a3 || (unsigned int)SHIsSameObject(v10, *a3) != 0 )
      break;
  }
  if ( (*a3 || i[2]) && (unsigned int)SHIsSameObject(*a3, (struct IUnknown *)i[2]) == 0 )
    i = (__int64 *)a1[1];
  *a2 = i;
  return a2;
}

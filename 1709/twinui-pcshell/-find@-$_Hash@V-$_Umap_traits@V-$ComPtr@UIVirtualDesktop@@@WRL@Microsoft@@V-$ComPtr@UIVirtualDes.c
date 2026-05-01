/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x1801B5D6C
 * Callers:
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B5478 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1801B5800 (-VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ??R?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@QEBA_NAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x18014BEA0 (--R-$_Uhash_compare@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U-$hash@V-$ComPtr@UIVirtualDeskt.c)
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEBA_KAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x1801B622C (-_Hashval@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtua.c)
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::find(
        __int64 a1,
        __int64 **a2,
        __int64 (__fastcall ****a3)(_QWORD, GUID *, __int64 *))
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 *i; // rbx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx

  v6 = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Hashval(
         a1,
         a3);
  v7 = 2 * v6;
  for ( i = *(__int64 **)(*(_QWORD *)(a1 + 24) + 16 * v6); ; i = (__int64 *)*i )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(__int64 **)(a1 + 8);
    if ( *(__int64 **)(v9 + 8 * v7) != v10 )
      v10 = **(__int64 ***)(v9 + 8 * v7 + 8);
    if ( i == v10 )
    {
      *a2 = *(__int64 **)(a1 + 8);
      return a2;
    }
    if ( !std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()(
            v9,
            (int (__fastcall ****)(_QWORD, GUID *, __int64 *))i + 2,
            a3) )
      break;
  }
  if ( std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()(
         v11,
         (int (__fastcall ****)(_QWORD, GUID *, __int64 *))a3,
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))i + 2) )
  {
    i = *(__int64 **)(a1 + 8);
  }
  *a2 = i;
  return a2;
}

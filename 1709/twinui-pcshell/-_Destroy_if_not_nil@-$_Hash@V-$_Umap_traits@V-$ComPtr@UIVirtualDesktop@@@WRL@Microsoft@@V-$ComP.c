/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@@Z @ 0x18014C404
 * Callers:
 *     _std::_Hash_std::_Umap_traits_Microsoft::WRL::ComPtr_IImmersiveMonitor__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal__std::_Uhash_compare_Microsoft::WRL::ComPtr_IImmersiveMonitor__std::hash_Microsoft::WRL::ComPtr_IImmersiveMonitor____std::equal_to_Microsoft::WRL::ComPtr_IImmersiveMonitor______std::allocator_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal______0___::_Insert_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____________::_1_::catch$125 @ 0x1801F01B4 (_std--_Hash_std--_Umap_traits_Microsoft--WRL--ComPtr_IImmersiveMonitor__Microsoft--WRL--ComPtr_I.c)
 *     _std::_Hash_std::_Umap_traits_Microsoft::WRL::ComPtr_IVirtualDesktop__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__std::_Uhash_compare_Microsoft::WRL::ComPtr_IVirtualDesktop__std::hash_Microsoft::WRL::ComPtr_IVirtualDesktop____std::equal_to_Microsoft::WRL::ComPtr_IVirtualDesktop______std::allocator_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop______0___::_Insert_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____________::_1_::catch$125 @ 0x1801F6F6A (_std--_Hash_std--_Umap_traits_Microsoft--WRL--ComPtr_IVirtualDesktop__Microsoft--WRL--ComPtr_Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  v3 = a2[3];
  if ( v3 )
  {
    a2[3] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  v4 = a2[2];
  if ( v4 )
  {
    a2[2] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
  operator delete(a2);
}

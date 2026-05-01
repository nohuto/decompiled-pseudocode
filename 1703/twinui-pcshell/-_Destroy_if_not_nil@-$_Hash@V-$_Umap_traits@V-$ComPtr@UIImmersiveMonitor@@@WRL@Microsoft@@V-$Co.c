/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@@Z @ 0x180121E68
 * Callers:
 *     _std::_Hash_std::_Umap_traits_Microsoft::WRL::ComPtr_IImmersiveMonitor__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal__std::_Uhash_compare_Microsoft::WRL::ComPtr_IImmersiveMonitor__std::hash_Microsoft::WRL::ComPtr_IImmersiveMonitor____std::equal_to_Microsoft::WRL::ComPtr_IImmersiveMonitor______std::allocator_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal______0___::_Insert_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____________::_1_::catch$113 @ 0x1801A004D (_std--_Hash_std--_Umap_traits_Microsoft--WRL--ComPtr_IImmersiveMonitor__Microsoft--WRL--ComPtr_I.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        char *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  **((_QWORD **)a2 + 1) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  --*(_QWORD *)(a1 + 16);
  v3 = *((_QWORD *)a2 + 3);
  if ( v3 )
  {
    *((_QWORD *)a2 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)a2 + 2);
  if ( v4 )
  {
    *((_QWORD *)a2 + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  std::_Deallocate(a2, 1uLL, 0x20uLL);
}

/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@@Z @ 0x180121590
 * Callers:
 *     ?DestroyTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180120B04 (-DestroyTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _std::_Hash_std::_Umap_traits_Microsoft::WRL::ComPtr_IImmersiveMonitor__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal__std::_Uhash_compare_Microsoft::WRL::ComPtr_IImmersiveMonitor__std::hash_Microsoft::WRL::ComPtr_IImmersiveMonitor____std::equal_to_Microsoft::WRL::ComPtr_IImmersiveMonitor______std::allocator_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal______0___::_Insert_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____________::_1_::catch$112 @ 0x1801A0071 (_std--_Hash_std--_Umap_traits_Microsoft--WRL--ComPtr_IImmersiveMonitor__Microsoft--_ea_1801A0071.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@IEBA_KAEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1801218CC (-_Hashval@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXaml.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  __int64 *v3; // r14
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *result; // rax

  v3 = (__int64 *)(a3 + 16);
  v7 = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::_Hashval(
         a1,
         a3 + 16);
  v8 = a1[3];
  if ( *(char **)(v8 + 16 * v7 + 8) == a3 )
  {
    if ( *(char **)(v8 + 16 * v7) == a3 )
    {
      *(_QWORD *)(v8 + 16 * v7) = a1[1];
      *(_QWORD *)(a1[3] + 16 * v7 + 8) = a1[1];
    }
    else
    {
      *(_QWORD *)(v8 + 16 * v7 + 8) = *((_QWORD *)a3 + 1);
    }
  }
  else if ( *(char **)(v8 + 16 * v7) == a3 )
  {
    *(_QWORD *)(v8 + 16 * v7) = *(_QWORD *)a3;
  }
  v9 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  v10 = v3[1];
  if ( v10 )
  {
    v3[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *v3;
  if ( *v3 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  std::_Deallocate(a3, 1uLL, 0x20uLL);
  result = a2;
  *a2 = v9;
  return result;
}

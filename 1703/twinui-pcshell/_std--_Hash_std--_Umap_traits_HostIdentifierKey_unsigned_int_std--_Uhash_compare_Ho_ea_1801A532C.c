/*
 * XREFs of _std::_Hash_std::_Umap_traits_HostIdentifierKey_unsigned_int_std::_Uhash_compare_HostIdentifierKey_std::hash_HostIdentifierKey__std::equal_to_HostIdentifierKey____std::allocator_std::pair_HostIdentifierKey_const__unsigned_int____1___::_Insert_std::pair_HostIdentifierKey_const__unsigned_int__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_HostIdentifierKey_const__unsigned_int__________::_1_::catch$117 @ 0x1801A532C
 * Callers:
 *     <none>
 * Callees:
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180121974 (-_Make_iter@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXa.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x18017A508 (-erase@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_HostIdentifierKey_unsigned_int_std::_Uhash_compare_HostIdentifierKey_std::hash_HostIdentifierKey__std::equal_to_HostIdentifierKey____std::allocator_std::pair_HostIdentifierKey_const__unsigned_int____1___::_Insert_std::pair_HostIdentifierKey_const__unsigned_int______ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_HostIdentifierKey_const__unsigned_int__________::_1_::catch_117(
        __int64 a1,
        __int64 a2)
{
  char **iter; // rax

  iter = (char **)std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::_Make_iter(
                    a1,
                    (_QWORD *)(a2 + 112),
                    *(_QWORD *)(a2 + 32));
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
    *(_QWORD **)(a2 + 96),
    (_QWORD *)(a2 + 32),
    *iter);
  throw;
}

/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____std::allocator_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal_________::_Buynode0_::_1_::catch$14 @ 0x18019ECBA
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@2@_K@Z @ 0x1800FDFE0 (-deallocate@-$_Wrap_alloc@V-$allocator@U-$_List_node@U-$pair@$$CBUHostIdentifierKey@@I@std@@PEAX.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____std::allocator_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal_________::_Buynode0_::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<HostIdentifierKey const,unsigned int>,void *>>>::deallocate(
    a1,
    *(char **)(a2 + 64));
  throw;
}

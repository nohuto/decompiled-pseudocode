/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@2@_K@Z @ 0x1800FDFE0
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____std::allocator_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal_________::_Buynode0_::_1_::catch$14 @ 0x18019ECBA (_std--_List_alloc_std--_List_base_types_std--pair_Microsoft--WRL--ComPtr_IImmersiveMonitor__cons.c)
 *     _std::_List_buy_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal____std::allocator_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal_______::_Buynode_IImmersiveMonitor_____ptr64_&___ptr64_Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal__&___ptr64__::_1_::catch$14 @ 0x1801A0113 (_std--_List_buy_std--pair_Microsoft--WRL--ComPtr_IImmersiveMonitor__const__Microsoft--WRL--ComPt.c)
 *     _std::_List_buy_std::pair_HostIdentifierKey_const__unsigned_int__std::allocator_std::pair_HostIdentifierKey_const__unsigned_int_____::_Buynode_HostIdentifierKey_&___ptr64_unsigned_int_&___ptr64__::_1_::catch$14 @ 0x1801A5380 (_std--_List_buy_std--pair_HostIdentifierKey_const__unsigned_int__std--allocator_std--pair_HostId.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<HostIdentifierKey const,unsigned int>,void *>>>::deallocate(
        __int64 a1,
        char *a2)
{
  std::_Deallocate(a2, 1uLL, 0x20uLL);
}

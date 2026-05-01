/*
 * XREFs of _std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::emplace_back_unsigned_short_____ptr64_const_&___ptr64__::_1_::catch$106 @ 0x1801EA986
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@_K@Z @ 0x1800250F0 (-deallocate@-$_Wrap_alloc@U-$_Wrap_alloc@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::emplace_back_unsigned_short_____ptr64_const_____ptr64__::_1_::catch_106(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
    a1,
    *(_QWORD **)(a2 + 112),
    *(_QWORD *)(a2 + 96));
  throw;
}

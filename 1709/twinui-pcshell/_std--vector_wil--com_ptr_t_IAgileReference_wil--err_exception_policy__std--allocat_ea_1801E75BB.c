/*
 * XREFs of _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__const_&___ptr64__::_1_::catch$73 @ 0x1801E75BB
 * Callers:
 *     <none>
 * Callees:
 *     ??$destroy@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18002508C (--$destroy@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@-$_Wrap_alloc@V-$all.c)
 *     ??$_Unfancy@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800250AC (--$_Unfancy@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@UIDiscoverRecen.c)
 *     ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@_K@Z @ 0x1800250F0 (-deallocate@-$_Wrap_alloc@U-$_Wrap_alloc@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__const_____ptr64__::_1_::catch_73(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = (_QWORD *)a2[16];
  v4 = (_QWORD *)std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v3[a2[17]]);
  std::_Wrap_alloc<std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(
    v5,
    v4);
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
    v6,
    v3,
    a2[14]);
  throw;
}

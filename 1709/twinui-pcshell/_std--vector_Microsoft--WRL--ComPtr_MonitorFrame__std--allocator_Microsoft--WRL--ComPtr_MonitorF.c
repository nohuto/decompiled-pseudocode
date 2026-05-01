/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::emplace_back_Microsoft::WRL::ComPtr_MonitorFrame__const_&___ptr64__::_1_::catch$107 @ 0x1801EC9B3
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800250AC (--$_Unfancy@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@UIDiscoverRecen.c)
 *     ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@_K@Z @ 0x1800250F0 (-deallocate@-$_Wrap_alloc@U-$_Wrap_alloc@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U.c)
 *     ??$destroy@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Z @ 0x180072DE0 (--$destroy@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@-$_Wrap_alloc@V-$allocator@V-$ComPtr@UIUnknown@.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::emplace_back_Microsoft::WRL::ComPtr_MonitorFrame__const_____ptr64__::_1_::catch_107(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = (_QWORD *)a2[18];
  v4 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v3[a2[19]]);
  std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>::destroy<Microsoft::WRL::ComPtr<IUnknown>>(v5, v4);
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
    v6,
    v3,
    a2[16]);
  throw;
}

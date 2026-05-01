/*
 * XREFs of ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@_K@Z @ 0x18002484C
 * Callers:
 *     _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::_Reallocate_exactly_::_1_::catch$18 @ 0x180198D30 (_std--vector_wil--com_ptr_t_IAgileReference_wil--err_exception_policy__std--allocator_wil--com_p.c)
 *     _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__const_&___ptr64__::_1_::catch$69 @ 0x180198D78 (_std--vector_wil--com_ptr_t_IAgileReference_wil--err_exception_policy__std--allocat_ea_180198D78.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IApplicationView__std::allocator_Microsoft::WRL::ComPtr_IApplicationView_____::emplace_back_Microsoft::WRL::ComPtr_IApplicationView____::_1_::catch$102 @ 0x18019ABC7 (_std--vector_Microsoft--WRL--ComPtr_IApplicationView__std--allocator_Microsoft--WRL--ComPtr_IApp.c)
 *     _std::vector_void_____ptr64_std::allocator_void_____ptr64___::emplace_back_void_____ptr64_const_&___ptr64__::_1_::catch$101 @ 0x18019BF0E (_std--vector_void_____ptr64_std--allocator_void_____ptr64___--emplace_back_void_____ptr64_const_.c)
 *     _std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::emplace_back_Microsoft::WRL::ComPtr_MonitorFrame__const_&___ptr64__::_1_::catch$102 @ 0x18019D868 (_std--vector_Microsoft--WRL--ComPtr_MonitorFrame__std--allocator_Microsoft--WRL--ComPtr_MonitorF.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::_Reallocate_exactly_::_1_::catch$18 @ 0x18019EB98 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--IViewWrapper__.c)
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal__________std::_Wrap_alloc_std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IImmersiveMonitor__const__Microsoft::WRL::ComPtr_IXamlTaskbarProxyInternal_______________::_Reallocate_exactly_::_1_::catch$51 @ 0x18019EBBC (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_Micr.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::catch$69 @ 0x18019EC28 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--I_ea_18019EC28.c)
 *     _std::vector_wil::com_ptr_t_IThumbnailEvents_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IThumbnailEvents_wil::err_exception_policy_____::emplace_back_IThumbnailEvents_____ptr64_&___ptr64__::_1_::catch$102 @ 0x1801A47F0 (_std--vector_wil--com_ptr_t_IThumbnailEvents_wil--err_exception_policy__std--allocator_wil--com_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        __int64 a1,
        void *a2,
        unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 8uLL);
}

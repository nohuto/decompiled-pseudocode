/*
 * XREFs of ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@_K@Z @ 0x1800250F0
 * Callers:
 *     _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::_Reallocate_exactly_::_1_::catch$18 @ 0x1801E7573 (_std--vector_wil--com_ptr_t_IAgileReference_wil--err_exception_policy__std--allocator_wil--com_p.c)
 *     _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__const_&___ptr64__::_1_::catch$73 @ 0x1801E75BB (_std--vector_wil--com_ptr_t_IAgileReference_wil--err_exception_policy__std--allocat_ea_1801E75BB.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IApplicationView__std::allocator_Microsoft::WRL::ComPtr_IApplicationView_____::emplace_back_Microsoft::WRL::ComPtr_IApplicationView____::_1_::catch$107 @ 0x1801E958E (_std--vector_Microsoft--WRL--ComPtr_IApplicationView__std--allocator_Microsoft--WRL--ComPtr_IApp.c)
 *     _std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::emplace_back_unsigned_short_____ptr64_const_&___ptr64__::_1_::catch$106 @ 0x1801EA986 (_std--vector_unsigned_short_____ptr64_std--allocator_unsigned_short_____ptr64___--emplace_back_u.c)
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__________std::_Wrap_alloc_std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_______________::_Reallocate_exactly_::_1_::catch$52 @ 0x1801EC3BA (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_Micr.c)
 *     _std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::emplace_back_Microsoft::WRL::ComPtr_MonitorFrame__const_&___ptr64__::_1_::catch$107 @ 0x1801EC9B3 (_std--vector_Microsoft--WRL--ComPtr_MonitorFrame__std--allocator_Microsoft--WRL--ComPtr_MonitorF.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::_Reallocate_exactly_::_1_::catch$18 @ 0x1801EED33 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--IViewWrapper__.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::catch$73 @ 0x1801EED9F (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--I_ea_1801EED9F.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 8 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v3 = *(a2 - 1);
      if ( v3 < (unsigned __int64)a2 && (unsigned __int64)a2 - v3 - 8 <= 0x1F )
      {
        a2 = (_QWORD *)*(a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x180025142LL);
  }
LABEL_7:
  operator delete(a2);
}

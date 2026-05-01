/*
 * XREFs of ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180195138
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEAU?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@1@1@Z @ 0x180195164 (--$_Insert_at@AEAU-$pair@QEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Inte.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_______ptr64_wil::com_ptr_t_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_wil::err_exception_policy__std::less_HWND_______ptr64__std::allocator_std::pair_HWND_______ptr64_const_wil::com_ptr_t_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_wil::err_exception_policy______0___::_Insert_hint_std::pair_HWND_______ptr64_const_wil::com_ptr_t_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_wil::err_exception_policy____&___ptr64_std::_Tree_node_std::pair_HWND_______ptr64_const_wil::com_ptr_t_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_wil::err_exception_policy____void_____ptr64______ptr64__::_1_::catch$117 @ 0x1801F60CA (_std--_Tree_std--_Tmap_traits_HWND_______ptr64_wil--com_ptr_t_Windows--Internal--ComposableShell.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_______ptr64_wil::com_ptr_t_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_wil::err_exception_policy__std::less_HWND_______ptr64__std::allocator_std::pair_HWND_______ptr64_const_wil::com_ptr_t_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_wil::err_exception_policy______0___::_Insert_nohint_std::pair_HWND_______ptr64_const_wil::com_ptr_t_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_wil::err_exception_policy____&___ptr64_std::_Tree_node_std::pair_HWND_______ptr64_const_wil::com_ptr_t_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_wil::err_exception_policy____void_____ptr64______ptr64__::_1_::catch$49 @ 0x1801F60ED (_std--_Tree_std--_Tmap_traits_HWND_______ptr64_wil--com_ptr_t_Windows--Internal--Co_ea_1801F60ED.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[5];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(a2);
}

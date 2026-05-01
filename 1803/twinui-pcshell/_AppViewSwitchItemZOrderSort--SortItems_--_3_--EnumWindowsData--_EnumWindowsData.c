/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_3_::EnumWindowsData::_EnumWindowsData @ 0x1802397EC
 * Callers:
 *     _AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor$7 @ 0x18023AA6E (_AppViewSwitchItemZOrderSort--SortItems_--_1_--dtor$7.c)
 * Callees:
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x18023AB80 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@ComposableShel.c)
 */

void __fastcall AppViewSwitchItemZOrderSort::SortItems_::_3_::EnumWindowsData::_EnumWindowsData(char **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)a1 + 2);
  std::_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate(*a1, 1uLL, 0x30uLL);
}

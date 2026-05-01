/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_3_::EnumWindowsData::_EnumWindowsData @ 0x180194B10
 * Callers:
 *     _AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor$7 @ 0x1801F5FE5 (_AppViewSwitchItemZOrderSort--SortItems_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewSwitchItemZOrderSort::SortItems_::_3_::EnumWindowsData::_EnumWindowsData(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return std::_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::~_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>(a1);
}

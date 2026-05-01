/*
 * XREFs of ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXXZ@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P85@E$AAAXXZW4CallbackContext@Platform@@_N@Z @ 0x1802024D4
 * Callers:
 *     ?Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x18020BA98 (-Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@Win.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1801FA548 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::ViewLoadedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x180206F8C (_WindowsInternal--ComposableShell--Experiences--Switcher--ViewLoadedEventHandler--V_ea_180206F8C.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::ViewLoadedEventHandler(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
    v4 = WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::ViewLoadedEventHandler_IXamlSwitcherWindowInteractionEvents_void____cdecl_IXamlSwitcherWindowInteractionEvents::___void____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2);
  a1[37] = v4;
  return a1;
}

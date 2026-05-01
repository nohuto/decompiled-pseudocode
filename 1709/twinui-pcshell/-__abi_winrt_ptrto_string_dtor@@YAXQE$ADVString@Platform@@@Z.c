/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x180147374
 * Callers:
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$2 @ 0x1801EF6D1 (_wil--details--MaybeGetExceptionString_--_1_--dtor$2.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$3 @ 0x1801EF6DD (_wil--details--MaybeGetExceptionString_--_1_--dtor$3.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$5 @ 0x1801EF709 (_wil--details--MaybeGetExceptionString_--_1_--dtor$5.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$0 @ 0x1801EF715 (_wil--details--MaybeGetExceptionString_--_1_--dtor$0.c)
 *     _wil::details::ThrowPlatformException_::_1_::dtor$1 @ 0x1801EF993 (_wil--details--ThrowPlatformException_--_1_--dtor$1.c)
 *     _Details::IPrintable::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler_____ptr64_::[Platform::Details::IPrintable]::__abi_Platform_Details_IPrintable____abi_ToString_::_1_::dtor$1 @ 0x1801F0570 (_Details--IPrintable--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunc.c)
 *     _Details::IPrintable::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler_____ptr64_::[Platform::Details::IPrintable]::__abi_Platform_Details_IPrintable____abi_ToString_::_1_::dtor$0 @ 0x1801F057C (_Details--IPrintable--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExpl_ea_1801F057C.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler_____ptr64_::ToString_::_1_::dtor$1 @ 0x1801F0623 (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchH.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler_____ptr64_::ToString_::_1_::dtor$0 @ 0x1801F062F (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_1801F062F.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$7 @ 0x1801F4174 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$7.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$8 @ 0x1801F4180 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$8.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x1801F41F4 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$2 @ 0x1801F4220 (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$2.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$0 @ 0x1801F422C (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}

/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x18011D294
 * Callers:
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$2 @ 0x18019F5CE (_wil--details--MaybeGetExceptionString_--_1_--dtor$2.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$3 @ 0x18019F5DA (_wil--details--MaybeGetExceptionString_--_1_--dtor$3.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$5 @ 0x18019F606 (_wil--details--MaybeGetExceptionString_--_1_--dtor$5.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$0 @ 0x18019F612 (_wil--details--MaybeGetExceptionString_--_1_--dtor$0.c)
 *     _wil::details::ThrowPlatformException_::_1_::dtor$1 @ 0x18019F890 (_wil--details--ThrowPlatformException_--_1_--dtor$1.c)
 *     _Details::IPrintable::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler_____ptr64_::[Platform::Details::IPrintable]::__abi_Platform_Details_IPrintable____abi_ToString_::_1_::dtor$1 @ 0x1801A03D9 (_Details--IPrintable--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunc.c)
 *     _Details::IPrintable::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler_____ptr64_::[Platform::Details::IPrintable]::__abi_Platform_Details_IPrintable____abi_ToString_::_1_::dtor$0 @ 0x1801A03E5 (_Details--IPrintable--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExpl_ea_1801A03E5.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler_____ptr64_::ToString_::_1_::dtor$1 @ 0x1801A048F (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchH.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler_____ptr64_::ToString_::_1_::dtor$0 @ 0x1801A049B (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_1801A049B.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}

/*
 * XREFs of ?Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ @ 0x18020B230
 * Callers:
 *     _lambda_b17e8ea3ce422613d156e832a7d26e56_::operator() @ 0x1800A0360 (_lambda_b17e8ea3ce422613d156e832a7d26e56_--operator().c)
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1801FDF68 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_1801FDF68.c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x18020176C (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 *     Platform::Details::__abi_FunctorCapture__lambda_7d55139ff1ac6b498cb4a2986c1047e6__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::Invoke @ 0x18020C910 (Platform--Details--__abi_FunctorCapture__lambda_7d55139ff1ac6b498cb4a2986c1047e6__void_Windows--.c)
 *     ?ViewVirtualDesktopChanged@XamlAllUpViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x180210BA0 (-ViewVirtualDesktopChanged@XamlAllUpViewHost@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x180216984 (_lambda_7e172f12ff20f7d48d0a79092595c49c_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x1802180B8 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::IWindowPrivate::Show(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}

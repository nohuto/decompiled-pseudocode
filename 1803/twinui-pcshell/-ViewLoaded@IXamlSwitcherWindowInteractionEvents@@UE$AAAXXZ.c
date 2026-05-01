/*
 * XREFs of ?ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ @ 0x180216160
 * Callers:
 *     _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x1802013A4 (_lambda_bf3c92b221d60276737ef151eb6f13fc_--operator().c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x18020176C (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x180207714 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 *     Platform::Details::__abi_FunctorCapture__lambda_68c3aed66eb015dfcd76405720e32398__void_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64_::Invoke @ 0x18020C8D0 (Platform--Details--__abi_FunctorCapture__lambda_68c3aed66eb015dfcd76405720e32398__void_Windows--.c)
 *     ?VirtualDesktopDestroyFailed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180210E20 (-VirtualDesktopDestroyFailed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopDestroyed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180210EE0 (-VirtualDesktopDestroyed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x180216984 (_lambda_7e172f12ff20f7d48d0a79092595c49c_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x1802180B8 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall IXamlSwitcherWindowInteractionEvents::ViewLoaded(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}

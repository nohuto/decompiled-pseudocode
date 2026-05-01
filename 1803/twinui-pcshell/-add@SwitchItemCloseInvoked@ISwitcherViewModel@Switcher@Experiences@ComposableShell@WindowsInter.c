/*
 * XREFs of ?add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@3456@@Z @ 0x18021526C
 * Callers:
 *     ?Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x18020BA98 (-Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@Win.c)
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x180216984 (_lambda_7e172f12ff20f7d48d0a79092595c49c_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x1802180B8 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemCloseInvoked::add(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 96LL))(a1, a3, a2);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  return a2;
}

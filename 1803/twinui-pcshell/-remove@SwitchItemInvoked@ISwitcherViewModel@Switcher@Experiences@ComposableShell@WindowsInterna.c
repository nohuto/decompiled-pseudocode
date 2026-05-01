/*
 * XREFs of ?remove@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180216074
 * Callers:
 *     ??1MonitorFrame@@UEAA@XZ @ 0x180207580 (--1MonitorFrame@@UEAA@XZ.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x180207714 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     _lambda_2d2fadc52317ec55899deb772019028a_::operator() @ 0x180207CB4 (_lambda_2d2fadc52317ec55899deb772019028a_--operator().c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemInvoked::remove(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}

/*
 * XREFs of ?remove@SwitchItemContextMenuInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x1802160C0
 * Callers:
 *     _lambda_2d2fadc52317ec55899deb772019028a_::operator() @ 0x180207CB4 (_lambda_2d2fadc52317ec55899deb772019028a_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuInvoked::remove(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}

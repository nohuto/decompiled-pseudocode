/*
 * XREFs of ?AnimateDismissView@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVDismissAnimationCompleted@2345@@Z @ 0x180209000
 * Callers:
 *     _lambda_5683c41a0d5b3fdfd49831f290fa76db_::operator() @ 0x180207E28 (_lambda_5683c41a0d5b3fdfd49831f290fa76db_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::AnimateDismissView(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}

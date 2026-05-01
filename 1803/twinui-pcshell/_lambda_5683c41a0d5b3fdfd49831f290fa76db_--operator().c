/*
 * XREFs of _lambda_5683c41a0d5b3fdfd49831f290fa76db_::operator() @ 0x180207E28
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_::Invoke @ 0x18020C8C0 (Platform--Details--__abi_FunctorCapture__lambda_5683c41a0d5b3fdfd49831f290fa76db__void_--Invoke.c)
 * Callees:
 *     ?AnimateDismissView@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVDismissAnimationCompleted@2345@@Z @ 0x180209000 (-AnimateDismissView@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$.c)
 */

__int64 __fastcall lambda_5683c41a0d5b3fdfd49831f290fa76db_::operator()(_QWORD *a1)
{
  __int64 result; // rax

  try
  {
    result = WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::AnimateDismissView(
               *(_QWORD *)(*a1 + 96LL),
               a1[1]);
  }
  catch ( Platform::Exception __gc * )
  {
    return WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::Invoke(a1[1]);
  }
  return result;
}

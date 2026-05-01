/*
 * XREFs of ?Invoke@DismissAnimationCompleted@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x18020C9E0
 * Callers:
 *     __lambda_5683c41a0d5b3fdfd49831f290fa76db_::operator()_::_1_::catch$0 @ 0x180207E55 (__lambda_5683c41a0d5b3fdfd49831f290fa76db_--operator()_--_1_--catch$0.c)
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_DismissAnimationCompleted___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@DismissAnimationCompleted@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x180213620 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_DismissAnimationCompleted___abi_IDel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}

/*
 * XREFs of ?Invoke@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x18020CB30
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ViewLoadedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x180213850 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ViewLoadedEventHandler___abi_IDelega.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}

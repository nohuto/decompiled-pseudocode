/*
 * XREFs of ?Invoke@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXI@Z @ 0x18020CB00
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_TaskViewContainerNavigationEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJI@Z @ 0x180213800 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_TaskViewContainerNavigationEventHand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}

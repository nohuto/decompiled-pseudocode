/*
 * XREFs of ?Invoke@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAUISwitchItem@Multitasking@4Internal@Windows@@@Z @ 0x18020CAA0
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemInvokedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@Z @ 0x180213760 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemInvokedEventHandler___abi_IDeleg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}

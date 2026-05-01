/*
 * XREFs of ?__abi_AddRef@ApplicationInitializationCallback@Xaml@UI@Windows@@UE$AAAKXZ @ 0x180126F90
 * Callers:
 *     ?__abi_AddRef@TaskViewBackgroundClickedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x180126D70 (-__abi_AddRef@TaskViewBackgroundClickedEventHandler@Switcher@Experiences@ComposableShell@Windows.c)
 *     ?__abi_AddRef@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x180126DC0 (-__abi_AddRef@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@ComposableShell@Windows.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Xaml::ApplicationInitializationCallback::__abi_AddRef(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 24) && *(int *)(*(_QWORD *)(a1 + 24) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 12LL));
  else
    return (unsigned int)-1;
}

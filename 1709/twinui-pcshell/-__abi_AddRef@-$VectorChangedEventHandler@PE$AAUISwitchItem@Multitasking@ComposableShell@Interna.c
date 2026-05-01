/*
 * XREFs of ?__abi_AddRef@?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x180151210
 * Callers:
 *     ?__abi_AddRef@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@WBA@E$AAAKXZ @ 0x180150FF0 (-__abi_AddRef@-$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Interna.c)
 *     ?__abi_AddRef@ApplicationInitializationCallback@Xaml@UI@Windows@@W7E$AAAKXZ @ 0x180151040 (-__abi_AddRef@ApplicationInitializationCallback@Xaml@UI@Windows@@W7E$AAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::__abi_AddRef(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 24) && *(int *)(*(_QWORD *)(a1 + 24) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 12LL));
  else
    return (unsigned int)-1;
}

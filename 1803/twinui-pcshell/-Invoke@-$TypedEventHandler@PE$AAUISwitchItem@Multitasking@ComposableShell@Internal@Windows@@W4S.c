/*
 * XREFs of ?Invoke@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@3@W4SwitchItemProperty@5673@@Z @ 0x18020C7C0
 * Callers:
 *     ?__abi_Windows_Foundation_?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@234@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@W4SwitchItemProperty@6784@@Z @ 0x1802138A0 (-__abi_Windows_Foundation_-$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Int.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,enum Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( *(void ***)a1 == &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,enum Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}

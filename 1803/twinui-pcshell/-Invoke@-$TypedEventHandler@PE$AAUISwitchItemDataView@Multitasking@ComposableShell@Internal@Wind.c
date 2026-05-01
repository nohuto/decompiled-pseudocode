/*
 * XREFs of ?Invoke@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@UE$AAAXPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@3@PE$AAUIEvaluateItemEventArgs@5673@@Z @ 0x18020C820
 * Callers:
 *     ?__abi_Windows_Foundation_?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@234@UE$AAAJPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@4@PE$AAUIEvaluateItemEventArgs@6784@@Z @ 0x180213940 (-__abi_Windows_Foundation_-$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( *(void ***)a1 == &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}

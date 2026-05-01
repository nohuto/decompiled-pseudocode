/*
 * XREFs of ?remove@?QISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemCollectionChanged@SwitchItemDataViewImpl@23456@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x18013DDBC
 * Callers:
 *     ?remove@?QISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemCollectionChanged@SwitchItemDataViewImpl@23456@WBA@E$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x18013DDE0 (-remove@-QISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@Win_ea_18013DDE0.c)
 * Callees:
 *     <none>
 */

void __fastcall _remove__QISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemCollectionChanged_SwitchItemDataViewImpl_23456_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
        __int64 a1,
        struct Platform::Details::EventLock *a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  Platform::Details::EventSourceRemove((Platform::Details *)(a1 + 48), (void **)(a1 + 136), a2, a4);
}

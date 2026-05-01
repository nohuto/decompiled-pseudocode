/*
 * XREFs of ?remove@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemCollectionChanged@SwitchItemDataViewImpl@2345@UE$AAAXVEventRegistrationToken@Foundation@5@@Z @ 0x180168FDC
 * Callers:
 *     ?remove@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemCollectionChanged@SwitchItemDataViewImpl@2345@WBA@E$AAAXVEventRegistrationToken@Foundation@5@@Z @ 0x180169000 (-remove@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@Swit_ea_180169000.c)
 * Callees:
 *     <none>
 */

void __fastcall _remove__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItemCollectionChanged_SwitchItemDataViewImpl_2345_UE_AAAXVEventRegistrationToken_Foundation_5__Z(
        __int64 a1,
        struct Platform::Details::EventLock *a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  Platform::Details::EventSourceRemove((Platform::Details *)(a1 + 48), (void **)(a1 + 136), a2, a4);
}

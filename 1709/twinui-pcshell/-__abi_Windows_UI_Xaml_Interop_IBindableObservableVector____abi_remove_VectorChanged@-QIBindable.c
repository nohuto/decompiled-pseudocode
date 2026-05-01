/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJVEventRegistrationToken@Foundation@5@@Z @ 0x180162C6C
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCA@E$AAAJVEventRegistrationToken@Foundation@5@@Z @ 0x180162CB0 (-__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChange_ea_180162CB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged__QIBindableObservableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__UE_AAAJVEventRegistrationToken_Foundation_5__Z(
        __int64 a1,
        struct Platform::Details::EventLock *a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  struct Platform::Details::EventLock *v4; // r8

  v4 = a2;
  if ( *(_BYTE *)(a1 + 168) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    Platform::Details::EventSourceRemove((Platform::Details *)(a1 + 128), (void **)(a1 + 152), v4, a4);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}

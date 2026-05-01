/*
 * XREFs of ?BindableEventAdd@?QVectorChanged@IBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAA?AVEventRegistrationToken@Foundation@6@PE$AAVBindableVectorChangedEventHandler@3456@@Z @ 0x180137A1C
 * Callers:
 *     ?BindableEventAdd@?QVectorChanged@IBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@GCA@E$AAA?AVEventRegistrationToken@Foundation@6@PE$AAVBindableVectorChangedEventHandler@3456@@Z @ 0x180137A50 (-BindableEventAdd@-QVectorChanged@IBindableObservableVector@Interop@Xaml@UI@Windows_ea_180137A50.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _BindableEventAdd__QVectorChanged_IBindableObservableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAA_AVEventRegistrationToken_Foundation_6_PE_AAVBindableVectorChangedEventHandler_3456__Z(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  *(_BYTE *)(a1 + 112) = 1;
  *a2 = Platform::Details::EventSourceAdd(a1 + 128, a1 + 152, a3);
  return a2;
}

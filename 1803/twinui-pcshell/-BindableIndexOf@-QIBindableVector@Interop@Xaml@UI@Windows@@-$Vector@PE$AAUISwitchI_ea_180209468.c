/*
 * XREFs of ?BindableIndexOf@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAA_NPE$AAVObject@8@PEAI@Z @ 0x180209468
 * Callers:
 *     ?BindableIndexOf@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@GCI@E$AAA_NPE$AAVObject@8@PEAI@Z @ 0x1800A9E30 (-BindableIndexOf@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItem@Multitask.c)
 * Callees:
 *     <none>
 */

char __fastcall _BindableIndexOf__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__EE_AAA_NPE_AAVObject_8_PEAI_Z(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *),
        _DWORD *a3)
{
  *a3 = 0;
  return Platform::Collections::Details::VectorBindableIndexOf<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>>(
           a1,
           *(_QWORD **)(a1 + 96),
           a2,
           a3);
}

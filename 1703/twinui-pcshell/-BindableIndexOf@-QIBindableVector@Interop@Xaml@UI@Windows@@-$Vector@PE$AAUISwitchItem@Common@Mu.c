/*
 * XREFs of ?BindableIndexOf@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAA_NPE$AAVObject@8@PEAI@Z @ 0x180137F0C
 * Callers:
 *     ?BindableIndexOf@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@GCI@E$AAA_NPE$AAVObject@8@PEAI@Z @ 0x180137F20 (-BindableIndexOf@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchI_ea_180137F20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _BindableIndexOf__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAA_NPE_AAVObject_8_PEAI_Z(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  *a3 = 0;
  return Platform::Collections::Details::VectorBindableIndexOf<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>>(*(_QWORD *)(a1 + 96));
}

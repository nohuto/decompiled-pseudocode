/*
 * XREFs of ?BindableGetAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAPE$AAVObject@8@I@Z @ 0x180209340
 * Callers:
 *     ?BindableGetAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@GCI@E$AAAPE$AAVObject@8@I@Z @ 0x1800A9E00 (-BindableGetAt@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItem@Multitaskin.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_GetAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJIPEAPE$AAVObject@8@@Z @ 0x180214D98 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_GetAt@-QIBindableVector@Inter_ea_180214D98.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@I@Z @ 0x18020B054 (-GetAt@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@_ea_18020B054.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _BindableGetAt__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__EE_AAAPE_AAVObject_8_I_Z(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+50h] [rbp+18h]

  v3 = _GetAt__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4_I_Z(a1);
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptr_dtor(v3);
  return v1;
}

/*
 * XREFs of ??$VectorBindableIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NU?$integral_constant@_N$00@std@@AEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@4@PE$AAVObject@2@PEAI@Z @ 0x180203E88
 * Callers:
 *     ?BindableIndexOf@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAA_NPE$AAVObject@8@PEAI@Z @ 0x180209468 (-BindableIndexOf@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchI_ea_180209468.c)
 *     ?BindableIndexOf@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAA_NPE$AAVObject@8@PEAI@Z @ 0x18020947C (-BindableIndexOf@-QIBindableVectorView@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAU_ea_18020947C.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_IndexOf@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVObject@8@PEAIPEA_N@Z @ 0x180214E70 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_IndexOf@-QIBindableVector@Int_ea_180214E70.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x180204004 (--$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Platform::Collections::Details::VectorBindableIndexOf<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>>(
        __int64 a1,
        _QWORD *a2,
        __int64 (__fastcall ***a3)(_QWORD, __int64, __int64 *),
        _DWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  char v10; // bl

  v7 = __abi_winrt_cast_to(1, a3, (__int64)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__);
  v8 = __abi_winrt_ptr_ctor(v7);
  __abi_winrt_ptr_dtor(v7);
  if ( !a3 || v8 )
  {
    v10 = Platform::Collections::Details::VectorIndexOf<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>>(
            a2,
            v8,
            a4);
    __abi_winrt_ptr_dtor(v8);
    return v10;
  }
  else
  {
    *a4 = (__int64)(a2[1] - *a2) >> 5;
    __abi_winrt_ptr_dtor(0LL);
    return 0;
  }
}

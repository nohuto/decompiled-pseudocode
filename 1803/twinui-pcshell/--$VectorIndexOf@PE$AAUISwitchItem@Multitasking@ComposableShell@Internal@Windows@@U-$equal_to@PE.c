/*
 * XREFs of ??$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x180204004
 * Callers:
 *     ??$VectorBindableIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NU?$integral_constant@_N$00@std@@AEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@4@PE$AAVObject@2@PEAI@Z @ 0x180203E88 (--$VectorBindableIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equ.c)
 *     ?IndexOf@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x18020B93C (-IndexOf@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_18020B93C.c)
 *     ?IndexOf@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x18020B950 (-IndexOf@-Q-$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Colle.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_IndexOf@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAIPEA_N@Z @ 0x180213D48 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_180213D48.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x180203E38 (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Platform::Collections::Details::VectorIndexOf<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rsi
  bool v10; // bl
  __int64 v12; // [rsp+60h] [rbp+8h]
  __int64 v13; // [rsp+68h] [rbp+10h]

  v5 = __abi_winrt_ptr_ctor(a2);
  v13 = v5;
  v6 = *a1;
  v7 = a1[1];
  v8 = *a1;
  if ( *a1 != v7 )
  {
    do
    {
      v12 = Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(v8);
      __abi_winrt_ptr_dtor(v12);
      if ( v12 == v13 )
        break;
      v8 += 32LL;
    }
    while ( v8 != v7 );
    v5 = v13;
  }
  v9 = (v8 - v6) >> 5;
  *a3 = v9;
  v10 = (unsigned int)v9 < (unsigned __int64)((a1[1] - *a1) >> 5);
  __abi_winrt_ptr_dtor(v5);
  return v10;
}

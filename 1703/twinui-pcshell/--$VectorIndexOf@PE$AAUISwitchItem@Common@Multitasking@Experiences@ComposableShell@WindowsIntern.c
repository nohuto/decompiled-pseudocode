/*
 * XREFs of ??$VectorIndexOf@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18013B4CC
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_IndexOf@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAIPEA_N@Z @ 0x180136EFC (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Common@Multitaski_ea_180136EFC.c)
 *     ?IndexOf@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAA_NPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18013724C (-IndexOf@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIn.c)
 *     ?IndexOf@?Q?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAA_NPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18013AFC0 (-IndexOf@-Q-$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 *     ??$VectorBindableIndexOf@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@PE$AAVObject@2@PEAI@Z @ 0x18013B5B4 (--$VectorBindableIndexOf@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 * Callees:
 *     ??$Unwrap@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEBV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x18013C99C (--$Unwrap@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Platform::Collections::Details::VectorIndexOf<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 i; // rbp
  __int64 v9; // rax
  bool v10; // r15
  __int64 v11; // rbp
  bool v12; // bl
  __int64 v14; // [rsp+68h] [rbp+10h]

  v4 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v14 = v4;
  v6 = *a1;
  v7 = a1[1];
  for ( i = *a1; i != v7; i += 32LL )
  {
    v9 = Platform::Collections::Details::Unwrap<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>(i);
    v4 = v14;
    v10 = v9 == v14;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v4 = v14;
    }
    if ( v10 )
      break;
  }
  v11 = (i - v6) >> 5;
  *a3 = v11;
  v12 = (unsigned int)v11 < (unsigned __int64)((a1[1] - *a1) >> 5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v12;
}

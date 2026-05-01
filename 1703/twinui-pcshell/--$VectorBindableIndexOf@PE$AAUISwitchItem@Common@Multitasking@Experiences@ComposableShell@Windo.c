/*
 * XREFs of ??$VectorBindableIndexOf@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@PE$AAVObject@2@PEAI@Z @ 0x18013B5B4
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_IndexOf@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVObject@8@PEAIPEA_N@Z @ 0x180137BDC (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_IndexOf@-QIBindableVector@Interop@Xaml@UI@.c)
 *     ?BindableIndexOf@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAA_NPE$AAVObject@8@PEAI@Z @ 0x180137F0C (-BindableIndexOf@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItem@Common@Mu.c)
 *     ?BindableIndexOf@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAA_NPE$AAVObject@8@PEAI@Z @ 0x18013B698 (-BindableIndexOf@-QIBindableVectorView@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAUISwitchItem@C.c)
 * Callees:
 *     ??$VectorIndexOf@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18013B4CC (--$VectorIndexOf@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall Platform::Collections::Details::VectorBindableIndexOf<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>>(
        __int64 *a1,
        unsigned int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        _DWORD *a3)
{
  char v6; // di
  __int64 v7; // rbx
  bool v8; // si
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  v6 = 0;
  v7 = 0LL;
  v10 = 0LL;
  if ( a2 && !(**a2)(a2, &GUID_d553efa6_cf93_494e_903c_f90e2f1c1052, &v10) )
    v7 = v10;
  v11 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v11 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( !a2 || v7 )
  {
    v8 = Platform::Collections::Details::VectorIndexOf<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>>(
           a1,
           v7,
           a3);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    return v8;
  }
  else
  {
    *a3 = (a1[1] - *a1) >> 5;
  }
  return v6;
}

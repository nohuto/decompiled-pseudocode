/*
 * XREFs of ?BindableGetView@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableVectorView@2345@XZ @ 0x1801630AC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_GetView@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJPEAPE$AAUIBindableVectorView@2345@@Z @ 0x180162E1C (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_GetView@-QIBindableVector@Interop@Xaml@UI@.c)
 *     ?BindableGetView@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@GCI@E$AAAPE$AAUIBindableVectorView@2345@XZ @ 0x1801631B0 (-BindableGetView@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchI_ea_1801631B0.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180168C8C (--0-$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void *__fastcall _BindableGetView__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__EE_AAAPE_AAUIBindableVectorView_2345_XZ(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // rdi
  int v5; // eax
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]
  void *v9; // [rsp+50h] [rbp+18h]

  v7 = Platform::Details::Heap::Allocate(0x68uLL, 0x80uLL);
  v2 = Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>(
         v7,
         a1 + 80,
         a1 + 96);
  v3 = v2;
  v7 = (void *)v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v8 = v3;
  v4 = 0LL;
  v7 = 0LL;
  if ( v3 )
  {
    v5 = (**(__int64 (__fastcall ***)(__int64, void *, void **))v3)(
           v3,
           &_uuidof__AUIBindableVectorView_Interop_Xaml_UI_Windows__,
           &v7);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    v4 = v7;
  }
  v9 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL))(v4);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}

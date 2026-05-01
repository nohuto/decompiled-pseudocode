/*
 * XREFs of ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableIterator@2345@XZ @ 0x180138AB4
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPEAPE$AAUIBindableIterator@2345@@Z @ 0x180138A0C (-__abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First@-QIBindableIterable@Interop@Xaml@U.c)
 *     ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@GDA@E$AAAPE$AAUIBindableIterator@2345@XZ @ 0x180138BC0 (-BindableFirst@-QIBindableIterable@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchI_ea_180138BC0.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@5@@Z @ 0x18013D29C (--0-$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void *__fastcall _BindableFirst__QIBindableIterable_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAPE_AAUIBindableIterator_2345_XZ(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // rdi
  int v5; // eax
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]
  void *v9; // [rsp+50h] [rbp+18h]

  v7 = Platform::Details::Heap::Allocate(0x58uLL, 0x70uLL);
  v2 = Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>(
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
           &_uuidof__AUIBindableIterator_Interop_Xaml_UI_Windows__,
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

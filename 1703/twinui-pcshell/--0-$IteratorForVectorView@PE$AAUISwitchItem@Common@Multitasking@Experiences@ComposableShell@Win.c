/*
 * XREFs of ??0?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@5@@Z @ 0x18013D29C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_First@?Q?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@@Z @ 0x1801377BC (-__abi_Windows_Foundation_Collections_-$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experien.c)
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@XZ @ 0x180138A6C (-First@-Q-$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableSh_ea_180138A6C.c)
 *     ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableIterator@2345@XZ @ 0x180138AB4 (-BindableFirst@-QIBindableIterable@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItem@Common@Mu.c)
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@XZ @ 0x18013D360 (-First@-Q-$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableSh_ea_18013D360.c)
 * Callees:
 *     ??0?$shared_ptr@I@std@@QEAA@AEBV01@@Z @ 0x18013DA9C (--0-$shared_ptr@I@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>(
        _QWORD *a1,
        unsigned int **a2,
        __int64 a3)
{
  struct __abi_Module *v6; // rcx
  _QWORD *result; // rax

  Platform::Object::Object(a1 + 3);
  v6 = __abi_module;
  *a1 = &Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::`vftable'{for `Windows::Foundation::Collections::IIterator<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>'};
  a1[1] = ___7__IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_Collections_Platform__6B__I__IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PublicNonVirtuals_123__;
  a1[2] = &Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::`vftable'{for `Windows::UI::Xaml::Interop::IBindableIterator'};
  a1[3] = &Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::`vftable'{for `Platform::Object'};
  a1[4] = &Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::`vftable'{for `__abi_IUnknown'};
  a1[5] = &Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[12] = -1LL;
  if ( v6 )
    (**(void (__fastcall ***)(struct __abi_Module *))v6)(v6);
  std::shared_ptr<unsigned int>::shared_ptr<unsigned int>(a1 + 6, a2);
  std::shared_ptr<unsigned int>::shared_ptr<unsigned int>(a1 + 8, a3);
  result = a1;
  a1[10] = **a2;
  return result;
}

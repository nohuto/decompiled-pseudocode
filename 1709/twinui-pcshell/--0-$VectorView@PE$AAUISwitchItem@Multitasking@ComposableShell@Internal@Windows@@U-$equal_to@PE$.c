/*
 * XREFs of ??0?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180168C8C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_GetView@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPEAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@@Z @ 0x1801620DC (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_1801620DC.c)
 *     ?BindableGetView@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableVectorView@2345@XZ @ 0x1801630AC (-BindableGetView@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItem@Multitask.c)
 *     ?GetView@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x180168D64 (-GetView@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_180168D64.c)
 *     ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItems@SwitchItemDataViewImpl@2345@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@5@XZ @ 0x180168DAC (-get@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItems@SwitchIt.c)
 * Callees:
 *     ??0?$shared_ptr@I@std@@QEAA@AEBV01@@Z @ 0x1800EB52C (--0-$shared_ptr@I@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  struct __abi_Module *v6; // rcx
  __int64 result; // rax

  Platform::Object::Object(a1 + 40);
  v6 = __abi_module;
  *(_QWORD *)a1 = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Platform::Object's `Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>'};
  *(_QWORD *)(a1 + 8) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>'};
  *(_QWORD *)(a1 + 16) = ___7__VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__6B__I__VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00PublicNonVirtuals_12__;
  *(_QWORD *)(a1 + 24) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Platform::Object's `Windows::UI::Xaml::Interop::IBindableVectorView'};
  *(_QWORD *)(a1 + 32) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Windows::UI::Xaml::Interop::IBindableIterable'};
  *(_QWORD *)(a1 + 40) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 48) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 56) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 112) = -1LL;
  if ( v6 )
    (**(void (__fastcall ***)(struct __abi_Module *))v6)(v6);
  std::shared_ptr<unsigned int>::shared_ptr<unsigned int>((_QWORD *)(a1 + 64), a2);
  std::shared_ptr<unsigned int>::shared_ptr<unsigned int>((_QWORD *)(a1 + 80), a3);
  result = a1;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)*a2;
  return result;
}

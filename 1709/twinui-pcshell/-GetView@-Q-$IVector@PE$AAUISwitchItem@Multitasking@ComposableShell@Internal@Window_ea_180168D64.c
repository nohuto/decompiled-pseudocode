/*
 * XREFs of ?GetView@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x180168D64
 * Callers:
 *     ?GetView@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x1801624D0 (-GetView@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collectio.c)
 * Callees:
 *     ??0?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180168C8C (--0-$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _GetView__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ(
        __int64 a1)
{
  void *v2; // rax

  v2 = Platform::Details::Heap::Allocate(0x68uLL, 0x80uLL);
  return Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>(
           (__int64)v2,
           (__int64 *)(a1 + 80),
           (__int64 *)(a1 + 96));
}

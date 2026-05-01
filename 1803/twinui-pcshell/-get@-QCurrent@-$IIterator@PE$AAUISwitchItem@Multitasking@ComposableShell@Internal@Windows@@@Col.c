/*
 * XREFs of ?get@?QCurrent@?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@1?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@3Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@5@XZ @ 0x180215A50
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x180203E38 (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x1802107FC (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x180210878 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__QCurrent___IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows__1__IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_3Platform__UE_AAAPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_5_XZ(
        __int64 a1)
{
  Platform::Collections::Details *v2; // rcx
  __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h]

  Platform::Collections::Details::ValidateCounter((_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 80));
  LOBYTE(v2) = *(unsigned int *)(a1 + 84) < (unsigned __int64)((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL)
                                                                       - **(_QWORD **)(a1 + 64)) >> 5);
  Platform::Collections::Details::ValidateBounds(v2);
  v5 = Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(**(_QWORD **)(a1 + 64) + 32LL * *(unsigned int *)(a1 + 84));
  v3 = __abi_winrt_ptr_ctor(v5);
  __abi_winrt_ptr_dtor(v5);
  return v3;
}

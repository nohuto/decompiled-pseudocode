/*
 * XREFs of ?IndexOf@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x1801661B0
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_IndexOf@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAIPEA_N@Z @ 0x1801660D0 (-__abi_Windows_Foundation_Collections_-$IVectorView@PE$AAUISwitchItem@Multitasking@_ea_1801660D0.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180147350 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _IndexOf__Q__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAA_NPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4_PEAI_Z(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  void *Exception; // [rsp+50h] [rbp+18h]

  *a3 = 0;
  if ( **(_DWORD **)(a1 + 64) != *(_DWORD *)(a1 + 96) )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::ChangedStateException **)&pExceptionObject;
  }
  return Platform::Collections::Details::VectorIndexOf<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>>(*(_QWORD *)(a1 + 80));
}

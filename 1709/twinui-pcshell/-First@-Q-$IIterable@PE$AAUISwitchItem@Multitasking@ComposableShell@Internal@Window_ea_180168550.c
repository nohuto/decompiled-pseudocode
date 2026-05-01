/*
 * XREFs of ?First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x180168550
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@@Z @ 0x18016632C (-__abi_Windows_Foundation_Collections_-$IIterable@PE$AAUISwitchItem@Multitasking@Co_ea_18016632C.c)
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x180166380 (-First@-Q-$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_180166380.c)
 *     ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableIterator@2345@XZ @ 0x1801685EC (-BindableFirst@-QIBindableIterable@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAUISwitchItem@Multi.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180147350 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@5@@Z @ 0x18016848C (--0-$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Det.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall _First__Q__IIterable_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ(
        __int64 a1)
{
  _QWORD *pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  void *Exception; // [rsp+48h] [rbp+10h]

  if ( **(_DWORD **)(a1 + 64) != *(_DWORD *)(a1 + 96) )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = (_QWORD *)__abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::ChangedStateException **)&pExceptionObject;
  }
  pExceptionObject = Platform::Details::Heap::Allocate(0x58uLL, 0x70uLL);
  return Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
           pExceptionObject,
           (__int64 *)(a1 + 64),
           (__int64 *)(a1 + 80));
}

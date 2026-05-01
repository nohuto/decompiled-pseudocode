/*
 * XREFs of ?get@?QCurrent@?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@1?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@3Platform@@UE$AAAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18013CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18011D270 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$Unwrap@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEBV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x18013C99C (--$Unwrap@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=7
Platform::Details *__fastcall _get__QCurrent___IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__1__IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_3Platform__UE_AAAPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__XZ(
        __int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // rcx
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  void *Exception; // [rsp+48h] [rbp+10h]

  if ( **(_DWORD **)(a1 + 48) != *(_DWORD *)(a1 + 80) )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::ChangedStateException **)&pExceptionObject;
  }
  v1 = *(_QWORD **)(a1 + 64);
  v2 = *(unsigned int *)(a1 + 84);
  if ( v2 >= (__int64)(v1[1] - *v1) >> 5 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::OutOfBoundsException::OutOfBoundsException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::OutOfBoundsException **)&pExceptionObject;
  }
  return Platform::Collections::Details::Unwrap<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>(*v1 + 32 * v2);
}

/*
 * XREFs of ?MoveNext@?Q?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAA_NXZ @ 0x18013CCF0
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_MoveNext@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@UE$AAAJPEA_N@Z @ 0x18013B860 (-__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_MoveNext@-QIBindableIterator@Interop@Xam.c)
 *     ?MoveNext@?Q?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@WBA@E$AAA_NXZ @ 0x18013CDC0 (-MoveNext@-Q-$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@Composabl_ea_18013CDC0.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18011D270 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=6
bool __fastcall _MoveNext__Q__IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAA_NXZ(
        __int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
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
  v3 = (unsigned int)(v2 + 1);
  *(_DWORD *)(a1 + 84) = v3;
  return v3 < (__int64)(v1[1] - *v1) >> 5;
}

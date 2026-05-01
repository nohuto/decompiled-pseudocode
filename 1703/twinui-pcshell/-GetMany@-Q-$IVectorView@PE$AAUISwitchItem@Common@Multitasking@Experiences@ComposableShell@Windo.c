/*
 * XREFs of ?GetMany@?Q?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x18013B030
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_GetMany@?Q?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18013AF30 (-__abi_Windows_Foundation_Collections_-$IVectorView@PE$AAUISwitchItem@Common@Multit_ea_18013AF30.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18011D270 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _GetMany__Q__IVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_6__Z(
        __int64 a1,
        unsigned int a2)
{
  _QWORD *v2; // r9
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  void *Exception; // [rsp+58h] [rbp+20h]

  if ( **(_DWORD **)(a1 + 64) != *(_DWORD *)(a1 + 96) )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::ChangedStateException **)&pExceptionObject;
  }
  v2 = *(_QWORD **)(a1 + 80);
  if ( a2 > (unsigned __int64)((__int64)(v2[1] - *v2) >> 5) )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::OutOfBoundsException::OutOfBoundsException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::OutOfBoundsException **)&pExceptionObject;
  }
  return Platform::Collections::Details::VectorGetMany<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>(v2);
}

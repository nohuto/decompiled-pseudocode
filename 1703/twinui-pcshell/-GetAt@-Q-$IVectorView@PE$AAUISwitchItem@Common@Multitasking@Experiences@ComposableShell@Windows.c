/*
 * XREFs of ?GetAt@?Q?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x18013B3C0
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_GetAt@?Q?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18013AE40 (-__abi_Windows_Foundation_Collections_-$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experi.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_GetAt@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJIPEAPE$AAVObject@8@@Z @ 0x18013B23C (-__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_GetAt@-QIBindableVectorView@Interop@Xa.c)
 *     ?BindableGetAt@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAVObject@8@I@Z @ 0x18013B490 (-BindableGetAt@-QIBindableVectorView@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAUISwitchItem@Com.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18011D270 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$Unwrap@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEBV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x18013C99C (--$Unwrap@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall _GetAt__Q__IVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__I_Z(
        __int64 a1,
        unsigned int a2)
{
  unsigned __int64 v2; // r9
  _QWORD *v3; // rdx
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  void *Exception; // [rsp+50h] [rbp+18h]

  v2 = a2;
  if ( **(_DWORD **)(a1 + 64) != *(_DWORD *)(a1 + 96) )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::ChangedStateException **)&pExceptionObject;
  }
  v3 = *(_QWORD **)(a1 + 80);
  if ( v2 >= (__int64)(v3[1] - *v3) >> 5 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::OutOfBoundsException::OutOfBoundsException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::OutOfBoundsException **)&pExceptionObject;
  }
  return Platform::Collections::Details::Unwrap<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>(*v3 + 32 * v2);
}

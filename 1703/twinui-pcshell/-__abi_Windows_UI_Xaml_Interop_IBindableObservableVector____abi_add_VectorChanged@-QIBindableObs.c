/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVBindableVectorChangedEventHandler@2345@PEAVEventRegistrationToken@Foundation@5@@Z @ 0x18013791C
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCA@E$AAAJPE$AAVBindableVectorChangedEventHandler@2345@PEAVEventRegistrationToken@Foundation@5@@Z @ 0x1801379C0 (-__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@-_ea_1801379C0.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged__QIBindableObservableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJPE_AAVBindableVectorChangedEventHandler_2345_PEAVEventRegistrationToken_Foundation_5__Z(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0;
  if ( *(_BYTE *)(a1 + 168) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset(&v8, 0, sizeof(v8));
  *a3 = v8;
  try
  {
    *(_BYTE *)(a1 + 112) = 1;
    *a3 = Platform::Details::EventSourceAdd(a1 + 128, a1 + 152, a2);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v6;
}

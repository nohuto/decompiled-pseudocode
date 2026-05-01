/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVObject@8@@Z @ 0x180137CCC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCI@E$AAAJPE$AAVObject@8@@Z @ 0x180137D00 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append@-QIBindableVector@Inte_ea_180137D00.c)
 * Callees:
 *     ?BindableAppend@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAXPE$AAVObject@8@@Z @ 0x18013878C (-BindableAppend@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItem@Common@Mul.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJPE_AAVObject_8__Z(
        __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 168) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    _BindableAppend__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAXPE_AAVObject_8__Z(a1);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v1;
}

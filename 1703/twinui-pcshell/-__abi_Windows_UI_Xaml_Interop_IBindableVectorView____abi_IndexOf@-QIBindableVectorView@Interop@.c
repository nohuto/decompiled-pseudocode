/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_IndexOf@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVObject@8@PEAIPEA_N@Z @ 0x18013B2DC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_IndexOf@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WBI@E$AAAJPE$AAVObject@8@PEAIPEA_N@Z @ 0x18013B330 (-__abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_IndexOf@-QIBindableVector_ea_18013B330.c)
 * Callees:
 *     ?BindableIndexOf@?QIBindableVectorView@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAA_NPE$AAVObject@8@PEAI@Z @ 0x18013B698 (-BindableIndexOf@-QIBindableVectorView@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAUISwitchItem@C.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableVectorView____abi_IndexOf__QIBindableVectorView_Interop_Xaml_UI_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJPE_AAVObject_8_PEAIPEA_N_Z(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_BYTE *)(a1 + 120) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a4 = 0;
  try
  {
    if ( a3 )
      *a3 = 0;
    *a4 = _BindableIndexOf__QIBindableVectorView_Interop_Xaml_UI_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAA_NPE_AAVObject_8_PEAI_Z(a1);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v4;
}

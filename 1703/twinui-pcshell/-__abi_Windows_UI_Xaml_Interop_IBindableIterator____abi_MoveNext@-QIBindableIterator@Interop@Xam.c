/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_MoveNext@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@UE$AAAJPEA_N@Z @ 0x18013B860
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_MoveNext@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@WBA@E$AAAJPEA_N@Z @ 0x18013C990 (-__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_MoveNext@-QIBindableIterato_ea_18013C990.c)
 * Callees:
 *     ?MoveNext@?Q?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAA_NXZ @ 0x18013CCF0 (-MoveNext@-Q-$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Window.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_MoveNext__QIBindableIterator_Interop_Xaml_UI_Windows____IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_Collections_Platform__UE_AAAJPEA_N_Z(
        __int64 a1,
        _BYTE *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 104) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  try
  {
    *a2 = _MoveNext__Q__IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAA_NXZ(a1);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}

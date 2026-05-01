/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPEAPE$AAUIBindableIterator@2345@@Z @ 0x18013B76C
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCA@E$AAAJPEAPE$AAUIBindableIterator@2345@@Z @ 0x18013B7B0 (-__abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First@-QIBindableIterable@I_ea_18013B7B0.c)
 * Callees:
 *     ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableIterator@2345@XZ @ 0x18013D3FC (-BindableFirst@-QIBindableIterable@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAUISwitchItem@Commo.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First__QIBindableIterable_Interop_Xaml_UI_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJPEAPE_AAUIBindableIterator_2345__Z(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 120) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    *a2 = _BindableFirst__QIBindableIterable_Interop_Xaml_UI_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAPE_AAUIBindableIterator_2345_XZ(a1);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}

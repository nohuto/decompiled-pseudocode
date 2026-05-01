/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPEAPE$AAUIBindableIterator@2345@@Z @ 0x1801725C4
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WDA@E$AAAJPEAPE$AAUIBindableIterator@2345@@Z @ 0x180177C40 (-__abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First@-QIBindableIterable@I_ea_180177C40.c)
 * Callees:
 *     ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableIterator@2345@XZ @ 0x180173408 (-BindableFirst@-QIBindableIterable@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItemContextMen.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableIterable____abi_First__QIBindableIterable_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJPEAPE_AAUIBindableIterator_2345__Z(
        __int64 a1,
        _QWORD *a2)
{
  if ( *(_BYTE *)(a1 + 168) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    *a2 = _BindableFirst__QIBindableIterable_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAPE_AAUIBindableIterator_2345_XZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}

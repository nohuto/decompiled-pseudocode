/*
 * XREFs of ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJVTypeName@Interop@345@PEAPE$AAUIXamlType@2345@@Z @ 0x180125F50
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJVTypeName@Interop@345@PEAPE$AAUIXamlType@2345@@Z @ 0x180124CE0 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@-QIXamlMetadataProvi.c)
 * Callees:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x1801230C0 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Composa.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJVTypeName_Interop_345_PEAPE_AAUIXamlType_2345__Z(
        __int64 a1,
        __int128 *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a3 = 0LL;
  try
  {
    v5 = *a2;
    *a3 = _GetXamlType__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIXamlType_2345_VTypeName_Interop_345__Z(
            a1,
            (__int64)&v5);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v3;
}

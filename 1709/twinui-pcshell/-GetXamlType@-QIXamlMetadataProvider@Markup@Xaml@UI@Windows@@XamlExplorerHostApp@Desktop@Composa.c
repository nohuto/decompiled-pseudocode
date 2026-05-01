/*
 * XREFs of ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x18014D7E4
 * Callers:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x18014EDB0 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_18014EDB0.c)
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJVTypeName@Interop@345@PEAPE$AAUIXamlType@2345@@Z @ 0x1801501D0 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@-QIXaml_ea_1801501D0.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x18014DD90 (-GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@VTypeName@.c)
 *     WindowsDeleteString_0 @ 0x1801E31C7 (WindowsDeleteString_0.c)
 *     WindowsDuplicateString_0 @ 0x1801E3435 (WindowsDuplicateString_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _GetXamlType__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIXamlType_2345_VTypeName_Interop_345__Z(
        __int64 a1,
        __int64 a2)
{
  HSTRING v4; // rbx
  HRESULT v5; // eax
  __int128 v6; // xmm0
  __int64 XamlType; // rbx
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  HSTRING newString; // [rsp+70h] [rbp+30h] BYREF

  v9 = 0uLL;
  v4 = *(HSTRING *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)&v9 = 0LL;
    v5 = WindowsDuplicateString_0(v4, &newString);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    *(_QWORD *)&v9 = newString;
  }
  DWORD2(v9) = *(_DWORD *)(a2 + 8);
  v6 = v9;
  *(_OWORD *)a2 = v9;
  v9 = v6;
  XamlType = Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXamlType(*(_QWORD *)(a1 + 96), &v9);
  WindowsDeleteString_0(*(HSTRING *)a2);
  return XamlType;
}

/*
 * XREFs of ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x1801FDA0C
 * Callers:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x1800A9370 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Composa.c)
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__1@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVString@Platform@@PEAPE$AAUIXamlType@2345@@Z @ 0x180200004 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__1@-QIXaml_ea_180200004.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x1801FDB0C (-GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@PE$AAVStri.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetXamlType__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIXamlType_2345_PE_AAVString_Platform___Z(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 XamlType; // [rsp+40h] [rbp+8h]

  XamlType = Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXamlType(*(_QWORD *)(a1 + 96));
  v1 = __abi_winrt_ptr_ctor(XamlType);
  __abi_winrt_ptr_dtor(XamlType);
  return v1;
}

/*
 * XREFs of ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x180151840
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAIPEAPEAVXmlnsDefinition@2345@@Z @ 0x18014FE88 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@-QIX_ea_18014FE88.c)
 *     ?__abi_Platform_?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@____abi_get_Value@?Q?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJPEAIPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@@Z @ 0x180151930 (-__abi_Platform_-$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@____abi_get_Value@-Q-$IBoxA.c)
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x180151730 (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::__abi_array_copy_to_and_release<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
        __int64 a1,
        char **a2,
        _DWORD *a3)
{
  __int64 v5; // rdx

  v5 = 0LL;
  if ( a1 )
  {
    if ( !a2 || !a3 )
    {
      __abi_WinRTraiseNullReferenceException();
      JUMPOUT(0x180151924LL);
    }
    if ( *(_DWORD *)(a1 + 72) )
    {
      if ( !*(_QWORD *)(a1 + 80) )
      {
        __abi_WinRTraiseFailureException();
        __debugbreak();
      }
      if ( !*(_BYTE *)(a1 + 76) && *(_QWORD *)(a1 + 88) && *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12LL) == 1 )
      {
        *a2 = *(char **)(a1 + 80);
        *a3 = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 76) = 0;
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        if ( !*(_BYTE *)(a1 + 76) && (!*(_QWORD *)(a1 + 88) || *(int *)(*(_QWORD *)(a1 + 88) + 12LL) <= 1) )
        {
          __abi_WinRTraiseFailureException();
          __debugbreak();
        }
        *a2 = Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::AllocateAndCopyElements(
                *(_QWORD *)(a1 + 80),
                *(_DWORD *)(a1 + 72));
        *a3 = *(_DWORD *)(a1 + 72);
      }
    }
    else
    {
      *a2 = 0LL;
      *a3 = 0;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, v5);
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0;
  }
}

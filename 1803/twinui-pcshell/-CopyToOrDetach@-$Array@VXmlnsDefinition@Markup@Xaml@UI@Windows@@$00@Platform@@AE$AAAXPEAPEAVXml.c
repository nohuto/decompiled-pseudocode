/*
 * XREFs of ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x1801FD4D0
 * Callers:
 *     ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x1801FC424 (--$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform.c)
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x1801FD418 (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 */

void __fastcall Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::CopyToOrDetach(
        __int64 a1,
        char **a2,
        _DWORD *a3)
{
  if ( !a2 || !a3 )
  {
    __abi_WinRTraiseNullReferenceException();
    JUMPOUT(0x1801FD597LL);
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
              *(_QWORD **)(a1 + 80),
              *(_DWORD *)(a1 + 72));
      *a3 = *(_DWORD *)(a1 + 72);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0;
  }
}

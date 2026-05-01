/*
 * XREFs of ?_Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAXXZ @ 0x180151C8C
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$AAAXXZ @ 0x180151B00 (-_Dispose_@-QIDisposable@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCI@E$AAAXXZ @ 0x180151CC0 (-_Dispose_@-QIDisposable@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCI@E$.c)
 * Callees:
 *     ??1?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ @ 0x180151BFC (--1-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ.c)
 */

void __fastcall __Dispose___QIDisposable_Platform____Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAXXZ(
        __int64 a1)
{
  __int64 v1; // rcx

  if ( !*(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 1;
    v1 = a1 + 32;
    if ( v1 )
    {
      if ( !*(_BYTE *)(v1 + 72) )
      {
        *(_BYTE *)(v1 + 72) = 1;
        Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::~WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(v1);
      }
    }
  }
}

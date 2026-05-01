/*
 * XREFs of ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJXZ @ 0x180151BAC
 * Callers:
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$AAAJXZ @ 0x180151AF0 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@VXmlnsDefinition@Ma.c)
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCI@E$AAAJXZ @ 0x180151BF0 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@VXmlns_ea_180151BF0.c)
 * Callees:
 *     ??1?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ @ 0x180151BFC (--1-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Platform_IDisposable____abi__Dispose___QIDisposable_Platform____Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAJXZ(
        __int64 a1)
{
  __int64 v1; // rcx

  try
  {
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
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}

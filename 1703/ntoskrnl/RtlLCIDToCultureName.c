/*
 * XREFs of RtlLCIDToCultureName @ 0x1406EB9D0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x140157210 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1404E5A58 (PnpGetDevicePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405B7C0C (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405B82DC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDevicePropertyData @ 0x1405B8E08 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405C4248 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14069629C (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140748098 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140748934 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1407494FC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14074994C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x140136C20 (DownLevelLangIDToLanguageName.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_14038A250, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_14038A250);
          return 1;
        }
      }
    }
  }
  return v2;
}

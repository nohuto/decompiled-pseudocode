/*
 * XREFs of RtlLCIDToCultureName @ 0x140723C40
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x140141830 (RtlpGetNameFromLangInfoNode.c)
 *     PnpSetDevicePropertyData @ 0x14052F3A8 (PnpSetDevicePropertyData.c)
 *     PnpGetDevicePropertyData @ 0x14054F4F8 (PnpGetDevicePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405BD8FC (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405BDFE4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405D37B8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406C1E54 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14078A8EC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14078B090 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14078BC60 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14078C0B0 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1401326FC (DownLevelLangIDToLanguageName.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, word_1403A5E10, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_1403A5E10);
          return 1;
        }
      }
    }
  }
  return v2;
}

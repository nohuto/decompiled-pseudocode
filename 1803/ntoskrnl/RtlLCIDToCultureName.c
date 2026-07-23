/*
 * XREFs of RtlLCIDToCultureName @ 0x140787510
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x140179B48 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x140587428 (PnpGetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1406024B8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x1406061E8 (PnpSetDevicePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140635D80 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140636454 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140727E88 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1407F6DA4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1407F7548 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1407F8120 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1407F8570 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x14014D880 (DownLevelLangIDToLanguageName.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, word_1403EBD40, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_1403EBD40);
          return 1;
        }
      }
    }
  }
  return v2;
}

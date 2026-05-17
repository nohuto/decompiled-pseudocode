/*
 * XREFs of LdrpCreateLangFallbackList @ 0x180052B14
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180004C20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180005240 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180005620 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180052960 (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall LdrpCreateLangFallbackList(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // r8
  __int64 LanguageList; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = a2;
  LOBYTE(a2) = a4;
  LanguageList = RtlpMuiRegCreateLanguageList(a3, a2, v6);
  *a1 = LanguageList;
  return LanguageList == 0 ? 0xC0000017 : 0;
}

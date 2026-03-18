/*
 * XREFs of LdrpGetParentLangId @ 0x140136BB0
 * Callers:
 *     LdrResFallbackLangList @ 0x140429D14 (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x14042A354 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x140136C20 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140157950 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x1402611D8 (DownLevelGetParentLanguageName.c)
 */

__int64 __fastcall LdrpGetParentLangId(__int64 a1, _WORD *a2)
{
  _BYTE v4[176]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v5[176]; // [rsp+D0h] [rbp-C8h] BYREF

  if ( !a2 || !(unsigned int)DownLevelLangIDToLanguageName(a1, v4, 85LL) )
    return 3221225485LL;
  if ( (int)DownLevelGetParentLanguageName(v4, v5) >= 2 )
    *a2 = DownLevelLanguageNameToLangID(v5, 2LL);
  else
    *a2 = 0;
  return 0LL;
}

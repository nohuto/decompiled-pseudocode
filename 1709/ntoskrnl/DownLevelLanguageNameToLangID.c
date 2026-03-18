/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x140141F70
 * Callers:
 *     LdrpGetParentLangId @ 0x14013268C (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x1404DB330 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x1405BE3E0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x14071F980 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140835FC0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14014200C (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x14015EEB0 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_1402B69C0, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_1402B7760)[2 * word_1402CC9B0[(v3 - (_BYTE *)&off_1402B69C0) >> 3]], (v2 & 2) != 0)
     || !(unsigned int)IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}

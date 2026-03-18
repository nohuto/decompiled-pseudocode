/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x140157950
 * Callers:
 *     LdrpGetParentLangId @ 0x140136BB0 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x1404295F0 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x1405B86E0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1406E7BA0 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14014B550 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x14016A470 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140289870, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_14028A610)[2 * word_1402A8AD0[(v3 - (_BYTE *)&off_140289870) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}

/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x14017A2B8
 * Callers:
 *     LdrpGetParentLangId @ 0x14014D810 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x1405BD3B0 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x140636850 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x140783060 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1408B87E4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14016E704 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x140188C00 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_1402EEA20, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_1402EF7C0)[2 * word_140305A20[(v3 - (_BYTE *)&off_1402EEA20) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}

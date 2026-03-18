/*
 * XREFs of ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14014200C
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x1401326FC (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140141F70 (DownLevelLanguageNameToLangID.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNeutralLanguageItem(const struct CultureDataType *a1)
{
  return *((_DWORD *)a1 + 3) == 124 && *((_WORD *)a1 + 4) != 127;
}

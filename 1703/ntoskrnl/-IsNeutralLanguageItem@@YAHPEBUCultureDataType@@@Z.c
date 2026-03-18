/*
 * XREFs of ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14014B550
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x140136C20 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140157950 (DownLevelLanguageNameToLangID.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNeutralLanguageItem(const struct CultureDataType *a1)
{
  return *((_DWORD *)a1 + 3) == 124 && *((_WORD *)a1 + 4) != 127;
}

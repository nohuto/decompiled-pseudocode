/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x1401326FC
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400ADB40 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DCE94 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetParentLangId @ 0x14013268C (LdrpGetParentLangId.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401418D0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     LdrResSearchResource @ 0x1404DB330 (LdrResSearchResource.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 *     RtlLCIDToCultureName @ 0x140723C40 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140835FC0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1401327C0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14014200C (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x14015EEB0 (bsearch.c)
 */

__int64 __fastcall DownLevelLangIDToLanguageName(__int16 a1, unsigned __int16 *a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  char v5; // bl
  const struct CultureDataType *v7; // rcx
  const unsigned __int16 *v9; // r8
  __int64 v10; // rbx
  __int16 Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v4 = a3;
  v5 = a4;
  if ( a3 < 0 || !a2 && a3 )
    return 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = (const struct CultureDataType *)bsearch(
                                         &Key,
                                         &off_1402B7760,
                                         0x1B3uLL,
                                         0x10uLL,
                                         (int (__cdecl *)(const void *, const void *))CompareLangIDs);
  if ( !v7 || (v5 & 2) == 0 && (unsigned int)IsNeutralLanguageItem(v7) )
    return 0LL;
  v9 = *(const unsigned __int16 **)v7;
  v10 = -1LL;
  do
    ++v10;
  while ( v9[v10] );
  if ( a2 && (int)StringCchCopyNW(a2, v4, v9, v10 + 1) < 0 )
    return 0LL;
  else
    return (unsigned int)(v10 + 1);
}

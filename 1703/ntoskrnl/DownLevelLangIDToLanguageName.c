/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x140136C20
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400120D4 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x140013300 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetParentLangId @ 0x140136BB0 (LdrpGetParentLangId.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401572B0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     LdrResSearchResource @ 0x1404295F0 (LdrResSearchResource.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     RtlLCIDToCultureName @ 0x1406EB9D0 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140149514 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14014B550 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x14016A470 (bsearch.c)
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
                                         &off_14028A610,
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

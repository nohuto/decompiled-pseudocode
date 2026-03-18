/*
 * XREFs of BgpFoGetFontHandle @ 0x140757E80
 * Callers:
 *     ResFwConfigureDisplayStringResources @ 0x1407557F4 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140755880 (AnFwConfigureProgressResources.c)
 *     BgpTxtCreateRegion @ 0x140756A9C (BgpTxtCreateRegion.c)
 *     BgpTxtGetRegionContext @ 0x140757DE0 (BgpTxtGetRegionContext.c)
 *     BgpConsoleInitialize @ 0x140758740 (BgpConsoleInitialize.c)
 *     BgpFoDetermineFontInformation @ 0x140837CE8 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 */

__int64 __fastcall BgpFoGetFontHandle(wchar_t *Str2, __int64 **a2)
{
  int v4; // esi
  __int64 i; // rdi
  __int64 *j; // rbx

  v4 = -1073741275;
  if ( !a2 || !FontLibraryInitialized )
    return 3221225485LL;
  *a2 = 0LL;
  for ( i = FopFontFileListHead; (__int64 *)i != &FopFontFileListHead; i = *(_QWORD *)i )
  {
    for ( j = *(__int64 **)(i + 40); j != (__int64 *)(i + 40); j = (__int64 *)*j )
    {
      if ( Str2 )
      {
        if ( !wcsicmp((const wchar_t *)j[4], Str2) )
        {
LABEL_11:
          *a2 = j;
          v4 = 0;
          break;
        }
      }
      else if ( (*(_DWORD *)(i + 28) & 1) != 0 )
      {
        goto LABEL_11;
      }
    }
    if ( v4 >= 0 )
      break;
  }
  return (unsigned int)v4;
}

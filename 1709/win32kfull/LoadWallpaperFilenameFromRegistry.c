/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x1C011EE70
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSetDeskWallpaper @ 0x1C011EB54 (xxxSetDeskWallpaper.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01F7BAC (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, wchar_t *a2, unsigned int a3)
{
  size_t v4; // rsi
  wchar_t pszSrc[24]; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v4 = a3;
  memset(pszSrc, 0, 0x28uLL);
  memset(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, pszSrc, 20LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, pszSrc, a2, v4, 8) )
    RtlStringCchCopyW(a2, v4, pszSrc);
  RtlLoadStringOrError(71LL, Str2, 40LL);
  if ( !_wcsicmp(a2, Str2) )
    GetDefaultWallpaperName(a2, v4);
  return 1LL;
}

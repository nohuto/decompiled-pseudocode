/*
 * XREFs of ?IsSolidColorBackground@HideWallpaperIconsObject@@AEAA_NXZ @ 0x18030A6F0
 * Callers:
 *     ?ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ @ 0x18030A7B8 (-ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

bool __fastcall HideWallpaperIconsObject::IsSolidColorBackground(HideWallpaperIconsObject *this)
{
  _WORD pvParam[264]; // [rsp+20h] [rbp-228h] BYREF

  memset_0(pvParam, 0, 0x208uLL);
  SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
  return pvParam[0] == 0;
}

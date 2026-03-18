/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x1C007BB64
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0076268 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00982B4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  unsigned int AppCompatFlags2; // eax

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, AppCompatFlags2);
}

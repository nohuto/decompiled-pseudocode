/*
 * XREFs of GetWindowFrameMetricForDpi @ 0x1C007BB8C
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0076268 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 * Callees:
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C007C400 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpi(__int64 a1, unsigned int a2)
{
  unsigned int AppCompatFlags2; // eax
  int v4; // ecx

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowFrameMetricForDpiWithCompatFlags2(v4, a2, AppCompatFlags2);
}

/*
 * XREFs of GetWindowFrameMetric @ 0x1C00C28F0
 * Callers:
 *     GetWindowNCMetrics @ 0x1C00452A4 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C00C30C8 (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 GetWindowFrameMetric()
{
  int AppCompatFlags2WithDPIAware; // eax
  __int64 v1; // rcx

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowFrameMetricInternal(v1, AppCompatFlags2WithDPIAware, 0);
}

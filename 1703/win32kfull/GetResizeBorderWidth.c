/*
 * XREFs of GetResizeBorderWidth @ 0x1C00C28B8
 * Callers:
 *     GetWindowNCMetrics @ 0x1C00452A4 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C00C30C8 (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 GetResizeBorderWidth()
{
  int AppCompatFlags2WithDPIAware; // eax
  unsigned int v1; // edx

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  if ( (AppCompatFlags2WithDPIAware & 0x2000000) != 0 )
    v1 = *(unsigned __int16 *)(gpsi + 8678LL);
  else
    v1 = 96;
  return GetResizeBorderWidthInternal(AppCompatFlags2WithDPIAware, v1);
}

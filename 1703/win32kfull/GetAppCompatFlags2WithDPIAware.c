/*
 * XREFs of GetAppCompatFlags2WithDPIAware @ 0x1C00C30C8
 * Callers:
 *     GetWindowBorders @ 0x1C00C285C (GetWindowBorders.c)
 *     GetResizeBorderWidth @ 0x1C00C28B8 (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C00C28F0 (GetWindowFrameMetric.c)
 *     GetWindowBordersForDpi @ 0x1C00C3088 (GetWindowBordersForDpi.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 */

__int64 GetAppCompatFlags2WithDPIAware()
{
  unsigned int AppCompatFlags2; // ebx

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    AppCompatFlags2 |= 0x2000000u;
  return AppCompatFlags2;
}

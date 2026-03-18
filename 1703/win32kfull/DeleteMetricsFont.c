/*
 * XREFs of DeleteMetricsFont @ 0x1C01C3FF4
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C00454B4 (GetScaledLogFontForDpi.c)
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3B24 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3B98 (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1C000C828 (GreMarkDeletableFont.c)
 */

__int64 __fastcall DeleteMetricsFont(struct HLFONT__ *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    GreMarkDeletableFont(a1);
    return GreDeleteObject(a1);
  }
  return result;
}

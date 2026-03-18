/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C000B8E0
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C000B83C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C013DA38 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3B24 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

void InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  __int64 i; // rbx

  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPIMETRICS((struct tagDpiKMMetricsCacheNode *)i);
}

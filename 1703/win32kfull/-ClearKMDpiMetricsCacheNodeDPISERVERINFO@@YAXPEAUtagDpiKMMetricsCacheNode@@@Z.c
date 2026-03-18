/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3B98
 * Callers:
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     DestroyDpiMetricsCache @ 0x1C011CA50 (DestroyDpiMetricsCache.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     DeleteMetricsFont @ 0x1C01C3FF4 (DeleteMetricsFont.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPISERVERINFO(struct tagDpiKMMetricsCacheNode *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  DeleteMetricsFont(*((_QWORD *)a1 + 5));
  DeleteMetricsFont(*((_QWORD *)a1 + 8));
  memset((char *)a1 + 16, 0, 0x80uLL);
  *((_WORD *)a1 + 1) = 1;
}

/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3B24
 * Callers:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C000B8E0 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     DestroyDpiMetricsCache @ 0x1C011CA50 (DestroyDpiMetricsCache.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     DeleteMetricsFont @ 0x1C01C3FF4 (DeleteMetricsFont.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPIMETRICS(struct tagDpiKMMetricsCacheNode *a1)
{
  char *v1; // rbx

  v1 = (char *)a1 + 144;
  DeleteMetricsFont(*((_QWORD *)a1 + 18));
  DeleteMetricsFont(*((_QWORD *)a1 + 24));
  DeleteMetricsFont(*((_QWORD *)a1 + 25));
  DeleteMetricsFont(*((_QWORD *)a1 + 26));
  DeleteMetricsFont(*((_QWORD *)a1 + 22));
  memset(v1, 0, 0x48uLL);
  *((_WORD *)a1 + 1) = 1;
}

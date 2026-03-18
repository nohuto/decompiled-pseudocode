/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C0082568
 * Callers:
 *     ?DestroyDpiMetricsCache@@YAXXZ @ 0x1C0082460 (-DestroyDpiMetricsCache@@YAXXZ.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00824D0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00825A0 (DeleteMetricsFont.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset(a1, 0, 0x68uLL);
}

/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C006A6E0
 * Callers:
 *     PortTraceInitTracing @ 0x1C0048714 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C0048488 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C006A704 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}

/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C00695E4
 * Callers:
 *     PortTraceInitTracing @ 0x1C00492B4 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C0049028 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C0069608 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}

/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C0066D8C
 * Callers:
 *     PortTraceInitTracing @ 0x1C0047D0C (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitRecords @ 0x1C0066DB0 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(__int64 a1)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(a1);
}

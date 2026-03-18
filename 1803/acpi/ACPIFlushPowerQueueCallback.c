/*
 * XREFs of ACPIFlushPowerQueueCallback @ 0x1C0012090
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C00442C0 (AMLIRestartContext.c)
 */

__int64 __fastcall ACPIFlushPowerQueueCallback(__int64 a1, __int64 a2)
{
  return AMLIRestartContext(a2);
}

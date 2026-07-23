/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x140137C40
 * Callers:
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x1406FF020 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}

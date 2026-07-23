/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x1400CEC60
 * Callers:
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x140764950 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}

/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x140143630
 * Callers:
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x1406CB0A0 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}

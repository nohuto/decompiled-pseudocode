/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1400E270C
 * Callers:
 *     ExSetTimer @ 0x1400E0EB0 (ExSetTimer.c)
 *     ExpSetTimer2 @ 0x1400E2540 (ExpSetTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}

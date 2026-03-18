/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x140038B4C
 * Callers:
 *     ExpSetTimerObject2 @ 0x140038A8C (ExpSetTimerObject2.c)
 *     ExSetTimer @ 0x140085490 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}

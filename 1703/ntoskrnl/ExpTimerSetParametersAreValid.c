/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x140051EBC
 * Callers:
 *     ExpSetTimer2 @ 0x140051C60 (ExpSetTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}

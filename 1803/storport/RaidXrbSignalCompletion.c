/*
 * XREFs of RaidXrbSignalCompletion @ 0x1C000D8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall RaidXrbSignalCompletion(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(a1 + 664), 0, 0);
}

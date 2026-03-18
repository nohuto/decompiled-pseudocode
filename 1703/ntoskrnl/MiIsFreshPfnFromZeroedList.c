/*
 * XREFs of MiIsFreshPfnFromZeroedList @ 0x14017D250
 * Callers:
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFreshPfnFromZeroedList(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0;
}

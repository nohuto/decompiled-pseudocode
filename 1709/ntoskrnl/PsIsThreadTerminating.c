/*
 * XREFs of PsIsThreadTerminating @ 0x1400E6D30
 * Callers:
 *     NtClose @ 0x1404AE620 (NtClose.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}

/*
 * XREFs of PsIsThreadImpersonating @ 0x140572360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1736) & 8) != 0;
}

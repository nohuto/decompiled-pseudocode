/*
 * XREFs of PepSetTimeWindow @ 0x1C000A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PepSetTimeWindow(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 36) = a2;
}

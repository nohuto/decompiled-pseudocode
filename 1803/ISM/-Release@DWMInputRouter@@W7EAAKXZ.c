/*
 * XREFs of ?Release@DWMInputRouter@@W7EAAKXZ @ 0x180082270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 8));
}

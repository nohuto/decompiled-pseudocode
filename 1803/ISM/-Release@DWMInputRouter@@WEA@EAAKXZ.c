/*
 * XREFs of ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x180082400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 64));
}

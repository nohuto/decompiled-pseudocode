/*
 * XREFs of ?Release@CProcess@@WBA@EAAKXZ @ 0x18000FA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::Release(__int64 a1)
{
  return CUnknown::Release((CUnknown *)(a1 - 16));
}

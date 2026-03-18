/*
 * XREFs of GetTouchHoldTime @ 0x1C01E7470
 * Callers:
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01EA134 (-PassedHoldTime@@YAHK_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetTouchHoldTime()
{
  return GetTouchTimeFromCPLValue(0x3E8u, 0x3E8u, 8u, 0);
}

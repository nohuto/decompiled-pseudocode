/*
 * XREFs of GetTouchHoldTime @ 0x1C01F3470
 * Callers:
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01F60CC (-PassedHoldTime@@YAHK_K0@Z.c)
 * Callees:
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F2F1C (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 */

__int64 GetTouchHoldTime()
{
  return GetTouchTimeFromCPLValue(0x3E8u, 0x3E8u, 8u, 0);
}

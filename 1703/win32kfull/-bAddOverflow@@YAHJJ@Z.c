/*
 * XREFs of ?bAddOverflow@@YAHJJ@Z @ 0x1C02B1788
 * Callers:
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02B36D8 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bAddOverflow(int a1)
{
  return a1 >= 0 && 0x7FFFFFFF - a1 < 4;
}

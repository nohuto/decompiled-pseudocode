/*
 * XREFs of EditionIsHotKey @ 0x1C01C6FA0
 * Callers:
 *     <none>
 * Callees:
 *     IsHotKey @ 0x1C00FA3CC (IsHotKey.c)
 */

_BOOL8 __fastcall EditionIsHotKey(int a1, int a2)
{
  return IsHotKey(a1, a2) != 0LL;
}

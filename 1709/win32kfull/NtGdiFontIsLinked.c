/*
 * XREFs of NtGdiFontIsLinked @ 0x1C00C1830
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C00C1844 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}

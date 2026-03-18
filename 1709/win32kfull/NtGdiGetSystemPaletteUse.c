/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x1C00DF3E0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1C00DFA88 (GreGetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}

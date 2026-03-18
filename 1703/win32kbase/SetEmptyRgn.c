/*
 * XREFs of SetEmptyRgn @ 0x1C00444E0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C0040BF0 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, gZero.LowPart, gZero.HighPart, 0, 0);
}

/*
 * XREFs of SetEmptyRgn @ 0x1C0057010
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(struct HOBJ__ *a1)
{
  return GreSetRectRgn(a1, gZero.LowPart, gZero.HighPart, 0, 0);
}

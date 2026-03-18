/*
 * XREFs of NtGdiScaleRgn @ 0x1C028B3E0
 * Callers:
 *     <none>
 * Callees:
 *     GreScaleRgn @ 0x1C027A240 (GreScaleRgn.c)
 */

__int64 __fastcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  return GreScaleRgn(a1, a2);
}

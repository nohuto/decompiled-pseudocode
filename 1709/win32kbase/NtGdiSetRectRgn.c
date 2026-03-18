/*
 * XREFs of NtGdiSetRectRgn @ 0x1C00FB9A0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 */

__int64 __fastcall NtGdiSetRectRgn(struct HOBJ__ *a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  return GreSetRectRgn(a1, a2, a3, a4, a5);
}

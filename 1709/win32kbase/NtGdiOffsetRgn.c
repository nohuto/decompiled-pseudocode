/*
 * XREFs of NtGdiOffsetRgn @ 0x1C0094430
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C00569D0 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(struct HOBJ__ *a1, LONG a2, LONG a3)
{
  return GreOffsetRgn(a1, a2, a3);
}

/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C0055B40
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 */

HDC __fastcall NtGdiCreateCompatibleDC(struct HOBJ__ *a1)
{
  return GreCreateCompatibleDC(a1);
}

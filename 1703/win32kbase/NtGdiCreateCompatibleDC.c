/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C002BB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}

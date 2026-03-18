/*
 * XREFs of NtGdiSelectFont @ 0x1C002B360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}

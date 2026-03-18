/*
 * XREFs of NtGdiEndDoc @ 0x1C011CCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiEndDoc(HDC a1)
{
  return bEndDocInternal(a1, 0, 1u);
}

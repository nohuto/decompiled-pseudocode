/*
 * XREFs of NtGdiAbortDoc @ 0x1C0255EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiAbortDoc(HDC a1)
{
  return bEndDocInternal(a1, 1u, 1);
}

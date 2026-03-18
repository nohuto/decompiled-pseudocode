/*
 * XREFs of NtGdiSelectBitmap @ 0x1C00E57D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSelectBitmap(__int64 a1, __int64 a2)
{
  return hbmSelectBitmapInternal(a1, a2, 0LL, 0LL, 0);
}

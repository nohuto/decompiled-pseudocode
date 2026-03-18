/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x1C01391F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiGetBitmapDpiScaleValue(__int64 a1)
{
  return GreGetBitmapDpiScaleValue(a1);
}

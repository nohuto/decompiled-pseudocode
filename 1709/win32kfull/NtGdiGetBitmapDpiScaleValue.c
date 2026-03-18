/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x1C013F6F0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x1C013F704 (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(__int64 a1)
{
  return GreGetBitmapDpiScaleValue(a1);
}

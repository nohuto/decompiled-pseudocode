/*
 * XREFs of NtGdiGetDCDpiScaleValue @ 0x1C0082CC0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0082CD4 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetDCDpiScaleValue(HDC a1)
{
  return GreGetDCDpiScaleValue(a1);
}

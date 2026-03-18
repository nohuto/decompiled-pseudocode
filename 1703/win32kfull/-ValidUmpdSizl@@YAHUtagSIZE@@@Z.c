/*
 * XREFs of ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C0116244
 * Callers:
 *     NtGdiEngCreateBitmap @ 0x1C0116090 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C01161D0 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x1C0291350 (NtGdiEngCreateDeviceBitmap.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidUmpdSizl(struct tagSIZE a1)
{
  bool result; // al

  result = 0;
  if ( a1.cx > 0 && a1.cy > 0 )
    return (unsigned __int64)(a1.cx * (__int64)a1.cy) <= 0xFFFFFFFF;
  return result;
}

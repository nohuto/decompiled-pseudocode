/*
 * XREFs of ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C011FF34
 * Callers:
 *     NtGdiEngCreateBitmap @ 0x1C011FD80 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C011FEC0 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x1C028DA60 (NtGdiEngCreateDeviceBitmap.c)
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

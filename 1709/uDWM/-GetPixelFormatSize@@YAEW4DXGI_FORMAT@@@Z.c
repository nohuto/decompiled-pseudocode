/*
 * XREFs of ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18004497C
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180043210 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180044878 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009FF34 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A10FC (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall GetPixelFormatSize(int a1)
{
  if ( a1 <= 61 )
  {
    if ( a1 != 61 )
    {
      if ( a1 == 2 )
        return 0x80;
      if ( a1 > 9 )
      {
        if ( a1 <= 11 )
          return 64;
        if ( a1 == 24 || a1 == 28 )
          return 32;
        if ( a1 == 49 )
          return 16;
      }
      return 0;
    }
    return 8;
  }
  if ( a1 == 65 )
    return 8;
  if ( a1 <= 86 )
    return 0;
  if ( a1 <= 88 )
    return 32;
  if ( a1 != 103 && (unsigned int)(a1 - 106) > 1 )
    return 0;
  return 12;
}

/*
 * XREFs of IsSolidColorSurface @ 0x1801C6618
 * Callers:
 *     DebugInspectSysMemSurface_NoOpt @ 0x1801C60E0 (DebugInspectSysMemSurface_NoOpt.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

char __fastcall IsSolidColorSurface(char *Src, unsigned int a2, unsigned int a3, int a4, int a5)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned __int8 v10; // di
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rcx
  _BYTE Buf1[16]; // [rsp+28h] [rbp-50h] BYREF

  PixelFormatSize = GetPixelFormatSize(a4);
  if ( (PixelFormatSize & 7) != 0 )
    return 0;
  v10 = PixelFormatSize >> 3;
  memcpy_0(Buf1, Src, PixelFormatSize >> 3);
  v11 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v12 = 0;
      if ( a2 )
        break;
LABEL_8:
      if ( ++v11 >= a3 )
        return 1;
    }
    v13 = (unsigned int)(a5 * v11);
    while ( !memcmp_0(Buf1, &Src[v13 + v12 * (unsigned int)v10], v10) )
    {
      v13 = (unsigned int)(a5 * v11);
      if ( ++v12 >= a2 )
        goto LABEL_8;
    }
    return 0;
  }
  return 1;
}

/*
 * XREFs of ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x18007D9D0
 * Callers:
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x18007DD70 (-HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x1801ABA20 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18007DA30 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 */

char __fastcall IsValidPixelFormatInfo(enum DXGI_FORMAT *a1)
{
  int v1; // ecx
  __int64 v2; // rdx
  int v3; // ecx
  bool v4; // zf
  char v5; // cl
  bool v6; // al
  unsigned int v7; // eax

  if ( !(unsigned int)IsValidPixelFormat(*a1) )
    return 0;
  if ( (unsigned int)HasAlphaChannel(v1) )
  {
    v4 = v3 == 24;
    v5 = 1;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v2 + 4) != 1;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = 1;
    if ( (unsigned int)(*(_DWORD *)(v2 + 4) - 1) <= 1 )
      return 0;
  }
  v6 = 1;
LABEL_5:
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(v2 + 8);
  if ( v7 > 3 && v7 - 5 > 0xC )
    return 0;
  return v5;
}

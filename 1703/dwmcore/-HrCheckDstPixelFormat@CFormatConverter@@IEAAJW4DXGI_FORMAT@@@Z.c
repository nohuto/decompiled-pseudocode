/*
 * XREFs of ?HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801AB864
 * Callers:
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x1801ABA20 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFormatConverter::HrCheckDstPixelFormat(CFormatConverter *this, int a2)
{
  unsigned int v2; // ecx

  v2 = -2003292288;
  if ( a2 == 2 || a2 > 9 && (a2 <= 11 || a2 == 24 || a2 == 28 || (unsigned int)(a2 - 87) <= 1) )
    return 0;
  return v2;
}

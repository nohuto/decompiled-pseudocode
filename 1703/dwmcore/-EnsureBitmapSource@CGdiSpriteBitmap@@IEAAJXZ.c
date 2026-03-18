/*
 * XREFs of ?EnsureBitmapSource@CGdiSpriteBitmap@@IEAAJXZ @ 0x1800557E8
 * Callers:
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x180055BA0 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::EnsureBitmapSource(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  int Bitmap; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 10) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)this + 30));
    v1 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0x128u);
  }
  return v1;
}

/*
 * XREFs of ?EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x180093A34
 * Callers:
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x180094AF0 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180094860 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::EnsureBitmapRealization(CGdiSpriteBitmap *this)
{
  int Bitmap; // eax

  if ( !*((_QWORD *)this + 48) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)this + 22));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bitmap, 0x124u);
  }
  return *((_QWORD *)this + 48) != 0LL;
}

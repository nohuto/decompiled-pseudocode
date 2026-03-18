/*
 * XREFs of ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x180055C30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateSurface(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UPDATESURFACE *a3)
{
  unsigned int v3; // ebx
  enum DXGI_FORMAT v4; // edx
  int Bitmap; // eax

  v3 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v4 = *((_DWORD *)a3 + 2);
    if ( v4 != *((_DWORD *)this + 30) )
    {
      Bitmap = CGdiSpriteBitmap::CreateBitmap(this, v4);
      v3 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0xEDu);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE8u);
  }
  return v3;
}

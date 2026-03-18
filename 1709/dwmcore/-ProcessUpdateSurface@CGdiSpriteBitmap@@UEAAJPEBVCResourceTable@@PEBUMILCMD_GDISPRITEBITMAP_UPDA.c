/*
 * XREFs of ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x18009E3F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18009DF10 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateSurface(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UPDATESURFACE *a3)
{
  unsigned int v3; // ebx
  enum DXGI_FORMAT v4; // edx
  signed int Bitmap; // eax

  v3 = 0;
  if ( *((_QWORD *)this + 9) )
  {
    v4 = *((_DWORD *)a3 + 2);
    if ( v4 != *((_DWORD *)this + 22) )
    {
      Bitmap = CGdiSpriteBitmap::CreateBitmap(this, v4);
      v3 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bitmap, 0x9Au);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x95u);
  }
  return v3;
}

/*
 * XREFs of ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x18009E360
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18007F070 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x18009D1B8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdate(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP *a3)
{
  HLSURF v5; // rcx
  __int64 v6; // rax
  signed int v7; // eax
  unsigned int v8; // edi

  if ( *((_QWORD *)this + 9) || (v5 = (HLSURF)*((_QWORD *)a3 + 1)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180201E18, 3u, 0x88980403, 0x78u);
  }
  else
  {
    v6 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 9) = v5;
    v7 = CRedirectedGDISurface::Create(
           v5,
           this,
           (struct CLegacySurfaceManager *)(*(_QWORD *)(v6 + 80) + 96LL),
           (struct CRedirectedGDISurface **)this + 10);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180201E18, 3u, v7, 0x81u);
    }
    else
    {
      *((_BYTE *)this + 116) = *((_BYTE *)this + 116) & 0xDF | (*((_DWORD *)a3 + 4) != 0 ? 0x20 : 0);
      CGdiSpriteBitmap::EnsureBitmapRealization(this);
    }
  }
  return v8;
}

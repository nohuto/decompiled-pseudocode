/*
 * XREFs of ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x180094AF0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18001F7D0 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x180093A34 (-EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdate(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP *a3)
{
  HLSURF v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi

  if ( *((_QWORD *)this + 9) || (v5 = (HLSURF)*((_QWORD *)a3 + 1)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276988, 3u, -2003303421, 0x78u);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276988, 3u, v7, 0x81u);
    }
    else
    {
      *((_BYTE *)this + 116) = *((_BYTE *)this + 116) & 0xDF | (*((_DWORD *)a3 + 4) != 0 ? 0x20 : 0);
      CGdiSpriteBitmap::EnsureBitmapRealization(this);
    }
  }
  return v8;
}

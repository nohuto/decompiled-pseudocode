/*
 * XREFs of ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x180055BA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?EnsureBitmapSource@CGdiSpriteBitmap@@IEAAJXZ @ 0x1800557E8 (-EnsureBitmapSource@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800B0840 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
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

  if ( *((_QWORD *)this + 13) || (v5 = (HLSURF)*((_QWORD *)a3 + 1)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, &dword_1801F35B8, 3u, -2003303421, 0x8Fu);
  }
  else
  {
    v6 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 13) = v5;
    v7 = CRedirectedGDISurface::Create(
           v5,
           this,
           (struct CLegacySurfaceManager *)(*(_QWORD *)(v6 + 40) + 96LL),
           (struct CRedirectedGDISurface **)this + 14);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F35B8, 3u, v7, 0x98u);
    }
    else
    {
      *((_BYTE *)this + 148) = *((_BYTE *)this + 148) & 0xBF | (*((_DWORD *)a3 + 4) != 0 ? 0x40 : 0);
      CGdiSpriteBitmap::EnsureBitmapSource(this);
    }
  }
  return v8;
}

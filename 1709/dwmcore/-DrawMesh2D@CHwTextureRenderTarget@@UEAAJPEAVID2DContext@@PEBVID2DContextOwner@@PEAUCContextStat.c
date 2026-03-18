/*
 * XREFs of ?DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801AD210
 * Callers:
 *     ?DrawMesh2D@CHwTextureRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800C6930 (-DrawMesh2D@CHwTextureRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801B725C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 */

__int64 __fastcall CHwTextureRenderTarget::DrawMesh2D(
        CHwTextureRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3,
        struct CContextState *a4,
        struct CGeometry2D *a5,
        struct IBitmapSource *a6)
{
  signed int v6; // eax
  unsigned int v7; // ebx

  v6 = CHwSurfaceRenderTarget::DrawMesh2D(this, a2, a3, a4, a5, a6);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x9Cu);
  return v7;
}

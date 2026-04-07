/*
 * XREFs of ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x18002BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002B790 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlas(CAtlasedImage *this, struct AtlasedRects *a2)
{
  struct tagRECT *v2; // r8
  int appended; // eax
  unsigned int v4; // ebx

  v2 = (struct tagRECT *)*((_QWORD *)this + 9);
  if ( !v2 )
    return 0LL;
  appended = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, a2, v2);
  v4 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x33Fu);
  return v4;
}

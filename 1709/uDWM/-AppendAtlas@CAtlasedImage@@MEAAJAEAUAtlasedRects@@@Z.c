/*
 * XREFs of ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x1800202F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001FC00 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x33Fu);
  return v4;
}

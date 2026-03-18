/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18008E878
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008E8C0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180051E5C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this)
{
  unsigned int v1; // ebx
  struct CVisualTree **v2; // rdx
  CVisual *v3; // rcx
  signed int VisualTree; // eax

  v1 = 0;
  v2 = (struct CVisualTree **)((char *)this + 232);
  if ( !*((_QWORD *)this + 29) )
  {
    v3 = (CVisual *)*((_QWORD *)this + 24);
    if ( v3 )
    {
      VisualTree = CVisual::GetVisualTree(v3, v2);
      v1 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, VisualTree, 0x211u);
    }
    else
    {
      v1 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x215u);
    }
  }
  return v1;
}

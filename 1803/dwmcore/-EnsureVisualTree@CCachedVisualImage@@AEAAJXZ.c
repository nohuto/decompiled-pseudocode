/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800B4B70
 * Callers:
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4BB0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this)
{
  unsigned int v1; // ebx
  struct CVisualTree **v2; // rdx
  CVisual *v4; // rcx
  int VisualTree; // eax

  v1 = 0;
  v2 = (struct CVisualTree **)((char *)this + 232);
  if ( !*((_QWORD *)this + 29) )
  {
    v4 = (CVisual *)*((_QWORD *)this + 24);
    if ( v4 )
    {
      VisualTree = CVisual::GetVisualTree(v4, v2);
      v1 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, VisualTree, 0x207u);
    }
    else
    {
      v1 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x20Bu);
    }
  }
  return v1;
}

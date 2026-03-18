/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180048068
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800480B0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008631C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this, __int64 a2, bool a3)
{
  unsigned int v3; // ebx
  struct CVisualTree **v4; // rdx
  CVisual *v5; // rcx
  int VisualTree; // eax

  v3 = 0;
  v4 = (struct CVisualTree **)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) )
  {
    v5 = (CVisual *)*((_QWORD *)this + 17);
    if ( v5 )
    {
      VisualTree = CVisual::GetVisualTree(v5, v4, a3);
      v3 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x20Au);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x20Eu);
    }
  }
  return v3;
}

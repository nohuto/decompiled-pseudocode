/*
 * XREFs of ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x18000EAF4
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180020C90 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BEB4 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetMarginClip(CAtlasedImage *this, struct tagRECT *a2)
{
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 128) || !EqualRect((const RECT *)this + 7, a2) )
    {
      *((_BYTE *)this + 128) = 1;
      *((struct tagRECT *)this + 7) = *a2;
LABEL_4:
      CAtlasedImage::SetDirtyFlags(this, 1u, 0x2000u);
    }
  }
  else if ( *((_BYTE *)this + 128) )
  {
    *((_BYTE *)this + 128) = 0;
    goto LABEL_4;
  }
}

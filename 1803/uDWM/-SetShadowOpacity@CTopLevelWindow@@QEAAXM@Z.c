/*
 * XREFs of ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180019948
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800195E0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800205D4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 */

void __fastcall CTopLevelWindow::SetShadowOpacity(CTopLevelWindow *this, float a2)
{
  CAtlasedImage *v3; // rcx
  CAtlasedImage *v4; // rcx
  CAtlasedImage *v5; // rcx
  CAtlasedImage *v6; // rcx

  v3 = (CAtlasedImage *)*((_QWORD *)this + 55);
  if ( v3 )
    CAtlasedImage::SetOpacity(v3, a2);
  v4 = (CAtlasedImage *)*((_QWORD *)this + 56);
  if ( v4 )
    CAtlasedImage::SetOpacity(v4, a2);
  v5 = (CAtlasedImage *)*((_QWORD *)this + 57);
  if ( v5 )
    CAtlasedImage::SetOpacity(v5, a2);
  v6 = (CAtlasedImage *)*((_QWORD *)this + 58);
  if ( v6 )
    CAtlasedImage::SetOpacity(v6, a2);
}

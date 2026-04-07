/*
 * XREFs of ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180008720 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x18000ACA8 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180015D5C (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180016060 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180016110 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180020944 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800233A0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023880 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z @ 0x180024B00 (-SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18007DFB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CAtlasedImage::SetDirtyFlags(CAtlasedImage *this, int a2, unsigned int a3)
{
  CVisual *v3; // rcx
  void (__fastcall *v4)(CVisual *, int); // rax

  *((_DWORD *)this + 24) |= a2;
  v3 = (CVisual *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
    if ( v4 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v3, a3);
    else
      v4(v3, a3);
  }
}

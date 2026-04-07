/*
 * XREFs of ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BEB4
 * Callers:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x18000EAF4 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?InternalSetOpacity@CAtlasedImage@@IEAAXK@Z @ 0x18000EB48 (-InternalSetOpacity@CAtlasedImage@@IEAAXK@Z.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18001D7E0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001FA7C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001FC44 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180020000 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x1800200B0 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180020C90 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18002C3FC (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x18006FE24 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180086BB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
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

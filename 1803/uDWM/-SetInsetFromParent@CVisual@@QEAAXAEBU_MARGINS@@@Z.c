/*
 * XREFs of ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800259D8
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180002CD0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019A90 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BD78 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BE20 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CDB0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18001E740 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001F370 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18003B370 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CVisual::SetInsetFromParent(struct _MARGINS *this, const struct _MARGINS *a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CVisual *__hidden, unsigned int); // rax

  if ( this[8].cyTopHeight != a2->cyTopHeight
    || this[8].cxLeftWidth != a2->cxLeftWidth
    || this[8].cxRightWidth != a2->cxRightWidth
    || this[8].cyBottomHeight != a2->cyBottomHeight )
  {
    v2 = *(_QWORD *)&this->cxLeftWidth;
    this[8] = *a2;
    v3 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v2 + 24);
    if ( v3 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags((CVisual *)this, 2u);
    else
      v3((CVisual *)this, 2u);
  }
}

/*
 * XREFs of ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019510
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800081C8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019C60 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BF28 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BFD0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CF68 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18001E5B8 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001F020 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180038790 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CVisual::SetInsetFromParent(struct _MARGINS *this, const struct _MARGINS *a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CVisual *, int); // rax

  if ( this[8].cyTopHeight != a2->cyTopHeight
    || this[8].cxLeftWidth != a2->cxLeftWidth
    || this[8].cxRightWidth != a2->cxRightWidth
    || this[8].cyBottomHeight != a2->cyBottomHeight )
  {
    v2 = *(_QWORD *)&this->cxLeftWidth;
    this[8] = *a2;
    v3 = *(void (__fastcall **)(CVisual *, int))(v2 + 24);
    if ( v3 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags((CVisual *)this, 2);
    else
      v3((CVisual *)this, 2);
  }
}

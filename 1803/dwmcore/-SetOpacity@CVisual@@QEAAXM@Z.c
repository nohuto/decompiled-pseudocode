/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004D92C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004BF70 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18002B318 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18004CE94 (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18004F6C0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  float OpacityInternal; // xmm7_4
  float v5; // xmm1_4

  OpacityInternal = CVisual::GetOpacityInternal(this);
  if ( OpacityInternal != a2 )
  {
    CVisual::SetOpacityInternal(this, a2);
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(OpacityInternal) & _xmm);
    CVisual::PropagateFlags(
      this,
      (((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm) < 0.0000011920929) ^ (unsigned int)(v5 < 0.0000011920929))
    + 4);
    CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x1Au, a2);
    CResource::InvalidateAnimationSources(this, 0x1Au);
  }
}

/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180087F94
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180087F00 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18008601C (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18008AE28 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  float OpacityInternal; // xmm0_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm1_4

  OpacityInternal = CVisual::GetOpacityInternal(this);
  if ( OpacityInternal != v4 )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
    CVisual::SetOpacityInternal(this, v4);
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(OpacityInternal) & _xmm);
    CVisual::PropagateFlags(this, v5 < 0.0000011920929 != v6 < 0.0000011920929, 1, 0, 0, 0, 0, 0);
    CResource::InvalidateAnimationSources(this, 23LL);
  }
}

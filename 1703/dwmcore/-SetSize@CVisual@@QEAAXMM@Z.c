/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x180013030
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180087F00 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetSize@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x1801409E0 (-SetSize@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x18002AD1C (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180086BE0 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, float a2, float a3)
{
  float v4; // [rsp+70h] [rbp+8h] BYREF
  float v5; // [rsp+74h] [rbp+Ch]

  if ( *((float *)this + 30) != a2 || *((float *)this + 31) != a3 )
  {
    *((float *)this + 30) = a2;
    *((float *)this + 31) = a3;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
    v4 = a2;
    v5 = a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Au, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 0x1Au);
  }
}

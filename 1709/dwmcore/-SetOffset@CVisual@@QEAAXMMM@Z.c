/*
 * XREFs of ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18011A87C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180053A20 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetPosition@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180129E20 (-SetPosition@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004F728 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180096264 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CVisual::SetOffset(CVisual *this, float a2, float a3, float a4)
{
  _DWORD v5[4]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((float *)this + 26) != a2 || *((float *)this + 27) != a3 || *((float *)this + 28) != a4 )
  {
    *((float *)this + 26) = a2;
    *((float *)this + 27) = a3;
    *((float *)this + 28) = a4;
    CVisual::PropagateFlags((__int64)this, 5u, 1);
    CVisual::OnOuterTransformChanged(this);
    *(float *)v5 = a2;
    *(float *)&v5[1] = a3;
    *(float *)&v5[2] = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x19u, (const struct D2DVector3 *)v5);
    CResource::InvalidateAnimationSources(this);
  }
}

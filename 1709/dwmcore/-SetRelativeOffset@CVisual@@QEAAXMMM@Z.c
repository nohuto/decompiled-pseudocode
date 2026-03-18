/*
 * XREFs of ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004FB00
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180053A20 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18004ED00 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18004ED24 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004F728 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180096264 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeOffset(CVisual *this, double a2, double a3, FLOAT a4)
{
  struct D2D_VECTOR_3F v5; // [rsp+28h] [rbp-19h] BYREF
  struct D2D_VECTOR_3F v6; // [rsp+38h] [rbp-9h] BYREF

  CVisual::GetRelativeOffsetInternal(this, &v6);
  if ( v6.x != *(float *)&a2 || v6.y != *(float *)&a3 || v6.z != a4 )
  {
    v6.z = a4;
    *(_QWORD *)&v5.x = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
    v5.z = a4;
    CVisual::SetRelativeOffsetInternal(this, &v5);
    CVisual::PropagateFlags(this, 5LL, 1LL);
    CVisual::OnOuterTransformChanged(this);
    v6.x = *(FLOAT *)&a2;
    v6.y = *(FLOAT *)&a3;
    v6.z = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Bu, (const struct D2DVector3 *)&v6);
    CResource::InvalidateAnimationSources(this, 0x1Bu);
  }
}

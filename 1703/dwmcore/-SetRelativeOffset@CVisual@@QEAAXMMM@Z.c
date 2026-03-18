/*
 * XREFs of ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180088104
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180087F00 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x18002ADE0 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x180085F64 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x180085F88 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180086BE0 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeOffset(CVisual *this, double a2, double a3, FLOAT a4)
{
  struct D2D_VECTOR_3F v5; // [rsp+48h] [rbp-19h] BYREF
  struct D2D_VECTOR_3F v6; // [rsp+58h] [rbp-9h] BYREF

  CVisual::GetRelativeOffsetInternal(this, &v6);
  if ( v6.x != *(float *)&a2 || v6.y != *(float *)&a3 || v6.z != a4 )
  {
    v6.z = a4;
    *(_QWORD *)&v5.x = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
    v5.z = a4;
    CVisual::SetRelativeOffsetInternal((char **)this, &v5);
    CVisual::PropagateFlags(this, 1, 1, 0, 1, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
    v6.x = *(FLOAT *)&a2;
    v6.y = *(FLOAT *)&a3;
    v6.z = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 27LL, (const struct D2DVector3 *)&v6);
    CResource::InvalidateAnimationSources(this, 27LL);
  }
}

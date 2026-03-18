/*
 * XREFs of ?RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162F04
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18006C840 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18013C568 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18013D258 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z @ 0x1801A8B0C (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RenderProjectedShadowsPostChildrenForCurrentNode(CDrawingContext *this)
{
  unsigned int v2; // edi
  struct CVisual *CurrentVisual; // rax
  const struct CVisualTree *v4; // rbp
  CVisual *v5; // rsi
  struct COcclusionInfo *OcclusionInfo; // rax
  int WorldTransform; // eax
  int v8; // eax
  _BYTE v10[64]; // [rsp+30h] [rbp-78h] BYREF
  int v11; // [rsp+70h] [rbp-38h]
  struct D2D_RECT_F v12; // [rsp+80h] [rbp-28h] BYREF

  v2 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v4 = (const struct CVisualTree *)*((_QWORD *)this + 816);
  v11 = 0;
  v5 = CurrentVisual;
  CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this, (__int64)CurrentVisual, &v12);
  if ( !IsEmpty(&v12)
    && !CDrawingContext::IsNodeOccluded((__int64)this, v4, v5, &v12)
    && (!*((_BYTE *)this + 6827)
     || (OcclusionInfo = CVisual::GetOcclusionInfo(v5, v4)) == 0LL
     || (*(int (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo) < *((_DWORD *)this + 1652)) )
  {
    WorldTransform = CVisual::GetWorldTransform(*((CVisual **)this + 395), v4, 3, (__int64)v10, 0LL, 0LL);
    v2 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0x27DEu);
    }
    else
    {
      if ( !*((_BYTE *)this + 6604) )
        CMILMatrix::Multiply((CMILMatrix *)v10, (CDrawingContext *)((char *)this + 6536));
      v8 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v10, 0, 0);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x27E9u);
      }
      else
      {
        CVisual::RenderProjectedShadows(v5, this);
        CDrawingContext::PopTransformInternal(this, 0);
      }
    }
  }
  return v2;
}

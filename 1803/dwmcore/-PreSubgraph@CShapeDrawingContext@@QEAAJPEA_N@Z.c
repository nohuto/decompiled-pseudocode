/*
 * XREFs of ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180210840
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x18020FDB0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801A4764 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ??$emplace_back@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAXAEBVCShapeRenderTask@@@Z @ 0x18020FFBC (--$emplace_back@AEBVCShapeRenderTask@@@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTas.c)
 *     ?GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ @ 0x1802103FC (-GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ.c)
 *     ?Push@CMatrixStack2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180222664 (-Push@CMatrixStack2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::PreSubgraph(CShapeDrawingContext *this, bool *a2)
{
  CGeometry **v3; // rsi
  unsigned int v5; // edi
  bool DoesIntersectUnsafe; // r12
  CGeometry *v7; // r14
  char v8; // r13
  CMILMatrix *ShapeToWorldTransform; // rax
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // xmm1_8
  int RenderTasks; // eax
  __int128 v19; // [rsp+30h] [rbp-49h] BYREF
  struct D2D_MATRIX_3X2_F v20; // [rsp+40h] [rbp-39h] BYREF
  int v21; // [rsp+58h] [rbp-21h] BYREF
  __int128 v22; // [rsp+60h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-9h]

  *a2 = 1;
  v3 = (CGeometry **)*((_QWORD *)this + 1);
  v5 = 0;
  DoesIntersectUnsafe = 0;
  v7 = v3[7];
  v8 = (*((__int64 (__fastcall **)(CGeometry **, __int64))*v3 + 6))(v3, 137LL);
  if ( v8 )
  {
    *a2 = 0;
    v19 = *((_OWORD *)v3 + 4);
    if ( *((_BYTE *)v3 + 81) )
    {
      ShapeToWorldTransform = CShapeDrawingContext::GetShapeToWorldTransform(this);
      CMILMatrix::Transform2DBoundsHelper<0>(ShapeToWorldTransform, (__int64)&v19, (float *)&v19);
      DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                              (float *)&v19,
                              (float *)this + 88);
    }
  }
  if ( v7 )
  {
    if ( *((_QWORD *)this + 2) )
      v10 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    else
      v10 = *((_QWORD *)this + 43);
    v11 = *(_QWORD *)v7;
    *(_QWORD *)&v19 = v10;
    (*(void (__fastcall **)(CGeometry *, __int128 *, struct D2D_MATRIX_3X2_F *))(v11 + 176))(v7, &v19, &v20);
    v12 = CMatrixStack2D::Push((CShapeDrawingContext *)((char *)this + 64), &v20);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x133u);
      return v5;
    }
    *((_BYTE *)this + 536) = 1;
    if ( !v8 )
      *((_BYTE *)this + 537) = 1;
  }
  if ( DoesIntersectUnsafe )
  {
    if ( *((_BYTE *)this + 536) )
    {
      v13 = *((_DWORD *)this + 22) - 1;
      v21 = 1;
      v14 = 3LL * v13;
      v15 = *((_QWORD *)this + 8);
      v16 = *(_QWORD *)(v15 + 8 * v14 + 16);
      v22 = *(_OWORD *)(v15 + 8 * v14);
      v23 = v16;
      std::vector<CShapeRenderTask>::emplace_back<CShapeRenderTask const &>((__int64 *)this + 64, (__int64)&v21);
      *((_BYTE *)this + 536) = 0;
    }
    RenderTasks = CSpriteVectorShape::CreateRenderTasks(v3, this);
    v5 = RenderTasks;
    if ( RenderTasks < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTasks, 0x147u);
  }
  return v5;
}

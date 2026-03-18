/*
 * XREFs of ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18015F438
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18006C840 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@2@XZ @ 0x1800DCF64 (-front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$c.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18014A168 (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180158718 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusio.c)
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18015E2B4 (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??A?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@1@_K@Z @ 0x18015E398 (--A-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_p.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x1801619EC (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?_Tidy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXXZ @ 0x180163420 (-_Tidy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXXZ.c)
 *     ?pop_front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18016345C (-pop_front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801A7194 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1801C714C (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(CComposition **this)
{
  __int64 v2; // r15
  struct CVisual *CurrentVisual; // r14
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v14; // esi
  CComposition *v15; // r9
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  int v18; // eax
  __int64 i; // r14
  __int64 v20; // r9
  unsigned int v21; // r13d
  __int64 v22; // r10
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // r15
  int v28; // eax
  float v29; // xmm1_4
  int v30; // eax
  __m256i v32; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-B0h]
  struct _D3DCOLORVALUE v34; // [rsp+60h] [rbp-A8h] BYREF
  __m128 v35[4]; // [rsp+78h] [rbp-90h] BYREF
  int v36; // [rsp+B8h] [rbp-50h]
  __int128 X; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v38; // [rsp+D8h] [rbp-30h] BYREF

  CComposition::CurrentRedrawRegionColor(this[4], &v34);
  v2 = 0LL;
  memset(&v32.m256i_u64[1], 0, 24);
  v33 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
  CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this, (__int64)CurrentVisual, &v38);
  v36 = 0;
  CMILMatrix::SetToInverse(v35, (const struct CMILMatrix *)(this + 817));
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v35, (__int64)&v38, (float *)&X);
  v4 = *(float *)&X;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X) & _xmm);
  if ( v5 < 8388608.0 )
    v4 = (float)(int)floorf_0(*(float *)&X);
  *(float *)&X = v4;
  v6 = *((float *)&X + 1);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 1)) & _xmm);
  if ( v7 < 8388608.0 )
    v6 = (float)(int)floorf_0(*((float *)&X + 1));
  v8 = *((float *)&X + 2);
  *((float *)&X + 1) = v6;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 2)) & _xmm);
  if ( v9 < 8388608.0 )
    v8 = (float)(int)ceilf_0(*((float *)&X + 2));
  v10 = *((float *)&X + 3);
  *((float *)&X + 2) = v8;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 3)) & _xmm) < 8388608.0 )
    v10 = (float)(int)ceilf_0(*((float *)&X + 3));
  *((float *)&X + 3) = v10;
  v11 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)this,
          0LL,
          (const struct CMILMatrix *)(this + 817),
          0,
          0);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x281Cu);
    goto LABEL_44;
  }
  v13 = (__int64)this[47];
  v14 = 1;
  if ( !v13 )
    goto LABEL_39;
  if ( (*((_BYTE *)CurrentVisual + 93) & 2) != 0 )
    v15 = this[843];
  else
    LODWORD(v15) = 0;
  CHwndRenderTarget::GetIntersectingRedrawRects(v13, (int)&X, (int)this[816], (int)v15, (__int64)&v32.m256i_i64[1]);
  if ( (*((_BYTE *)CurrentVisual + 93) & 2) == 0 )
  {
    v16 = 0;
    v17 = v33;
    if ( v33 )
    {
      while ( 1 )
      {
        X = *(_OWORD *)(v32.m256i_i64[1] + 16LL * v16);
        v18 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this, (struct MilRectF *)&X, &v34);
        v12 = v18;
        if ( v18 < 0 )
          break;
        if ( ++v16 >= v17 )
          goto LABEL_39;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x282Au);
    }
    goto LABEL_39;
  }
  if ( v33 )
    CVisual::AppendDirtyRegionVisualizationRects(CurrentVisual, &v32.m256i_u64[1]);
  if ( *(char *)(*((_QWORD *)CurrentVisual + 27) + 4LL) >= 0 )
    goto LABEL_39;
  for ( i = CVisual::GetDirtyRegionVisualizationData(CurrentVisual);
        ;
        std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::pop_front(i) )
  {
    if ( !*(_QWORD *)(i + 32) )
      goto LABEL_39;
    if ( (*(_BYTE *)(*(_QWORD *)(std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::front((__int64 **)i)
                               + 32)
                   + 508LL) & 1) != 0 )
      break;
  }
  v21 = 0;
  if ( !v20 )
  {
LABEL_37:
    *((_BYTE *)this[4] + 1347) = 1;
    goto LABEL_38;
  }
  v22 = 0LL;
  while ( 1 )
  {
    *(struct _D3DCOLORVALUE *)&v34.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](i, v22) + 24)
                                                                                              + 72LL));
    if ( _mm_shuffle_ps(*(__m128 *)&v34.r, *(__m128 *)&v34.r, 255).m128_f32[0] > 0.0 )
      break;
LABEL_36:
    v22 = ++v21;
    if ( (unsigned __int64)v21 >= *(_QWORD *)(i + 32) )
      goto LABEL_37;
  }
  v24 = std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](
          i,
          v23);
  std::vector<MilRectF>::vector<MilRectF>((__int64 *)&v38, v24);
  v25 = v38;
  v32.m256i_i32[0] = 0;
  v26 = (__int64)(*((_QWORD *)&v38 + 1) - v38) >> 4;
  if ( !v26 )
  {
LABEL_35:
    std::vector<MilRectF>::_Tidy(&v38);
    goto LABEL_36;
  }
  while ( 1 )
  {
    v36 = 0;
    v27 = 2 * v2;
    CMILMatrix::Set2DScaleAndOffset(
      (CMILMatrix *)v35,
      1.0,
      1.0,
      *(float *)(v25 + 8 * v27),
      *(float *)(v25 + 8 * v27 + 4));
    v28 = CDrawingContext::PushTransformInternal((CDrawingContext *)this, 0LL, (const struct CMILMatrix *)v35, 1, 0);
    v12 = v28;
    if ( v28 < 0 )
      break;
    v14 = 2;
    v29 = *(float *)(v38 + 8 * v27 + 12) - *(float *)(v38 + 8 * v27 + 4);
    *(float *)&X = *(float *)(v38 + 8 * v27 + 8) - *(float *)(v38 + 8 * v27);
    *((float *)&X + 1) = v29;
    v30 = CDrawingContext::DrawColorRectangle(this, &v34, (const struct D2D_SIZE_F *)&X);
    v12 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x285Au);
      std::vector<MilRectF>::_Tidy(&v38);
      goto LABEL_39;
    }
    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 0);
    v25 = v38;
    ++v32.m256i_i32[0];
    v2 = v32.m256i_u32[0];
    if ( v32.m256i_u32[0] >= v26 )
    {
      v2 = 0LL;
      goto LABEL_35;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x2853u);
  std::vector<MilRectF>::_Tidy(&v38);
LABEL_38:
  v14 = 1;
  do
  {
LABEL_39:
    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 0);
    --v14;
  }
  while ( v14 );
LABEL_44:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v32.m256i_i64[1]);
  return v12;
}

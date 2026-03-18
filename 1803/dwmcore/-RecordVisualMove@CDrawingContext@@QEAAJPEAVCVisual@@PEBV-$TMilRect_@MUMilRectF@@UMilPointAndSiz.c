/*
 * XREFs of ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180162A00
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180008128 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C3EDC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18013D170 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E9B0 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18015EBEC (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x180160F94 (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x180161850 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180161CE0 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     McTemplateU0xff @ 0x180163680 (McTemplateU0xff.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180178DB4 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801A787C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x1801A8D98 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordVisualMove(struct CDrawingContext *a1, CVisual *this, _OWORD *a3)
{
  unsigned int v6; // ebx
  CDrawingContext *v7; // rcx
  __int64 v8; // rcx
  const struct CMILMatrix *v9; // r8
  int v10; // r10d
  int LocalToWorldTransform; // eax
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  float v13; // xmm7_4
  float v14; // xmm8_4
  int v15; // ecx
  int v16; // r9d
  float v17; // xmm9_4
  float v18; // xmm10_4
  CMoveRenderPassInfo *v19; // r15
  unsigned int v20; // esi
  int v21; // eax
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  int v28; // eax
  int v29; // eax
  int v31; // [rsp+30h] [rbp-D8h]
  bool v32[8]; // [rsp+48h] [rbp-C0h] BYREF
  CMILCOMBase *v33; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v36[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v37; // [rsp+A8h] [rbp-60h]
  _BYTE v38[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v39; // [rsp+F8h] [rbp-10h]
  _BYTE v40[64]; // [rsp+108h] [rbp+0h] BYREF
  int v41; // [rsp+148h] [rbp+40h]
  __int128 v42; // [rsp+158h] [rbp+50h] BYREF
  struct MilRectF *v43[2]; // [rsp+168h] [rbp+60h] BYREF

  v6 = 0;
  v33 = 0LL;
  if ( *((_BYTE *)a1 + 6828)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
    && !*((_BYTE *)v7 + 6605)
    && !CDrawingContext::IsInLayer(v7) )
  {
    v39 = 0;
    v36[0] = _xmm;
    v37 = 32085;
    v36[1] = _xmm;
    v41 = 0;
    v36[2] = _xmm;
    v32[0] = 0;
    v36[3] = _xmm;
    CMatrixStack::Top((CMatrixStack *)(v8 + 480), (struct CMILMatrix *)v38);
    v9 = (const struct CMILMatrix *)v36;
    if ( v10 < 2 )
      v9 = 0LL;
    LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                              this,
                              (const struct CMILMatrix *)v38,
                              v9,
                              v32,
                              (struct CMILMatrix *)v40,
                              a1);
    v6 = LocalToWorldTransform;
    if ( LocalToWorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LocalToWorldTransform, 0x1C9Eu);
    }
    else if ( v32[0] )
    {
      v35 = 0LL;
      MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a1);
      v13 = *((float *)MoveRenderPassInfoRef + 14);
      v14 = *((float *)MoveRenderPassInfoRef + 15);
      *(_OWORD *)v43 = *a3;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v38, (__int64)v43, (float *)&v42);
      LODWORD(v17) = LODWORD(v14) ^ _xmm;
      LODWORD(v18) = LODWORD(v13) ^ _xmm;
      *((float *)&v42 + 1) = *((float *)&v42 + 1) + COERCE_FLOAT(LODWORD(v14) ^ _xmm);
      *(float *)&v42 = *(float *)&v42 + COERCE_FLOAT(LODWORD(v13) ^ _xmm);
      *((float *)&v42 + 3) = *((float *)&v42 + 3) + COERCE_FLOAT(LODWORD(v14) ^ _xmm);
      *((float *)&v42 + 2) = *((float *)&v42 + 2) + COERCE_FLOAT(LODWORD(v13) ^ _xmm);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xff(v15, (unsigned int)&MILEVENT_MEDIA_UCE_VISUAL_MOVE_DETECTED, (_DWORD)this, v16, SLOBYTE(v14));
      v19 = CVisual::PreviousFrameVisibleRegion(this, a1);
      if ( v19 )
      {
        v43[0] = 0LL;
        v34 = 0LL;
        if ( CVisual::GetAdditionalDirtyRects(this, &v34, (unsigned int *)&v32[4], v43)
          && *(_QWORD *)(*((_QWORD *)a1 + 4) + 384LL) == v34
          && (v20 = 0, *(_DWORD *)&v32[4]) )
        {
          while ( 1 )
          {
            v21 = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                    (__int64)a1,
                    (__int64)v43[0] + 16 * v20,
                    0.0,
                    (HRGN)v19);
            v6 = v21;
            if ( v21 < 0 )
              break;
            if ( ++v20 >= *(_DWORD *)&v32[4] )
              goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1CC6u);
        }
        else
        {
LABEL_17:
          if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v42, v19, &v35) )
          {
            v22 = *((float *)&v42 + 3) + v14;
            v23 = *(float *)&v42 + v13;
            *((float *)&v42 + 3) = *((float *)&v42 + 3) + v14;
            CScopedClipStack::GetTopGpuClipInScope((__int64 *)a1 + 126, 1, (__int64)v43);
            if ( *(float *)v43 > v23 )
              v23 = *(float *)v43;
            v26 = v24;
            if ( *((float *)v43 + 1) > v24 )
            {
              v24 = *((float *)v43 + 1);
              v26 = *((float *)v43 + 1);
            }
            v27 = v25;
            if ( v25 > *(float *)&v43[1] )
            {
              v25 = *(float *)&v43[1];
              v27 = *(float *)&v43[1];
            }
            if ( v22 > *((float *)&v43[1] + 1) )
            {
              HIDWORD(v42) = HIDWORD(v43[1]);
              v22 = *((float *)&v43[1] + 1);
            }
            if ( v27 > v23 && v22 > v26 )
            {
              *((float *)&v42 + 1) = v24 + v17;
              *((float *)&v42 + 2) = v25 + v18;
              *((float *)&v42 + 3) = v22 + v17;
              *(float *)&v42 = v23 + v18;
              v28 = MoveOptimizationInfo::Create((__int64)this, v13, v14, &v42, v35, v31, &v33);
              v6 = v28;
              if ( v28 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x1CD8u);
              }
              else
              {
                v29 = CDrawingContext::CombineMove((__int64)a1, (__int64)v33, (__int128 *)v43);
                v6 = v29;
                if ( v29 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x1CDAu);
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterface<CCompositionSurfaceInfo>(&v33);
  return v6;
}

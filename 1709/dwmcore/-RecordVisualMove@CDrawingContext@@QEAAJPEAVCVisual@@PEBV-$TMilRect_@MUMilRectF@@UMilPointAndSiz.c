/*
 * XREFs of ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18013EA64
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18003BCDC (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18003CBD8 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013C240 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18013C47C (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18013D62C (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18013DA0C (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18013DC84 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     McTemplateU0xff @ 0x18013F758 (McTemplateU0xff.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x18014F56C (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180177108 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x180177FBC (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordVisualMove(struct CDrawingContext *a1, CVisual *this, _OWORD *a3)
{
  unsigned int v6; // ebx
  CDrawingContext *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rcx
  signed int v13; // eax
  const struct CMILMatrix *v14; // r8
  signed int LocalToWorldTransform; // eax
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  float v17; // xmm6_4
  float v18; // xmm7_4
  int v19; // ecx
  int v20; // r9d
  float v21; // xmm8_4
  float v22; // xmm9_4
  CMoveRenderPassInfo *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r13
  unsigned int v26; // esi
  unsigned int v27; // r12d
  signed int v28; // eax
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm2_4
  float v34; // xmm5_4
  float v35; // xmm3_4
  signed int v36; // eax
  signed int v37; // eax
  bool v39[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v40; // [rsp+4Ch] [rbp-BCh]
  unsigned int v41[2]; // [rsp+50h] [rbp-B8h] BYREF
  CMILCOMBase *v42; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v45[4]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v46; // [rsp+B8h] [rbp-50h]
  _BYTE v47[64]; // [rsp+C8h] [rbp-40h] BYREF
  int v48; // [rsp+108h] [rbp+0h]
  _BYTE v49[64]; // [rsp+118h] [rbp+10h] BYREF
  int v50; // [rsp+158h] [rbp+50h]
  __int128 v51; // [rsp+168h] [rbp+60h] BYREF
  struct MilRectF *v52[2]; // [rsp+178h] [rbp+70h] BYREF

  v6 = 0;
  v42 = 0LL;
  if ( *((_BYTE *)a1 + 6828)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
    && !*((_BYTE *)v7 + 6605)
    && !CDrawingContext::IsInLayer(v7) )
  {
    v40 = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 1160LL);
    v11 = v40;
    v48 = 0;
    v45[0] = _xmm;
    v46 = 32085;
    v45[1] = _xmm;
    v50 = 0;
    v45[2] = _xmm;
    v39[0] = 0;
    v45[3] = _xmm;
    CMatrixStack::Top((CMatrixStack *)(v8 + 480), (struct CMILMatrix *)v47, v9, v10);
    if ( v40 >= 2 )
    {
      v12 = *((_QWORD *)a1 + 47);
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 264LL))(v12, &v51);
        v6 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1B6Eu);
          goto LABEL_42;
        }
        CMILMatrix::Translate((CMILMatrix *)v45, (float)-(int)v51, (float)-DWORD1(v51));
      }
    }
    v14 = (const struct CMILMatrix *)v45;
    if ( v40 < 2 )
      v14 = 0LL;
    LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                              this,
                              (const struct CMILMatrix *)v47,
                              v14,
                              v39,
                              (struct CMILMatrix *)v49,
                              a1);
    v6 = LocalToWorldTransform;
    if ( LocalToWorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LocalToWorldTransform, 0x1B7Du);
      goto LABEL_42;
    }
    if ( v39[0] )
    {
      v44 = 0LL;
      MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a1);
      v17 = *((float *)MoveRenderPassInfoRef + 14);
      v18 = *((float *)MoveRenderPassInfoRef + 15);
      *(_OWORD *)v52 = *a3;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v47, (__int64)v52, (float *)&v51);
      LODWORD(v21) = LODWORD(v18) ^ _xmm;
      LODWORD(v22) = LODWORD(v17) ^ _xmm;
      *((float *)&v51 + 1) = *((float *)&v51 + 1) + COERCE_FLOAT(LODWORD(v18) ^ _xmm);
      *(float *)&v51 = *(float *)&v51 + COERCE_FLOAT(LODWORD(v17) ^ _xmm);
      *((float *)&v51 + 3) = *((float *)&v51 + 3) + COERCE_FLOAT(LODWORD(v18) ^ _xmm);
      *((float *)&v51 + 2) = *((float *)&v51 + 2) + COERCE_FLOAT(LODWORD(v17) ^ _xmm);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xff(v19, (unsigned int)&MILEVENT_MEDIA_UCE_VISUAL_MOVE_DETECTED, (_DWORD)this, v20, SLOBYTE(v18));
      v23 = CVisual::PreviousFrameVisibleRegion(this, a1);
      if ( v23 )
      {
        v24 = *((_QWORD *)a1 + 47);
        v52[0] = 0LL;
        v43 = 0LL;
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 272LL))(v24);
        if ( CVisual::GetAdditionalDirtyRects(this, &v43, v41, v52) && *(_QWORD *)(*((_QWORD *)a1 + 4) + 360LL) == v43 )
        {
          v26 = 0;
          v27 = v41[0];
          if ( v41[0] )
          {
            while ( 1 )
            {
              v28 = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                      (__int64)a1,
                      (__int64)v52[0] + 16 * v26,
                      (__int64)v49,
                      (HRGN)v23);
              v6 = v28;
              if ( v28 < 0 )
                break;
              if ( ++v26 >= v27 )
                goto LABEL_21;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x1BA8u);
            goto LABEL_42;
          }
LABEL_21:
          v11 = v40;
        }
        if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v51, v23, &v44) )
        {
          v29 = *((float *)&v51 + 1) + v18;
          v30 = *((float *)&v51 + 2) + v17;
          CScopedClipStack::GetTopGpuClipInScope((struct CDrawingContext *)((char *)a1 + 1008), 1);
          if ( *(float *)v52 > v32 )
            v32 = *(float *)v52;
          if ( *((float *)v52 + 1) > v29 )
            v29 = *((float *)v52 + 1);
          if ( v30 > *(float *)&v52[1] )
            v30 = *(float *)&v52[1];
          if ( v31 > *((float *)&v52[1] + 1) )
            v31 = *((float *)&v52[1] + 1);
          if ( v30 > v32 && v31 > v29 )
          {
            v33 = v29 + v21;
            v34 = v32 + v22;
            v35 = v30 + v22;
            if ( v11 < 2 )
              v25 = 0LL;
            *(_QWORD *)&v51 = __PAIR64__(LODWORD(v33), LODWORD(v34));
            *((float *)&v51 + 2) = v35;
            *((float *)&v51 + 3) = v31 + v21;
            v36 = MoveOptimizationInfo::Create((__int64)this, v17, v18, &v51, v44, v25, &v42);
            v6 = v36;
            if ( v36 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x1BC2u);
            }
            else
            {
              v37 = CDrawingContext::CombineMove((__int64)a1, (__int64)v42, (__int128 *)v52);
              v6 = v37;
              if ( v37 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v37, 0x1BC4u);
            }
          }
        }
      }
    }
  }
LABEL_42:
  ReleaseInterface<CCompositionSurfaceInfo>(&v42);
  return v6;
}

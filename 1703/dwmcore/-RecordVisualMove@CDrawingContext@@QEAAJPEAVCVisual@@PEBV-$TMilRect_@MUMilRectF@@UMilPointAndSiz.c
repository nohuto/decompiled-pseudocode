/*
 * XREFs of ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x18008ADBC (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18012CF88 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014AE08 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18014B048 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18014C4E4 (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18014C770 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18014D0E8 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18014D138 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     Template_xff @ 0x18014E57C (Template_xff.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180159F48 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x180161168 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordVisualMove(struct CDrawingContext *a1, CVisual *this, _OWORD *a3)
{
  unsigned int v6; // ebx
  CDrawingContext *v7; // rcx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  int v11; // eax
  const struct CMILMatrix *v12; // r8
  int LocalToWorldTransform; // eax
  struct _LIST_ENTRY **MoveRenderPassInfoRef; // rax
  float v15; // xmm6_4
  float v16; // xmm7_4
  int v17; // ecx
  int v18; // r9d
  float v19; // xmm8_4
  float v20; // xmm9_4
  struct _LIST_ENTRY **v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r13
  unsigned int v24; // esi
  unsigned int v25; // r12d
  int v26; // eax
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm5_4
  float v33; // xmm3_4
  int v34; // eax
  int v35; // eax
  bool v37[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh]
  unsigned int v39[2]; // [rsp+50h] [rbp-B8h] BYREF
  CMILCOMBase *v40; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v43[4]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v44; // [rsp+B8h] [rbp-50h]
  _BYTE v45[64]; // [rsp+C8h] [rbp-40h] BYREF
  int v46; // [rsp+108h] [rbp+0h]
  _BYTE v47[64]; // [rsp+118h] [rbp+10h] BYREF
  int v48; // [rsp+158h] [rbp+50h]
  __int128 v49; // [rsp+168h] [rbp+60h] BYREF
  struct MilRectF *v50[2]; // [rsp+178h] [rbp+70h] BYREF

  v6 = 0;
  v40 = 0LL;
  if ( *((_BYTE *)a1 + 6772)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
    && !*((_BYTE *)v7 + 6541)
    && !CDrawingContext::IsInLayer(v7) )
  {
    v38 = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 1224LL);
    v9 = v38;
    v46 = 0;
    v43[0] = _xmm;
    v44 = 32085;
    v43[1] = _xmm;
    v48 = 0;
    v43[2] = _xmm;
    v37[0] = 0;
    v43[3] = _xmm;
    CMatrixStack::Top((CMatrixStack *)(v8 + 472), (struct CMILMatrix *)v45);
    if ( v38 >= 2 )
    {
      v10 = *((_QWORD *)a1 + 48);
      if ( v10 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 248LL))(v10, &v49);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1DBEu);
          goto LABEL_42;
        }
        CMILMatrix::Translate((CMILMatrix *)v43, (float)-(int)v49, (float)-DWORD1(v49));
      }
    }
    v12 = (const struct CMILMatrix *)v43;
    if ( v38 < 2 )
      v12 = 0LL;
    LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                              this,
                              (const struct CMILMatrix *)v45,
                              v12,
                              v37,
                              (struct CMILMatrix *)v47,
                              a1);
    v6 = LocalToWorldTransform;
    if ( LocalToWorldTransform < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LocalToWorldTransform, 0x1DCDu);
      goto LABEL_42;
    }
    if ( v37[0] )
    {
      v42 = 0LL;
      MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a1);
      v15 = *((float *)MoveRenderPassInfoRef + 14);
      v16 = *((float *)MoveRenderPassInfoRef + 15);
      *(_OWORD *)v50 = *a3;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v45, (__int64)v50, (float *)&v49);
      LODWORD(v19) = LODWORD(v16) ^ _xmm;
      LODWORD(v20) = LODWORD(v15) ^ _xmm;
      *((float *)&v49 + 1) = *((float *)&v49 + 1) + COERCE_FLOAT(LODWORD(v16) ^ _xmm);
      *(float *)&v49 = *(float *)&v49 + COERCE_FLOAT(LODWORD(v15) ^ _xmm);
      *((float *)&v49 + 3) = *((float *)&v49 + 3) + COERCE_FLOAT(LODWORD(v16) ^ _xmm);
      *((float *)&v49 + 2) = *((float *)&v49 + 2) + COERCE_FLOAT(LODWORD(v15) ^ _xmm);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xff(v17, (unsigned int)&MILEVENT_MEDIA_UCE_VISUAL_MOVE_DETECTED, (_DWORD)this, v18, SLOBYTE(v16));
      v21 = CVisual::PreviousFrameVisibleRegion(this, a1);
      if ( v21 )
      {
        v22 = *((_QWORD *)a1 + 48);
        v50[0] = 0LL;
        v41 = 0LL;
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 256LL))(v22);
        if ( CVisual::GetAdditionalDirtyRects(this, &v41, v39, v50) && *(_QWORD *)(*((_QWORD *)a1 + 4) + 400LL) == v41 )
        {
          v24 = 0;
          v25 = v39[0];
          if ( v39[0] )
          {
            while ( 1 )
            {
              v26 = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                      (__int64)a1,
                      (__int64)v50[0] + 16 * v24,
                      (__int64)v47,
                      (HRGN)v21);
              v6 = v26;
              if ( v26 < 0 )
                break;
              if ( ++v24 >= v25 )
                goto LABEL_21;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1DF8u);
            goto LABEL_42;
          }
LABEL_21:
          v9 = v38;
        }
        if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v49, v21, &v42) )
        {
          v27 = *((float *)&v49 + 1) + v16;
          v28 = *((float *)&v49 + 2) + v15;
          CScopedClipStack::GetTopGpuClipInScope((__int64 *)a1 + 114, 1, (__int64)v50);
          if ( *(float *)v50 > v30 )
            v30 = *(float *)v50;
          if ( *((float *)v50 + 1) > v27 )
            v27 = *((float *)v50 + 1);
          if ( v28 > *(float *)&v50[1] )
            v28 = *(float *)&v50[1];
          if ( v29 > *((float *)&v50[1] + 1) )
            v29 = *((float *)&v50[1] + 1);
          if ( v28 > v30 && v29 > v27 )
          {
            v31 = v27 + v19;
            v32 = v30 + v20;
            v33 = v28 + v20;
            if ( v9 < 2 )
              v23 = 0LL;
            *(_QWORD *)&v49 = __PAIR64__(LODWORD(v31), LODWORD(v32));
            *((float *)&v49 + 2) = v33;
            *((float *)&v49 + 3) = v29 + v19;
            v34 = MoveOptimizationInfo::Create((__int64)this, v15, v16, &v49, v42, v23, &v40);
            v6 = v34;
            if ( v34 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x1E12u);
            }
            else
            {
              v35 = CDrawingContext::CombineMove((__int64)a1, (__int64)v40, (__int128 *)v50);
              v6 = v35;
              if ( v35 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x1E14u);
            }
          }
        }
      }
    }
  }
LABEL_42:
  ReleaseInterface<CCompositionSurfaceInfo>(&v40);
  return v6;
}

/*
 * XREFs of ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18013E710
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036948 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18003BCDC (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18003CBD8 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18013C47C (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18013DC84 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x18014F56C (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801907DC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordMoveOptimization(
        struct CDrawingContext *a1,
        CVisual *this,
        __int64 a3,
        const struct MilPoint2F *a4,
        int a5,
        int a6,
        _BYTE *a7)
{
  signed int v7; // ebx
  CDrawingContext *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 *v15; // r11
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  CMoveRenderPassInfo *v20; // rax
  __int64 v21; // rax
  signed int v22; // eax
  float v23; // edx
  _QWORD *v24; // r10
  __int64 v25; // rcx
  unsigned int v26; // eax
  signed int v27; // eax
  float v29; // [rsp+40h] [rbp-C0h] BYREF
  float v30; // [rsp+44h] [rbp-BCh]
  CMILCOMBase *v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __m128 v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+90h] [rbp-70h]
  _OWORD v37[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v38; // [rsp+E0h] [rbp-20h]
  __int128 v39; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v40; // [rsp+100h] [rbp+0h] BYREF
  float v41[4]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  v31 = 0LL;
  *a7 = 0;
  if ( *((_BYTE *)a1 + 6828)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
    && !*((_BYTE *)v11 + 6605)
    && !CDrawingContext::IsInLayer(v11) )
  {
    if ( (v36 = 0,
          CMatrixStack::Top((CMatrixStack *)(v12 + 480), (struct CMILMatrix *)&v32, v13, v14),
          CMILMatrix::Is2DAffine<1>((__int64)&v32, 1))
      && (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v32 + 1) - 0.0)) & _xmm), v16 < 0.000081380211)
      && (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v33 - 0.0)) & _xmm), v17 < 0.000081380211)
      || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v32 - 0.0)) & _xmm), v18 < 0.000081380211)
      && (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v33 + 1) - 0.0)) & _xmm), v19 < 0.000081380211) )
    {
      v40 = *v15;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v32, (__int64)&v40, (float *)&v39);
      v37[1] = v33;
      v37[0] = v32;
      v37[3] = v35;
      v37[2] = v34;
      v38 = v36;
      CMILMatrix::Translate(
        (CMILMatrix *)v37,
        COERCE_FLOAT(v35.m128_i32[0] ^ _xmm),
        COERCE_FLOAT(_mm_shuffle_ps(v35, v35, 85).m128_u32[0] ^ _xmm));
      CMILMatrix::Transform((CMILMatrix *)v37, a4, (struct MilPoint2F *)&v29, 1u);
      v20 = CVisual::PreviousFrameVisibleRegion(this, a1);
      if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v39, v20, 0LL) )
      {
        *(float *)&v40 = *(float *)&v39 + v29;
        *((float *)&v40 + 1) = *((float *)&v39 + 1) + v30;
        *((float *)&v40 + 2) = *((float *)&v39 + 2) + v29;
        *((float *)&v40 + 3) = *((float *)&v39 + 3) + v30;
        CScopedClipStack::GetTopGpuClipInScope((struct CDrawingContext *)((char *)a1 + 1008), 1);
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v41, (float *)&v40) )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 47) + 272LL))(*((_QWORD *)a1 + 47));
          v22 = MoveOptimizationInfo::Create((__int64)this, v29, v30, &v39, 0LL, v21, &v31);
          v7 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x1B2Eu);
          }
          else
          {
            v23 = v29;
            v24 = (_QWORD *)((char *)a1 + 6616);
            v25 = *((unsigned int *)a1 + 1660);
            v26 = v25 + 1;
            if ( (int)v25 + 1 >= (unsigned int)v25 )
              LODWORD(v23) = v25 + 1;
            v7 = v26 < (unsigned int)v25 ? 0x80070216 : 0;
            if ( v26 < (unsigned int)v25 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xB5u);
            }
            else if ( LODWORD(v23) > *((_DWORD *)a1 + 1659) )
            {
              v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24, 8u, 1, &v31);
              v7 = v27;
              if ( v27 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*v24 + 8 * v25) = v31;
              *((float *)a1 + 1660) = v23;
            }
            if ( v7 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1B33u);
            }
            else
            {
              CMILCOMBase::InternalAddRef(v31);
              *a7 = 1;
            }
          }
        }
      }
    }
  }
  ReleaseInterface<CCompositionSurfaceInfo>(&v31);
  return (unsigned int)v7;
}

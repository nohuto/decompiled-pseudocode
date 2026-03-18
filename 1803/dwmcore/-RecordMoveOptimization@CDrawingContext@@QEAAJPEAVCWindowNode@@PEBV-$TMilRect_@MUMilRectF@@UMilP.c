/*
 * XREFs of ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x180162750
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180008128 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C3EDC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18013D170 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18015EBEC (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180161CE0 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180178DB4 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801C75EC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
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
  int v7; // ebx
  CDrawingContext *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct D2D_RECT_F *v14; // r11
  CMoveRenderPassInfo *v15; // rax
  float v16; // xmm3_4
  float v17; // xmm4_4
  int v18; // eax
  _QWORD *v19; // r10
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  int v24; // [rsp+28h] [rbp-D8h]
  CMILCOMBase *v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v26[3]; // [rsp+50h] [rbp-B0h] BYREF
  __m128 v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+90h] [rbp-70h]
  _OWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+E0h] [rbp-20h]
  __int128 v31; // [rsp+F0h] [rbp-10h] BYREF
  struct D2D_RECT_F v32; // [rsp+100h] [rbp+0h] BYREF
  float v33; // [rsp+110h] [rbp+10h] BYREF
  float v34; // [rsp+114h] [rbp+14h]

  v7 = 0;
  v25[0] = 0LL;
  *a7 = 0;
  if ( *((_BYTE *)a1 + 6828) )
  {
    if ( CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
      && !*((_BYTE *)v11 + 6605)
      && !CDrawingContext::IsInLayer(v11) )
    {
      v28 = 0;
      CMatrixStack::Top((CMatrixStack *)(v12 + 480), (struct CMILMatrix *)v26);
      if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v26, v13) )
      {
        v32 = *v14;
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v26, (__int64)&v32, (float *)&v31);
        v29[1] = v26[1];
        v29[0] = v26[0];
        v29[2] = v26[2];
        v29[3] = v27;
        v30 = v28;
        CMILMatrix::Translate(
          (CMILMatrix *)v29,
          COERCE_FLOAT(v27.m128_i32[0] ^ _xmm),
          COERCE_FLOAT(_mm_shuffle_ps(v27, v27, 85).m128_u32[0] ^ _xmm));
        CMILMatrix::Transform((CMILMatrix *)v29, a4, (struct MilPoint2F *)&v33, 1u);
        v15 = CVisual::PreviousFrameVisibleRegion(this, a1);
        if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v31, v15, 0LL) )
        {
          v16 = v33;
          v32.left = *(float *)&v31 + v33;
          v32.top = *((float *)&v31 + 1) + v34;
          v32.right = *((float *)&v31 + 2) + v33;
          v32.bottom = *((float *)&v31 + 3) + v34;
          CScopedClipStack::GetTopGpuClipInScope((__int64 *)a1 + 126, 1, (__int64)&v33);
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)&v33, &v32) )
          {
            v18 = MoveOptimizationInfo::Create((__int64)this, v16, v17, &v31, 0LL, v24, v25);
            v7 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1C60u);
            }
            else
            {
              v19 = (_QWORD *)((char *)a1 + 6616);
              v20 = *((_DWORD *)a1 + 1660);
              v21 = v20 + 1;
              v7 = v20 + 1 < v20 ? 0x80070216 : 0;
              if ( v20 + 1 < v20 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
              }
              else if ( v21 > *((_DWORD *)a1 + 1659) )
              {
                v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v19, 8u, 1, v25);
                v7 = v22;
                if ( v22 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u);
              }
              else
              {
                *(CMILCOMBase **)(*v19 + 8LL * v20) = v25[0];
                *((_DWORD *)a1 + 1660) = v21;
              }
              if ( v7 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1C65u);
              }
              else
              {
                CMILCOMBase::InternalAddRef(v25[0]);
                *a7 = 1;
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterface<CCompositionSurfaceInfo>(v25);
  return (unsigned int)v7;
}

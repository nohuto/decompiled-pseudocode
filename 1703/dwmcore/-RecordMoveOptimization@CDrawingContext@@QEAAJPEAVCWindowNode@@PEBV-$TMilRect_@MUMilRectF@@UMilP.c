/*
 * XREFs of ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18014D7E0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800120B0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18012CF88 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18014B048 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18014D0E8 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18014D138 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180159F48 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
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
  __int128 *v13; // r11
  struct _LIST_ENTRY **v14; // rax
  __int64 v15; // rax
  int v16; // eax
  float v17; // edx
  _QWORD *v18; // r10
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  float v23; // [rsp+40h] [rbp-C0h] BYREF
  float v24; // [rsp+44h] [rbp-BCh]
  CBitmapOfDeviceBitmaps *v25; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v26[3]; // [rsp+50h] [rbp-B0h] BYREF
  __m128 v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+90h] [rbp-70h]
  _OWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+E0h] [rbp-20h]
  __int128 v31; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v32; // [rsp+100h] [rbp+0h] BYREF
  float v33[4]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  v25 = 0LL;
  *a7 = 0;
  if ( *((_BYTE *)a1 + 6772) )
  {
    if ( CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
      && !*((_BYTE *)v11 + 6541)
      && !CDrawingContext::IsInLayer(v11) )
    {
      v28 = 0;
      CMatrixStack::Top((CMatrixStack *)(v12 + 472), (struct CMILMatrix *)v26);
      if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v26) )
      {
        v32 = *v13;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v26, (__int64)&v32, (float *)&v31);
        v29[1] = v26[1];
        v29[0] = v26[0];
        v29[3] = v27;
        v29[2] = v26[2];
        v30 = v28;
        CMILMatrix::Translate(
          (CMILMatrix *)v29,
          COERCE_FLOAT(v27.m128_i32[0] ^ _xmm),
          COERCE_FLOAT(_mm_shuffle_ps(v27, v27, 85).m128_u32[0] ^ _xmm));
        CMILMatrix::Transform((CMILMatrix *)v29, a4, (struct MilPoint2F *)&v23, 1);
        v14 = CVisual::PreviousFrameVisibleRegion(this, a1);
        if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v31, v14, 0LL) )
        {
          *(float *)&v32 = *(float *)&v31 + v23;
          *((float *)&v32 + 1) = *((float *)&v31 + 1) + v24;
          *((float *)&v32 + 2) = *((float *)&v31 + 2) + v23;
          *((float *)&v32 + 3) = *((float *)&v31 + 3) + v24;
          CScopedClipStack::GetTopGpuClipInScope((__int64 *)a1 + 114, 1, (__int64)v33);
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v33, (float *)&v32) )
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 48) + 256LL))(*((_QWORD *)a1 + 48));
            v16 = MoveOptimizationInfo::Create((__int64)this, v23, v24, &v31, 0LL, v15, &v25);
            v7 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1D7Eu);
            }
            else
            {
              v17 = v23;
              v18 = (_QWORD *)((char *)a1 + 6552);
              v19 = *((unsigned int *)a1 + 1644);
              v20 = v19 + 1;
              if ( (int)v19 + 1 >= (unsigned int)v19 )
                LODWORD(v17) = v19 + 1;
              v7 = v20 < (unsigned int)v19 ? 0x80070216 : 0;
              if ( v20 < (unsigned int)v19 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
              }
              else if ( LODWORD(v17) > *((_DWORD *)a1 + 1643) )
              {
                v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18, 8u, 1, &v25);
                v7 = v21;
                if ( v21 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
              }
              else
              {
                *(_QWORD *)(*v18 + 8 * v19) = v25;
                *((float *)a1 + 1644) = v17;
              }
              if ( v7 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1D83u);
              }
              else
              {
                CBitmapOfDeviceBitmaps::AddRef(v25);
                *a7 = 1;
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterface<CCompositionSurfaceInfo>(&v25);
  return (unsigned int)v7;
}

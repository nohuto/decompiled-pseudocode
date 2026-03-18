/*
 * XREFs of ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18006D6FC
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006C978 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006EC50 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180174870 (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180176318 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800644D0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D274 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B3C78 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
        __int64 a1,
        CGdiSpriteBitmap *a2,
        __int128 *a3,
        int *a4,
        unsigned int a5,
        int a6,
        bool a7)
{
  int v7; // eax
  unsigned int v8; // edi
  float v13; // xmm10_4
  int v14; // eax
  int v15; // eax
  void *v16; // rcx
  int v17; // edx
  _DWORD *v18; // rax
  char *v19; // rcx
  unsigned int v20; // xmm1_4
  __int64 v21; // r8
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm1_4
  char *v24; // rax
  void *v25; // rcx
  int v26; // eax
  CMILMatrix *v27; // rcx
  __int64 v28; // r9
  int v29; // r8d
  int v30; // eax
  float v31; // xmm5_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm4_4
  float v36; // xmm1_4
  float v37; // xmm7_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  __int64 v41; // rdx
  char v42; // r8
  char v43; // al
  __int64 v44; // rcx
  __int64 (__fastcall *v45)(__int64, float *, int, char, _BYTE *, __int64, unsigned int *); // rax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  unsigned int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  float v56; // xmm8_4
  float v57; // xmm7_4
  float v58; // xmm6_4
  _BYTE v59[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v60; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-98h]
  __int128 v63; // [rsp+70h] [rbp-90h]
  float v64[6]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v65; // [rsp+98h] [rbp-68h] BYREF
  __int128 v66; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+B8h] [rbp-48h]
  _QWORD v68[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v69; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v70[16]; // [rsp+E0h] [rbp-20h] BYREF
  char v71; // [rsp+F0h] [rbp-10h] BYREF
  char v72; // [rsp+100h] [rbp+0h] BYREF

  v7 = *(_DWORD *)(a1 + 3104);
  v8 = 0;
  if ( v7 )
    v13 = *(float *)(*(_QWORD *)(a1 + 3120) + 4LL * (unsigned int)(v7 - 1));
  else
    v13 = FLOAT_1_0;
  v14 = *(_DWORD *)(a1 + 512);
  if ( v14 && *(_BYTE *)((unsigned int)(v14 - 1) + *(_QWORD *)(a1 + 528)) )
    goto LABEL_45;
  v15 = *(_DWORD *)(a1 + 480);
  v16 = v15 ? (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v15 - 1)) : &CMILMatrix::Identity;
  if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v16) )
    goto LABEL_45;
  v17 = *(_DWORD *)(a1 + 480);
  v65 = *(_OWORD *)a4;
  v66 = *a3;
  v18 = v17 ? (_DWORD *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v17 - 1)) : &CMILMatrix::Identity;
  v19 = &v72;
  v20 = v18[1];
  v21 = 2LL;
  LODWORD(v61) = *v18;
  *(_QWORD *)((char *)&v61 + 4) = __PAIR64__(v18[4], v20);
  v22 = v18[12];
  HIDWORD(v61) = v18[5];
  v23 = v18[13];
  v68[0] = v70;
  v68[1] = &v71;
  v24 = &v69;
  v62 = __PAIR64__(v23, v22);
  do
  {
    *(_QWORD *)v24 = v19;
    v19 += 16;
    v24 += 8;
    --v21;
  }
  while ( v21 );
  v25 = v17 ? (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v17 - 1)) : &CMILMatrix::Identity;
  if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v25) )
    goto LABEL_45;
  v26 = *(_DWORD *)(a1 + 480);
  if ( v26 )
    v27 = (CMILMatrix *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v26 - 1));
  else
    v27 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v27);
  v29 = *(_DWORD *)(a1 + 1032);
  if ( v29
    && *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 80LL * (unsigned int)(v29 - 1) + 4)
    && (v30 = *(_DWORD *)(a1 + 3072)) != 0 )
  {
    *(_OWORD *)v64 = *(_OWORD *)(*(_QWORD *)(a1 + 3088) + 16LL * (unsigned int)(v30 - 1));
    v31 = v64[3];
    v32 = v64[2];
    v33 = v64[1];
    v34 = v64[0];
  }
  else
  {
    v31 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v32 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v33 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v34 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v29 && *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 80LL * (unsigned int)(v29 - 1) + 8) )
  {
    v54 = 120LL * (unsigned int)(*(_DWORD *)(a1 + 1864) - 1);
    v55 = *(_QWORD *)(a1 + 1840);
    if ( *(float *)(v54 + v55 + 96) > v34 )
      v34 = *(float *)(v54 + v55 + 96);
    v56 = v33;
    if ( *(float *)(v54 + v55 + 100) > v33 )
    {
      v33 = *(float *)(v54 + v55 + 100);
      v56 = v33;
    }
    v57 = v32;
    if ( v32 > *(float *)(v54 + v55 + 104) )
    {
      v32 = *(float *)(v54 + v55 + 104);
      v57 = v32;
    }
    v58 = v31;
    if ( v31 > *(float *)(v54 + v55 + 108) )
    {
      v31 = *(float *)(v54 + v55 + 108);
      v58 = v31;
    }
    if ( v57 <= v34 || v58 <= v56 )
    {
      v31 = 0.0;
      v32 = 0.0;
      v33 = 0.0;
      v34 = 0.0;
    }
  }
  v35 = *(float *)&v63;
  if ( v34 > *(float *)&v63 )
  {
    *(float *)&v63 = v34;
    v35 = v34;
  }
  v36 = *((float *)&v63 + 1);
  v37 = *((float *)&v63 + 1);
  if ( v33 > *((float *)&v63 + 1) )
  {
    *((float *)&v63 + 1) = v33;
    v36 = v33;
    v37 = v33;
  }
  v38 = *((float *)&v63 + 2);
  if ( *((float *)&v63 + 2) > v32 )
  {
    *((float *)&v63 + 2) = v32;
    v38 = v32;
  }
  v39 = *((float *)&v63 + 3);
  if ( *((float *)&v63 + 3) > v31 )
  {
    *((float *)&v63 + 3) = v31;
    v39 = v31;
  }
  if ( v38 <= v35 || v39 <= v37 )
  {
    v36 = 0.0;
    v35 = 0.0;
    v38 = 0.0;
    v63 = 0uLL;
    v39 = 0.0;
  }
  if ( v38 <= v35 || v39 <= v36 )
  {
    v50 = 0;
    v60 = 0;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 6827) )
      goto LABEL_45;
    v41 = *(_QWORD *)(a1 + 6744);
    v59[0] = 0;
    v42 = *(_BYTE *)(v41 + 885);
    v43 = (char)(4 * v42) >> 6;
    *(_OWORD *)v64 = v63;
    if ( v43 )
    {
      LOBYTE(v28) = v43 == 1;
    }
    else
    {
      LOBYTE(v28) = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v41 + 820) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v41 + 832) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v41 + 840) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v41 + 848) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v41 + 880) - 1.0)) & _xmm) < 0.000081380211;
      *(_BYTE *)(v41 + 885) = v42 ^ (v42 ^ (-16 - 32 * v28)) & 0x30;
      if ( (_BYTE)v28 )
        *(_BYTE *)(v41 + 884) |= 0x3Fu;
    }
    v44 = *(_QWORD *)(v41 + 392);
    v45 = *(__int64 (__fastcall **)(__int64, float *, int, char, _BYTE *, __int64, unsigned int *))(*(_QWORD *)v44 + 64LL);
    if ( v45 == CArrayBasedCoverageSet::ComputeVisibleRegion )
      v46 = CArrayBasedCoverageSet::ComputeVisibleRegion(v44, v64, a5, v28, v59, (__int64)v68, &v60);
    else
      v46 = v45(v44, v64, a5, v28, v59, (__int64)v68, &v60);
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x38Au);
LABEL_45:
      v47 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
      v8 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x746u);
      }
      else
      {
        v48 = CDrawingContext::FillRectanglesAsDrawList(
                (struct CDrawingContext *)a1,
                (__int64)a3,
                1u,
                a4,
                a2,
                0LL,
                v13,
                a6,
                a7);
        v8 = v48;
        if ( v48 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x750u);
      }
      return v8;
    }
    if ( !v59[0] )
      goto LABEL_45;
    v50 = v60;
  }
  if ( v50 )
  {
    MILMatrix3x2::InferAffineMatrix(v64, &v66, &v65);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v66,
      (const struct D2D1::Matrix3x2F *)v64,
      (const struct D2D1::Matrix3x2F *)&v61);
    v51 = CDrawingContext::PushTransformInternal(
            (CDrawingContext *)a1,
            0LL,
            (const struct CMILMatrix *)&CMILMatrix::Identity,
            0,
            1);
    v8 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x720u);
    }
    else
    {
      v52 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
      v8 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x723u);
      }
      else
      {
        v61 = v66;
        v62 = v67;
        v53 = CDrawingContext::FillRectanglesAsDrawList(
                (struct CDrawingContext *)a1,
                (__int64)v70,
                v60,
                0LL,
                a2,
                (struct MILMatrix3x2 *)&v61,
                v13,
                a6,
                a7);
        v8 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x734u);
      }
      CDrawingContext::PopTransformInternal((CDrawingContext *)a1, 1);
    }
  }
  return v8;
}

/*
 * XREFs of ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20
 * Callers:
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18001C22C (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800A8680 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180157928 (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801580C8 (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18000F298 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180045414 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800454DC (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18004F904 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18006F3D0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18009B44C (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x1800A7BDC (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD490 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapWithPartialOcclusion(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        struct MilRectF *a3,
        struct MilRectF *a4,
        float a5,
        unsigned int a6,
        int a7,
        char a8,
        int a9,
        char a10,
        _BYTE *a11)
{
  __int128 v11; // xmm0
  _BYTE *v13; // rbx
  char v14; // si
  struct MilRectF *v16; // r14
  const struct MilRectF *v17; // r15
  struct ID2D1Bitmap1 *v18; // rdx
  CRegionShape *v19; // r13
  int v20; // eax
  int v21; // r12d
  float v22; // xmm8_4
  const struct ID2DContextOwner *v23; // r13
  int v24; // eax
  int v25; // eax
  void *v26; // rcx
  int v27; // eax
  void *v28; // rax
  unsigned int v29; // xmm1_4
  FLOAT v30; // xmm1_4
  int v31; // eax
  void *v32; // rcx
  int v33; // eax
  void *v34; // rcx
  __int64 v35; // r9
  int v36; // r8d
  int v37; // eax
  float v38; // xmm4_4
  float v39; // xmm1_4
  float v40; // xmm5_4
  float v41; // xmm0_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  __int64 v46; // rbx
  float *v47; // r14
  char v48; // cl
  char v49; // al
  __int64 v50; // rcx
  __int64 (__fastcall *v51)(__int64, float *, int, char, _BYTE *, __int64, unsigned int *); // rax
  int v52; // eax
  int v53; // esi
  float v54; // eax
  bool v55; // sf
  int v56; // eax
  char v57; // cl
  unsigned int v59; // eax
  int v60; // eax
  __int128 v61; // xmm3
  enum D2D1_PRIMITIVE_BLEND v62; // edx
  enum D2D1_INTERPOLATION_MODE v63; // r9d
  CD2DContext *v64; // rcx
  __int64 v65; // xmm4_8
  __int64 (__usercall *v66)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct CShape *@<r8>, struct ID2D1Bitmap1 *@<r9>, const struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_EXTEND_MODE, enum D2D1_PRIMITIVE_BLEND); // rax
  int v67; // eax
  CRegionShape *(__fastcall *v68)(CRegionShape *, char); // rax
  char v69; // al
  char v70; // dl
  enum D2D1_INTERPOLATION_MODE v71; // eax
  int v72; // xmm1_4
  int v73; // eax
  char *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rbx
  CRegionShape *v78; // r13
  unsigned int v79; // esi
  CInputSinkStruct::InputQueueInfo *v80; // rax
  const struct MilRectF *v81; // rbx
  enum D2D1_INTERPOLATION_MODE v82; // eax
  int v83; // eax
  enum D2D1_ANTIALIAS_MODE v84; // r8d
  unsigned int v85; // [rsp+28h] [rbp-E0h]
  float *v86; // [rsp+38h] [rbp-D0h]
  enum D2D1_INTERPOLATION_MODE v87; // [rsp+40h] [rbp-C8h]
  float v88[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+70h] [rbp-98h] BYREF
  struct ID2D1Bitmap1 *v90; // [rsp+78h] [rbp-90h] BYREF
  struct MilRectF *v91; // [rsp+80h] [rbp-88h] BYREF
  CRegionShape *v92; // [rsp+88h] [rbp-80h] BYREF
  struct IImageSource *v93; // [rsp+90h] [rbp-78h]
  struct MilRectF *v94; // [rsp+98h] [rbp-70h]
  __int128 v95; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v96; // [rsp+B0h] [rbp-58h] BYREF
  __m128 v97; // [rsp+C0h] [rbp-48h] BYREF
  struct D2D_MATRIX_3X2_F v98; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v99; // [rsp+F0h] [rbp-18h] BYREF
  struct D2D_MATRIX_3X2_F v100; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v101[4]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v102[16]; // [rsp+138h] [rbp+30h] BYREF
  char v103; // [rsp+148h] [rbp+40h] BYREF
  char v104; // [rsp+158h] [rbp+50h] BYREF
  char v105; // [rsp+168h] [rbp+60h] BYREF

  v11 = *(_OWORD *)a4;
  v13 = a11;
  v14 = a10;
  v16 = a3;
  v17 = 0LL;
  v93 = a2;
  v18 = 0LL;
  v90 = 0LL;
  v19 = 0LL;
  v94 = a4;
  v91 = a3;
  v89 = (__int64)a11;
  BYTE1(v88[0]) = 0;
  v88[1] = 0.0;
  v92 = 0LL;
  v96 = v11;
  v99 = *(_OWORD *)a3;
  if ( !a10 )
  {
    if ( (int)CDrawingContext::BitmapResourceToD2DBitmap(this, a2, 0LL, a8 & 1, 0LL, &v90) < 0 || (v18 = v90) == 0LL )
    {
      v21 = -2147467261;
      MilInstrumentationCheckHR(0x14u, &dword_1801D5B60, 1u, -2147467261, 0x7BEu);
      goto LABEL_62;
    }
    a4 = v94;
  }
  v20 = *((_DWORD *)this + 752);
  if ( !v20 )
  {
    v21 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &dword_1801D5B60, 1u, -2147467259, 0x7C3u);
    goto LABEL_79;
  }
  v21 = 0;
  v22 = a5;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(*((_QWORD *)this + 378)
                                                                   + 4LL * (unsigned int)(v20 - 1))
                                                        - 1.0)) & _xmm) >= 0.0000011920929 )
    v22 = a5 * *(float *)(*((_QWORD *)this + 378) + 4LL * (unsigned int)(v20 - 1));
  if ( !a10 && a7 == 2 )
  {
    v72 = *((_DWORD *)a4 + 1);
    v96 = *(_OWORD *)v16;
    LODWORD(v89) = *(_DWORD *)a4;
    HIDWORD(v89) = v72;
    v56 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v21 = v56;
    if ( v56 < 0 )
    {
      v85 = 2011;
    }
    else
    {
      v73 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65));
      v74 = (char *)this + 8;
      if ( !this )
        v74 = 0LL;
      v56 = (*(__int64 (__fastcall **)(_QWORD, char *, struct ID2D1Bitmap1 *, __int128 *, __int64 *, float, int, bool, int))(**((_QWORD **)this + 49) + 104LL))(
              *((_QWORD *)this + 49),
              v74,
              v90,
              &v96,
              &v89,
              COERCE_FLOAT(LODWORD(v22)),
              12,
              *((_DWORD *)this + 66) != 0,
              v73);
      v21 = v56;
      if ( v56 >= 0 )
        goto LABEL_56;
      v85 = 2020;
    }
    goto LABEL_140;
  }
  v23 = (CDrawingContext *)((char *)this + 8);
  if ( *((_DWORD *)this + 126) )
  {
    v24 = *((_DWORD *)this + 126);
    if ( v24 )
    {
      if ( *(_BYTE *)((unsigned int)(v24 - 1) + *((_QWORD *)this + 65)) )
      {
LABEL_54:
        if ( v14 )
        {
          v56 = CDrawingContext::ApplyRenderStateInternal(this, 0);
          v21 = v56;
          if ( v56 < 0 )
          {
            v85 = 2139;
          }
          else
          {
            v71 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65));
            v56 = CDrawingContext::FillRectanglesAsDrawList(
                    this,
                    v16,
                    1u,
                    v94,
                    v93,
                    0LL,
                    *(float *)&v86,
                    (enum D2D1_ANTIALIAS_MODE)v87,
                    v71);
            v21 = v56;
            if ( v56 >= 0 )
              goto LABEL_56;
            v85 = 2149;
          }
        }
        else
        {
          v56 = CDrawingContext::DrawD2DBitmapInternal((__int64)this, v18, (__int64)v16, (__int64)&v96, v22);
          v21 = v56;
          if ( v56 >= 0 )
          {
LABEL_56:
            v57 = 0;
            goto LABEL_57;
          }
          v85 = 2157;
        }
        goto LABEL_140;
      }
    }
  }
  v25 = *((_DWORD *)this + 118);
  if ( v25 )
    v26 = (void *)(*((_QWORD *)this + 61) + 68LL * (unsigned int)(v25 - 1));
  else
    v26 = &CMILMatrix::Identity;
  if ( !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v26) )
    goto LABEL_53;
  v27 = *((_DWORD *)this + 118);
  v28 = v27 ? (void *)(*((_QWORD *)this + 61) + 68LL * (unsigned int)(v27 - 1)) : &CMILMatrix::Identity;
  v29 = *((_DWORD *)v28 + 1);
  v98.m11 = *(FLOAT *)v28;
  *(_QWORD *)&v98.m[0][1] = __PAIR64__(*((_DWORD *)v28 + 4), v29);
  *(_QWORD *)&v98.m[1][1] = __PAIR64__(*((_DWORD *)v28 + 12), *((_DWORD *)v28 + 5));
  v30 = *((float *)v28 + 13);
  v101[0] = v102;
  v101[1] = &v103;
  v101[2] = &v104;
  v101[3] = &v105;
  v31 = *((_DWORD *)this + 118);
  v98.dy = v30;
  v32 = v31 ? (void *)(*((_QWORD *)this + 61) + 68LL * (unsigned int)(v31 - 1)) : &CMILMatrix::Identity;
  if ( !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v32) )
    goto LABEL_53;
  v33 = *((_DWORD *)this + 118);
  if ( v33 )
    v34 = (void *)(*((_QWORD *)this + 61) + 68LL * (unsigned int)(v33 - 1));
  else
    v34 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v34, (__int64)&v96, (float *)&v95);
  v36 = *((_DWORD *)this + 234);
  if ( v36
    && *(_DWORD *)(80LL * (unsigned int)(v36 - 1) + *((_QWORD *)this + 114) + 4)
    && (v37 = *((_DWORD *)this + 744)) != 0 )
  {
    v97 = *(__m128 *)(16LL * (unsigned int)(v37 - 1) + *((_QWORD *)this + 374));
    v38 = v97.m128_f32[2];
    v39 = v97.m128_f32[1];
    LODWORD(v40) = _mm_shuffle_ps(v97, v97, 255).m128_u32[0];
    v41 = v97.m128_f32[0];
  }
  else
  {
    v40 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v38 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v39 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v41 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v36 && *(_DWORD *)(80LL * (unsigned int)(v36 - 1) + *((_QWORD *)this + 114) + 8) )
  {
    v75 = 120LL * (unsigned int)(*((_DWORD *)this + 442) - 1);
    v76 = *((_QWORD *)this + 218);
    if ( *(float *)(v75 + v76 + 96) > v41 )
      v41 = *(float *)(v75 + v76 + 96);
    if ( *(float *)(v75 + v76 + 100) > v39 )
      v39 = *(float *)(v75 + v76 + 100);
    if ( v38 > *(float *)(v75 + v76 + 104) )
      v38 = *(float *)(v75 + v76 + 104);
    if ( v40 > *(float *)(v75 + v76 + 108) )
      v40 = *(float *)(v75 + v76 + 108);
    if ( v38 <= v41 || v40 <= v39 )
    {
      v41 = 0.0;
      v40 = 0.0;
      v38 = 0.0;
      v39 = 0.0;
    }
  }
  LODWORD(v42) = v95;
  if ( v41 > *(float *)&v95 )
  {
    *(float *)&v95 = v41;
    v42 = v41;
  }
  v43 = *((float *)&v95 + 1);
  if ( v39 > *((float *)&v95 + 1) )
  {
    *((float *)&v95 + 1) = v39;
    v43 = v39;
  }
  v44 = *((float *)&v95 + 2);
  if ( *((float *)&v95 + 2) > v38 )
  {
    *((float *)&v95 + 2) = v38;
    v44 = v38;
  }
  v45 = *((float *)&v95 + 3);
  if ( *((float *)&v95 + 3) > v40 )
  {
    *((float *)&v95 + 3) = v40;
    v45 = v40;
  }
  if ( v44 <= v42 || v45 <= v43 )
  {
    v54 = 0.0;
    v88[1] = 0.0;
    goto LABEL_67;
  }
  if ( !*((_BYTE *)this + 6771) )
  {
LABEL_53:
    v18 = v90;
    goto LABEL_54;
  }
  v46 = *((_QWORD *)this + 835);
  if ( !v46 )
  {
    v13 = (_BYTE *)v89;
    goto LABEL_53;
  }
  LOBYTE(v88[0]) = 0;
  if ( *(_BYTE *)(v46 + 728) )
  {
    COcclusionContext::DeviceRectToPageInPixelsRect(v46, &v95, v97.m128_f32);
  }
  else
  {
    v97.m128_u64[0] = __PAIR64__(LODWORD(v43), LODWORD(v42));
    v97.m128_u64[1] = __PAIR64__(LODWORD(v45), LODWORD(v44));
  }
  v47 = (float *)(v46 + 732);
  v48 = *(_BYTE *)(v46 + 797);
  v49 = (char)(4 * v48) >> 6;
  if ( v49 )
  {
    if ( v49 != 1 )
    {
LABEL_45:
      LOBYTE(v35) = 0;
      goto LABEL_46;
    }
  }
  else
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v47) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v46 + 744)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v46 + 752)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v46 + 760)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v46 + 792) - 1.0)) & _xmm) >= 0.00012207031 )
    {
      v69 = 0;
      v70 = 48;
    }
    else
    {
      v69 = 1;
      v70 = 16;
    }
    *(_BYTE *)(v46 + 797) = v70 | v48 & 0xCF;
    if ( !v69 )
      goto LABEL_45;
    *(_BYTE *)(v46 + 796) |= 0x3Fu;
  }
  LOBYTE(v35) = 1;
LABEL_46:
  v50 = *(_QWORD *)(v46 + 304);
  v51 = *(__int64 (__fastcall **)(__int64, float *, int, char, _BYTE *, __int64, unsigned int *))(*(_QWORD *)v50 + 56LL);
  if ( v51 == CArrayBasedCoverageSet::ComputeVisibleRegion )
  {
    v52 = CArrayBasedCoverageSet::ComputeVisibleRegion(
            v50,
            v97.m128_f32,
            a6,
            v35,
            v88,
            (__int64)v101,
            (unsigned int *)&v88[1]);
  }
  else
  {
    v86 = &v88[1];
    v52 = ((__int64 (__fastcall *)(__int64, __m128 *, _QWORD, __int64, float *, _QWORD *))v51)(
            v50,
            &v97,
            a6,
            v35,
            v88,
            v101);
  }
  v53 = v52;
  if ( v52 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x36Fu);
    v54 = v88[1];
  }
  else
  {
    v54 = v88[1];
    if ( *(_BYTE *)(v46 + 728) && LODWORD(v88[1]) )
    {
      do
      {
        v77 = (unsigned int)v17;
        v95 = *(_OWORD *)v101[(unsigned int)v17];
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v47, (__int64)&v95, &v100.m11);
        LODWORD(v17) = (_DWORD)v17 + 1;
        *(_OWORD *)v101[v77] = *(_OWORD *)&v100.m11;
        v54 = v88[1];
      }
      while ( (unsigned int)v17 < LODWORD(v88[1]) );
      v17 = 0LL;
    }
  }
  v13 = (_BYTE *)v89;
  v55 = v53 < 0;
  v14 = a10;
  if ( v55 || !LOBYTE(v88[0]) )
  {
    v16 = v91;
    goto LABEL_53;
  }
LABEL_67:
  v57 = 1;
  BYTE1(v88[0]) = 1;
  if ( v54 == 0.0 )
    goto LABEL_57;
  MILMatrix3x2::InferAffineMatrix((__int64)&v97, (float *)&v99, (float *)&v96);
  MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v100, (const struct MILMatrix3x2 *)&v97, (const struct MILMatrix3x2 *)&v98);
  v56 = CShape::BuildFromRectFs((__int64)v102, v59, &v92);
  v21 = v56;
  if ( v56 < 0 )
  {
    v85 = 2065;
    goto LABEL_140;
  }
  v56 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v21 = v56;
  if ( v56 < 0 )
  {
    v85 = 2072;
LABEL_140:
    MilInstrumentationCheckHR(0x14u, &dword_1801D5B60, 1u, v56, v85);
    goto LABEL_79;
  }
  v60 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v21 = v60;
  if ( v60 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D5B60, 1u, v60, 0x81Bu);
  }
  else
  {
    v98 = v100;
    v61 = *(_OWORD *)&v100.m11;
    if ( v14 )
    {
      v78 = v92;
      (*(void (__fastcall **)(CRegionShape *, struct MilRectF **))(*(_QWORD *)v92 + 40LL))(v92, &v91);
      v79 = (unsigned int)v91;
      v80 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul((unsigned int)v91, 0x10uLL));
      v81 = v80;
      if ( v80 )
      {
        `vector constructor iterator'(
          v80,
          0x10uLL,
          v79,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        v17 = v81;
        (*(void (__fastcall **)(CRegionShape *, const struct MilRectF *, _QWORD))(*(_QWORD *)v78 + 48LL))(
          v78,
          v81,
          (unsigned int)v91);
        v82 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65));
        v83 = CDrawingContext::FillRectanglesAsDrawList(
                this,
                v81,
                (unsigned int)v91,
                0LL,
                v93,
                &v98,
                *(float *)&v86,
                (enum D2D1_ANTIALIAS_MODE)v87,
                v82);
        v21 = v83;
        if ( v83 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801D5B60, 1u, v83, 0x838u);
      }
      else
      {
        v21 = -2147024882;
        MilInstrumentationCheckHR(0x14u, &dword_1801D5B60, 1u, -2147024882, 0x82Cu);
      }
      v13 = (_BYTE *)v89;
    }
    else
    {
      if ( !this )
        v23 = 0LL;
      v63 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65));
      v64 = (CD2DContext *)*((_QWORD *)this + 49);
      v84 = *((_DWORD *)this + 66) != 0;
      *(_OWORD *)&v98.m11 = v61;
      *(_QWORD *)&v98.m[2][0] = v65;
      v66 = *(__int64 (__usercall **)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct CShape *@<r8>, struct ID2D1Bitmap1 *@<r9>, const struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_EXTEND_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v64 + 120LL);
      if ( v66 == CD2DContext::FillShapeWithBitmap )
        v67 = CD2DContext::FillShapeWithBitmap(v64, v23, v92, v90, &v98, v22, v84, v63, D2D1_EXTEND_MODE_CLAMP, v62);
      else
        v67 = ((__int64 (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, CRegionShape *, struct ID2D1Bitmap1 *, struct D2D_MATRIX_3X2_F *))v66)(
                v64,
                v23,
                v92,
                v90,
                &v98);
      v21 = v67;
      if ( v67 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801D5B60, 1u, v67, 0x846u);
    }
  }
  CDrawingContext::PopTransformInternal(this, 1);
LABEL_79:
  if ( v21 >= 0 )
  {
    v57 = BYTE1(v88[0]);
LABEL_57:
    if ( v13 )
      *v13 = v57;
  }
  if ( v17 )
    HeapFree(WPF::g_processHeap, 0, v17);
  v19 = v92;
LABEL_62:
  if ( v90 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v90 + 16LL))(v90);
  if ( v19 )
  {
    v68 = **(CRegionShape *(__fastcall ***)(CRegionShape *, char))v19;
    if ( v68 == CRegionShape::`vector deleting destructor' )
      CRegionShape::`vector deleting destructor'(v19, 1);
    else
      v68(v19, 1);
  }
  return (unsigned int)v21;
}

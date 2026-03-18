/*
 * XREFs of ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18003F3AC
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18003DD0C (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180041CEC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014B9FC (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D014 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180036CA0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003D5F8 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EEF0 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18006AF54 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18006B01C (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
        __int64 a1,
        CCachedVisualImage *a2,
        CCachedVisualImage **a3,
        int *a4,
        unsigned int a5,
        int a6,
        bool a7)
{
  int v7; // eax
  unsigned int v8; // ebx
  float v13; // xmm6_4
  __int64 v14; // rdx
  int v15; // eax
  void *v16; // rcx
  float *v17; // rcx
  float v18; // xmm1_4
  float v19; // xmm1_4
  int v20; // eax
  _DWORD *v21; // rax
  char *v22; // rcx
  unsigned int v23; // xmm1_4
  __int64 v24; // rdx
  unsigned int v25; // xmm0_4
  unsigned int v26; // xmm1_4
  char *v27; // rax
  int v28; // eax
  int v29; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  float v34; // xmm1_4
  float v35; // xmm1_4
  unsigned int v36; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-98h]
  _BYTE v39[24]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v40; // [rsp+90h] [rbp-78h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+B0h] [rbp-58h]
  _QWORD v43[2]; // [rsp+B8h] [rbp-50h] BYREF
  char v44; // [rsp+C8h] [rbp-40h] BYREF
  CCachedVisualImage *v45[2]; // [rsp+D8h] [rbp-30h] BYREF
  char v46; // [rsp+E8h] [rbp-20h] BYREF
  char v47; // [rsp+F8h] [rbp-10h] BYREF

  v7 = *(_DWORD *)(a1 + 3104);
  v8 = 0;
  if ( v7 )
    v13 = *(float *)(*(_QWORD *)(a1 + 3120) + 4LL * (unsigned int)(v7 - 1));
  else
    v13 = FLOAT_1_0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)(a1 + 8)) )
    goto LABEL_14;
  v15 = *(_DWORD *)(a1 + 480);
  v16 = v15 ? (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v15 - 1)) : &CMILMatrix::Identity;
  LOBYTE(v14) = 1;
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(v16, v14)
    || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17[1]) & _xmm), v18 >= 0.000081380211)
    || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17[4]) & _xmm), v19 >= 0.000081380211) )
  {
    v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v17) & _xmm);
    if ( v34 >= 0.000081380211 )
      goto LABEL_14;
    v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17[5]) & _xmm);
    if ( v35 >= 0.000081380211 )
      goto LABEL_14;
  }
  v20 = *(_DWORD *)(a1 + 480);
  v40 = *(_OWORD *)a4;
  v41 = *(_OWORD *)a3;
  v21 = v20 ? (_DWORD *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v20 - 1)) : &CMILMatrix::Identity;
  v22 = &v47;
  v23 = v21[1];
  v24 = 2LL;
  LODWORD(v37) = *v21;
  *(_QWORD *)((char *)&v37 + 4) = __PAIR64__(v21[4], v23);
  v25 = v21[12];
  HIDWORD(v37) = v21[5];
  v26 = v21[13];
  v43[0] = v45;
  v43[1] = &v46;
  v27 = &v44;
  v38 = __PAIR64__(v26, v25);
  do
  {
    *(_QWORD *)v27 = v22;
    v22 += 16;
    v27 += 8;
    --v24;
  }
  while ( v24 );
  if ( CDrawingContext::CalcPartiallyVisibleRectangleSet(a1, (__int64)&v40, a5, (__int64)v43, &v36) )
  {
    if ( v36 )
    {
      MILMatrix3x2::InferAffineMatrix(v39, &v41, &v40);
      MILMatrix3x2::SetProduct(
        (MILMatrix3x2 *)&v41,
        (const struct MILMatrix3x2 *)v39,
        (const struct MILMatrix3x2 *)&v37);
      v31 = CDrawingContext::PushTransformInternal(
              (CDrawingContext *)a1,
              0LL,
              (const struct CMILMatrix *)&CMILMatrix::Identity,
              0,
              1);
      v8 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x797u);
      }
      else
      {
        v32 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
        v8 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x79Au);
        }
        else
        {
          v37 = v41;
          v38 = v42;
          v33 = CDrawingContext::FillRectanglesAsDrawList(
                  (struct CDrawingContext *)a1,
                  v45,
                  v36,
                  0LL,
                  a2,
                  (struct MILMatrix3x2 *)&v37,
                  v13,
                  a6,
                  a7);
          v8 = v33;
          if ( v33 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x7ABu);
        }
        CDrawingContext::PopTransformInternal((CDrawingContext *)a1, 1);
      }
    }
  }
  else
  {
LABEL_14:
    v28 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
    v8 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x7BDu);
    }
    else
    {
      v29 = CDrawingContext::FillRectanglesAsDrawList((struct CDrawingContext *)a1, a3, 1u, a4, a2, 0LL, v13, a6, a7);
      v8 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x7C7u);
    }
  }
  return v8;
}

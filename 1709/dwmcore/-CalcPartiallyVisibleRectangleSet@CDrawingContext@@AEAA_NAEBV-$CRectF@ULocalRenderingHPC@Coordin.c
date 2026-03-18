/*
 * XREFs of ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003D5F8
 * Callers:
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18003F3AC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18003F694 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180035DC0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::CalcPartiallyVisibleRectangleSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5)
{
  int v5; // eax
  char v6; // bl
  void *v10; // rcx
  float *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  float v14; // xmm1_4
  float v15; // xmm1_4
  int v16; // eax
  __int64 v17; // r9
  int v18; // r8d
  int v19; // eax
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  __int64 v28; // rax
  char v29; // dl
  char v30; // cl
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(__int64, float *, unsigned int, char, _BYTE *, __int64, unsigned int *); // rax
  int v33; // eax
  char v35; // cl
  float v36; // xmm1_4
  float v37; // xmm1_4
  __int64 v38; // rcx
  __int64 v39; // rax
  _BYTE v40[8]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v41; // [rsp+50h] [rbp-29h] BYREF
  __int128 v42; // [rsp+60h] [rbp-19h] BYREF

  v5 = *(_DWORD *)(a1 + 480);
  v6 = 0;
  if ( v5 )
    v10 = (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v5 - 1));
  else
    v10 = &CMILMatrix::Identity;
  LOBYTE(a2) = 1;
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(v10, a2)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11[1]) & _xmm), v14 >= 0.000081380211)
    || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11[4]) & _xmm), v15 >= 0.000081380211) )
  {
    v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v11) & _xmm);
    if ( v36 >= 0.000081380211 )
      return v6;
    v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11[5]) & _xmm);
    if ( v37 >= 0.000081380211 )
      return v6;
  }
  v16 = *(_DWORD *)(a1 + 480);
  if ( v16 )
    v12 = *(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v16 - 1);
  CMILMatrix::Transform2DBoundsHelper<0>(v12, v13, &v41);
  v18 = *(_DWORD *)(a1 + 1032);
  if ( v18
    && *(_DWORD *)(80LL * (unsigned int)(v18 - 1) + *(_QWORD *)(a1 + 1008) + 4)
    && (v19 = *(_DWORD *)(a1 + 3072)) != 0 )
  {
    v42 = *(_OWORD *)(16LL * (unsigned int)(v19 - 1) + *(_QWORD *)(a1 + 3088));
    v20 = *((float *)&v42 + 3);
    v21 = *((float *)&v42 + 2);
    v22 = *((float *)&v42 + 1);
    v23 = *(float *)&v42;
  }
  else
  {
    v20 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v21 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v22 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v23 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v18 && *(_DWORD *)(80LL * (unsigned int)(v18 - 1) + *(_QWORD *)(a1 + 1008) + 8) )
  {
    v38 = 120LL * (unsigned int)(*(_DWORD *)(a1 + 1864) - 1);
    v39 = *(_QWORD *)(a1 + 1840);
    if ( *(float *)(v38 + v39 + 96) > v23 )
      v23 = *(float *)(v38 + v39 + 96);
    if ( *(float *)(v38 + v39 + 100) > v22 )
      v22 = *(float *)(v38 + v39 + 100);
    if ( v21 > *(float *)(v38 + v39 + 104) )
      v21 = *(float *)(v38 + v39 + 104);
    if ( v20 > *(float *)(v38 + v39 + 108) )
      v20 = *(float *)(v38 + v39 + 108);
    if ( v21 <= v23 || v20 <= v22 )
    {
      v20 = 0.0;
      v21 = 0.0;
      v22 = 0.0;
      v23 = 0.0;
    }
  }
  v24 = *(float *)&v41;
  if ( v23 > *(float *)&v41 )
  {
    *(float *)&v41 = v23;
    v24 = v23;
  }
  v25 = *((float *)&v41 + 1);
  if ( v22 > *((float *)&v41 + 1) )
  {
    *((float *)&v41 + 1) = v22;
    v25 = v22;
  }
  v26 = *((float *)&v41 + 2);
  if ( *((float *)&v41 + 2) > v21 )
  {
    *((float *)&v41 + 2) = v21;
    v26 = v21;
  }
  v27 = *((float *)&v41 + 3);
  if ( *((float *)&v41 + 3) > v20 )
  {
    *((float *)&v41 + 3) = v20;
    v27 = v20;
  }
  if ( v26 <= v24 || v27 <= v25 )
  {
    v27 = 0.0;
    v26 = 0.0;
    v25 = 0.0;
    v24 = 0.0;
    v41 = 0uLL;
  }
  if ( v26 <= v24 || v27 <= v25 )
  {
    *a5 = 0;
    return 1;
  }
  if ( *(_BYTE *)(a1 + 6827) )
  {
    v28 = *(_QWORD *)(a1 + 6744);
    if ( v28 )
    {
      v40[0] = 0;
      v29 = *(_BYTE *)(v28 + 885);
      v30 = (char)(4 * v29) >> 6;
      v42 = v41;
      if ( v30 )
      {
        LOBYTE(v17) = v30 == 1;
      }
      else
      {
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v28 + 820)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v28 + 832)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v28 + 840)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v28 + 848)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v28 + 880) - 1.0)) & _xmm) >= 0.000081380211 )
        {
          LOBYTE(v17) = 0;
          v35 = 48;
        }
        else
        {
          LOBYTE(v17) = 1;
          v35 = 16;
        }
        *(_BYTE *)(v28 + 885) = v35 | v29 & 0xCF;
        if ( (_BYTE)v17 )
          *(_BYTE *)(v28 + 884) |= 0x3Fu;
      }
      v31 = *(_QWORD *)(v28 + 392);
      v32 = *(__int64 (__fastcall **)(__int64, float *, unsigned int, char, _BYTE *, __int64, unsigned int *))(*(_QWORD *)v31 + 64LL);
      if ( v32 == CArrayBasedCoverageSet::ComputeVisibleRegion )
        v33 = CArrayBasedCoverageSet::ComputeVisibleRegion(v31, (float *)&v42, a3, v17, v40, a4, a5);
      else
        v33 = v32(v31, (float *)&v42, a3, v17, v40, a4, a5);
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x380u);
        return v6;
      }
      if ( v40[0] )
        return 1;
    }
  }
  return v6;
}

/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3@Z @ 0x18000A3DC
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18004BD70 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18000A32C (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18000A67C (-InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMil3DRect@MV-$TMilRect_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        CMILMatrix *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int SourceInputBounds; // eax
  int v11; // esi
  int v12; // eax
  __m128 v13; // xmm2
  __int128 v14; // xmm1
  __int64 v15; // rdx
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  __int128 v27; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v28; // [rsp+50h] [rbp-A1h]
  int v29; // [rsp+58h] [rbp-99h]
  __int128 v30; // [rsp+60h] [rbp-91h]
  unsigned __int64 v31; // [rsp+70h] [rbp-81h]
  __int128 v32; // [rsp+78h] [rbp-79h] BYREF
  __int128 v33; // [rsp+88h] [rbp-69h] BYREF
  __int128 v34; // [rsp+98h] [rbp-59h]
  unsigned __int64 v35; // [rsp+A8h] [rbp-49h]
  _BYTE v36[24]; // [rsp+B0h] [rbp-41h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-29h]

  if ( *(_QWORD *)(a1 + 96) )
  {
    v28 = 0LL;
    v29 = 0;
    v27 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, (_OWORD *)a2, a3, (__int64 *)&v27);
    v11 = SourceInputBounds;
    if ( SourceInputBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SourceInputBounds, 0x29Du);
    }
    else
    {
      if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc3DBounds(a4, a5, v36) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2B3u);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v27);
        return 0;
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 96) + 96LL))(
              *(_QWORD *)(a1 + 96),
              v36,
              a2,
              v27,
              v29,
              &v32,
              &v33);
      v11 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2ABu);
      }
      else
      {
        v13 = (__m128)*(unsigned int *)(a2 + 20);
        v35 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a2 + 16), v13).m128_u64[0];
        v30 = v33;
        v34 = v32;
        v31 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a2 + 16), v13).m128_u64[0];
        CMILMatrix::Transform3DBoundsHelper<1>(a4);
        CMILMatrix::Transform3DBoundsHelper<1>(a4);
        v14 = v34;
        *(_OWORD *)a6 = v37;
        *(_OWORD *)a7 = v14;
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
        {
          if ( *(float *)a5 > *(float *)a6 )
            *(_DWORD *)a6 = *(_DWORD *)a5;
          v17 = *(float *)(a5 + 4);
          if ( v17 > *(float *)(a6 + 4) )
            *(float *)(a6 + 4) = v17;
          v18 = *(float *)(a5 + 8);
          v19 = *(float *)(a6 + 8);
          if ( v19 > v18 )
          {
            *(float *)(a6 + 8) = v18;
            v19 = v18;
          }
          v20 = *(float *)(a5 + 12);
          v21 = *(float *)(a6 + 12);
          if ( v21 > v20 )
          {
            *(float *)(a6 + 12) = v20;
            v21 = v20;
            v19 = *(float *)(a6 + 8);
          }
          if ( v19 <= *(float *)a6 || v21 <= *(float *)(a6 + 4) )
          {
            *(_QWORD *)(a6 + 8) = 0LL;
            *(_QWORD *)a6 = 0LL;
          }
        }
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a7) )
        {
          if ( *(float *)a5 > *(float *)a7 )
            *(_DWORD *)a7 = *(_DWORD *)a5;
          v22 = *(float *)(a5 + 4);
          if ( v22 > *(float *)(a7 + 4) )
            *(float *)(a7 + 4) = v22;
          v23 = *(float *)(a5 + 8);
          v24 = *(float *)(a7 + 8);
          if ( v24 > v23 )
          {
            *(float *)(a7 + 8) = v23;
            v24 = v23;
          }
          v25 = *(float *)(a5 + 12);
          v26 = *(float *)(a7 + 12);
          if ( v26 > v25 )
          {
            *(float *)(a7 + 12) = v25;
            v26 = v25;
            v24 = *(float *)(a7 + 8);
          }
          if ( v24 <= *(float *)a7 || v26 <= *(float *)(a7 + 4) )
          {
            *(_QWORD *)(a7 + 8) = v15;
            *(_QWORD *)a7 = v15;
          }
        }
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v27);
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2D8u);
  }
  return v11 >= 0;
}

/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x180082780
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x1800824F4 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x1800825D0 (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x1800831F8 (-InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMil3DRect@MV-$TMilRect_.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        float *a7,
        float *a8)
{
  int v10; // r14d
  signed int SourceInputBounds; // eax
  signed int v12; // eax
  __m128 v13; // xmm2
  __int128 v14; // xmm1
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  int v23; // [rsp+58h] [rbp-A8h]
  __int128 v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-90h]
  __int128 v26; // [rsp+78h] [rbp-88h] BYREF
  __int128 v27; // [rsp+88h] [rbp-78h] BYREF
  __int128 v28; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp-58h]
  _BYTE v30[24]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v31[24]; // [rsp+C8h] [rbp-38h] BYREF
  int v32[6]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v22 = 0LL;
    v23 = 0;
    v21 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, (__int64)&v21);
    v10 = SourceInputBounds;
    if ( SourceInputBounds >= 0 )
    {
      if ( (unsigned __int8)CFilterEffect::InvertTransformToCalc3DBounds(a4, a5, v31) )
      {
        if ( (unsigned __int8)CFilterEffect::InvertTransformToCalc3DBounds(a4, a6, v30) )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _BYTE *, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 104) + 96LL))(
                  *(_QWORD *)(a1 + 104),
                  v31,
                  v30,
                  v21,
                  v23,
                  &v26,
                  &v27);
          v10 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x277u);
          }
          else
          {
            v13 = (__m128)*(unsigned int *)(a5 + 20);
            v29 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a5 + 16), v13).m128_u64[0];
            v24 = v27;
            v28 = v26;
            v25 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a5 + 16), v13).m128_u64[0];
            CMILMatrix::Transform3DBoundsHelper<1>(a4, (__int64)&v28, v32);
            CMILMatrix::Transform3DBoundsHelper<1>(a4, (__int64)&v24, (int *)&v28);
            v14 = v28;
            *(_OWORD *)a7 = *(_OWORD *)v32;
            *(_OWORD *)a8 = v14;
            if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a7) )
            {
              if ( *(float *)a5 > *a7 )
                *a7 = *(float *)a5;
              v15 = *(float *)(a5 + 4);
              if ( v15 > a7[1] )
                a7[1] = v15;
              v16 = *(float *)(a5 + 8);
              if ( a7[2] > v16 )
                a7[2] = v16;
              v17 = *(float *)(a5 + 12);
              if ( a7[3] > v17 )
                a7[3] = v17;
              if ( a7[2] <= *a7 || a7[3] <= a7[1] )
              {
                *((_QWORD *)a7 + 1) = 0LL;
                *(_QWORD *)a7 = 0LL;
              }
            }
            if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a8) )
            {
              if ( *(float *)a5 > *a8 )
                *a8 = *(float *)a5;
              v18 = *(float *)(a5 + 4);
              if ( v18 > a8[1] )
                a8[1] = v18;
              v19 = *(float *)(a5 + 8);
              if ( a8[2] > v19 )
                a8[2] = v19;
              v20 = *(float *)(a5 + 12);
              if ( a8[3] > v20 )
                a8[3] = v20;
              if ( a8[2] <= *a8 || a8[3] <= a8[1] )
              {
                *((_QWORD *)a8 + 1) = 0LL;
                *(_QWORD *)a8 = 0LL;
              }
            }
          }
          goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x26Eu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x266u);
      }
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v21);
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SourceInputBounds, 0x25Eu);
LABEL_8:
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v21);
    goto LABEL_9;
  }
  *(_OWORD *)a7 = *(_OWORD *)a5;
  *(_OWORD *)a8 = *(_OWORD *)a5;
LABEL_9:
  if ( v10 < 0 )
  {
LABEL_14:
    *(_OWORD *)a7 = *(_OWORD *)a5;
    *(_OWORD *)a8 = *(_OWORD *)a5;
  }
}

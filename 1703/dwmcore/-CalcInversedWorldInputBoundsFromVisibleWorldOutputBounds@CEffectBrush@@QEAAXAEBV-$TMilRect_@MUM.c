/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x1800108B4
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x180013C3C (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18001071C (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180011214 (-InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMil3DRect@MV-$TMilRect_.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  int v8; // edi
  int SourceInputBounds; // eax
  int v12; // eax
  __m128 v13; // xmm2
  __int128 v14; // xmm1
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+54h] [rbp-ACh]
  int v21; // [rsp+58h] [rbp-A8h]
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+78h] [rbp-88h] BYREF
  __int128 v25; // [rsp+88h] [rbp-78h] BYREF
  __int128 v26; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp-58h]
  _BYTE v28[24]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v29[24]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v18 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, (__int64)&v18);
    v8 = SourceInputBounds;
    if ( SourceInputBounds >= 0 )
    {
      if ( (unsigned __int8)CFilterEffect::InvertTransformToCalc3DBounds(a4, a5, v29) )
      {
        if ( (unsigned __int8)CFilterEffect::InvertTransformToCalc3DBounds(a4, a6, v28) )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _BYTE *, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 104) + 96LL))(
                  *(_QWORD *)(a1 + 104),
                  v29,
                  v28,
                  v18,
                  v21,
                  &v24,
                  &v25);
          v8 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x274u);
          }
          else
          {
            v13 = (__m128)*(unsigned int *)(a5 + 20);
            v27 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a5 + 16), v13).m128_u64[0];
            v22 = v25;
            v26 = v24;
            v23 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a5 + 16), v13).m128_u64[0];
            CMILMatrix::Transform3DBoundsHelper<1>(a4, &v26, &v30);
            CMILMatrix::Transform3DBoundsHelper<1>(a4, &v22, &v26);
            v14 = v26;
            *(_OWORD *)a7 = v30;
            *a8 = v14;
            if ( *(float *)a6 > *(float *)a7 )
              *(_DWORD *)a7 = *(_DWORD *)a6;
            v15 = *(float *)(a6 + 4);
            if ( v15 > *(float *)(a7 + 4) )
              *(float *)(a7 + 4) = v15;
            v16 = *(float *)(a6 + 8);
            if ( *(float *)(a7 + 8) > v16 )
              *(float *)(a7 + 8) = v16;
            v17 = *(float *)(a6 + 12);
            if ( *(float *)(a7 + 12) > v17 )
              *(float *)(a7 + 12) = v17;
            if ( *(float *)(a7 + 8) <= *(float *)a7 || *(float *)(a7 + 12) <= *(float *)(a7 + 4) )
            {
              *(_QWORD *)(a7 + 8) = 0LL;
              *(_QWORD *)a7 = 0LL;
            }
          }
          goto LABEL_16;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x26Bu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x263u);
      }
      DynArrayImpl<1>::~DynArrayImpl<1>(&v18);
      goto LABEL_23;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SourceInputBounds, 0x25Bu);
LABEL_16:
    DynArrayImpl<1>::~DynArrayImpl<1>(&v18);
    goto LABEL_17;
  }
  *(_OWORD *)a7 = *(_OWORD *)a5;
  *a8 = *(_OWORD *)a5;
LABEL_17:
  if ( v8 < 0 )
  {
LABEL_23:
    *(_OWORD *)a7 = *(_OWORD *)a5;
    *a8 = *(_OWORD *)a5;
  }
}

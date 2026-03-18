/*
 * XREFs of ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18000F730
 * Callers:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A3F20 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float v3; // xmm13_4
  float v4; // xmm3_4
  float v5; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm12_4
  float v10; // xmm14_4
  float v11; // xmm0_4
  float v12; // xmm11_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm10_4
  float v16; // xmm13_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float *result; // rax
  int v21; // edx
  __int64 v22; // r10
  _DWORD *v23; // r11
  float v24; // xmm3_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm1_4
  float v32; // xmm5_4
  float v33; // xmm4_4
  float v34; // xmm6_4
  float v35; // xmm11_4
  float v36; // xmm10_4
  float v37; // xmm9_4
  float v38; // xmm0_4
  float v39; // xmm8_4
  float v40; // xmm7_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  __int64 v43; // rcx
  float v44; // xmm4_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm4_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm4_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm0_4
  float v56; // xmm4_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  int v60; // xmm1_4
  float v61; // [rsp+24h] [rbp-104h]
  float v62; // [rsp+2Ch] [rbp-FCh]
  float v63; // [rsp+30h] [rbp-F8h]
  float v64; // [rsp+38h] [rbp-F0h]
  float v65; // [rsp+3Ch] [rbp-ECh]
  float v66; // [rsp+40h] [rbp-E8h]
  float v67; // [rsp+4Ch] [rbp-DCh]
  float v68; // [rsp+50h] [rbp-D8h]
  float v69[7]; // [rsp+54h] [rbp-D4h] BYREF

  v3 = a2[3];
  v4 = a1[4];
  v5 = a1[8];
  v8 = a1[9];
  v9 = a1[1] * *a2;
  v10 = a1[2] * *a2;
  v11 = a2[1];
  v62 = a1[5] * v11;
  v12 = *a2 * *a1;
  v13 = a1[6] * v11;
  v14 = a2[4];
  v66 = a2[1] * v4;
  v61 = a1[10] * v14;
  v15 = v3 * v4;
  v16 = v3 * a1[6];
  v17 = a2[3] * a1[5];
  v18 = a2[2];
  v64 = v18 * *a1;
  v65 = v18 * a1[1];
  v19 = a2[5];
  v63 = v18 * a1[2];
  v67 = v19 * a1[10];
  *a3 = (float)((float)(v66 + v12) + (float)(v14 * v5)) + a1[12];
  a3[1] = (float)((float)(v62 + v9) + (float)(v8 * v14)) + a1[13];
  a3[2] = (float)((float)(v13 + v10) + v61) + a1[14];
  a3[3] = (float)((float)(v15 + v12) + (float)(v14 * v5)) + a1[12];
  a3[4] = (float)((float)(v17 + v9) + (float)(v8 * v14)) + a1[13];
  a3[5] = (float)((float)(v16 + v10) + v61) + a1[14];
  a3[6] = (float)((float)(v64 + v15) + (float)(v14 * v5)) + a1[12];
  a3[7] = (float)((float)(v65 + v17) + (float)(v8 * v14)) + a1[13];
  a3[8] = (float)((float)(v63 + v16) + v61) + a1[14];
  a3[9] = (float)((float)(v64 + v66) + (float)(v14 * v5)) + a1[12];
  a3[10] = (float)((float)(v65 + v62) + (float)(v8 * v14)) + a1[13];
  a3[11] = (float)((float)(v63 + v13) + v61) + a1[14];
  a3[12] = (float)((float)(v66 + v12) + (float)(v19 * v5)) + a1[12];
  a3[13] = (float)((float)(v62 + v9) + (float)(v19 * v8)) + a1[13];
  a3[14] = (float)((float)(v13 + v10) + v67) + a1[14];
  a3[15] = (float)((float)(v15 + v12) + (float)(v19 * v5)) + a1[12];
  a3[16] = (float)((float)(v17 + v9) + (float)(v19 * v8)) + a1[13];
  a3[17] = (float)((float)(v16 + v10) + v67) + a1[14];
  a3[18] = (float)((float)(v64 + v15) + (float)(v19 * v5)) + a1[12];
  a3[19] = (float)((float)(v65 + v17) + (float)(v19 * v8)) + a1[13];
  a3[20] = (float)((float)(v63 + v16) + v67) + a1[14];
  a3[21] = (float)((float)(v64 + v66) + (float)(v19 * v5)) + a1[12];
  a3[22] = (float)((float)(v65 + v62) + (float)(v19 * v8)) + a1[13];
  a3[23] = (float)((float)(v63 + v13) + v67) + a1[14];
  result = (float *)CMILMatrix::Is2DAffine<1>(a1, 0LL);
  if ( !(_BYTE)result )
  {
    v24 = a1[15];
    v25 = a1[7] * a2[1];
    v26 = a1[7] * a2[3];
    v27 = a1[3] * *a2;
    v28 = a1[3] * a2[2];
    v29 = v25 + v27;
    v30 = v26 + v27;
    v31 = a1[11] * a2[4];
    v32 = v26 + v28;
    v33 = a1[11] * a2[5];
    v34 = v25 + v28;
    v35 = (float)(v29 + v31) + v24;
    v36 = (float)(v30 + v31) + v24;
    v37 = (float)(v32 + v31) + v24;
    v38 = (float)(v34 + v31) + v24;
    v39 = (float)(v29 + v33) + v24;
    v68 = v35;
    v69[0] = v36;
    v69[1] = v37;
    v69[2] = v38;
    v69[3] = v39;
    v40 = (float)(v30 + v33) + v24;
    v41 = (float)(v32 + v33) + v24;
    v42 = (float)(v34 + v33) + v24;
    v69[4] = v40;
    v69[5] = v41;
    v69[6] = v42;
    if ( v35 < 0.000081380211
      || v36 < 0.000081380211
      || v37 < 0.000081380211
      || v38 < 0.000081380211
      || v39 < 0.000081380211
      || v40 < 0.000081380211
      || v41 < 0.000081380211
      || v42 < 0.000081380211 )
    {
      if ( v35 >= -0.000081380211
        || v36 >= -0.000081380211
        || v37 >= -0.000081380211
        || v38 >= -0.000081380211
        || v39 >= -0.000081380211
        || v40 >= -0.000081380211
        || v41 >= -0.000081380211
        || v42 >= -0.000081380211 )
      {
        v23[15] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v23[12] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v23[3] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *v23 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v23[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v23[11] = qword_1802D5660;
        v23[8] = qword_1802D5660;
        v23[5] = qword_1802D5660;
        *(_DWORD *)v22 = qword_1802D5660;
        v23[23] = HIDWORD(qword_1802D5660);
        v23[20] = HIDWORD(qword_1802D5660);
        v23[17] = HIDWORD(qword_1802D5660);
        v60 = HIDWORD(qword_1802D5660);
      }
      else
      {
        v23[15] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v23[12] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v23[3] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *v23 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v23[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v23[11] = qword_1802D5678;
        v23[8] = qword_1802D5678;
        v23[5] = qword_1802D5678;
        *(_DWORD *)v22 = qword_1802D5678;
        v23[23] = HIDWORD(qword_1802D5678);
        v23[20] = HIDWORD(qword_1802D5678);
        v23[17] = HIDWORD(qword_1802D5678);
        v60 = HIDWORD(qword_1802D5678);
      }
      v23[14] = v60;
    }
    else
    {
      result = v69;
      v43 = (unsigned int)(v21 + 2);
      do
      {
        v44 = *(result - 1);
        v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v44 - 1.0)) & _xmm);
        if ( v45 >= 0.000081380211 )
        {
          v46 = *(float *)(v22 - 4) / v44;
          *(float *)(v22 - 8) = *(float *)(v22 - 8) / v44;
          v47 = *(float *)v22 / v44;
          *(float *)(v22 - 4) = v46;
          *(float *)v22 = v47;
        }
        v48 = *result;
        v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*result - 1.0)) & _xmm);
        if ( v49 >= 0.000081380211 )
        {
          v50 = *(float *)(v22 + 8) / v48;
          *(float *)(v22 + 4) = *(float *)(v22 + 4) / v48;
          v51 = *(float *)(v22 + 12) / v48;
          *(float *)(v22 + 8) = v50;
          *(float *)(v22 + 12) = v51;
        }
        v52 = result[1];
        v53 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v52 - 1.0)) & _xmm);
        if ( v53 >= 0.000081380211 )
        {
          v54 = *(float *)(v22 + 20) / v52;
          *(float *)(v22 + 16) = *(float *)(v22 + 16) / v52;
          v55 = *(float *)(v22 + 24) / v52;
          *(float *)(v22 + 20) = v54;
          *(float *)(v22 + 24) = v55;
        }
        v56 = result[2];
        v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v56 - 1.0)) & _xmm);
        if ( v57 >= 0.000081380211 )
        {
          v58 = *(float *)(v22 + 32) / v56;
          *(float *)(v22 + 28) = *(float *)(v22 + 28) / v56;
          v59 = *(float *)(v22 + 36) / v56;
          *(float *)(v22 + 32) = v58;
          *(float *)(v22 + 36) = v59;
        }
        result += 4;
        v22 += 48LL;
        --v43;
      }
      while ( v43 );
    }
  }
  return result;
}

/*
 * XREFs of ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x1800114D0
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098D54 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float v3; // xmm13_4
  float v4; // xmm5_4
  float v5; // xmm11_4
  float v8; // xmm12_4
  float v9; // xmm14_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm10_4
  float v16; // xmm13_4
  float v17; // xmm1_4
  float *result; // rax
  int v19; // edx
  __int64 v20; // r10
  _DWORD *v21; // r11
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm5_4
  float v31; // xmm4_4
  float v32; // xmm6_4
  float v33; // xmm10_4
  float v34; // xmm0_4
  float v35; // xmm9_4
  float v36; // xmm2_4
  float v37; // xmm7_4
  float v38; // xmm8_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  __int64 v41; // rcx
  float v42; // xmm4_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm4_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm4_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  int v58; // xmm1_4
  float v59; // [rsp+24h] [rbp-104h]
  float v60; // [rsp+28h] [rbp-100h]
  float v61; // [rsp+2Ch] [rbp-FCh]
  float v62; // [rsp+30h] [rbp-F8h]
  float v63; // [rsp+38h] [rbp-F0h]
  float v64; // [rsp+3Ch] [rbp-ECh]
  float v65; // [rsp+40h] [rbp-E8h]
  float v66; // [rsp+44h] [rbp-E4h]
  float v67; // [rsp+4Ch] [rbp-DCh]
  float v68; // [rsp+50h] [rbp-D8h]
  float v69[7]; // [rsp+54h] [rbp-D4h] BYREF

  v3 = a2[3];
  v4 = a1[9];
  v5 = *a2 * *a1;
  v8 = a1[1] * *a2;
  v9 = a1[2] * *a2;
  v10 = a2[1];
  v61 = a1[5] * v10;
  v11 = a1[6] * v10;
  v12 = a2[4];
  v13 = v3 * a1[5];
  v14 = a2[2];
  v65 = a2[1] * a1[4];
  v60 = v12 * a1[8];
  v59 = a1[10] * v12;
  v15 = v3 * a1[4];
  v63 = v14 * *a1;
  v16 = v3 * a1[6];
  v64 = v14 * a1[1];
  v17 = a2[5];
  v62 = v14 * a1[2];
  v66 = v17 * a1[8];
  v67 = v17 * a1[10];
  *a3 = (float)((float)(v65 + v5) + v60) + a1[12];
  a3[1] = (float)((float)(v61 + v8) + (float)(v4 * v12)) + a1[13];
  a3[2] = (float)((float)(v11 + v9) + v59) + a1[14];
  a3[3] = (float)((float)(v15 + v5) + v60) + a1[12];
  a3[4] = (float)((float)(v13 + v8) + (float)(v4 * v12)) + a1[13];
  a3[5] = (float)((float)(v16 + v9) + v59) + a1[14];
  a3[6] = (float)((float)(v63 + v15) + v60) + a1[12];
  a3[7] = (float)((float)(v64 + v13) + (float)(v4 * v12)) + a1[13];
  a3[8] = (float)((float)(v62 + v16) + v59) + a1[14];
  a3[9] = (float)((float)(v63 + v65) + v60) + a1[12];
  a3[10] = (float)((float)(v64 + v61) + (float)(v4 * v12)) + a1[13];
  a3[11] = (float)((float)(v62 + v11) + v59) + a1[14];
  a3[12] = (float)((float)(v65 + v5) + v66) + a1[12];
  a3[13] = (float)((float)(v61 + v8) + (float)(v17 * v4)) + a1[13];
  a3[14] = (float)((float)(v11 + v9) + v67) + a1[14];
  a3[15] = (float)((float)(v15 + v5) + v66) + a1[12];
  a3[16] = (float)((float)(v13 + v8) + (float)(v17 * v4)) + a1[13];
  a3[17] = (float)((float)(v16 + v9) + v67) + a1[14];
  a3[18] = (float)((float)(v63 + v15) + v66) + a1[12];
  a3[19] = (float)((float)(v64 + v13) + (float)(v17 * v4)) + a1[13];
  a3[20] = (float)((float)(v62 + v16) + v67) + a1[14];
  a3[21] = (float)((float)(v63 + v65) + v66) + a1[12];
  a3[22] = (float)((float)(v64 + v61) + (float)(v17 * v4)) + a1[13];
  a3[23] = (float)((float)(v62 + v11) + v67) + a1[14];
  result = (float *)CMILMatrix::Is2DAffine<1>(a1, 0LL);
  if ( !(_BYTE)result )
  {
    v22 = a1[15];
    v23 = a1[7] * a2[1];
    v24 = a1[7] * a2[3];
    v25 = a1[3] * *a2;
    v26 = a1[3] * a2[2];
    v27 = v23 + v25;
    v28 = v24 + v25;
    v29 = a1[11] * a2[4];
    v30 = v24 + v26;
    v31 = a1[11] * a2[5];
    v32 = v23 + v26;
    v33 = (float)(v27 + v29) + v22;
    v34 = (float)(v28 + v29) + v22;
    v35 = (float)(v30 + v29) + v22;
    v36 = (float)(v32 + v29) + v22;
    v37 = (float)(v27 + v31) + v22;
    v68 = v33;
    v69[0] = v34;
    v69[1] = v35;
    v69[2] = v36;
    v69[3] = v37;
    v38 = (float)(v28 + v31) + v22;
    v39 = (float)(v30 + v31) + v22;
    v40 = (float)(v32 + v31) + v22;
    v69[4] = v38;
    v69[5] = v39;
    v69[6] = v40;
    if ( v33 < 0.00012207031
      || v34 < 0.00012207031
      || v35 < 0.00012207031
      || v36 < 0.00012207031
      || v37 < 0.00012207031
      || v38 < 0.00012207031
      || v39 < 0.00012207031
      || v40 < 0.00012207031 )
    {
      if ( v33 >= -0.00012207031
        || v34 >= -0.00012207031
        || v35 >= -0.00012207031
        || v36 >= -0.00012207031
        || v37 >= -0.00012207031
        || v38 >= -0.00012207031
        || v39 >= -0.00012207031
        || v40 >= -0.00012207031 )
      {
        v21[15] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v21[12] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v21[3] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *v21 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v21[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v21[11] = qword_18023DC68;
        v21[8] = qword_18023DC68;
        v21[5] = qword_18023DC68;
        *(_DWORD *)v20 = qword_18023DC68;
        v21[23] = HIDWORD(qword_18023DC68);
        v21[20] = HIDWORD(qword_18023DC68);
        v21[17] = HIDWORD(qword_18023DC68);
        v58 = HIDWORD(qword_18023DC68);
      }
      else
      {
        v21[15] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v21[12] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v21[3] = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *v21 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v21[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v21[11] = qword_18023DC80;
        v21[8] = qword_18023DC80;
        v21[5] = qword_18023DC80;
        *(_DWORD *)v20 = qword_18023DC80;
        v21[23] = HIDWORD(qword_18023DC80);
        v21[20] = HIDWORD(qword_18023DC80);
        v21[17] = HIDWORD(qword_18023DC80);
        v58 = HIDWORD(qword_18023DC80);
      }
      v21[14] = v58;
    }
    else
    {
      result = v69;
      v41 = (unsigned int)(v19 + 2);
      do
      {
        v42 = *(result - 1);
        v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v42 - 1.0)) & _xmm);
        if ( v43 >= 0.00012207031 )
        {
          v44 = *(float *)(v20 - 4) / v42;
          *(float *)(v20 - 8) = *(float *)(v20 - 8) / v42;
          v45 = *(float *)v20 / v42;
          *(float *)(v20 - 4) = v44;
          *(float *)v20 = v45;
        }
        v46 = *result;
        v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*result - 1.0)) & _xmm);
        if ( v47 >= 0.00012207031 )
        {
          v48 = *(float *)(v20 + 8) / v46;
          *(float *)(v20 + 4) = *(float *)(v20 + 4) / v46;
          v49 = *(float *)(v20 + 12) / v46;
          *(float *)(v20 + 8) = v48;
          *(float *)(v20 + 12) = v49;
        }
        v50 = result[1];
        v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v50 - 1.0)) & _xmm);
        if ( v51 >= 0.00012207031 )
        {
          v52 = *(float *)(v20 + 20) / v50;
          *(float *)(v20 + 16) = *(float *)(v20 + 16) / v50;
          v53 = *(float *)(v20 + 24) / v50;
          *(float *)(v20 + 20) = v52;
          *(float *)(v20 + 24) = v53;
        }
        v54 = result[2];
        v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v54 - 1.0)) & _xmm);
        if ( v55 >= 0.00012207031 )
        {
          v56 = *(float *)(v20 + 32) / v54;
          *(float *)(v20 + 28) = *(float *)(v20 + 28) / v54;
          v57 = *(float *)(v20 + 36) / v54;
          *(float *)(v20 + 32) = v56;
          *(float *)(v20 + 36) = v57;
        }
        result += 4;
        v20 += 48LL;
        --v41;
      }
      while ( v41 );
    }
  }
  return result;
}

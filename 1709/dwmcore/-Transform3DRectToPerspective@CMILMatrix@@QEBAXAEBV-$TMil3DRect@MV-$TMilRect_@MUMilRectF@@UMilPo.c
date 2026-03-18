/*
 * XREFs of ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18018FF7C
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180059A5C (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float v3; // xmm9_4
  float v4; // xmm8_4
  float v5; // xmm2_4
  float v6; // xmm15_4
  float v7; // xmm13_4
  float v8; // xmm4_4
  float v9; // xmm14_4
  float v10; // xmm11_4
  float v11; // xmm10_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm1_4
  float *v20; // rax
  int v21; // edx
  float *v22; // rcx
  _DWORD *v23; // r9
  float *v24; // r10
  float *v25; // r11
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // xmm8_4
  float v32; // xmm5_4
  float v33; // xmm6_4
  float v34; // xmm1_4
  float v35; // xmm7_4
  float v36; // xmm4_4
  float v37; // xmm8_4
  float v38; // xmm10_4
  float v39; // xmm11_4
  float v40; // xmm2_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float v44; // xmm5_4
  float v45; // xmm6_4
  __int64 v46; // rcx
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  int v50; // xmm1_4
  float v52; // [rsp+20h] [rbp-F8h]
  float v53; // [rsp+20h] [rbp-F8h]
  float v54; // [rsp+24h] [rbp-F4h]
  float v55; // [rsp+28h] [rbp-F0h]
  float v56; // [rsp+2Ch] [rbp-ECh]
  float v57; // [rsp+30h] [rbp-E8h]
  float v58; // [rsp+34h] [rbp-E4h]
  float v59; // [rsp+38h] [rbp-E0h]
  float v60; // [rsp+3Ch] [rbp-DCh]
  float v61; // [rsp+40h] [rbp-D8h]
  _DWORD v62[8]; // [rsp+48h] [rbp-D0h] BYREF

  v3 = a2[2];
  v4 = a2[3];
  v5 = *a2 * *a1;
  v6 = a2[1] * a1[4];
  v7 = a2[4] * a1[8];
  v8 = a1[1] * *a2;
  v9 = a1[9] * a2[4];
  v10 = (float)(a1[5] * a2[1]) + v8;
  v11 = a1[2] * *a2;
  v12 = v4 * a1[4];
  v13 = v4 * a1[5];
  v14 = v4 * a1[6];
  v54 = v3 * *a1;
  v55 = v3 * a1[1];
  v58 = a1[6] * a2[1];
  v52 = v3 * a1[2];
  v15 = a2[5];
  v57 = a1[5] * a2[1];
  v56 = a1[10] * a2[4];
  v16 = v13 + v8;
  v59 = v15 * a1[8];
  v60 = v15 * a1[9];
  v61 = v15 * a1[10];
  v17 = v12 + v5;
  *a3 = (float)((float)(v6 + v5) + v7) + a1[12];
  a3[1] = (float)(v10 + v9) + a1[13];
  a3[2] = (float)((float)(v58 + v11) + v56) + a1[14];
  a3[3] = (float)((float)(v12 + v5) + v7) + a1[12];
  a3[4] = (float)((float)(v13 + v8) + v9) + a1[13];
  v18 = v54 + v12;
  v19 = v52 + v14;
  v53 = v52 + v58;
  a3[5] = (float)((float)(v14 + v11) + v56) + a1[14];
  a3[6] = (float)(v18 + v7) + a1[12];
  a3[7] = (float)((float)(v55 + v13) + v9) + a1[13];
  a3[8] = (float)(v19 + v56) + a1[14];
  a3[9] = (float)((float)(v54 + v6) + v7) + a1[12];
  a3[10] = (float)((float)(v55 + v57) + v9) + a1[13];
  a3[11] = (float)(v56 + v53) + a1[14];
  a3[12] = (float)((float)(v6 + v5) + v59) + a1[12];
  a3[13] = (float)(v10 + v60) + a1[13];
  a3[14] = (float)((float)(v58 + v11) + v61) + a1[14];
  a3[15] = (float)(v17 + v59) + a1[12];
  a3[16] = (float)(v16 + v60) + a1[13];
  a3[17] = (float)((float)(v14 + v11) + v61) + a1[14];
  a3[18] = (float)(v18 + v59) + a1[12];
  a3[19] = (float)((float)(v55 + v13) + v60) + a1[13];
  a3[20] = (float)(v19 + v61) + a1[14];
  a3[21] = (float)((float)(v54 + v6) + v59) + a1[12];
  a3[22] = (float)((float)(v55 + v57) + v60) + a1[13];
  a3[23] = (float)(v61 + v53) + a1[14];
  LOBYTE(v20) = CMILMatrix::Is2DAffine<1>((__int64)a1, 0);
  if ( !(_BYTE)v20 )
  {
    v26 = v22[15];
    v27 = v22[3];
    v28 = v27 * v25[2];
    v29 = v22[7] * v25[1];
    v30 = v27 * *v25;
    v31 = v22[7] * v25[3];
    v32 = v31 + v28;
    v33 = v29 + v28;
    v34 = v22[11] * v25[4];
    v35 = v29 + v30;
    v36 = v22[11] * v25[5];
    v37 = v31 + v30;
    v38 = (float)(v32 + v34) + v26;
    v39 = (float)(v35 + v34) + v26;
    v40 = (float)(v33 + v34) + v26;
    v41 = (float)(v37 + v34) + v26;
    v42 = (float)(v35 + v36) + v26;
    *(float *)&v62[2] = v38;
    *(float *)v62 = v39;
    *(float *)&v62[3] = v40;
    *(float *)&v62[1] = v41;
    *(float *)&v62[4] = v42;
    v43 = (float)(v37 + v36) + v26;
    v44 = (float)(v32 + v36) + v26;
    v45 = (float)(v33 + v36) + v26;
    *(float *)&v62[5] = v43;
    *(float *)&v62[6] = v44;
    *(float *)&v62[7] = v45;
    if ( v39 < 0.000081380211
      || v41 < 0.000081380211
      || v38 < 0.000081380211
      || v40 < 0.000081380211
      || v42 < 0.000081380211
      || v43 < 0.000081380211
      || v44 < 0.000081380211
      || v45 < 0.000081380211 )
    {
      if ( v39 >= -0.000081380211
        || v41 >= -0.000081380211
        || v38 >= -0.000081380211
        || v40 >= -0.000081380211
        || v42 >= -0.000081380211
        || v43 >= -0.000081380211
        || v44 >= -0.000081380211
        || v45 >= -0.000081380211 )
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
        v23[11] = qword_18026E1E8;
        v23[8] = qword_18026E1E8;
        v23[5] = qword_18026E1E8;
        *(_DWORD *)v24 = qword_18026E1E8;
        v23[23] = HIDWORD(qword_18026E1E8);
        v23[20] = HIDWORD(qword_18026E1E8);
        v23[17] = HIDWORD(qword_18026E1E8);
        v50 = HIDWORD(qword_18026E1E8);
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
        v23[11] = qword_18026E200;
        v23[8] = qword_18026E200;
        v23[5] = qword_18026E200;
        *(_DWORD *)v24 = qword_18026E200;
        v23[23] = HIDWORD(qword_18026E200);
        v23[20] = HIDWORD(qword_18026E200);
        v23[17] = HIDWORD(qword_18026E200);
        v50 = HIDWORD(qword_18026E200);
      }
      v23[14] = v50;
    }
    else
    {
      v20 = (float *)v62;
      v46 = (unsigned int)(v21 + 8);
      do
      {
        v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v20 - 1.0)) & _xmm);
        if ( v47 >= 0.000081380211 )
        {
          v48 = *(v24 - 1) / *v20;
          *(v24 - 2) = *(v24 - 2) / *v20;
          v49 = *v24 / *v20;
          *(v24 - 1) = v48;
          *v24 = v49;
        }
        ++v20;
        v24 += 3;
        --v46;
      }
      while ( v46 );
    }
  }
  return (char)v20;
}

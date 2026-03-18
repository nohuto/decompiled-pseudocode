/*
 * XREFs of ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18009A530
 * Callers:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform2DRectToPerspective(
        CMILMatrix *this,
        const struct MilRectF *a2,
        struct MilPoint2F *const a3)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float *v15; // r10
  __int64 v16; // r11
  float v17; // xmm0_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm6_4
  float v23; // xmm9_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4

  v4 = *(float *)a2 * *(float *)this;
  v5 = *(float *)a2 * *((float *)this + 1);
  v6 = *((float *)a2 + 1);
  v7 = v6 * *((float *)this + 5);
  v8 = v6 * *((float *)this + 4);
  *(float *)a3 = (float)(v8 + v4) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)(v7 + v5) + *((float *)this + 13);
  v9 = *((float *)a2 + 3);
  v10 = v9 * *((float *)this + 5);
  v11 = v9 * *((float *)this + 4);
  *((float *)a3 + 2) = (float)(v11 + v4) + *((float *)this + 12);
  *((float *)a3 + 3) = (float)(v10 + v5) + *((float *)this + 13);
  v12 = *((float *)a2 + 2);
  v13 = v12 * *((float *)this + 1);
  v14 = v12 * *(float *)this;
  *((float *)a3 + 4) = (float)(v14 + v11) + *((float *)this + 12);
  *((float *)a3 + 5) = (float)(v13 + v10) + *((float *)this + 13);
  *((float *)a3 + 6) = (float)(v14 + v8) + *((float *)this + 12);
  *((float *)a3 + 7) = (float)(v13 + v7) + *((float *)this + 13);
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>((__int64)this, 1) )
  {
    v17 = v15[15];
    v18 = v15[7] * *((float *)a2 + 1);
    v19 = v15[7] * *((float *)a2 + 3);
    v20 = v15[3] * *(float *)a2;
    v21 = v15[3] * *((float *)a2 + 2);
    v22 = (float)(v19 + v20) + v17;
    v23 = (float)(v18 + v20) + v17;
    v24 = (float)(v19 + v21) + v17;
    v25 = (float)(v18 + v21) + v17;
    if ( v23 < 0.00012207031 || v22 < 0.00012207031 || v24 < 0.00012207031 || v25 < 0.00012207031 )
    {
      if ( v23 >= -0.00012207031 || v22 >= -0.00012207031 || v24 >= -0.00012207031 || v25 >= -0.00012207031 )
      {
        *(_QWORD *)v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_DWORD *)(v16 + 8) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_DWORD *)(v16 + 12) = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        *(_QWORD *)(v16 + 16) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        *(_DWORD *)(v16 + 24) = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v33 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      }
      else
      {
        *(_QWORD *)v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_DWORD *)(v16 + 8) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_DWORD *)(v16 + 12) = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        *(_QWORD *)(v16 + 16) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
        *(_DWORD *)(v16 + 24) = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v33 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      }
      goto LABEL_14;
    }
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v23 - 1.0)) & _xmm);
    if ( v26 >= 0.00012207031 )
    {
      v27 = *(float *)(v16 + 4) / v23;
      *(float *)v16 = *(float *)v16 / v23;
      *(float *)(v16 + 4) = v27;
    }
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - 1.0)) & _xmm);
    if ( v28 >= 0.00012207031 )
    {
      v29 = *(float *)(v16 + 12) / v22;
      *(float *)(v16 + 8) = *(float *)(v16 + 8) / v22;
      *(float *)(v16 + 12) = v29;
    }
    v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - 1.0)) & _xmm);
    if ( v30 >= 0.00012207031 )
    {
      v31 = *(float *)(v16 + 20) / v24;
      *(float *)(v16 + 16) = *(float *)(v16 + 16) / v24;
      *(float *)(v16 + 20) = v31;
    }
    v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - 1.0)) & _xmm);
    if ( v32 >= 0.00012207031 )
    {
      v33 = *(float *)(v16 + 28) / v25;
      *(float *)(v16 + 24) = *(float *)(v16 + 24) / v25;
LABEL_14:
      *(float *)(v16 + 28) = v33;
    }
  }
}

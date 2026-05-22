/*
 * XREFs of ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x1800C99E8
 * Callers:
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1800C9248 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 * Callees:
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x1800C97B8 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 *     acosf_0 @ 0x1800CC341 (acosf_0.c)
 *     sqrtf_0 @ 0x1800CC365 (sqrtf_0.c)
 */

void __fastcall ST::SO3_log_with_exp_coefs<float>(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v9; // xmm9_4
  float v10; // xmm0_4
  float v11; // xmm10_4
  float v12; // xmm7_4
  float v13; // xmm13_4
  float v14; // xmm2_4
  float v15; // xmm8_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm7_4
  float v21; // xmm11_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm13_4
  float v28; // xmm8_4
  float v29; // xmm11_4
  float v30; // xmm0_4
  int v31; // eax
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  int v40; // eax
  float v41; // xmm0_4

  v9 = a2[7] - a2[5];
  v10 = (float)((float)(*a2 + a2[4]) + a2[8]) - 1.0;
  *a1 = v9;
  v11 = a2[2] - a2[6];
  a1[1] = v11;
  v12 = a2[3] - a2[1];
  a1[2] = v12;
  v13 = fmaxf(-1.0, fminf(v10 * 0.5, 1.0));
  v14 = (float)((float)(v9 * v9) + (float)(v11 * v11)) + (float)(v12 * v12);
  if ( v14 >= 0.03906 )
  {
    v17 = acosf_0(v13);
  }
  else
  {
    v15 = (float)((float)((float)(v14 * 0.0023437501) + 0.020833334) * v14) + 0.5;
    v16 = sqrtf_0(v14) * v15;
    if ( v13 >= 0.0 )
    {
      ST::SO3_compute_exp_coefs<float>(v16 * v16, a3, a4, a5);
      v18 = v9 * v15;
      v19 = v11 * v15;
      v20 = v12 * v15;
LABEL_5:
      a1[1] = v19;
      *a1 = v18;
      a1[2] = v20;
      return;
    }
    v17 = 3.1415927 - v16;
  }
  ST::SO3_compute_exp_coefs<float>(v17 * v17, a3, a4, a5);
  if ( v13 > -0.99800003 )
  {
    v21 = 0.5 / *a3;
    v18 = v9 * v21;
    v19 = v11 * v21;
    v20 = v12 * v21;
    goto LABEL_5;
  }
  v22 = 1.0 / *a4;
  v23 = (float)(*a2 - v13) * v22;
  v24 = (float)(a2[4] - v13) * v22;
  v25 = (float)(a2[8] - v13) * v22;
  v26 = v22 * 0.5;
  v27 = (float)(a2[1] + a2[3]) * v26;
  v28 = (float)(a2[6] + a2[2]) * v26;
  v29 = (float)(a2[5] + a2[7]) * v26;
  if ( v23 <= v24 )
  {
    if ( v24 > v25 )
    {
      v35 = sqrtf_0(v24);
      v36 = 1;
      if ( v11 < 0.0 )
        v36 = -1;
      v37 = v35 * (float)v36;
      a1[1] = v37;
      v38 = 1.0 / v37;
      v34 = v38 * v29;
      *a1 = v38 * v27;
      goto LABEL_18;
    }
  }
  else if ( v23 > v25 )
  {
    v30 = sqrtf_0(v23);
    v31 = 1;
    if ( v9 < 0.0 )
      v31 = -1;
    v32 = v30 * (float)v31;
    *a1 = v32;
    v33 = 1.0 / v32;
    v34 = v33 * v28;
    a1[1] = v33 * v27;
LABEL_18:
    a1[2] = v34;
    return;
  }
  v39 = sqrtf_0(v25);
  v40 = 1;
  if ( v12 < 0.0 )
    v40 = -1;
  v41 = v39 * (float)v40;
  a1[2] = v41;
  a1[1] = (float)(1.0 / v41) * v29;
  *a1 = (float)(1.0 / v41) * v28;
}

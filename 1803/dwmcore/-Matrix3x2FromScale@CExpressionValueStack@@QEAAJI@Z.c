/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18005298C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  char v5; // si
  __int64 v6; // rcx
  __m128 v7; // xmm3
  float v8; // xmm2_4
  __m128 v9; // xmm1
  __int64 v11; // r8
  __m128 v12; // xmm1
  __m128 v13; // xmm3
  __m128 v14; // xmm3
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  __m128 v18; // xmm4
  __int64 v19; // r9
  __int64 v20; // r8
  float *v21; // rax
  __m128 v22; // xmm3
  float v23; // xmm1_4
  float v24; // xmm0_4
  __m128 v25; // xmm4
  float v26; // xmm2_4
  unsigned int v27; // [rsp+20h] [rbp-30h]
  __int128 v28; // [rsp+30h] [rbp-20h]
  float v29[6]; // [rsp+30h] [rbp-20h]
  float v30[6]; // [rsp+30h] [rbp-20h]
  __int128 v31; // [rsp+30h] [rbp-20h]
  __int128 v32; // [rsp+30h] [rbp-20h]

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v5 = 0;
  if ( v2 < a2 )
  {
    v27 = 5880;
LABEL_12:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v27);
    return v3;
  }
  switch ( a2 )
  {
    case 1u:
      v6 = *((_QWORD *)this + 3);
      if ( *(_DWORD *)(v6 + 80LL * (v2 - 1) + 72) == 18 )
      {
        v29[2] = 0.0;
        *(_QWORD *)v29 = *(unsigned int *)(v6 + 80LL * (v2 - 1));
        v29[3] = v29[0];
        *(_DWORD *)(v6 + 80LL * (v2 - 1) + 72) = 104;
        *(_OWORD *)(v6 + 80LL * (v2 - 1)) = *(_OWORD *)v29;
        *(_BYTE *)(v6 + 80LL * (v2 - 1) + 76) = 1;
        *(_QWORD *)(v6 + 80LL * (v2 - 1) + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        goto LABEL_8;
      }
      if ( *(_DWORD *)(v6 + 80LL * (v2 - 1) + 72) == 35 )
      {
        v7 = 0LL;
        v8 = *(float *)(v6 + 80LL * (v2 - 1) + 4);
        v9 = 0LL;
        DWORD2(v28) = 0;
        *(_QWORD *)&v28 = *(unsigned int *)(v6 + 80LL * (v2 - 1));
        *(_DWORD *)(v6 + 80LL * (v2 - 1) + 72) = 104;
        *((float *)&v28 + 3) = v8;
        *(_BYTE *)(v6 + 80LL * (v2 - 1) + 76) = 1;
        v9.m128_f32[0] = 0.0 - (float)(*(float *)&v28 * 0.0);
        v7.m128_f32[0] = 0.0 - (float)(v8 * 0.0);
        *(_OWORD *)(v6 + 80LL * (v2 - 1)) = v28;
        *(_QWORD *)(v6 + 80LL * (v2 - 1) + 16) = _mm_unpacklo_ps(v9, v7).m128_u64[0];
LABEL_6:
        v5 = 1;
      }
      break;
    case 2u:
      v11 = *((_QWORD *)this + 3);
      if ( *(_DWORD *)(v11 + 80LL * (v2 - 2) + 72) == 18 )
      {
        if ( *(_DWORD *)(v11 + 80LL * (v2 - 1) + 72) == 18 )
        {
          v13 = 0LL;
          v12 = 0LL;
          v30[0] = *(float *)(v11 + 80LL * (v2 - 2));
          v30[3] = *(float *)(v11 + 80LL * (v2 - 1));
          v12.m128_f32[0] = 0.0 - (float)(v30[0] * 0.0);
          v13.m128_f32[0] = 0.0 - (float)(v30[3] * 0.0);
        }
        else
        {
          if ( *(_DWORD *)(v11 + 80LL * (v2 - 1) + 72) != 35 )
            break;
          v13 = (__m128)LODWORD(FLOAT_1_0);
          v13.m128_f32[0] = 1.0 - *(float *)(v11 + 80LL * (v2 - 2));
          v30[0] = *(float *)(v11 + 80LL * (v2 - 2));
          v30[3] = v30[0];
          v12 = v13;
          v13.m128_f32[0] = v13.m128_f32[0] * *(float *)(v11 + 80LL * (v2 - 1) + 4);
          v12.m128_f32[0] = v12.m128_f32[0] * *(float *)(v11 + 80LL * (v2 - 1));
        }
        *(_QWORD *)&v30[1] = 0LL;
        *(_OWORD *)(v11 + 80LL * (v2 - 2)) = *(_OWORD *)v30;
        *(_DWORD *)(v11 + 80LL * (v2 - 2) + 72) = 104;
        *(_QWORD *)(v11 + 80LL * (v2 - 2) + 16) = _mm_unpacklo_ps(v12, v13).m128_u64[0];
        *(_BYTE *)(v11 + 80LL * (v2 - 2) + 76) = 1;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(v11 + 80LL * (v2 - 2) + 72) == 35 && *(_DWORD *)(v11 + 80LL * (v2 - 1) + 72) == 35 )
      {
        v14 = (__m128)*(unsigned int *)(v11 + 80LL * (v2 - 1));
        v15 = *(float *)(v11 + 80LL * (v2 - 2));
        v16 = *(float *)(v11 + 80LL * (v2 - 1));
        v17 = *(float *)(v11 + 80LL * (v2 - 2) + 4);
        v18 = (__m128)*(unsigned int *)(v11 + 80LL * (v2 - 1) + 4);
        DWORD2(v31) = 0;
        *(_DWORD *)(v11 + 80LL * (v2 - 2) + 72) = 104;
        *(_QWORD *)&v31 = LODWORD(v15);
        *((float *)&v31 + 3) = v17;
        v14.m128_f32[0] = v14.m128_f32[0] - (float)(v16 * v15);
        *(_BYTE *)(v11 + 80LL * (v2 - 2) + 76) = 1;
        v18.m128_f32[0] = v18.m128_f32[0] - (float)(v17 * v18.m128_f32[0]);
        *(_OWORD *)(v11 + 80LL * (v2 - 2)) = v31;
        *(_QWORD *)(v11 + 80LL * (v2 - 2) + 16) = _mm_unpacklo_ps(v14, v18).m128_u64[0];
        goto LABEL_6;
      }
      break;
    case 3u:
      v19 = *((_QWORD *)this + 3) + 80LL * (v2 - 3);
      v20 = *((_QWORD *)this + 3) + 80LL * (v2 - 2);
      v21 = (float *)(*((_QWORD *)this + 3) + 80LL * (v2 - 1));
      if ( *(_DWORD *)(v19 + 72) == 18 && *(_DWORD *)(v20 + 72) == 18 && *((_DWORD *)v21 + 18) == 35 )
      {
        v22 = (__m128)*(unsigned int *)v21;
        v23 = *(float *)v19;
        v24 = *v21;
        v25 = (__m128)*((unsigned int *)v21 + 1);
        v26 = *(float *)v20;
        DWORD2(v32) = 0;
        *(_DWORD *)(v19 + 72) = 104;
        *(_QWORD *)&v32 = LODWORD(v23);
        *(_BYTE *)(v19 + 76) = 1;
        v22.m128_f32[0] = v22.m128_f32[0] - (float)(v24 * v23);
        *((float *)&v32 + 3) = v26;
        v25.m128_f32[0] = v25.m128_f32[0] - (float)(v25.m128_f32[0] * v26);
        *(_OWORD *)v19 = v32;
        *(_QWORD *)(v19 + 16) = _mm_unpacklo_ps(v22, v25).m128_u64[0];
        goto LABEL_6;
      }
      break;
  }
  if ( !v5 )
  {
    v27 = 5977;
    goto LABEL_12;
  }
LABEL_8:
  *((_DWORD *)this + 4) += 1 - a2;
  return v3;
}

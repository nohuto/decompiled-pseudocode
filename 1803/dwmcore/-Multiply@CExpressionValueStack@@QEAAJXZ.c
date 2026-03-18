/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180052120
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800BCEAC (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1801BB630 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x180206B14 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  __int128 v1; // xmm8
  __int128 v2; // xmm9
  unsigned int v3; // r8d
  CExpressionValueStack *v4; // r9
  __int64 v5; // rdx
  unsigned __int64 *v6; // r10
  float *v7; // rdx
  int v8; // eax
  unsigned int v9; // ecx
  float v10; // xmm0_4
  float v11; // xmm5_4
  __m128 v12; // xmm3
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm4_4
  float v16; // xmm6_4
  __m128 v17; // xmm7
  float v18; // xmm10_4
  __m128 v19; // xmm11
  __m128 v20; // xmm11
  float v21; // xmm0_4
  __m128 v22; // xmm1
  __m128 v23; // xmm11
  __m128 v24; // xmm11
  __int64 result; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int128 v31; // xmm0
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  __m128 v34; // xmm1
  int v35; // eax
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  unsigned int v39; // ebx
  __int128 v40; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v41; // [rsp+40h] [rbp-C0h]
  _OWORD v42[2]; // [rsp+50h] [rbp-B0h]
  _OWORD v43[9]; // [rsp+70h] [rbp-90h] BYREF

  v3 = *((_DWORD *)this + 4);
  v4 = this;
  if ( v3 < 2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x467u);
    return 2147500037LL;
  }
  v5 = *((_QWORD *)this + 3);
  v6 = (unsigned __int64 *)(v5 + 80LL * (v3 - 2));
  v7 = (float *)(80LL * (v3 - 1) + v5);
  v8 = *((_DWORD *)v6 + 18);
  v9 = *((_DWORD *)v7 + 18);
  if ( v8 == v9 )
  {
    switch ( v8 )
    {
      case 104:
        v11 = v7[2];
        v12 = (__m128)*(unsigned int *)v7;
        v13 = *((float *)v6 + 1);
        v14 = *(float *)v6;
        v15 = v7[1];
        v16 = v7[3];
        v17 = (__m128)*((unsigned int *)v6 + 4);
        v43[8] = v1;
        v43[7] = v2;
        v18 = *((float *)v6 + 2);
        v19 = v12;
        v19.m128_f32[0] = (float)(v12.m128_f32[0] * v14) + (float)(v11 * v13);
        v20 = _mm_shuffle_ps(v19, v19, 225);
        v21 = *((float *)v6 + 3);
        v20.m128_f32[0] = (float)(v15 * v14) + (float)(v16 * v13);
        v22 = v17;
        v23 = _mm_shuffle_ps(v20, v20, 198);
        v23.m128_f32[0] = (float)(v18 * v12.m128_f32[0]) + (float)(v21 * v11);
        v24 = _mm_shuffle_ps(v23, v23, 39);
        v24.m128_f32[0] = (float)(v18 * v15) + (float)(v21 * v16);
        v22.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v12.m128_f32[0]) + (float)(*((float *)v6 + 5) * v11))
                        + v7[4];
        v17.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v15) + (float)(*((float *)v6 + 5) * v16)) + v7[5];
        *(__m128 *)v6 = _mm_shuffle_ps(v24, v24, 57);
        *((_DWORD *)v6 + 18) = 104;
        v6[2] = _mm_unpacklo_ps(v22, v17).m128_u64[0];
        goto LABEL_7;
      case 18:
        v10 = *v7 * *(float *)v6;
        *((_DWORD *)v6 + 18) = 18;
        *(float *)v6 = v10;
LABEL_7:
        *((_BYTE *)v6 + 76) = 1;
        --*((_DWORD *)v4 + 4);
        return 0LL;
      case 265:
        D2DMatrixMultiply((struct D2DMatrix *)v43, (const struct D2DMatrix *)v6, (const struct D2DMatrix *)v7);
        v26 = v43[1];
        *(_OWORD *)v6 = v43[0];
        *((_DWORD *)v6 + 18) = 265;
        v27 = v43[2];
        *((_OWORD *)v6 + 1) = v26;
        v28 = v43[3];
        *((_OWORD *)v6 + 2) = v27;
        *((_OWORD *)v6 + 3) = v28;
        goto LABEL_7;
      case 35:
        v36 = v7[1];
        v37 = *(float *)v6 * *v7;
        *((_DWORD *)v6 + 18) = 35;
        v38 = v36 * *((float *)v6 + 1);
        *(float *)v6 = v37;
        *((float *)v6 + 1) = v38;
        goto LABEL_7;
      case 52:
        v32 = (__m128)*v6;
        v33 = (__m128)*(unsigned __int64 *)v7;
        DWORD2(v40) = *((_DWORD *)v6 + 2);
        *((float *)&v41 + 2) = v7[2];
        v34 = _mm_shuffle_ps(v33, v33, 85);
        v34.m128_f32[0] = v34.m128_f32[0] * _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
        *((_DWORD *)v6 + 18) = 52;
        v33.m128_f32[0] = v33.m128_f32[0] * v32.m128_f32[0];
        *((float *)&v40 + 2) = *((float *)&v41 + 2) * *((float *)&v40 + 2);
        v35 = DWORD2(v40);
        *v6 = _mm_unpacklo_ps(v33, v34).m128_u64[0];
        *((_DWORD *)v6 + 2) = v35;
        goto LABEL_7;
      case 69:
        v30 = 0LL;
        v41 = *(_OWORD *)v6;
        v40 = *(_OWORD *)v7;
        do
        {
          *(float *)((char *)v42 + v30) = *(float *)((char *)&v40 + v30) * *(float *)((char *)&v42[-1] + v30);
          v30 += 4LL;
        }
        while ( v30 < 16 );
        v31 = v42[0];
        *((_DWORD *)v6 + 18) = 69;
        *(_OWORD *)v6 = v31;
        goto LABEL_7;
      case 71:
        D3DXQuaternionMultiply(
          (struct D2DQuaternion *)&v40,
          (const struct D2DQuaternion *)v7,
          (const struct D2DQuaternion *)v6);
        v29 = v40;
        *((_DWORD *)v6 + 18) = 71;
        *(_OWORD *)v6 = v29;
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x4D0u);
    return 2147500037LL;
  }
  if ( v9 != 18 && v8 != 18 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x4E9u);
    return 2147500037LL;
  }
  result = CExpressionValueStack::Scale(v4);
  v39 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      result,
      0x4DFu);
    return v39;
  }
  return result;
}

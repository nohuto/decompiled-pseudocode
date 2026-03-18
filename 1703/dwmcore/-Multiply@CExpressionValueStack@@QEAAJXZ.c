/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180033D30
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800BEF38 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18017F5CC (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1801AF4DC (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  __int128 v1; // xmm8
  __int128 v2; // xmm9
  unsigned int v3; // r8d
  CExpressionValueStack *v4; // r9
  __int64 v5; // rdx
  float *v6; // r10
  int v7; // ecx
  float *v8; // rdx
  unsigned int v9; // eax
  float v10; // xmm5_4
  __m128 v11; // xmm1
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm2_4
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
  float v26; // xmm0_4
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int128 v32; // xmm0
  __m128 v33; // xmm3
  __int64 v34; // xmm2_8
  float v35; // xmm0_4
  __m128 v36; // xmm1
  unsigned int v37; // eax
  __m128 v38; // xmm3
  __int64 v39; // xmm2_8
  __m128 v40; // xmm1
  unsigned int v41; // ebx
  __int128 v42; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v43; // [rsp+48h] [rbp-C0h]
  __int128 v44; // [rsp+58h] [rbp-B0h]
  _OWORD v45[11]; // [rsp+78h] [rbp-90h] BYREF

  v3 = *((_DWORD *)this + 4);
  v4 = this;
  if ( v3 < 2 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x472u);
    return 2147500037LL;
  }
  v5 = *((_QWORD *)this + 3);
  v6 = (float *)(v5 + 72LL * (v3 - 2));
  v7 = *(_DWORD *)(v5 + 72LL * (v3 - 1) + 64);
  v8 = (float *)(v5 + 72LL * (v3 - 1));
  v9 = *((_DWORD *)v6 + 16);
  if ( v9 == v7 )
  {
    switch ( v9 )
    {
      case 0x68u:
        v10 = v8[2];
        v11 = (__m128)*(unsigned int *)v6;
        v12 = v10 * v6[1];
        v13 = *v8;
        v14 = v8[1];
        v15 = v6[5];
        v16 = v8[3];
        v17 = (__m128)*((unsigned int *)v6 + 4);
        v45[8] = v1;
        v45[7] = v2;
        v18 = v6[2];
        v19 = v11;
        v19.m128_f32[0] = (float)(v11.m128_f32[0] * v13) + v12;
        v20 = _mm_shuffle_ps(v19, v19, 225);
        v21 = v6[3];
        v20.m128_f32[0] = (float)(v14 * v11.m128_f32[0]) + (float)(v16 * v6[1]);
        v22 = v17;
        v23 = _mm_shuffle_ps(v20, v20, 198);
        v23.m128_f32[0] = (float)(v18 * v13) + (float)(v21 * v10);
        v24 = _mm_shuffle_ps(v23, v23, 39);
        v24.m128_f32[0] = (float)(v18 * v14) + (float)(v21 * v16);
        v22.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v13) + (float)(v15 * v10)) + v8[4];
        v17.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v14) + (float)(v15 * v16)) + v8[5];
        *(__m128 *)v6 = _mm_shuffle_ps(v24, v24, 57);
        *((_DWORD *)v6 + 16) = 104;
        *((_QWORD *)v6 + 2) = _mm_unpacklo_ps(v22, v17).m128_u64[0];
LABEL_5:
        *((_BYTE *)v6 + 68) = 1;
        --*((_DWORD *)v4 + 4);
        return 0LL;
      case 0x12u:
        v26 = *v8 * *v6;
        *((_DWORD *)v6 + 16) = 18;
        *v6 = v26;
        goto LABEL_5;
      case 0x109u:
        D2DMatrixMultiply((struct D2DMatrix *)v45, (const struct D2DMatrix *)v6, (const struct D2DMatrix *)v8);
        v27 = v45[1];
        *(_OWORD *)v6 = v45[0];
        *((_DWORD *)v6 + 16) = 265;
        v28 = v45[2];
        *((_OWORD *)v6 + 1) = v27;
        v29 = v45[3];
        *((_OWORD *)v6 + 2) = v28;
        *((_OWORD *)v6 + 3) = v29;
        goto LABEL_5;
      case 0x23u:
        v38 = (__m128)*(unsigned __int64 *)v8;
        v39 = *(_QWORD *)v6;
        v40 = _mm_shuffle_ps(v38, v38, 85);
        v40.m128_f32[0] = v40.m128_f32[0]
                        * _mm_shuffle_ps((__m128)*(unsigned __int64 *)v6, (__m128)*(unsigned __int64 *)v6, 85).m128_f32[0];
        *((_DWORD *)v6 + 16) = 35;
        v38.m128_f32[0] = v38.m128_f32[0] * *(float *)&v39;
        *(_QWORD *)v6 = _mm_unpacklo_ps(v38, v40).m128_u64[0];
        goto LABEL_5;
      case 0x34u:
        v33 = (__m128)*(unsigned __int64 *)v8;
        v34 = *(_QWORD *)v6;
        v35 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)v6, (__m128)*(unsigned __int64 *)v6, 85).m128_f32[0];
        *((float *)&v42 + 2) = v6[2];
        *((float *)&v43 + 2) = v8[2];
        v36 = _mm_shuffle_ps(v33, v33, 85);
        v36.m128_f32[0] = v36.m128_f32[0] * v35;
        *((_DWORD *)v6 + 16) = 52;
        v33.m128_f32[0] = v33.m128_f32[0] * *(float *)&v34;
        *((float *)&v42 + 2) = *((float *)&v43 + 2) * *((float *)&v42 + 2);
        v37 = DWORD2(v42);
        *(_QWORD *)v6 = _mm_unpacklo_ps(v33, v36).m128_u64[0];
        *((_DWORD *)v6 + 2) = v37;
        goto LABEL_5;
      case 0x45u:
        v31 = 0LL;
        v43 = *(_OWORD *)v6;
        v42 = *(_OWORD *)v8;
        do
        {
          *(float *)((char *)v45 + v31) = *(float *)((char *)&v42 + v31) * *(float *)((char *)&v43 + v31);
          v31 += 4LL;
        }
        while ( v31 < 16 );
        v32 = v44;
        *((_DWORD *)v6 + 16) = 69;
        *(_OWORD *)v6 = v32;
        goto LABEL_5;
      case 0x47u:
        D3DXQuaternionMultiply(
          (struct D2DQuaternion *)&v42,
          (const struct D2DQuaternion *)v8,
          (const struct D2DQuaternion *)v6);
        v30 = v42;
        *((_DWORD *)v6 + 16) = 71;
        *(_OWORD *)v6 = v30;
        goto LABEL_5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4D1u);
    return 2147500037LL;
  }
  if ( v7 != 18 && v9 != 18 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4EAu);
    return 2147500037LL;
  }
  result = CExpressionValueStack::Scale(v4);
  v41 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x4E0u);
    return v41;
  }
  return result;
}

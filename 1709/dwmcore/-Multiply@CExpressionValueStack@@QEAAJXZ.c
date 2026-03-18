/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800A8DC0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800B4EFC (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180186978 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1801C9EE4 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  __int64 v2; // rbx
  CExpressionValueStack *v3; // r10
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int128 *v6; // r9
  float *v7; // rdx
  int v8; // eax
  unsigned int v9; // ecx
  __m128 v10; // xmm7
  float v11; // xmm5_4
  __m128 v12; // xmm6
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  __int128 v23; // xmm0
  __int128 v25; // xmm1
  int v26; // r11d
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  float v29; // xmm0_4
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  float v32; // eax
  __m128 v33; // xmm2
  __m128 v34; // xmm1
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  signed int v38; // eax
  __int128 v39; // [rsp+38h] [rbp-59h] BYREF
  __int128 v40; // [rsp+48h] [rbp-49h]
  float v41[8]; // [rsp+58h] [rbp-39h]
  _OWORD v42[4]; // [rsp+78h] [rbp-19h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0LL;
  v3 = this;
  v4 = 0;
  if ( v1 < 2 )
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x48Cu);
    return v4;
  }
  v5 = *((_QWORD *)this + 3);
  v6 = (__int128 *)(v5 + 72LL * (v1 - 2));
  v7 = (float *)(v5 + 72LL * (v1 - 1));
  v8 = *((_DWORD *)v6 + 16);
  v9 = *((_DWORD *)v7 + 16);
  if ( v8 == v9 )
  {
    switch ( v8 )
    {
      case 104:
        v10 = (__m128)*(unsigned int *)v7;
        v11 = v7[2];
        v12 = (__m128)*((unsigned int *)v7 + 3);
        v13 = v7[1];
        v14 = *((float *)v6 + 3);
        v15 = *((float *)v6 + 2);
        v16 = v7[3] * *((float *)v6 + 1);
        v41[0] = (float)(*(float *)v6 * v10.m128_f32[0]) + (float)(v11 * *((float *)v6 + 1));
        v17 = (float)(v13 * *(float *)v6) + v16;
        v18 = v14;
        v19 = v14 * v12.m128_f32[0];
        v12.m128_f32[0] = v12.m128_f32[0] * *((float *)v6 + 5);
        v41[1] = v17;
        v20 = v15 * v10.m128_f32[0];
        v21 = v15 * v13;
        v22 = v13 * *((float *)v6 + 4);
        v10.m128_f32[0] = (float)(v10.m128_f32[0] * *((float *)v6 + 4)) + (float)(v11 * *((float *)v6 + 5));
        v41[2] = v20 + (float)(v18 * v11);
        v10.m128_f32[0] = v10.m128_f32[0] + v7[4];
        v41[3] = v21 + v19;
        v23 = *(_OWORD *)v41;
        v12.m128_f32[0] = (float)(v12.m128_f32[0] + v22) + v7[5];
        *((_DWORD *)v6 + 16) = 104;
        *v6 = v23;
        *((_QWORD *)v6 + 2) = _mm_unpacklo_ps(v10, v12).m128_u64[0];
        break;
      case 18:
        v29 = *v7 * *(float *)v6;
        *((_DWORD *)v6 + 16) = 18;
        *(float *)v6 = v29;
        break;
      case 35:
        v36 = *(float *)v6 * *v7;
        v37 = *((float *)v6 + 1) * v7[1];
        *((_DWORD *)v6 + 16) = 35;
        *(float *)v6 = v36;
        *((float *)v6 + 1) = v37;
        break;
      case 52:
        v32 = *((float *)v6 + 2);
        *(_QWORD *)&v39 = *(_QWORD *)v6;
        *(_QWORD *)&v40 = *(_QWORD *)v7;
        v33 = (__m128)(unsigned int)v40;
        v33.m128_f32[0] = *(float *)&v40 * *(float *)&v39;
        *((float *)&v39 + 2) = v32;
        v34 = (__m128)DWORD1(v40);
        v34.m128_f32[0] = *((float *)&v40 + 1) * *((float *)&v39 + 1);
        *((float *)&v40 + 2) = v7[2];
        v35 = *((float *)&v40 + 2) * v32;
        *((_DWORD *)v6 + 16) = 52;
        *((float *)&v39 + 2) = v35;
        *(_QWORD *)v6 = _mm_unpacklo_ps(v33, v34).m128_u64[0];
        *((float *)v6 + 2) = v35;
        break;
      default:
        switch ( v8 )
        {
          case 69:
            v31 = *(_OWORD *)v7;
            v40 = *v6;
            v39 = v31;
            do
            {
              v41[v2] = *(float *)((char *)&v39 + v2 * 4) * v41[v2 - 4];
              ++v2;
            }
            while ( v2 < 4 );
            v30 = *(_OWORD *)v41;
            *((_DWORD *)v6 + 16) = 69;
            break;
          case 71:
            D3DXQuaternionMultiply(
              (struct D2DQuaternion *)&v39,
              (const struct D2DQuaternion *)v7,
              (const struct D2DQuaternion *)v6);
            v30 = v39;
            *((_DWORD *)v6 + 16) = 71;
            break;
          case 265:
            D2DMatrixMultiply((struct D2DMatrix *)v42, (const struct D2DMatrix *)v6, (const struct D2DMatrix *)v7);
            v25 = v42[1];
            *v6 = v42[0];
            *((_DWORD *)v6 + 16) = v26;
            v27 = v42[2];
            v6[1] = v25;
            v28 = v42[3];
            v6[2] = v27;
            v6[3] = v28;
            goto LABEL_5;
          default:
            v4 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x4EBu);
            return v4;
        }
        *v6 = v30;
        break;
    }
LABEL_5:
    *((_BYTE *)v6 + 68) = 1;
    --*((_DWORD *)v3 + 4);
    return v4;
  }
  if ( v9 == 18 || v8 == 18 )
  {
    v38 = CExpressionValueStack::Scale(v3);
    v4 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v38, 0x4FAu);
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x504u);
  }
  return v4;
}

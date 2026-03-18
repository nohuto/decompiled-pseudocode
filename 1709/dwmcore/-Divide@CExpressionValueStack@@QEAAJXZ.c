/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1800A8D30
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1801C9E38 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1801C9EE4 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  CExpressionValueStack *v3; // r11
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rdx
  int v7; // eax
  float v8; // xmm1_4
  float v9; // xmm0_4
  __m128i v11; // xmm0
  __int64 i; // rax
  __int32 v13; // eax
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  unsigned int v23; // [rsp+20h] [rbp-40h]
  __m128i v24; // [rsp+30h] [rbp-30h] BYREF
  __m128i v25; // [rsp+40h] [rbp-20h] BYREF
  __int128 v26; // [rsp+50h] [rbp-10h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  v3 = this;
  if ( v1 < 2 )
  {
    v23 = 1319;
    goto LABEL_11;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 9LL * (v1 - 2);
  v6 = 9LL * (v1 - 1);
  v7 = *(_DWORD *)(v4 + 8 * v5 + 64);
  if ( v7 != *(_DWORD *)(v4 + 8 * v6 + 64) )
  {
    v23 = 1343;
    goto LABEL_11;
  }
  if ( v7 != 18 )
  {
    if ( v7 == 35 )
    {
      v19 = *(float *)(v4 + 8 * v6);
      v20 = *(float *)(v4 + 8 * v5);
      v21 = *(float *)(v4 + 8 * v5 + 4);
      v22 = *(float *)(v4 + 8 * v6 + 4);
      if ( v19 != 0.0 && v22 != 0.0 )
      {
        *(_DWORD *)(v4 + 8 * v5 + 64) = 35;
        v9 = v20 / v19;
        *(float *)(v4 + 8 * v5 + 4) = v21 / v22;
        goto LABEL_6;
      }
      v23 = 1375;
    }
    else
    {
      if ( v7 != 52 )
      {
        if ( v7 == 69 )
        {
          v26 = *(_OWORD *)(v4 + 8 * v5);
          v25 = _mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
          if ( *(float *)v25.m128i_i32 == 0.0
            || *(float *)&v25.m128i_i32[1] == 0.0
            || *(float *)&v25.m128i_i32[2] == 0.0
            || *(float *)&v25.m128i_i32[3] == 0.0 )
          {
            v23 = 1419;
            goto LABEL_11;
          }
          for ( i = 0LL; i < 4; ++i )
            *(float *)&v24.m128i_i32[i] = *(float *)((char *)&v26 + i * 4) / *(float *)&v25.m128i_i32[i];
          v11 = v24;
          *(_DWORD *)(v4 + 8 * v5 + 64) = 69;
        }
        else
        {
          if ( v7 != 71 )
          {
            v23 = 1471;
            goto LABEL_11;
          }
          v24 = *(__m128i *)(v4 + 8 * v5);
          v25 = _mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
          if ( *(float *)v25.m128i_i32 == 0.0
            || *(float *)&v25.m128i_i32[1] == 0.0
            || *(float *)&v25.m128i_i32[2] == 0.0
            || *(float *)&v25.m128i_i32[3] == 0.0 )
          {
            v23 = 1443;
            goto LABEL_11;
          }
          D3DXQuaternionInverse((struct D2DQuaternion *)&v26, (const struct D2DQuaternion *)&v25);
          D3DXQuaternionMultiply(
            (struct D2DQuaternion *)&v25,
            (const struct D2DQuaternion *)&v26,
            (const struct D2DQuaternion *)&v24);
          v11 = v25;
          *(_DWORD *)(v4 + 8 * v5 + 64) = 71;
        }
        *(__m128i *)(v4 + 8 * v5) = v11;
        goto LABEL_7;
      }
      v13 = *(_DWORD *)(v4 + 8 * v5 + 8);
      v25.m128i_i64[0] = *(_QWORD *)(v4 + 8 * v5);
      v24.m128i_i64[0] = *(_QWORD *)(v4 + 8 * v6);
      v25.m128i_i32[2] = v13;
      v24.m128i_i32[2] = *(_DWORD *)(v4 + 8 * v6 + 8);
      if ( *(float *)v24.m128i_i32 != 0.0 )
      {
        v14 = *(float *)&v24.m128i_i32[1];
        if ( *(float *)&v24.m128i_i32[1] != 0.0 )
        {
          v15 = *(float *)&v24.m128i_i32[2];
          if ( *(float *)&v24.m128i_i32[2] != 0.0 )
          {
            v16 = *(float *)&v25.m128i_i32[2];
            v17 = (__m128)v25.m128i_u32[0];
            v17.m128_f32[0] = *(float *)v25.m128i_i32 / *(float *)v24.m128i_i32;
            *(_DWORD *)(v4 + 8 * v5 + 64) = 52;
            v18 = (__m128)v25.m128i_u32[1];
            v18.m128_f32[0] = *(float *)&v25.m128i_i32[1] / v14;
            *(float *)&v25.m128i_i32[2] = v16 / v15;
            *(_QWORD *)(v4 + 8 * v5) = _mm_unpacklo_ps(v17, v18).m128_u64[0];
            *(float *)(v4 + 8 * v5 + 8) = v16 / v15;
            goto LABEL_7;
          }
        }
      }
      v23 = 1396;
    }
LABEL_11:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v23);
    return v2;
  }
  v8 = *(float *)(v4 + 8 * v6);
  if ( v8 == 0.0 )
  {
    v23 = 1356;
    goto LABEL_11;
  }
  v9 = *(float *)(v4 + 8 * v5) / v8;
  *(_DWORD *)(v4 + 8 * v5 + 64) = 18;
LABEL_6:
  *(float *)(v4 + 8 * v5) = v9;
LABEL_7:
  *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
  --*((_DWORD *)v3 + 4);
  return v2;
}

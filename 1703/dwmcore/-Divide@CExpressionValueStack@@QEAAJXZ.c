/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x180033F34
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1801AF430 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1801AF4DC (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
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
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  unsigned int v21; // [rsp+20h] [rbp-40h]
  __m128i v22; // [rsp+30h] [rbp-30h] BYREF
  __m128i v23; // [rsp+40h] [rbp-20h] BYREF
  __int128 v24; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+10h]
  __int64 v26; // [rsp+78h] [rbp+18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  v3 = this;
  if ( v1 < 2 )
  {
    v21 = 1293;
    goto LABEL_10;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 9LL * (v1 - 2);
  v6 = 9LL * (v1 - 1);
  v7 = *(_DWORD *)(v4 + 8 * v5 + 64);
  if ( v7 != *(_DWORD *)(v4 + 8 * v6 + 64) )
  {
    v21 = 1317;
    goto LABEL_10;
  }
  if ( v7 != 18 )
  {
    if ( v7 == 35 )
    {
      v26 = *(_QWORD *)(v4 + 8 * v5);
      v25 = *(_QWORD *)(v4 + 8 * v6);
      if ( *(float *)&v25 != 0.0 && *((float *)&v25 + 1) != 0.0 )
      {
        v19 = (__m128)(unsigned int)v26;
        v19.m128_f32[0] = *(float *)&v26 / *(float *)&v25;
        *(_DWORD *)(v4 + 8 * v5 + 64) = 35;
        v20 = (__m128)HIDWORD(v26);
        v20.m128_f32[0] = *((float *)&v26 + 1) / *((float *)&v25 + 1);
        *(_QWORD *)(v4 + 8 * v5) = _mm_unpacklo_ps(v19, v20).m128_u64[0];
        goto LABEL_6;
      }
      v21 = 1349;
    }
    else
    {
      if ( v7 != 52 )
      {
        if ( v7 == 69 )
        {
          v24 = *(_OWORD *)(v4 + 8 * v5);
          v23 = _mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
          if ( *(float *)v23.m128i_i32 == 0.0
            || *(float *)&v23.m128i_i32[1] == 0.0
            || *(float *)&v23.m128i_i32[2] == 0.0
            || *(float *)&v23.m128i_i32[3] == 0.0 )
          {
            v21 = 1393;
            goto LABEL_10;
          }
          for ( i = 0LL; i < 4; ++i )
            *(float *)&v22.m128i_i32[i] = *(float *)((char *)&v24 + i * 4) / *(float *)&v23.m128i_i32[i];
          v11 = v22;
          *(_DWORD *)(v4 + 8 * v5 + 64) = 69;
        }
        else
        {
          if ( v7 != 71 )
          {
            v21 = 1445;
            goto LABEL_10;
          }
          v22 = *(__m128i *)(v4 + 8 * v5);
          v23 = _mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
          if ( *(float *)v23.m128i_i32 == 0.0
            || *(float *)&v23.m128i_i32[1] == 0.0
            || *(float *)&v23.m128i_i32[2] == 0.0
            || *(float *)&v23.m128i_i32[3] == 0.0 )
          {
            v21 = 1417;
            goto LABEL_10;
          }
          D3DXQuaternionInverse((struct D2DQuaternion *)&v24, (const struct D2DQuaternion *)&v23);
          D3DXQuaternionMultiply(
            (struct D2DQuaternion *)&v23,
            (const struct D2DQuaternion *)&v24,
            (const struct D2DQuaternion *)&v22);
          v11 = v23;
          *(_DWORD *)(v4 + 8 * v5 + 64) = 71;
        }
        *(__m128i *)(v4 + 8 * v5) = v11;
        goto LABEL_6;
      }
      v13 = *(_DWORD *)(v4 + 8 * v5 + 8);
      v23.m128i_i64[0] = *(_QWORD *)(v4 + 8 * v5);
      v22.m128i_i64[0] = *(_QWORD *)(v4 + 8 * v6);
      v23.m128i_i32[2] = v13;
      v22.m128i_i32[2] = *(_DWORD *)(v4 + 8 * v6 + 8);
      if ( *(float *)v22.m128i_i32 != 0.0 )
      {
        v14 = *(float *)&v22.m128i_i32[1];
        if ( *(float *)&v22.m128i_i32[1] != 0.0 )
        {
          v15 = *(float *)&v22.m128i_i32[2];
          if ( *(float *)&v22.m128i_i32[2] != 0.0 )
          {
            v16 = *(float *)&v23.m128i_i32[2];
            v17 = (__m128)v23.m128i_u32[0];
            v17.m128_f32[0] = *(float *)v23.m128i_i32 / *(float *)v22.m128i_i32;
            *(_DWORD *)(v4 + 8 * v5 + 64) = 52;
            v18 = (__m128)v23.m128i_u32[1];
            v18.m128_f32[0] = *(float *)&v23.m128i_i32[1] / v14;
            *(float *)&v23.m128i_i32[2] = v16 / v15;
            *(_QWORD *)(v4 + 8 * v5) = _mm_unpacklo_ps(v17, v18).m128_u64[0];
            *(float *)(v4 + 8 * v5 + 8) = v16 / v15;
            goto LABEL_6;
          }
        }
      }
      v21 = 1370;
    }
LABEL_10:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v21);
    return v2;
  }
  v8 = *(float *)(v4 + 8 * v6);
  if ( v8 == 0.0 )
  {
    v21 = 1330;
    goto LABEL_10;
  }
  v9 = *(float *)(v4 + 8 * v5) / v8;
  *(_DWORD *)(v4 + 8 * v5 + 64) = 18;
  *(float *)(v4 + 8 * v5) = v9;
LABEL_6:
  *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
  --*((_DWORD *)v3 + 4);
  return v2;
}

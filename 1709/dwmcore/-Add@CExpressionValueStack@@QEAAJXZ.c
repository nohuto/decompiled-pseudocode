/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1800A8A04
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1801C9384 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  float *v6; // rcx
  int v7; // eax
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  float v10; // eax
  _OWORD *v12; // rax
  float v13; // xmm0_4
  __m128 v14; // xmm2
  float v15; // xmm1_4
  float v16; // xmm0_4
  __m128 v17; // xmm1
  __int128 v18; // xmm0
  char *v19; // rcx
  float *v20; // rax
  __int64 v21; // r8
  __int128 v22; // xmm0
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  unsigned int v26; // [rsp+28h] [rbp-29h]
  float v27[8]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v28[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v26 = 924;
    goto LABEL_9;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 72LL * (v1 - 2);
  v6 = (float *)(v4 + 72LL * (v1 - 1));
  v7 = *(_DWORD *)(v5 + 64);
  if ( v7 != *((_DWORD *)v6 + 16) )
  {
    v26 = 953;
    goto LABEL_9;
  }
  if ( v7 != 52 )
  {
    switch ( v7 )
    {
      case 18:
        v25 = *v6 + *(float *)v5;
        *(_DWORD *)(v5 + 64) = 18;
        *(float *)v5 = v25;
        goto LABEL_5;
      case 35:
        v23 = *v6 + *(float *)v5;
        v24 = v6[1] + *(float *)(v5 + 4);
        *(_DWORD *)(v5 + 64) = 35;
        *(float *)v5 = v23;
        *(float *)(v5 + 4) = v24;
        goto LABEL_5;
      case 69:
        v19 = (char *)v6 - v5;
        v20 = (float *)(v4 + 72LL * (v1 - 2));
        v21 = 4LL;
        do
        {
          *(float *)((char *)v20 + (_QWORD)v27 - v5) = *(float *)((char *)v20 + (_QWORD)v19) + *v20;
          ++v20;
          --v21;
        }
        while ( v21 );
        v22 = *(_OWORD *)v27;
        *(_DWORD *)(v5 + 64) = 69;
        *(_OWORD *)v5 = v22;
        goto LABEL_5;
      case 104:
        v13 = *v6 + *(float *)v5;
        v14 = (__m128)*((unsigned int *)v6 + 5);
        v14.m128_f32[0] = v14.m128_f32[0] + *(float *)(v5 + 20);
        v27[1] = v6[1] + *(float *)(v5 + 4);
        v15 = v6[3] + *(float *)(v5 + 12);
        v27[0] = v13;
        v16 = v6[2] + *(float *)(v5 + 8);
        v27[3] = v15;
        v17 = (__m128)*((unsigned int *)v6 + 4);
        v17.m128_f32[0] = v17.m128_f32[0] + *(float *)(v5 + 16);
        v27[2] = v16;
        v18 = *(_OWORD *)v27;
        *(_DWORD *)(v5 + 64) = 104;
        *(_OWORD *)v5 = v18;
        *(_QWORD *)(v5 + 16) = _mm_unpacklo_ps(v17, v14).m128_u64[0];
        goto LABEL_5;
      case 265:
        v12 = (_OWORD *)D2DMatrix::operator+(v5, v28, v4 + 72LL * (v1 - 1));
        *(_DWORD *)(v5 + 64) = 265;
        *(_OWORD *)v5 = *v12;
        *(_OWORD *)(v5 + 16) = v12[1];
        *(_OWORD *)(v5 + 32) = v12[2];
        *(_OWORD *)(v5 + 48) = v12[3];
        goto LABEL_5;
    }
    v26 = 1008;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v26);
    return v2;
  }
  v8 = (__m128)*(unsigned int *)v6;
  v8.m128_f32[0] = v8.m128_f32[0] + *(float *)v5;
  v9 = (__m128)*((unsigned int *)v6 + 1);
  v9.m128_f32[0] = v9.m128_f32[0] + *(float *)(v5 + 4);
  v27[2] = v6[2] + *(float *)(v5 + 8);
  *(_DWORD *)(v5 + 64) = 52;
  v10 = v27[2];
  *(_QWORD *)v5 = _mm_unpacklo_ps(v8, v9).m128_u64[0];
  *(float *)(v5 + 8) = v10;
LABEL_5:
  *(_BYTE *)(v5 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}

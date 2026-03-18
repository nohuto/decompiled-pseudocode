/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x18001F1F4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1801AEA78 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  float *v6; // rcx
  int v7; // eax
  float v8; // xmm0_4
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  float v12; // eax
  _OWORD *v13; // rax
  float v14; // xmm0_4
  __m128 v15; // xmm2
  float v16; // xmm1_4
  float v17; // xmm0_4
  __m128 v18; // xmm1
  __int128 v19; // xmm0
  char *v20; // rcx
  float *v21; // rax
  __int64 v22; // r8
  __int128 v23; // xmm0
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  unsigned int v26; // [rsp+28h] [rbp-29h]
  float v27[8]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v28[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v26 = 898;
    goto LABEL_11;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 72LL * (v1 - 2);
  v6 = (float *)(v4 + 72LL * (v1 - 1));
  v7 = *(_DWORD *)(v5 + 64);
  if ( v7 != *((_DWORD *)v6 + 16) )
  {
    v26 = 927;
    goto LABEL_11;
  }
  if ( v7 != 18 )
  {
    switch ( v7 )
    {
      case 52:
        v10 = (__m128)*(unsigned int *)v6;
        v10.m128_f32[0] = v10.m128_f32[0] + *(float *)v5;
        v11 = (__m128)*((unsigned int *)v6 + 1);
        v11.m128_f32[0] = v11.m128_f32[0] + *(float *)(v5 + 4);
        v27[2] = v6[2] + *(float *)(v5 + 8);
        *(_DWORD *)(v5 + 64) = 52;
        v12 = v27[2];
        *(_QWORD *)v5 = _mm_unpacklo_ps(v10, v11).m128_u64[0];
        *(float *)(v5 + 8) = v12;
        goto LABEL_5;
      case 35:
        v24 = (__m128)*(unsigned int *)v6;
        v25 = (__m128)*((unsigned int *)v6 + 1);
        v24.m128_f32[0] = v24.m128_f32[0] + *(float *)v5;
        v25.m128_f32[0] = v25.m128_f32[0] + *(float *)(v5 + 4);
        *(_DWORD *)(v5 + 64) = 35;
        *(_QWORD *)v5 = _mm_unpacklo_ps(v24, v25).m128_u64[0];
        goto LABEL_5;
      case 69:
        v20 = (char *)v6 - v5;
        v21 = (float *)(v4 + 72LL * (v1 - 2));
        v22 = 4LL;
        do
        {
          *(float *)((char *)v21 + (_QWORD)v27 - v5) = *(float *)((char *)v21 + (_QWORD)v20) + *v21;
          ++v21;
          --v22;
        }
        while ( v22 );
        v23 = *(_OWORD *)v27;
        *(_DWORD *)(v5 + 64) = 69;
        *(_OWORD *)v5 = v23;
        goto LABEL_5;
      case 104:
        v14 = *v6 + *(float *)v5;
        v15 = (__m128)*((unsigned int *)v6 + 5);
        v15.m128_f32[0] = v15.m128_f32[0] + *(float *)(v5 + 20);
        v27[1] = v6[1] + *(float *)(v5 + 4);
        v16 = v6[3] + *(float *)(v5 + 12);
        v27[0] = v14;
        v17 = v6[2] + *(float *)(v5 + 8);
        v27[3] = v16;
        v18 = (__m128)*((unsigned int *)v6 + 4);
        v18.m128_f32[0] = v18.m128_f32[0] + *(float *)(v5 + 16);
        v27[2] = v17;
        v19 = *(_OWORD *)v27;
        *(_DWORD *)(v5 + 64) = 104;
        *(_OWORD *)v5 = v19;
        *(_QWORD *)(v5 + 16) = _mm_unpacklo_ps(v18, v15).m128_u64[0];
        goto LABEL_5;
      case 265:
        v13 = (_OWORD *)D2DMatrix::operator+(v5, v28, v4 + 72LL * (v1 - 1));
        *(_DWORD *)(v5 + 64) = 265;
        *(_OWORD *)v5 = *v13;
        *(_OWORD *)(v5 + 16) = v13[1];
        *(_OWORD *)(v5 + 32) = v13[2];
        *(_OWORD *)(v5 + 48) = v13[3];
        goto LABEL_5;
    }
    v26 = 982;
LABEL_11:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v26);
    return v2;
  }
  v8 = *v6 + *(float *)v5;
  *(_DWORD *)(v5 + 64) = 18;
  *(float *)v5 = v8;
LABEL_5:
  *(_BYTE *)(v5 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}

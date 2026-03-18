/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x18005235C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802057C4 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // esi
  __int64 v4; // rbx
  float *v5; // rax
  int v6; // ecx
  __m128 v7; // xmm2
  float v8; // xmm0_4
  __m128 v9; // xmm1
  _OWORD *v11; // rax
  float v12; // xmm0_4
  __m128 v13; // xmm2
  float v14; // xmm1_4
  float v15; // xmm0_4
  __m128 v16; // xmm1
  __int128 v17; // xmm0
  char *v18; // rax
  float *v19; // rcx
  __int64 v20; // r8
  __int128 v21; // xmm0
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  unsigned int v25; // [rsp+28h] [rbp-29h]
  float v26[8]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v27[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v25 = 901;
    goto LABEL_9;
  }
  v3 = 0;
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
  v6 = *(_DWORD *)(v4 + 72);
  if ( v6 != *((_DWORD *)v5 + 18) )
  {
    v25 = 929;
    goto LABEL_9;
  }
  if ( v6 != 52 )
  {
    switch ( v6 )
    {
      case 18:
        v24 = *v5 + *(float *)v4;
        *(_DWORD *)(v4 + 72) = 18;
        *(float *)v4 = v24;
        goto LABEL_5;
      case 35:
        v22 = *v5 + *(float *)v4;
        v23 = v5[1] + *(float *)(v4 + 4);
        *(_DWORD *)(v4 + 72) = 35;
        *(float *)v4 = v22;
        *(float *)(v4 + 4) = v23;
        goto LABEL_5;
      case 69:
        v18 = (char *)v5 - v4;
        v19 = (float *)v4;
        v20 = 4LL;
        do
        {
          *(float *)((char *)v19 + (_QWORD)v26 - v4) = *(float *)((char *)v19 + (_QWORD)v18) + *v19;
          ++v19;
          --v20;
        }
        while ( v20 );
        v21 = *(_OWORD *)v26;
        *(_DWORD *)(v4 + 72) = 69;
        *(_OWORD *)v4 = v21;
        goto LABEL_5;
      case 104:
        v12 = *v5 + *(float *)v4;
        v13 = (__m128)*((unsigned int *)v5 + 5);
        v13.m128_f32[0] = v13.m128_f32[0] + *(float *)(v4 + 20);
        v26[1] = v5[1] + *(float *)(v4 + 4);
        v14 = v5[3] + *(float *)(v4 + 12);
        v26[0] = v12;
        v15 = v5[2] + *(float *)(v4 + 8);
        v26[3] = v14;
        v16 = (__m128)*((unsigned int *)v5 + 4);
        v16.m128_f32[0] = v16.m128_f32[0] + *(float *)(v4 + 16);
        v26[2] = v15;
        v17 = *(_OWORD *)v26;
        *(_DWORD *)(v4 + 72) = 104;
        *(_OWORD *)v4 = v17;
        *(_QWORD *)(v4 + 16) = _mm_unpacklo_ps(v16, v13).m128_u64[0];
        goto LABEL_5;
      case 265:
        v11 = (_OWORD *)D2DMatrix::operator+(v4, v27, v5);
        *(_DWORD *)(v4 + 72) = 265;
        *(_OWORD *)v4 = *v11;
        *(_OWORD *)(v4 + 16) = v11[1];
        *(_OWORD *)(v4 + 32) = v11[2];
        *(_OWORD *)(v4 + 48) = v11[3];
        goto LABEL_5;
    }
    v25 = 984;
LABEL_9:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v25);
    return v3;
  }
  v7 = (__m128)*(unsigned int *)v5;
  v8 = v5[2] + *(float *)(v4 + 8);
  v9 = (__m128)*((unsigned int *)v5 + 1);
  v7.m128_f32[0] = v7.m128_f32[0] + *(float *)v4;
  v9.m128_f32[0] = v9.m128_f32[0] + *(float *)(v4 + 4);
  *(_DWORD *)(v4 + 72) = 52;
  v26[2] = v8;
  *(_QWORD *)v4 = _mm_unpacklo_ps(v7, v9).m128_u64[0];
  *(float *)(v4 + 8) = v8;
LABEL_5:
  *(_BYTE *)(v4 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v3;
}

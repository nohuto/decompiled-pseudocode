/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x18001F2DC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1801AE72C (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // edi
  __int64 v4; // rdx
  float *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  float v8; // xmm0_4
  _OWORD *v10; // rax
  float v11; // xmm0_4
  __m128 v12; // xmm2
  float v13; // xmm1_4
  float v14; // xmm0_4
  __m128 v15; // xmm1
  __int128 v16; // xmm0
  char *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  __int128 v20; // xmm0
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  unsigned int v23; // eax
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  unsigned int v26; // [rsp+28h] [rbp-29h]
  float v27[8]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v28[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v26 = 1021;
    goto LABEL_9;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = (float *)(v4 + 72LL * (v1 - 2));
  v6 = v4 + 72LL * (v1 - 1);
  v7 = *((_DWORD *)v5 + 16);
  if ( v7 != *(_DWORD *)(v6 + 64) )
  {
    v26 = 1045;
    goto LABEL_9;
  }
  if ( v7 != 18 )
  {
    switch ( v7 )
    {
      case 0x23u:
        v24 = (__m128)*(unsigned int *)v5;
        v25 = (__m128)*((unsigned int *)v5 + 1);
        v24.m128_f32[0] = v24.m128_f32[0] - *(float *)v6;
        v25.m128_f32[0] = v25.m128_f32[0] - *(float *)(v6 + 4);
        *((_DWORD *)v5 + 16) = 35;
        *(_QWORD *)v5 = _mm_unpacklo_ps(v24, v25).m128_u64[0];
        goto LABEL_5;
      case 0x34u:
        v21 = (__m128)*(unsigned int *)v5;
        v21.m128_f32[0] = v21.m128_f32[0] - *(float *)v6;
        v22 = (__m128)*((unsigned int *)v5 + 1);
        v22.m128_f32[0] = v22.m128_f32[0] - *(float *)(v6 + 4);
        v27[2] = v5[2] - *(float *)(v6 + 8);
        v23 = LODWORD(v27[2]);
        *((_DWORD *)v5 + 16) = 52;
        *(_QWORD *)v5 = _mm_unpacklo_ps(v21, v22).m128_u64[0];
        *((_DWORD *)v5 + 2) = v23;
        goto LABEL_5;
      case 0x45u:
        v17 = (char *)v5 - v6;
        v18 = 4LL;
        v19 = (char *)v27 - v6;
        do
        {
          *(float *)&v19[v6] = *(float *)&v17[v6] - *(float *)v6;
          v6 += 4LL;
          --v18;
        }
        while ( v18 );
        v20 = *(_OWORD *)v27;
        *((_DWORD *)v5 + 16) = 69;
        *(_OWORD *)v5 = v20;
        goto LABEL_5;
      case 0x68u:
        v11 = *v5 - *(float *)v6;
        v12 = (__m128)*((unsigned int *)v5 + 5);
        v12.m128_f32[0] = v12.m128_f32[0] - *(float *)(v6 + 20);
        v27[1] = v5[1] - *(float *)(v6 + 4);
        v13 = v5[3] - *(float *)(v6 + 12);
        v27[0] = v11;
        v14 = v5[2] - *(float *)(v6 + 8);
        v27[3] = v13;
        v15 = (__m128)*((unsigned int *)v5 + 4);
        v15.m128_f32[0] = v15.m128_f32[0] - *(float *)(v6 + 16);
        v27[2] = v14;
        v16 = *(_OWORD *)v27;
        *((_DWORD *)v5 + 16) = 104;
        *(_OWORD *)v5 = v16;
        *((_QWORD *)v5 + 2) = _mm_unpacklo_ps(v15, v12).m128_u64[0];
        goto LABEL_5;
      case 0x109u:
        v10 = (_OWORD *)D2DMatrix::operator-(v5, v28, v4 + 72LL * (v1 - 1));
        *((_DWORD *)v5 + 16) = 265;
        *(_OWORD *)v5 = *v10;
        *((_OWORD *)v5 + 1) = v10[1];
        *((_OWORD *)v5 + 2) = v10[2];
        *((_OWORD *)v5 + 3) = v10[3];
        goto LABEL_5;
    }
    v26 = 1099;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v26);
    return v2;
  }
  v8 = *v5 - *(float *)v6;
  *((_DWORD *)v5 + 16) = 18;
  *v5 = v8;
LABEL_5:
  *((_BYTE *)v5 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}

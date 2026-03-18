/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x180186DF8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1801C9038 (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // edi
  __int64 v4; // rdx
  float *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  _OWORD *v8; // rax
  float v9; // xmm0_4
  __m128 v10; // xmm2
  float v11; // xmm1_4
  float v12; // xmm0_4
  __m128 v13; // xmm1
  __int128 v14; // xmm0
  char *v15; // rax
  __int64 v16; // r8
  char *v17; // rdx
  __int128 v18; // xmm0
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  unsigned int v21; // eax
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  unsigned int v26; // [rsp+28h] [rbp-29h]
  float v27[8]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v28[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (float *)(v4 + 72LL * (v1 - 2));
    v6 = v4 + 72LL * (v1 - 1);
    v7 = *((_DWORD *)v5 + 16);
    if ( v7 == *(_DWORD *)(v6 + 64) )
    {
      switch ( v7 )
      {
        case 0x12u:
          v24 = *v5 - *(float *)v6;
          *((_DWORD *)v5 + 16) = 18;
          *v5 = v24;
          break;
        case 0x23u:
          v22 = *v5 - *(float *)v6;
          v23 = v5[1] - *(float *)(v6 + 4);
          *((_DWORD *)v5 + 16) = 35;
          *v5 = v22;
          v5[1] = v23;
          break;
        case 0x34u:
          v19 = (__m128)*(unsigned int *)v5;
          v19.m128_f32[0] = v19.m128_f32[0] - *(float *)v6;
          v20 = (__m128)*((unsigned int *)v5 + 1);
          v20.m128_f32[0] = v20.m128_f32[0] - *(float *)(v6 + 4);
          v27[2] = v5[2] - *(float *)(v6 + 8);
          v21 = LODWORD(v27[2]);
          *((_DWORD *)v5 + 16) = 52;
          *(_QWORD *)v5 = _mm_unpacklo_ps(v19, v20).m128_u64[0];
          *((_DWORD *)v5 + 2) = v21;
          break;
        case 0x45u:
          v15 = (char *)v5 - v6;
          v16 = 4LL;
          v17 = (char *)v27 - v6;
          do
          {
            *(float *)&v17[v6] = *(float *)&v15[v6] - *(float *)v6;
            v6 += 4LL;
            --v16;
          }
          while ( v16 );
          v18 = *(_OWORD *)v27;
          *((_DWORD *)v5 + 16) = 69;
          *(_OWORD *)v5 = v18;
          break;
        case 0x68u:
          v9 = *v5 - *(float *)v6;
          v10 = (__m128)*((unsigned int *)v5 + 5);
          v10.m128_f32[0] = v10.m128_f32[0] - *(float *)(v6 + 20);
          v27[1] = v5[1] - *(float *)(v6 + 4);
          v11 = v5[3] - *(float *)(v6 + 12);
          v27[0] = v9;
          v12 = v5[2] - *(float *)(v6 + 8);
          v27[3] = v11;
          v13 = (__m128)*((unsigned int *)v5 + 4);
          v13.m128_f32[0] = v13.m128_f32[0] - *(float *)(v6 + 16);
          v27[2] = v12;
          v14 = *(_OWORD *)v27;
          *((_DWORD *)v5 + 16) = 104;
          *(_OWORD *)v5 = v14;
          *((_QWORD *)v5 + 2) = _mm_unpacklo_ps(v13, v10).m128_u64[0];
          break;
        case 0x109u:
          v8 = (_OWORD *)D2DMatrix::operator-(v5, v28, v4 + 72LL * (v1 - 1));
          *((_DWORD *)v5 + 16) = 265;
          *(_OWORD *)v5 = *v8;
          *((_OWORD *)v5 + 1) = v8[1];
          *((_OWORD *)v5 + 2) = v8[2];
          *((_OWORD *)v5 + 3) = v8[3];
          break;
        default:
          v26 = 1125;
          goto LABEL_3;
      }
      *((_BYTE *)v5 + 68) = 1;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v26 = 1071;
  }
  else
  {
    v26 = 1047;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v26);
  return v2;
}

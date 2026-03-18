/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x1801BBA50
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180205478 (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // esi
  float *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ecx
  _OWORD *v7; // rax
  float v8; // xmm0_4
  __m128 v9; // xmm2
  float v10; // xmm1_4
  float v11; // xmm0_4
  __m128 v12; // xmm1
  __int128 v13; // xmm0
  char *v14; // rcx
  __int64 v15; // r8
  char *v16; // rdx
  __int128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  unsigned int v20; // eax
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  unsigned int v25; // [rsp+28h] [rbp-29h]
  float v26[8]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v27[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = 0;
    v4 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 2));
    v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
    v6 = *((_DWORD *)v4 + 18);
    if ( v6 == *(_DWORD *)(v5 + 72) )
    {
      switch ( v6 )
      {
        case 0x12u:
          v23 = *v4 - *(float *)v5;
          *((_DWORD *)v4 + 18) = 18;
          *v4 = v23;
          break;
        case 0x23u:
          v21 = *v4 - *(float *)v5;
          v22 = v4[1] - *(float *)(v5 + 4);
          *((_DWORD *)v4 + 18) = 35;
          *v4 = v21;
          v4[1] = v22;
          break;
        case 0x34u:
          v18 = (__m128)*(unsigned int *)v4;
          v18.m128_f32[0] = v18.m128_f32[0] - *(float *)v5;
          v19 = (__m128)*((unsigned int *)v4 + 1);
          v19.m128_f32[0] = v19.m128_f32[0] - *(float *)(v5 + 4);
          v26[2] = v4[2] - *(float *)(v5 + 8);
          v20 = LODWORD(v26[2]);
          *((_DWORD *)v4 + 18) = 52;
          *(_QWORD *)v4 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
          *((_DWORD *)v4 + 2) = v20;
          break;
        case 0x45u:
          v14 = (char *)v4 - v5;
          v15 = 4LL;
          v16 = (char *)v26 - v5;
          do
          {
            *(float *)&v16[v5] = *(float *)&v14[v5] - *(float *)v5;
            v5 += 4LL;
            --v15;
          }
          while ( v15 );
          v17 = *(_OWORD *)v26;
          *((_DWORD *)v4 + 18) = 69;
          *(_OWORD *)v4 = v17;
          break;
        case 0x68u:
          v8 = *v4 - *(float *)v5;
          v9 = (__m128)*((unsigned int *)v4 + 5);
          v9.m128_f32[0] = v9.m128_f32[0] - *(float *)(v5 + 20);
          v26[1] = v4[1] - *(float *)(v5 + 4);
          v10 = v4[3] - *(float *)(v5 + 12);
          v26[0] = v8;
          v11 = v4[2] - *(float *)(v5 + 8);
          v26[3] = v10;
          v12 = (__m128)*((unsigned int *)v4 + 4);
          v12.m128_f32[0] = v12.m128_f32[0] - *(float *)(v5 + 16);
          v26[2] = v11;
          v13 = *(_OWORD *)v26;
          *((_DWORD *)v4 + 18) = 104;
          *(_OWORD *)v4 = v13;
          *((_QWORD *)v4 + 2) = _mm_unpacklo_ps(v12, v9).m128_u64[0];
          break;
        case 0x109u:
          v7 = (_OWORD *)D2DMatrix::operator-(v4, v27, v5);
          *((_DWORD *)v4 + 18) = 265;
          *(_OWORD *)v4 = *v7;
          *((_OWORD *)v4 + 1) = v7[1];
          *((_OWORD *)v4 + 2) = v7[2];
          *((_OWORD *)v4 + 3) = v7[3];
          break;
        default:
          v25 = 1094;
          goto LABEL_3;
      }
      *((_BYTE *)v4 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v3;
    }
    v25 = 1040;
  }
  else
  {
    v25 = 1017;
  }
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v25);
  return v3;
}

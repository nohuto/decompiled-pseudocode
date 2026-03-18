/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJXZ @ 0x180034140
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __m128 v5; // xmm3
  __m128 v6; // xmm2
  unsigned int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-30h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v8 = 6123;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v8);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 9LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v3 + 8 * v4 + 64) != 35 )
  {
    v8 = 6136;
    goto LABEL_7;
  }
  v5 = 0LL;
  v6 = 0LL;
  DWORD2(v10) = 0;
  v9 = *(_QWORD *)(v3 + 8 * v4);
  *(_QWORD *)&v10 = (unsigned int)v9;
  *(_DWORD *)(v3 + 8 * v4 + 64) = 104;
  HIDWORD(v10) = HIDWORD(v9);
  *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
  v6.m128_f32[0] = 0.0 - (float)(*(float *)&v9 * 0.0);
  v5.m128_f32[0] = 0.0 - (float)(*((float *)&v9 + 1) * 0.0);
  *(_OWORD *)(v3 + 8 * v4) = v10;
  *(_QWORD *)(v3 + 8 * v4 + 16) = _mm_unpacklo_ps(v6, v5).m128_u64[0];
  return v2;
}

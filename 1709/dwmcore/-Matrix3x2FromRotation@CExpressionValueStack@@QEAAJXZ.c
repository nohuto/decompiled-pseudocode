/*
 * XREFs of ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJXZ @ 0x180185768
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromRotation(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  unsigned int v9; // [rsp+20h] [rbp-38h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = (unsigned int)(v1 - 1);
    v5 = 9 * v4;
    if ( *(_DWORD *)(v3 + 72 * v4 + 64) == 18 )
    {
      D2D1MakeRotateMatrix(
        *(float *)(v3 + 72 * v4) * 57.295776,
        (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL),
        &matrix);
      v6 = *(_OWORD *)&matrix.m11;
      *(_DWORD *)(v3 + 8 * v5 + 64) = 104;
      v7 = *(_QWORD *)&matrix.m[2][0];
      *(_OWORD *)(v3 + 8 * v5) = v6;
      *(_BYTE *)(v3 + 8 * v5 + 68) = 1;
      *(_QWORD *)(v3 + 8 * v5 + 16) = v7;
      return v2;
    }
    v9 = 6342;
  }
  else
  {
    v9 = 6330;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v9);
  return v2;
}

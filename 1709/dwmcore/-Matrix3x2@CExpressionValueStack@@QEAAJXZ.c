/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x18018564C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v4; // r11
  _QWORD *v5; // r9
  int i; // edx
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rcx
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-60h]
  __int128 v16; // [rsp+30h] [rbp-50h]
  _QWORD v17[6]; // [rsp+48h] [rbp-38h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 6 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v17;
    for ( i = 0; i < 6; ++i )
    {
      v7 = v4 + 72LL * (i + v1 - 6);
      v8 = *(_DWORD *)(v7 + 64) == 18;
      *v5 = v7;
      if ( !v8 )
      {
        v15 = 5878;
        goto LABEL_10;
      }
      ++v5;
    }
    v9 = v17[0];
    DWORD1(v16) = *(_DWORD *)v17[1];
    LODWORD(v16) = *(_DWORD *)v17[0];
    DWORD2(v16) = *(_DWORD *)v17[2];
    HIDWORD(v16) = *(_DWORD *)v17[3];
    v10 = (__m128)*(unsigned int *)v17[4];
    v11 = (__m128)*(unsigned int *)v17[5];
    *(_OWORD *)v17[0] = v16;
    *(_DWORD *)(v9 + 64) = 104;
    *(_BYTE *)(v9 + 68) = 1;
    *(_QWORD *)(v9 + 16) = _mm_unpacklo_ps(v10, v11).m128_u64[0];
    v12 = 5LL;
    v13 = *((_DWORD *)this + 4);
    do
    {
      --v13;
      --v12;
    }
    while ( v12 );
    *((_DWORD *)this + 4) = v13;
  }
  else
  {
    v15 = 5863;
LABEL_10:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v15);
  }
  return v2;
}

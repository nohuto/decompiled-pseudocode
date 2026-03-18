/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x1800528A4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  __int64 v3; // r11
  _QWORD *v4; // r8
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  unsigned int v12; // [rsp+20h] [rbp-60h]
  __int128 v13; // [rsp+30h] [rbp-50h]
  _QWORD v14[6]; // [rsp+48h] [rbp-38h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 6 )
  {
    v12 = 5573;
  }
  else
  {
    v3 = *((_QWORD *)this + 3);
    v4 = v14;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = v3 + 80LL * (v6 + v1 - 6);
      *v4 = v7;
      if ( *(_DWORD *)(v7 + 72) != 18 )
        break;
      ++v6;
      ++v4;
      if ( v6 >= 6 )
      {
        v8 = v14[0];
        DWORD1(v13) = *(_DWORD *)v14[1];
        LODWORD(v13) = *(_DWORD *)v14[0];
        DWORD2(v13) = *(_DWORD *)v14[2];
        HIDWORD(v13) = *(_DWORD *)v14[3];
        v9 = (__m128)*(unsigned int *)v14[4];
        v10 = (__m128)*(unsigned int *)v14[5];
        *(_OWORD *)v14[0] = v13;
        *(_DWORD *)(v8 + 72) = 104;
        *(_QWORD *)(v8 + 16) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
        *(_BYTE *)(v8 + 76) = 1;
        *((_DWORD *)this + 4) -= 5;
        return v5;
      }
    }
    v12 = 5587;
  }
  v5 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v12);
  return v5;
}

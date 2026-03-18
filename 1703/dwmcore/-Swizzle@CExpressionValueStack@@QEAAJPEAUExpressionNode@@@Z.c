/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800342E4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002B054 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18002B088 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(CExpressionValueStack *this, struct ExpressionNode *a2)
{
  int v2; // eax
  char *v3; // r14
  __int64 v4; // rbx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v6; // edi
  unsigned int v7; // r15d
  __int64 v8; // rdx
  int AsFloatArray; // eax
  __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  int v24; // eax
  unsigned int v25; // [rsp+28h] [rbp-79h]
  __int128 v26; // [rsp+58h] [rbp-49h] BYREF
  __int128 v27; // [rsp+68h] [rbp-39h]
  __int128 v28; // [rsp+78h] [rbp-29h]
  __int128 v29; // [rsp+88h] [rbp-19h]
  float v30; // [rsp+98h] [rbp-9h] BYREF
  char v31[60]; // [rsp+9Ch] [rbp-5h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
  {
    v25 = 6513;
    goto LABEL_36;
  }
  if ( *(_DWORD *)a2 == 78 )
  {
    v3 = (char *)a2 + 4;
  }
  else
  {
    if ( *(_DWORD *)a2 != 79 )
    {
      v25 = 6539;
      goto LABEL_36;
    }
    v3 = (char *)a2 + 8;
  }
  v30 = 0.0;
  v4 = *((_QWORD *)this + 3) + 72LL * (unsigned int)(v2 - 1);
  memset_0(v31, 0, sizeof(v31));
  LODWORD(v26) = 0;
  memset_0((char *)&v26 + 4, 0, 0x3CuLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(_DWORD *)(v4 + 64));
  v6 = (unsigned __int8)v3[4];
  v7 = ExpressionTypeChannelCount;
  AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)v4, v8, &v30);
  v10 = 0LL;
  v11 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AsFloatArray, 0x19A0u);
    return v11;
  }
  if ( v6 )
  {
    do
    {
      if ( *(_DWORD *)v3 == 1 )
      {
        v12 = ((unsigned __int8)v3[8] >> (2 * (v3[4] - v10) - 2)) & 3;
      }
      else
      {
        if ( *(_DWORD *)v3 != 2 )
        {
          v25 = 6586;
          goto LABEL_36;
        }
        v12 = (*((_QWORD *)v3 + 1) >> (4 * (v3[4] - (unsigned __int8)v10) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v12 >= v7 )
      {
        v25 = 6597;
        goto LABEL_36;
      }
      if ( (unsigned int)v10 >= 0x10 )
      {
        v25 = 6608;
        goto LABEL_36;
      }
      *((float *)&v26 + v10) = *(float *)&v31[4 * v12 - 4];
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < v6 );
  }
  v13 = v6 - 1;
  if ( v13 )
  {
    v15 = v13 - 1;
    if ( !v15 )
    {
      *(_QWORD *)v4 = _mm_unpacklo_ps((__m128)(unsigned int)v26, (__m128)DWORD1(v26)).m128_u64[0];
      *(_DWORD *)(v4 + 64) = 35;
      goto LABEL_13;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v24 = DWORD2(v26);
      *(_QWORD *)v4 = _mm_unpacklo_ps((__m128)(unsigned int)v26, (__m128)DWORD1(v26)).m128_u64[0];
      *(_DWORD *)(v4 + 8) = v24;
      *(_DWORD *)(v4 + 64) = 52;
      goto LABEL_13;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v23 = v26;
      *(_DWORD *)(v4 + 64) = 69;
      *(_OWORD *)v4 = v23;
      goto LABEL_13;
    }
    v18 = v17 - 2;
    if ( !v18 )
    {
      v22 = _mm_unpacklo_ps((__m128)(unsigned int)v27, (__m128)DWORD1(v27)).m128_u64[0];
      *(_OWORD *)v4 = v26;
      *(_DWORD *)(v4 + 64) = 104;
      *(_QWORD *)(v4 + 16) = v22;
      goto LABEL_13;
    }
    if ( v18 == 10 )
    {
      v19 = v27;
      *(_OWORD *)v4 = v26;
      *(_DWORD *)(v4 + 64) = 265;
      v20 = v28;
      *(_OWORD *)(v4 + 16) = v19;
      v21 = v29;
      *(_OWORD *)(v4 + 32) = v20;
      *(_OWORD *)(v4 + 48) = v21;
      goto LABEL_13;
    }
    v25 = 6654;
LABEL_36:
    v11 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v25);
    return v11;
  }
  *(_DWORD *)v4 = v26;
  *(_DWORD *)(v4 + 64) = 18;
LABEL_13:
  *(_BYTE *)(v4 + 68) = 1;
  return v11;
}

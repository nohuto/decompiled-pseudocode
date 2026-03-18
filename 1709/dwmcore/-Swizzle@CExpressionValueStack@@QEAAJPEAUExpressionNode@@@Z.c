/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800A871C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180093028 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18009306C (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(CExpressionValueStack *this, struct ExpressionNode *a2)
{
  int v2; // eax
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v7; // edi
  unsigned int v8; // r12d
  __int64 v9; // rdx
  signed int AsFloatArray; // eax
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned int v14; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned __int64 v23; // xmm1_8
  __int128 v24; // xmm0
  int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-89h]
  __int128 v27; // [rsp+50h] [rbp-59h] BYREF
  __int128 v28; // [rsp+60h] [rbp-49h]
  __int128 v29; // [rsp+70h] [rbp-39h]
  __int128 v30; // [rsp+80h] [rbp-29h]
  float v31; // [rsp+90h] [rbp-19h] BYREF
  char v32[60]; // [rsp+94h] [rbp-15h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
  {
    v26 = 6638;
    goto LABEL_37;
  }
  if ( *(_DWORD *)a2 == 81 )
  {
    v4 = 4LL;
  }
  else
  {
    if ( *(_DWORD *)a2 != 82 )
    {
      v26 = 6664;
      goto LABEL_37;
    }
    v4 = 8LL;
  }
  v31 = 0.0;
  v5 = *((_QWORD *)this + 3) + 72LL * (unsigned int)(v2 - 1);
  memset_0(v32, 0, sizeof(v32));
  LODWORD(v27) = 0;
  memset_0((char *)&v27 + 4, 0, 0x3CuLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(_DWORD *)(v5 + 64));
  v7 = *((unsigned __int8 *)a2 + v4 + 4);
  v8 = ExpressionTypeChannelCount;
  AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)v5, v9, &v31);
  v11 = 0LL;
  v12 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, AsFloatArray, 0x1A1Du);
    return v12;
  }
  if ( v7 )
  {
    do
    {
      if ( *(_DWORD *)((char *)a2 + v4) == 1 )
      {
        v13 = (*((unsigned __int8 *)a2 + v4 + 8) >> (2 * (*((_BYTE *)a2 + v4 + 4) - v11) - 2)) & 3;
      }
      else
      {
        if ( *(_DWORD *)((char *)a2 + v4) != 2 )
        {
          v26 = 6711;
          goto LABEL_37;
        }
        v13 = (*(_QWORD *)((char *)a2 + v4 + 8) >> (4 * (*((_BYTE *)a2 + v4 + 4) - (unsigned __int8)v11) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v13 >= v8 )
      {
        v26 = 6722;
        goto LABEL_37;
      }
      if ( (unsigned int)v11 >= 0x10 )
      {
        v26 = 6733;
        goto LABEL_37;
      }
      *((float *)&v27 + v11) = *(float *)&v32[4 * v13 - 4];
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 < v7 );
  }
  v14 = v7 - 1;
  if ( v14 )
  {
    v16 = v14 - 1;
    if ( !v16 )
    {
      *(_DWORD *)(v5 + 4) = DWORD1(v27);
      *(_DWORD *)(v5 + 64) = 35;
      goto LABEL_13;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v25 = DWORD2(v27);
      *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)(unsigned int)v27, (__m128)DWORD1(v27)).m128_u64[0];
      *(_DWORD *)(v5 + 8) = v25;
      *(_DWORD *)(v5 + 64) = 52;
      goto LABEL_14;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v24 = v27;
      *(_DWORD *)(v5 + 64) = 69;
      *(_OWORD *)v5 = v24;
      goto LABEL_14;
    }
    v19 = v18 - 2;
    if ( !v19 )
    {
      v23 = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)DWORD1(v28)).m128_u64[0];
      *(_OWORD *)v5 = v27;
      *(_DWORD *)(v5 + 64) = 104;
      *(_QWORD *)(v5 + 16) = v23;
      goto LABEL_14;
    }
    if ( v19 == 10 )
    {
      v20 = v28;
      *(_OWORD *)v5 = v27;
      *(_DWORD *)(v5 + 64) = 265;
      v21 = v29;
      *(_OWORD *)(v5 + 16) = v20;
      v22 = v30;
      *(_OWORD *)(v5 + 32) = v21;
      *(_OWORD *)(v5 + 48) = v22;
      goto LABEL_14;
    }
    v26 = 6779;
LABEL_37:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v26);
    return v12;
  }
  *(_DWORD *)(v5 + 64) = 18;
LABEL_13:
  *(_DWORD *)v5 = v27;
LABEL_14:
  *(_BYTE *)(v5 + 68) = 1;
  return v12;
}

/*
 * XREFs of ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x180185FFC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::NotEquals(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // r9
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf
  bool v17; // zf
  bool v18; // al
  unsigned __int64 v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-38h]
  __m128i v22; // [rsp+30h] [rbp-28h]
  __m128i v23; // [rsp+40h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v4 + 72LL * (v1 - 2);
    v6 = *(_DWORD *)(v5 + 64);
    v7 = v4 + 72LL * (v1 - 1);
    if ( v6 != *(_DWORD *)(v7 + 64) )
    {
      v21 = 1763;
      goto LABEL_3;
    }
    v8 = v6 - 17;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        v17 = *(float *)v5 == *(float *)v7;
        goto LABEL_23;
      }
      v10 = v9 - 17;
      if ( v10 )
      {
        v11 = v10 - 17;
        if ( !v11 )
        {
          v19 = *(_QWORD *)v5 - *(_QWORD *)v7;
          if ( *(_QWORD *)v5 == *(_QWORD *)v7 )
            v19 = *(unsigned int *)(v5 + 8) - (unsigned __int64)*(unsigned int *)(v7 + 8);
          goto LABEL_28;
        }
        v12 = v11 - 17;
        if ( !v12 )
        {
LABEL_26:
          v19 = *(_QWORD *)v5 - *(_QWORD *)v7;
          if ( *(_QWORD *)v5 == *(_QWORD *)v7 )
            v19 = *(_QWORD *)(v5 + 8) - *(_QWORD *)(v7 + 8);
LABEL_28:
          v18 = v19 != 0;
          goto LABEL_25;
        }
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 33;
            if ( v15 )
            {
              if ( v15 != 161 )
              {
                v21 = 1824;
                goto LABEL_3;
              }
              v16 = memcmp_0((const void *)v5, (const void *)v7, 0x40uLL) == 0;
              goto LABEL_38;
            }
            if ( *(float *)v5 != *(float *)v7
              || *(float *)(v5 + 4) != *(float *)(v7 + 4)
              || *(float *)(v5 + 8) != *(float *)(v7 + 8)
              || *(float *)(v5 + 12) != *(float *)(v7 + 12)
              || *(float *)(v5 + 16) != *(float *)(v7 + 16) )
            {
              goto LABEL_24;
            }
            v17 = *(float *)(v5 + 20) == *(float *)(v7 + 20);
            goto LABEL_23;
          }
          goto LABEL_26;
        }
        v22 = _mm_loadu_si128((const __m128i *)v5);
        v23 = _mm_loadu_si128((const __m128i *)v7);
        if ( *(float *)v22.m128i_i32 != *(float *)v23.m128i_i32
          || *(float *)&v22.m128i_i32[1] != *(float *)&v23.m128i_i32[1]
          || *(float *)&v22.m128i_i32[2] != *(float *)&v23.m128i_i32[2] )
        {
          goto LABEL_24;
        }
        v17 = *(float *)&v22.m128i_i32[3] == *(float *)&v23.m128i_i32[3];
LABEL_23:
        v18 = 0;
        if ( v17 )
        {
LABEL_25:
          *(_BYTE *)v5 = v18;
LABEL_39:
          *(_DWORD *)(v5 + 64) = 17;
          *(_BYTE *)(v5 + 68) = 1;
          --*((_DWORD *)this + 4);
          return v2;
        }
LABEL_24:
        v18 = 1;
        goto LABEL_25;
      }
      v16 = *(_QWORD *)v5 == *(_QWORD *)v7;
    }
    else
    {
      v16 = *(_BYTE *)v5 == *(_BYTE *)v7;
    }
LABEL_38:
    *(_BYTE *)v5 = !v16;
    goto LABEL_39;
  }
  v21 = 1734;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v21);
  return v2;
}

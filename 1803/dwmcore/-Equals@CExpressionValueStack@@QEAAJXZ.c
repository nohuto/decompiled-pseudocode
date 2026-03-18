/*
 * XREFs of ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801B81B8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::Equals(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // r9
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  bool v15; // zf
  bool v16; // zf
  char v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-38h]
  __m128i v22; // [rsp+30h] [rbp-28h]
  __m128i v23; // [rsp+40h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = 0;
    v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
    v6 = *(_DWORD *)(v4 + 72);
    if ( v6 != *(_DWORD *)(v5 + 72) )
    {
      v21 = 1585;
      goto LABEL_3;
    }
    v7 = v6 - 17;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v16 = *(float *)v4 == *(float *)v5;
        goto LABEL_23;
      }
      v9 = v8 - 17;
      if ( v9 )
      {
        v10 = v9 - 17;
        if ( !v10 )
        {
          v19 = *(_QWORD *)v4 - *(_QWORD *)v5;
          if ( *(_QWORD *)v4 == *(_QWORD *)v5 )
            v19 = *(unsigned int *)(v4 + 8) - (unsigned __int64)*(unsigned int *)(v5 + 8);
          v15 = v19 == 0;
          goto LABEL_38;
        }
        v11 = v10 - 17;
        if ( !v11 )
          goto LABEL_25;
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 33;
            if ( v14 )
            {
              if ( v14 != 161 )
              {
                v21 = 1647;
                goto LABEL_3;
              }
              v15 = memcmp_0((const void *)v4, (const void *)v5, 0x40uLL) == 0;
              goto LABEL_38;
            }
            if ( *(float *)v4 != *(float *)v5
              || *(float *)(v4 + 4) != *(float *)(v5 + 4)
              || *(float *)(v4 + 8) != *(float *)(v5 + 8)
              || *(float *)(v4 + 12) != *(float *)(v5 + 12)
              || *(float *)(v4 + 16) != *(float *)(v5 + 16) )
            {
              goto LABEL_24;
            }
            v16 = *(float *)(v4 + 20) == *(float *)(v5 + 20);
            goto LABEL_23;
          }
LABEL_25:
          v18 = *(_QWORD *)v4 - *(_QWORD *)v5;
          if ( *(_QWORD *)v4 == *(_QWORD *)v5 )
            v18 = *(_QWORD *)(v4 + 8) - *(_QWORD *)(v5 + 8);
          v15 = v18 == 0;
          goto LABEL_38;
        }
        v22 = _mm_loadu_si128((const __m128i *)v4);
        v23 = _mm_loadu_si128((const __m128i *)v5);
        if ( *(float *)v22.m128i_i32 != *(float *)v23.m128i_i32
          || *(float *)&v22.m128i_i32[1] != *(float *)&v23.m128i_i32[1]
          || *(float *)&v22.m128i_i32[2] != *(float *)&v23.m128i_i32[2] )
        {
          goto LABEL_24;
        }
        v16 = *(float *)&v22.m128i_i32[3] == *(float *)&v23.m128i_i32[3];
LABEL_23:
        v17 = 1;
        if ( v16 )
        {
LABEL_39:
          *(_DWORD *)(v4 + 72) = 17;
          *(_BYTE *)(v4 + 76) = 1;
          *(_BYTE *)v4 = v17;
          --*((_DWORD *)this + 4);
          return v3;
        }
LABEL_24:
        v17 = 0;
        goto LABEL_39;
      }
      v15 = *(_QWORD *)v4 == *(_QWORD *)v5;
    }
    else
    {
      v15 = *(_BYTE *)v4 == *(_BYTE *)v5;
    }
LABEL_38:
    v17 = v15;
    goto LABEL_39;
  }
  v21 = 1557;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v21);
  return v3;
}

/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x180052A78
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // ebx
  char v4; // di
  __int64 v5; // r8
  int v6; // xmm1_4
  unsigned int v7; // xmm0_4
  int *v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+60h] [rbp-20h]
  __int128 v13; // [rsp+70h] [rbp-10h]

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v4 = 0;
  if ( v2 < a2 )
  {
    v11 = 5796;
LABEL_11:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v11);
    return v3;
  }
  if ( a2 == 1 )
  {
    v5 = *((_QWORD *)this + 3) + 80LL * (v2 - 1);
    if ( *(_DWORD *)(v5 + 72) != 52 )
      goto LABEL_6;
    v6 = HIDWORD(*(_QWORD *)v5);
    LODWORD(v13) = *(_QWORD *)v5;
    v7 = *(_DWORD *)(v5 + 8);
    goto LABEL_5;
  }
  if ( a2 == 3 )
  {
    v5 = *((_QWORD *)this + 3) + 80LL * (v2 - 3);
    v9 = (int *)(*((_QWORD *)this + 3) + 80LL * (v2 - 2));
    v10 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v2 - 1));
    if ( *(_DWORD *)(v5 + 72) == 18 && v9[18] == 18 && v10[18] == 18 )
    {
      v6 = *v9;
      LODWORD(v13) = *(_DWORD *)v5;
      v7 = *v10;
LABEL_5:
      v4 = 1;
      *(_QWORD *)&v12 = 0LL;
      *((_QWORD *)&v13 + 1) = v7 | 0x3F80000000000000LL;
      DWORD1(v13) = v6;
      *(_OWORD *)v5 = 0x3F800000uLL;
      *(_OWORD *)(v5 + 16) = 0x3F80000000000000uLL;
      *((_QWORD *)&v12 + 1) = 1065353216LL;
      *(_OWORD *)(v5 + 32) = v12;
      *(_BYTE *)(v5 + 76) = 1;
      *(_OWORD *)(v5 + 48) = v13;
      *(_DWORD *)(v5 + 72) = 265;
    }
  }
LABEL_6:
  if ( !v4 )
  {
    v11 = 5846;
    goto LABEL_11;
  }
  *((_DWORD *)this + 4) += 1 - a2;
  return v3;
}

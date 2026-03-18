/*
 * XREFs of itrp_MSIRP @ 0x1C02D6800
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02CEDAC (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     DoubleCheckLinkColor @ 0x1C02CF16C (DoubleCheckLinkColor.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 */

__int64 __fastcall itrp_MSIRP(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  __int64 v9; // rbp
  _WORD *v10; // rcx
  unsigned __int16 v11; // r12
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  __int16 v15; // ax
  unsigned __int16 v16; // ax
  __int64 v17; // r14
  int v18; // r12d
  __int16 v19; // ax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r14d
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  int v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  _WORD *v30; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp+18h]
  int v34; // [rsp+B0h] [rbp+18h]
  int v35; // [rsp+B8h] [rbp+20h]

  v2 = qword_1C032CA00;
  v3 = LocalGS;
  v4 = qword_1C032C9C8;
  v5 = (int)qword_1C032CA10;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v6 = qword_1C032C9E8, (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v7 = 1;
  qword_1C032C9E8 -= 4LL;
  v8 = *(_DWORD *)(v6 - 4);
  qword_1C032C9E8 = v6 - 8;
  v28 = v8;
  v9 = *(int *)(v6 - 8);
  v10 = *(_WORD **)(qword_1C032CA00 + 344);
  v30 = v10;
  v11 = v10[4];
  v12 = v10[6];
  v13 = v12;
  if ( v11 > v12 )
    v13 = v10[4];
  if ( v13 > 1u )
  {
    v14 = v10[6];
    if ( v11 > v12 )
      v14 = v10[4];
    v7 = v14;
  }
  v33 = v7;
  v29 = qword_1C032C9F8;
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( (int)qword_1C032CA10 >= (unsigned __int16)v10[8] || (int)qword_1C032CA10 < 0 )
      goto LABEL_13;
    v35 = 0;
  }
  else
  {
    if ( (int)qword_1C032CA10 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)qword_1C032CA10 < 0 )
      goto LABEL_13;
    v35 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_13;
  v15 = *(_WORD *)(v3 + 80);
  if ( v15 >= 1 && v15 <= v33 && (int)v5 >= *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v15 - 1)) + v35 + 1 )
    goto LABEL_13;
  v16 = v12;
  if ( v11 > v12 )
    v16 = v11;
  if ( v16 <= 1u )
  {
    v34 = 1;
  }
  else
  {
    if ( v11 > v12 )
      v12 = v11;
    v34 = v12;
  }
  v17 = v29;
  if ( v29 == v4 )
  {
    if ( (int)v9 >= (unsigned __int16)v30[8] || (int)v9 < 0 )
      goto LABEL_13;
    v18 = 0;
  }
  else
  {
    if ( (int)v9 >= *(_DWORD *)(v2 + 440) || (int)v9 < 0 )
      goto LABEL_13;
    v18 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v19 = *(_WORD *)(v4 + 80), v19 >= 1)
    && v19 <= v34
    && (int)v9 >= v18 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v19 - 1)) + 1 )
  {
LABEL_13:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  if ( v4 == v29 )
    goto LABEL_45;
  if ( *(_BYTE *)(v2 + 333) == 2 && word_1C032CA74 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v20 = DoubleCheckLinkColor((_QWORD *)v4, v5, v9, 1u);
    AddDistance(v21, v4, v5, v9, v20);
    v2 = qword_1C032CA00;
    v17 = qword_1C032C9F8;
  }
  if ( v4 == v17 )
  {
LABEL_45:
    v22 = v28;
    *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v9) = ((unsigned __int64)(v28 * (__int64)(__int16)dword_1C032C9D8) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v5)
                                               + ((((unsigned int)(v28 * (__int16)dword_1C032C9D8) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v9) = ((unsigned __int64)(v28 * (__int64)SHIWORD(dword_1C032C9D8)) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v5)
                                               + ((((unsigned int)(v28 * SHIWORD(dword_1C032C9D8)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)v4 + 4 * v9) = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v9);
    *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v9) = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v9);
    v2 = qword_1C032CA00;
  }
  else
  {
    v22 = v28;
  }
  if ( (*(_BYTE *)(v2 + 120) & 4) == 0 )
  {
    if ( word_1C032CA74 )
    {
      v23 = InvokeProject(
              dword_1C032CA34,
              *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v5),
              *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v5));
      if ( v23 )
      {
        v24 = 16 * (v22 - v23);
        v25 = *(_DWORD *)(qword_1C032CA00 + 104);
        if ( v24 > v25 || v24 < -v25 )
          v22 = v23;
      }
    }
  }
  v26 = InvokeProject(
          dword_1C032CA30,
          *(_DWORD *)(*(_QWORD *)v4 + 4 * v9) - *(_DWORD *)(*(_QWORD *)v3 + 4 * v5),
          *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v5));
  InvokeMovePoint(dword_1C032CA2C, (_QWORD *)v4, v9, v22 - v26);
  HIDWORD(qword_1C032CA10) = v5;
  dword_1C032CA18 = v9;
  if ( (a2 & 1) != 0 )
    LODWORD(qword_1C032CA10) = v9;
  return a1;
}

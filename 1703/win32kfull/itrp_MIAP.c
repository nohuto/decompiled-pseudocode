/*
 * XREFs of itrp_MIAP @ 0x1C02D5AA0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeGetCVTEntry @ 0x1C02CF540 (InvokeGetCVTEntry.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_MIAP(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v5; // r14d
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rbp
  _WORD *v9; // r8
  __int64 v10; // rbx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // ax
  int v14; // r12d
  __int64 v15; // r15
  __int16 v16; // ax
  int v17; // eax
  int v18; // r14d
  int v19; // ecx

  v2 = qword_1C032CA00;
  v3 = LocalGS;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2 )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v5 = 4;
  qword_1C032C9E8 -= 4LL;
  v6 = *(unsigned __int16 *)(qword_1C032CA00 + 360);
  v7 = *(_DWORD *)qword_1C032C9E8;
  if ( *(_DWORD *)qword_1C032C9E8 >= (int)v6
    || v7 < 0
    || (qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ v6 ^ *(_QWORD *)(qword_1C032CA00 + 16)) != *(_QWORD *)(qword_1C032CA00 + 368) )
  {
    dword_1C032CA50 = 4379;
    return qword_1C032CA58;
  }
  v8 = (int)InvokeGetCVTEntry(dword_1C032CA3C, v7);
  qword_1C032C9E8 -= 4LL;
  v9 = *(_WORD **)(qword_1C032CA00 + 344);
  v10 = *(int *)qword_1C032C9E8;
  v11 = v9[4];
  v12 = v9[6];
  v13 = v12;
  if ( v11 > v12 )
    v13 = v9[4];
  if ( v13 <= 1u )
  {
    v14 = 1;
  }
  else
  {
    if ( v11 > v12 )
      v12 = v9[4];
    v14 = v12;
  }
  v15 = qword_1C032C9F8;
  if ( qword_1C032C9F8 == v3 )
  {
    if ( (int)v10 >= (unsigned __int16)v9[8] || (int)v10 < 0 )
      goto LABEL_17;
    v5 = 0;
  }
  else if ( (int)v10 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v10 < 0 )
  {
    goto LABEL_17;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v3)
    || (v16 = *(_WORD *)(v3 + 80), v16 >= 1)
    && v16 <= v14
    && (int)v10 >= v5 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v16 - 1)) + 1 )
  {
LABEL_17:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  LODWORD(qword_1C032CA10) = v10;
  HIDWORD(qword_1C032CA10) = v10;
  if ( v3 == v15 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4 * v10) = ((unsigned __int64)(v8 * (__int16)dword_1C032C9D8) >> 32 << 18)
                                         + ((((unsigned int)(v8 * (__int16)dword_1C032C9D8) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v10) = *(_DWORD *)(*(_QWORD *)v3 + 4 * v10);
    *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v10) = ((unsigned __int64)(v8 * SHIWORD(dword_1C032C9D8)) >> 32 << 18)
                                               + ((((unsigned int)(v8 * SHIWORD(dword_1C032C9D8)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v10) = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v10);
  }
  v17 = InvokeProject(dword_1C032CA30, *(_DWORD *)(*(_QWORD *)v3 + 4 * v10), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v10));
  v18 = v17;
  if ( (a2 & 1) != 0 )
  {
    v19 = v17 - v8;
    if ( (int)v8 - v17 >= 0 )
      v19 = v8 - v17;
    if ( v19 > *(_DWORD *)(v2 + 104) )
      LODWORD(v8) = v17;
    LODWORD(v8) = InvokeRoundValue(*(_DWORD *)(v2 + 128), v8, *(_DWORD *)(qword_1C032CA00 + 32));
  }
  InvokeMovePoint(dword_1C032CA2C, (_QWORD *)v3, v10, v8 - v18);
  return a1;
}

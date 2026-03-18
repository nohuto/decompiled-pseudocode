/*
 * XREFs of itrp_MIAP @ 0x1C02CF860
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeGetCVTEntry @ 0x1C02C92E0 (InvokeGetCVTEntry.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02C94DC (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_MIAP(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rbp
  _WORD *v8; // r8
  __int64 v9; // rbx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // ax
  int v13; // r12d
  __int64 v14; // r15
  int v15; // r14d
  __int16 v16; // ax
  int v17; // eax
  int v18; // r14d
  int v19; // ecx

  v2 = qword_1C0327C90;
  v3 = LocalGS;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2 )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v5 = *(unsigned __int16 *)(qword_1C0327C90 + 360);
  v6 = *(_DWORD *)qword_1C0327C78;
  if ( *(_DWORD *)qword_1C0327C78 >= (int)v5
    || v6 < 0
    || (qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ v5 ^ *(_QWORD *)(qword_1C0327C90 + 16)) != *(_QWORD *)(qword_1C0327C90 + 368) )
  {
    dword_1C0327CE0 = 4379;
    return qword_1C0327CE8;
  }
  v7 = (int)InvokeGetCVTEntry(dword_1C0327CCC, v6);
  qword_1C0327C78 -= 4LL;
  v8 = *(_WORD **)(qword_1C0327C90 + 344);
  v9 = *(int *)qword_1C0327C78;
  v10 = v8[4];
  v11 = v8[6];
  v12 = v11;
  if ( v10 > v11 )
    v12 = v8[4];
  if ( v12 <= 1u )
  {
    v13 = 1;
  }
  else
  {
    if ( v10 > v11 )
      v11 = v8[4];
    v13 = v11;
  }
  v14 = qword_1C0327C88;
  if ( qword_1C0327C88 == v3 )
  {
    if ( (int)v9 >= (unsigned __int16)v8[8] || (int)v9 < 0 )
      goto LABEL_17;
    v15 = 1;
  }
  else
  {
    if ( (int)v9 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v9 < 0 )
      goto LABEL_17;
    v15 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v3)
    || (v16 = *(_WORD *)(v3 + 80), v16 >= 1)
    && v16 <= v13
    && (int)v9 >= v15 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v16 - 1)) )
  {
LABEL_17:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  LODWORD(qword_1C0327CA0) = v9;
  HIDWORD(qword_1C0327CA0) = v9;
  if ( v3 == v14 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4 * v9) = ((unsigned __int64)(v7 * (__int16)dword_1C0327C68) >> 32 << 18)
                                        + ((((unsigned int)(v7 * (__int16)dword_1C0327C68) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v9) = *(_DWORD *)(*(_QWORD *)v3 + 4 * v9);
    *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v9) = ((unsigned __int64)(v7 * SHIWORD(dword_1C0327C68)) >> 32 << 18)
                                              + ((((unsigned int)(v7 * SHIWORD(dword_1C0327C68)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v9) = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v9);
  }
  v17 = InvokeProject(dword_1C0327CC0, *(_DWORD *)(*(_QWORD *)v3 + 4 * v9), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v9));
  v18 = v17;
  if ( (a2 & 1) != 0 )
  {
    v19 = v17 - v7;
    if ( (int)v7 - v17 >= 0 )
      v19 = v7 - v17;
    if ( v19 > *(_DWORD *)(v2 + 104) )
      LODWORD(v7) = v17;
    LODWORD(v7) = InvokeRoundValue(*(_DWORD *)(v2 + 128), v7, *(_DWORD *)(qword_1C0327C90 + 32));
  }
  InvokeMovePoint(dword_1C0327CBC, (_QWORD *)v3, v9, v7 - v18);
  return a1;
}

/*
 * XREFs of itrp_MDAP @ 0x1C02D53B0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_MDAP(__int64 a1, char a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v6; // rcx
  int v7; // ebx
  _WORD *v8; // r8
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // ax
  int v13; // ebp
  unsigned int v14; // esi
  __int16 v15; // ax
  int v16; // ebx

  v2 = qword_1C032CA00;
  v3 = LocalGS;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v6 = qword_1C032C9E8, !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2)) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v7 = 4;
  qword_1C032C9E8 -= 4LL;
  v8 = *(_WORD **)(qword_1C032CA00 + 344);
  v9 = *(int *)(v6 - 4);
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
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( (int)v9 >= (unsigned __int16)v8[8] )
      goto LABEL_14;
    v14 = 0;
    if ( (int)v9 < 0 )
      goto LABEL_14;
    v7 = 0;
  }
  else
  {
    if ( (int)v9 >= *(_DWORD *)(qword_1C032CA00 + 440) )
      goto LABEL_14;
    v14 = 0;
    if ( (int)v9 < 0 )
      goto LABEL_14;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v15 = *(_WORD *)(v3 + 80), v15 >= 1)
    && v15 <= v13
    && (int)v9 >= v7 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v15 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  LODWORD(qword_1C032CA10) = v9;
  HIDWORD(qword_1C032CA10) = v9;
  if ( (a2 & 1) != 0 )
  {
    v16 = InvokeProject(dword_1C032CA30, *(_DWORD *)(*(_QWORD *)v3 + 4 * v9), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v9));
    v14 = InvokeRoundValue(*(_DWORD *)(v2 + 128), v16, *(_DWORD *)(qword_1C032CA00 + 32)) - v16;
  }
  InvokeMovePoint(dword_1C032CA2C, (_QWORD *)v3, v9, v14);
  return a1;
}

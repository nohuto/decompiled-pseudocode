/*
 * XREFs of itrp_MDAP @ 0x1C02CF180
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02C94DC (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_MDAP(__int64 a1, char a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v6; // rcx
  _WORD *v7; // r8
  __int64 v8; // rdi
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  int v12; // ebp
  unsigned int v13; // esi
  int v14; // ebx
  __int16 v15; // ax
  int v16; // ebx

  v2 = qword_1C0327C90;
  v3 = LocalGS;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v6 = qword_1C0327C78, !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2)) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v7 = *(_WORD **)(qword_1C0327C90 + 344);
  v8 = *(int *)(v6 - 4);
  v9 = v7[4];
  v10 = v7[6];
  v11 = v10;
  if ( v9 > v10 )
    v11 = v7[4];
  if ( v11 <= 1u )
  {
    v12 = 1;
  }
  else
  {
    if ( v9 > v10 )
      v10 = v7[4];
    v12 = v10;
  }
  if ( qword_1C0327C88 == LocalGS )
  {
    if ( (int)v8 >= (unsigned __int16)v7[8] )
      goto LABEL_14;
    v13 = 0;
    if ( (int)v8 < 0 )
      goto LABEL_14;
    v14 = 1;
  }
  else
  {
    if ( (int)v8 >= *(_DWORD *)(qword_1C0327C90 + 440) )
      goto LABEL_14;
    v13 = 0;
    if ( (int)v8 < 0 )
      goto LABEL_14;
    v14 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v15 = *(_WORD *)(v3 + 80), v15 >= 1)
    && v15 <= v12
    && (int)v8 >= v14 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v15 - 1)) )
  {
LABEL_14:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  LODWORD(qword_1C0327CA0) = v8;
  HIDWORD(qword_1C0327CA0) = v8;
  if ( (a2 & 1) != 0 )
  {
    v16 = InvokeProject(dword_1C0327CC0, *(_DWORD *)(*(_QWORD *)v3 + 4 * v8), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v8));
    v13 = InvokeRoundValue(*(_DWORD *)(v2 + 128), v16, *(_DWORD *)(qword_1C0327C90 + 32)) - v16;
  }
  InvokeMovePoint(dword_1C0327CBC, (_QWORD *)v3, v8, v13);
  return a1;
}

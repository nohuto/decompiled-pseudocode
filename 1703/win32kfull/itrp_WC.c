/*
 * XREFs of itrp_WC @ 0x1C02DAD20
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 */

__int64 __fastcall itrp_WC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // esi
  int v5; // r15d
  _WORD *v6; // r9
  __int64 v7; // rdi
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  int v11; // ebp
  __int16 v12; // ax
  int v13; // eax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v2 = qword_1C032C9E8, (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v3 = qword_1C032C9D0;
  v4 = 4;
  qword_1C032C9E8 -= 4LL;
  v5 = *(_DWORD *)(v2 - 4);
  qword_1C032C9E8 = v2 - 8;
  v6 = *(_WORD **)(qword_1C032CA00 + 344);
  v7 = *(int *)(v2 - 8);
  v8 = v6[4];
  v9 = v6[6];
  v10 = v9;
  if ( v8 > v9 )
    v10 = v6[4];
  if ( v10 <= 1u )
  {
    v11 = 1;
  }
  else
  {
    if ( v8 > v9 )
      v9 = v6[4];
    v11 = v9;
  }
  if ( qword_1C032C9F8 == qword_1C032C9D0 )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_14;
    v4 = 0;
  }
  else if ( (int)v7 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v7 < 0 )
  {
    goto LABEL_14;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9D0)
    || (v12 = *(_WORD *)(v3 + 80), v12 >= 1)
    && v12 <= v11
    && (int)v7 >= v4 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v12 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  v13 = InvokeProject(dword_1C032CA30, *(_DWORD *)(*(_QWORD *)v3 + 4 * v7), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v7));
  InvokeMovePoint(dword_1C032CA2C, (_QWORD *)v3, v7, v5 - v13);
  if ( v3 == qword_1C032C9F8 )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v7) = *(_DWORD *)(*(_QWORD *)v3 + 4 * v7);
    *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v7) = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v7);
  }
  return a1;
}

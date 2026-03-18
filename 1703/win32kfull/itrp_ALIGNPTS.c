/*
 * XREFs of itrp_ALIGNPTS @ 0x1C02CFD50
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 */

__int64 __fastcall itrp_ALIGNPTS(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // r14
  _WORD *v4; // r15
  __int64 v5; // rbp
  unsigned __int16 v6; // si
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  __int64 v10; // r13
  int v11; // r12d
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // r12d
  __int64 v15; // rsi
  int v16; // ebx
  __int16 v17; // ax
  signed int v18; // edi
  signed int v19; // eax
  int v22; // [rsp+68h] [rbp+10h]
  __int64 v23; // [rsp+70h] [rbp+18h]

  v1 = qword_1C032CA00;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v2 = qword_1C032C9E8, (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v3 = *(int *)(v2 - 4);
  qword_1C032C9E8 = v2 - 8;
  v4 = *(_WORD **)(qword_1C032CA00 + 344);
  v5 = *(int *)(v2 - 8);
  v6 = v4[4];
  v7 = v4[6];
  v8 = v7;
  if ( v6 > v7 )
    v8 = v4[4];
  if ( v8 <= 1u )
  {
    v22 = 1;
  }
  else
  {
    v9 = v4[6];
    if ( v6 > v7 )
      v9 = v4[4];
    v22 = v9;
  }
  v10 = qword_1C032C9C8;
  v23 = qword_1C032C9F8;
  if ( qword_1C032C9F8 == qword_1C032C9C8 )
  {
    if ( (int)v3 >= (unsigned __int16)v4[8] || (int)v3 < 0 )
      goto LABEL_14;
    v11 = 0;
  }
  else
  {
    if ( (int)v3 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v3 < 0 )
      goto LABEL_14;
    v11 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9C8) )
    goto LABEL_14;
  v12 = *(_WORD *)(v10 + 80);
  if ( v12 >= 1 && v12 <= v22 && (int)v3 >= v11 + *(__int16 *)(*(_QWORD *)(v10 + 64) + 2LL * (v12 - 1)) + 1 )
    goto LABEL_14;
  v13 = v7;
  if ( v6 > v7 )
    v13 = v6;
  if ( v13 <= 1u )
  {
    v14 = 1;
  }
  else
  {
    if ( v6 > v7 )
      v7 = v6;
    v14 = v7;
  }
  v15 = LocalGS;
  if ( v23 == LocalGS )
  {
    if ( (int)v5 >= (unsigned __int16)v4[8] || (int)v5 < 0 )
      goto LABEL_14;
    v16 = 0;
  }
  else
  {
    if ( (int)v5 >= *(_DWORD *)(v1 + 440) || (int)v5 < 0 )
      goto LABEL_14;
    v16 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v17 = *(_WORD *)(v15 + 80), v17 >= 1)
    && v17 <= v14
    && (int)v5 >= v16 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2LL * (v17 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  v18 = *(_DWORD *)(*(_QWORD *)v10 + 4 * v3) - *(_DWORD *)(*(_QWORD *)v15 + 4 * v5);
  if ( dword_1C032CA30 != 3 )
  {
    if ( dword_1C032CA30 == 4 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 4 * v3) - *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v5);
    }
    else
    {
      v19 = InvokeProject(
              dword_1C032CA30,
              v18,
              *(_DWORD *)(*(_QWORD *)(v10 + 8) + 4 * v3) - *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v5));
      v15 = LocalGS;
      v18 = v19;
    }
  }
  InvokeMovePoint(dword_1C032CA2C, (_QWORD *)v15, v5, v18 >> 1);
  InvokeMovePoint(dword_1C032CA2C, (_QWORD *)qword_1C032C9C8, v3, (v18 >> 1) - v18);
  return a1;
}

/*
 * XREFs of itrp_SFVTL @ 0x1C02D8860
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C02D09F8 (itrp_ComputeAndCheck_PF_Proj.c)
 *     itrp_Normalize @ 0x1C02D7070 (itrp_Normalize.c)
 */

__int64 __fastcall itrp_SFVTL(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  int v4; // r15d
  __int64 v5; // r12
  _WORD *v6; // r13
  __int64 v7; // r14
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // di
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // ebp
  __int64 v15; // rdi
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]

  v2 = qword_1C032CA00;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v3 = qword_1C032C9E8, (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v4 = 4;
  qword_1C032C9E8 -= 4LL;
  v5 = *(int *)(v3 - 4);
  qword_1C032C9E8 = v3 - 8;
  v6 = *(_WORD **)(qword_1C032CA00 + 344);
  v7 = *(int *)(v3 - 8);
  v8 = v6[4];
  v9 = v6[6];
  v10 = v9;
  if ( v8 > v9 )
    v10 = v6[4];
  if ( v10 <= 1u )
  {
    v23 = 1;
  }
  else
  {
    v11 = v6[6];
    if ( v8 > v9 )
      v11 = v6[4];
    v23 = v11;
  }
  v20 = qword_1C032C9F8;
  v19 = qword_1C032C9D0;
  if ( qword_1C032C9F8 == qword_1C032C9D0 )
  {
    if ( (int)v5 >= (unsigned __int16)v6[8] || (int)v5 < 0 )
      goto LABEL_14;
    v24 = 0;
  }
  else
  {
    if ( (int)v5 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v5 < 0 )
      goto LABEL_14;
    v24 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9D0) )
    goto LABEL_14;
  v12 = *(_WORD *)(v19 + 80);
  if ( v12 >= 1 && v12 <= v23 && (int)v5 >= *(__int16 *)(*(_QWORD *)(v19 + 64) + 2LL * (v12 - 1)) + v24 + 1 )
    goto LABEL_14;
  v13 = v9;
  if ( v8 > v9 )
    v13 = v8;
  if ( v13 <= 1u )
  {
    v14 = 1;
  }
  else
  {
    if ( v8 > v9 )
      v9 = v8;
    v14 = v9;
  }
  v15 = qword_1C032C9C8;
  if ( v20 == qword_1C032C9C8 )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_14;
    v4 = 0;
  }
  else if ( (int)v7 >= *(_DWORD *)(v2 + 440) || (int)v7 < 0 )
  {
    goto LABEL_14;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9C8)
    || (v16 = *(_WORD *)(v15 + 80), v16 >= 1)
    && v16 <= v14
    && (int)v7 >= v4 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2LL * (v16 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  itrp_Normalize(
    *(_DWORD *)(*(_QWORD *)v15 + 4 * v7) - *(_DWORD *)(*(_QWORD *)v19 + 4 * v5),
    *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v19 + 8) + 4 * v5),
    (__int64)&dword_1C032C9DC);
  if ( (a2 & 1) != 0 )
  {
    v17 = dword_1C032C9DC;
    LOWORD(dword_1C032C9DC) = -HIWORD(dword_1C032C9DC);
    HIWORD(dword_1C032C9DC) = v17;
  }
  itrp_ComputeAndCheck_PF_Proj();
  result = a1;
  dword_1C032CA2C = 1;
  word_1C032CA4C = 0;
  return result;
}

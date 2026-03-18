/*
 * XREFs of itrp_SFVTL @ 0x1C02D2560
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C02CA748 (itrp_ComputeAndCheck_PF_Proj.c)
 *     itrp_Normalize @ 0x1C02D0E30 (itrp_Normalize.c)
 */

__int64 __fastcall itrp_SFVTL(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r15
  _WORD *v5; // r13
  __int64 v6; // r14
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  __int64 v11; // r12
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // ebp
  __int64 v15; // rbx
  int v16; // esi
  __int16 v17; // ax
  __int16 v18; // ax
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]

  v2 = qword_1C0327C90;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v3 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v4 = *(int *)(v3 - 4);
  qword_1C0327C78 = v3 - 8;
  v5 = *(_WORD **)(qword_1C0327C90 + 344);
  v6 = *(int *)(v3 - 8);
  v7 = v5[4];
  v8 = v5[6];
  v9 = v8;
  if ( v7 > v8 )
    v9 = v5[4];
  if ( v9 <= 1u )
  {
    v23 = 1;
  }
  else
  {
    v10 = v5[6];
    if ( v7 > v8 )
      v10 = v5[4];
    v23 = v10;
  }
  v11 = qword_1C0327C60;
  v20 = qword_1C0327C88;
  if ( qword_1C0327C88 == qword_1C0327C60 )
  {
    if ( (int)v4 >= (unsigned __int16)v5[8] || (int)v4 < 0 )
      goto LABEL_14;
    v24 = 1;
  }
  else
  {
    if ( (int)v4 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v4 < 0 )
      goto LABEL_14;
    v24 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C60) )
    goto LABEL_14;
  v12 = *(_WORD *)(v11 + 80);
  if ( v12 >= 1 && v12 <= v23 && (int)v4 >= v24 + *(__int16 *)(*(_QWORD *)(v11 + 64) + 2LL * (v12 - 1)) )
    goto LABEL_14;
  v13 = v8;
  if ( v7 > v8 )
    v13 = v7;
  if ( v13 <= 1u )
  {
    v14 = 1;
  }
  else
  {
    if ( v7 > v8 )
      v8 = v7;
    v14 = v8;
  }
  v15 = qword_1C0327C58;
  if ( v20 == qword_1C0327C58 )
  {
    if ( (int)v6 >= (unsigned __int16)v5[8] || (int)v6 < 0 )
      goto LABEL_14;
    v16 = 1;
  }
  else
  {
    if ( (int)v6 >= *(_DWORD *)(v2 + 440) || (int)v6 < 0 )
      goto LABEL_14;
    v16 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C58)
    || (v17 = *(_WORD *)(v15 + 80), v17 >= 1)
    && v17 <= v14
    && (int)v6 >= v16 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2LL * (v17 - 1)) )
  {
LABEL_14:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  itrp_Normalize(
    *(_DWORD *)(*(_QWORD *)v15 + 4 * v6) - *(_DWORD *)(*(_QWORD *)v11 + 4 * v4),
    *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v11 + 8) + 4 * v4),
    (__int64)&dword_1C0327C6C);
  if ( (a2 & 1) != 0 )
  {
    v18 = dword_1C0327C6C;
    LOWORD(dword_1C0327C6C) = -HIWORD(dword_1C0327C6C);
    HIWORD(dword_1C0327C6C) = v18;
  }
  itrp_ComputeAndCheck_PF_Proj();
  result = a1;
  dword_1C0327CBC = 1;
  word_1C0327CDC = 0;
  return result;
}

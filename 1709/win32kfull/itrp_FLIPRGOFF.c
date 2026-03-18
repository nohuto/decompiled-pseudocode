/*
 * XREFs of itrp_FLIPRGOFF @ 0x1C02CBC90
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPRGOFF(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  __int64 v3; // rsi
  int *v4; // rdi
  _WORD *v5; // r8
  int v6; // ebx
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  int v10; // r13d
  int v11; // r12d
  int v12; // r15d
  __int16 v13; // ax
  _WORD *v14; // r8
  __int64 v15; // rdi
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  int v19; // r15d
  __int16 v20; // ax
  _BYTE *v21; // rsi
  int i; // ebx
  __int64 v25; // [rsp+70h] [rbp+18h]

  v1 = qword_1C0327C90;
  v2 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2 )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  v4 = (int *)(qword_1C0327C78 - 4);
  qword_1C0327C78 = (__int64)v4;
  v5 = *(_WORD **)(qword_1C0327C90 + 344);
  v6 = *v4;
  v7 = v5[4];
  v8 = v5[6];
  v9 = v8;
  if ( v7 > v8 )
    v9 = v5[4];
  if ( v9 <= 1u )
  {
    v10 = 1;
  }
  else
  {
    if ( v7 > v8 )
      v8 = v5[4];
    v10 = v8;
  }
  v11 = 5;
  v25 = qword_1C0327C88;
  if ( qword_1C0327C88 == LocalGS )
  {
    if ( v6 >= (unsigned __int16)v5[8] || v6 < 0 )
      goto LABEL_14;
    v12 = 1;
  }
  else
  {
    if ( v6 >= *(_DWORD *)(qword_1C0327C90 + 440) || v6 < 0 )
      goto LABEL_14;
    v12 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v13 = *(_WORD *)(v2 + 80);
  if ( v13 >= 1 && v13 <= v10 && v6 >= v12 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v13 - 1)) )
    goto LABEL_14;
  qword_1C0327C78 = (__int64)(v4 - 1);
  v14 = *(_WORD **)(v1 + 344);
  v15 = *(v4 - 1);
  v16 = v14[4];
  v17 = v14[6];
  v18 = v17;
  if ( v16 > v17 )
    v18 = v14[4];
  if ( v18 <= 1u )
  {
    v19 = 1;
  }
  else
  {
    if ( v16 > v17 )
      v17 = v14[4];
    v19 = v17;
  }
  if ( v25 == v2 )
  {
    if ( (int)v15 >= (unsigned __int16)v14[8] || (int)v15 < 0 )
      goto LABEL_14;
    v11 = 1;
  }
  else if ( (int)v15 >= *(_DWORD *)(v1 + 440) || (int)v15 < 0 )
  {
    goto LABEL_14;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
    || (v20 = *(_WORD *)(v2 + 80), v20 >= 1)
    && v20 <= v19
    && (int)v15 >= v11 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v20 - 1)) )
  {
LABEL_14:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  v21 = (_BYTE *)(v15 + v3);
  for ( i = v6 - v15; i >= 0; --i )
    *v21++ &= ~1u;
  return a1;
}

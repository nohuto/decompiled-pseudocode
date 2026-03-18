/*
 * XREFs of itrp_FLIPRGOFF @ 0x1C02D1ED0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPRGOFF(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  __int64 v3; // rsi
  int v4; // r15d
  int *v5; // rdi
  _WORD *v6; // r8
  int v7; // ebx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  int v11; // r13d
  int v12; // r12d
  __int16 v13; // ax
  _WORD *v14; // r8
  __int64 v15; // rdi
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  int v19; // r12d
  __int16 v20; // ax
  _BYTE *v21; // rsi
  int i; // ebx
  __int64 v25; // [rsp+70h] [rbp+18h]

  v1 = qword_1C032CA00;
  v2 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2 )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v4 = 4;
  v5 = (int *)(qword_1C032C9E8 - 4);
  qword_1C032C9E8 = (__int64)v5;
  v6 = *(_WORD **)(qword_1C032CA00 + 344);
  v7 = *v5;
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
  v25 = qword_1C032C9F8;
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( v7 >= (unsigned __int16)v6[8] || v7 < 0 )
      goto LABEL_14;
    v12 = 0;
  }
  else
  {
    if ( v7 >= *(_DWORD *)(qword_1C032CA00 + 440) || v7 < 0 )
      goto LABEL_14;
    v12 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v13 = *(_WORD *)(v2 + 80);
  if ( v13 >= 1 && v13 <= v11 && v7 >= v12 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v13 - 1)) + 1 )
    goto LABEL_14;
  qword_1C032C9E8 = (__int64)(v5 - 1);
  v14 = *(_WORD **)(v1 + 344);
  v15 = *(v5 - 1);
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
    v4 = 0;
  }
  else if ( (int)v15 >= *(_DWORD *)(v1 + 440) || (int)v15 < 0 )
  {
    goto LABEL_14;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
    || (v20 = *(_WORD *)(v2 + 80), v20 >= 1)
    && v20 <= v19
    && (int)v15 >= v4 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v20 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  v21 = (_BYTE *)(v15 + v3);
  for ( i = v7 - v15; i >= 0; --i )
    *v21++ &= ~1u;
  return a1;
}

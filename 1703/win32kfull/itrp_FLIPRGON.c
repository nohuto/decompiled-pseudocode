/*
 * XREFs of itrp_FLIPRGON @ 0x1C02D2110
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPRGON(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 v3; // rsi
  int v4; // ebx
  _WORD *v5; // rcx
  unsigned __int16 v6; // r15
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  __int16 v10; // r12
  __int64 v11; // rdi
  unsigned __int16 v12; // ax
  int v13; // r15d
  int v14; // ebp
  _BYTE *v15; // rsi
  int i; // ebx
  __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-58h]
  _WORD *v19; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+88h] [rbp+10h]
  int v22; // [rsp+90h] [rbp+18h]
  __int64 v23; // [rsp+98h] [rbp+20h]
  int *v24; // [rsp+98h] [rbp+20h]

  v1 = qword_1C032CA00;
  v2 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2 )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v23 = qword_1C032C9E8 - 4;
  v4 = *(_DWORD *)(qword_1C032C9E8 - 4);
  v5 = *(_WORD **)(qword_1C032CA00 + 344);
  v19 = v5;
  v6 = v5[4];
  v7 = v5[6];
  v8 = v7;
  if ( v6 > v7 )
    v8 = v5[4];
  if ( v8 <= 1u )
  {
    v21 = 1;
  }
  else
  {
    v9 = v5[6];
    if ( v6 > v7 )
      v9 = v5[4];
    v21 = v9;
  }
  v18 = qword_1C032C9F8;
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( v4 >= (unsigned __int16)v5[8] || v4 < 0 )
      goto LABEL_14;
    v22 = 0;
  }
  else
  {
    if ( v4 >= *(_DWORD *)(qword_1C032CA00 + 440) || v4 < 0 )
      goto LABEL_14;
    v22 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v10 = *(_WORD *)(v2 + 80);
  if ( v10 >= 1 && v10 <= v21 && v4 >= *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v10 - 1)) + v22 + 1 )
    goto LABEL_14;
  v24 = (int *)(v23 - 4);
  v11 = *v24;
  v12 = v7;
  if ( v6 > v7 )
    v12 = v6;
  if ( v12 <= 1u )
  {
    v13 = 1;
  }
  else
  {
    if ( v6 > v7 )
      v7 = v6;
    v13 = v7;
  }
  if ( v18 == v2 )
  {
    if ( (int)v11 >= (unsigned __int16)v19[8] || (int)v11 < 0 )
      goto LABEL_14;
    v14 = 0;
  }
  else
  {
    if ( (int)v11 >= *(_DWORD *)(v1 + 440) || (int)v11 < 0 )
      goto LABEL_14;
    v14 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
    || v10 >= 1 && v10 <= v13 && (int)v11 >= v14 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v10 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  v15 = (_BYTE *)(v11 + v3);
  for ( i = v4 - v11; i >= 0; --i )
    *v15++ |= 1u;
  result = a1;
  qword_1C032C9E8 = (__int64)v24;
  return result;
}

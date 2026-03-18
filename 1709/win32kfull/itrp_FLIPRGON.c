/*
 * XREFs of itrp_FLIPRGON @ 0x1C02CBED0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPRGON(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 v3; // rsi
  int v4; // ebx
  _WORD *v5; // rcx
  unsigned __int16 v6; // r15
  int v7; // ebp
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v10; // edi
  __int16 v11; // r12
  __int64 v12; // rdi
  unsigned __int16 v13; // ax
  int v14; // r14d
  _BYTE *v15; // rsi
  int i; // ebx
  __int64 result; // rax
  _WORD *v18; // [rsp+20h] [rbp-58h]
  int v20; // [rsp+88h] [rbp+10h]
  __int64 v21; // [rsp+90h] [rbp+18h]
  int *v22; // [rsp+90h] [rbp+18h]
  __int64 v23; // [rsp+98h] [rbp+20h]

  v1 = qword_1C0327C90;
  v2 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2 )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  v21 = qword_1C0327C78 - 4;
  v4 = *(_DWORD *)(qword_1C0327C78 - 4);
  v5 = *(_WORD **)(qword_1C0327C90 + 344);
  v18 = v5;
  v6 = v5[4];
  LOWORD(v7) = v5[6];
  v8 = v7;
  if ( v6 > (unsigned __int16)v7 )
    v8 = v5[4];
  if ( v8 <= 1u )
  {
    v20 = 1;
  }
  else
  {
    v9 = v5[6];
    if ( v6 > (unsigned __int16)v7 )
      v9 = v5[4];
    v20 = v9;
  }
  v23 = qword_1C0327C88;
  if ( qword_1C0327C88 == LocalGS )
  {
    if ( v4 >= (unsigned __int16)v5[8] || v4 < 0 )
      goto LABEL_14;
    v10 = 1;
  }
  else
  {
    if ( v4 >= *(_DWORD *)(qword_1C0327C90 + 440) || v4 < 0 )
      goto LABEL_14;
    v10 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v11 = *(_WORD *)(v2 + 80);
  if ( v11 >= 1 && v11 <= v20 && v4 >= v10 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) )
    goto LABEL_14;
  v22 = (int *)(v21 - 4);
  v12 = *v22;
  v13 = v7;
  if ( v6 > (unsigned __int16)v7 )
    v13 = v6;
  if ( v13 <= 1u )
  {
    v7 = 1;
  }
  else
  {
    if ( v6 > (unsigned __int16)v7 )
      LOWORD(v7) = v6;
    v7 = (unsigned __int16)v7;
  }
  if ( v23 == v2 )
  {
    if ( (int)v12 >= (unsigned __int16)v18[8] || (int)v12 < 0 )
      goto LABEL_14;
    v14 = 1;
  }
  else
  {
    if ( (int)v12 >= *(_DWORD *)(v1 + 440) || (int)v12 < 0 )
      goto LABEL_14;
    v14 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
    || v11 >= 1 && v11 <= v7 && (int)v12 >= v14 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) )
  {
LABEL_14:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  v15 = (_BYTE *)(v12 + v3);
  for ( i = v4 - v12; i >= 0; --i )
    *v15++ |= 1u;
  result = a1;
  qword_1C0327C78 = (__int64)v22;
  return result;
}

/*
 * XREFs of itrp_ALIGNPTS @ 0x1C02C9AD0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
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
  int v10; // r13d
  int v11; // r12d
  __int16 v12; // ax
  bool v13; // cc
  _QWORD *v14; // r13
  unsigned __int16 v15; // ax
  int v16; // esi
  __int64 v17; // rbx
  int v18; // edi
  __int16 v19; // ax
  signed int v20; // edi
  __int64 v23; // [rsp+70h] [rbp+18h]
  __int64 v24; // [rsp+78h] [rbp+20h]

  v1 = qword_1C0327C90;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v2 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v3 = *(int *)(v2 - 4);
  qword_1C0327C78 = v2 - 8;
  v4 = *(_WORD **)(qword_1C0327C90 + 344);
  v5 = *(int *)(v2 - 8);
  v6 = v4[4];
  v7 = v4[6];
  v8 = v7;
  if ( v6 > v7 )
    v8 = v4[4];
  if ( v8 <= 1u )
  {
    v10 = 1;
  }
  else
  {
    v9 = v4[6];
    if ( v6 > v7 )
      v9 = v4[4];
    v10 = v9;
  }
  v24 = qword_1C0327C88;
  v23 = qword_1C0327C58;
  if ( qword_1C0327C88 == qword_1C0327C58 )
  {
    if ( (int)v3 >= (unsigned __int16)v4[8] || (int)v3 < 0 )
      goto LABEL_21;
    v11 = 1;
  }
  else
  {
    if ( (int)v3 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v3 < 0 )
      goto LABEL_21;
    v11 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C58) )
    goto LABEL_21;
  v12 = *(_WORD *)(v23 + 80);
  if ( v12 < 1 )
  {
    v14 = (_QWORD *)v23;
  }
  else
  {
    v13 = v12 <= v10;
    v14 = (_QWORD *)v23;
    if ( v13 && (int)v3 >= v11 + *(__int16 *)(*(_QWORD *)(v23 + 64) + 2LL * (v12 - 1)) )
      goto LABEL_21;
  }
  v15 = v7;
  if ( v6 > v7 )
    v15 = v6;
  if ( v15 <= 1u )
  {
    v16 = 1;
  }
  else
  {
    if ( v6 > v7 )
      v7 = v6;
    v16 = v7;
  }
  v17 = LocalGS;
  if ( v24 == LocalGS )
  {
    if ( (int)v5 >= (unsigned __int16)v4[8] || (int)v5 < 0 )
      goto LABEL_21;
    v18 = 1;
  }
  else
  {
    if ( (int)v5 >= *(_DWORD *)(v1 + 440) || (int)v5 < 0 )
      goto LABEL_21;
    v18 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v19 = *(_WORD *)(v17 + 80), v19 >= 1)
    && v19 <= v16
    && (int)v5 >= v18 + *(__int16 *)(*(_QWORD *)(v17 + 64) + 2LL * (v19 - 1)) )
  {
LABEL_21:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  v20 = *(_DWORD *)(*v14 + 4 * v3) - *(_DWORD *)(*(_QWORD *)v17 + 4 * v5);
  if ( dword_1C0327CC0 != 3 )
  {
    if ( dword_1C0327CC0 == 4 )
      v20 = *(_DWORD *)(v14[1] + 4 * v3) - *(_DWORD *)(*(_QWORD *)(v17 + 8) + 4 * v5);
    else
      v20 = InvokeProject(
              dword_1C0327CC0,
              v20,
              *(_DWORD *)(v14[1] + 4 * v3) - *(_DWORD *)(*(_QWORD *)(v17 + 8) + 4 * v5));
  }
  InvokeMovePoint(dword_1C0327CBC, (_QWORD *)LocalGS, v5, v20 >> 1);
  InvokeMovePoint(dword_1C0327CBC, (_QWORD *)qword_1C0327C58, v3, (v20 >> 1) - v20);
  return a1;
}

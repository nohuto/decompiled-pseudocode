/*
 * XREFs of itrp_WC @ 0x1C02D49E0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 */

__int64 __fastcall itrp_WC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // r15d
  _WORD *v5; // r9
  __int64 v6; // rdi
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  int v10; // ebp
  int v11; // esi
  __int16 v12; // ax
  int v13; // eax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v2 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  v3 = qword_1C0327C60;
  qword_1C0327C78 -= 4LL;
  v4 = *(_DWORD *)(v2 - 4);
  qword_1C0327C78 = v2 - 8;
  v5 = *(_WORD **)(qword_1C0327C90 + 344);
  v6 = *(int *)(v2 - 8);
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
  if ( qword_1C0327C88 == qword_1C0327C60 )
  {
    if ( (int)v6 >= (unsigned __int16)v5[8] || (int)v6 < 0 )
      goto LABEL_14;
    v11 = 1;
  }
  else
  {
    if ( (int)v6 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v6 < 0 )
      goto LABEL_14;
    v11 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C60)
    || (v12 = *(_WORD *)(v3 + 80), v12 >= 1)
    && v12 <= v10
    && (int)v6 >= v11 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v12 - 1)) )
  {
LABEL_14:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  v13 = InvokeProject(dword_1C0327CC0, *(_DWORD *)(*(_QWORD *)v3 + 4 * v6), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v6));
  InvokeMovePoint(dword_1C0327CBC, (_QWORD *)v3, v6, v4 - v13);
  if ( v3 == qword_1C0327C88 )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v6) = *(_DWORD *)(*(_QWORD *)v3 + 4 * v6);
    *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v6) = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v6);
  }
  return a1;
}

/*
 * XREFs of itrp_ALIGNRP @ 0x1C02C9D60
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02C8B60 (AddDistance.c)
 *     AddProportion @ 0x1C02C8CB0 (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InterAlign @ 0x1C02C92A4 (InterAlign.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 */

__int64 __fastcall itrp_ALIGNRP(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // r15
  _WORD *v4; // r9
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  int v8; // r12d
  __int64 v9; // rsi
  int v10; // edi
  int v11; // ebp
  __int16 v12; // ax
  __int64 v13; // rsi
  _WORD *v14; // r8
  __int64 v15; // rdi
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  int v19; // r12d
  __int64 v20; // r14
  int v21; // ebp
  __int16 v22; // ax
  __int64 v23; // rcx
  int v24; // r9d
  int v25; // r11d
  int v26; // eax
  int v28; // [rsp+80h] [rbp+18h]
  int v29; // [rsp+88h] [rbp+20h]

  v1 = qword_1C0327C90;
  v3 = qword_1C0327C58;
  v4 = *(_WORD **)(qword_1C0327C90 + 344);
  v5 = v4[4];
  v6 = v4[6];
  v7 = v6;
  if ( v5 > v6 )
    v7 = v4[4];
  if ( v7 <= 1u )
  {
    v8 = 1;
  }
  else
  {
    if ( v5 > v6 )
      v6 = v4[4];
    v8 = v6;
  }
  v9 = LocalGS;
  v10 = qword_1C0327CA0;
  if ( qword_1C0327C88 == LocalGS )
  {
    if ( (int)qword_1C0327CA0 >= (unsigned __int16)v4[8] || (int)qword_1C0327CA0 < 0 )
      goto LABEL_52;
    v11 = 1;
  }
  else
  {
    if ( (int)qword_1C0327CA0 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)qword_1C0327CA0 < 0 )
      goto LABEL_52;
    v11 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v12 = *(_WORD *)(v9 + 80), v12 >= 1)
    && v12 <= v8
    && v10 >= v11 + *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v12 - 1)) )
  {
LABEL_52:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  v29 = *(_DWORD *)(*(_QWORD *)v9 + 4LL * v10);
  v28 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 4LL * v10);
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || dword_1C0327CB0 + 1LL > (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)v1) >> 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  for ( ; dword_1C0327CB0 >= 0; --dword_1C0327CB0 )
  {
    v13 = qword_1C0327C90;
    qword_1C0327C78 -= 4LL;
    v14 = *(_WORD **)(qword_1C0327C90 + 344);
    v15 = *(int *)qword_1C0327C78;
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
    v20 = qword_1C0327C88;
    if ( qword_1C0327C88 == v3 )
    {
      if ( (int)v15 >= (unsigned __int16)v14[8] || (int)v15 < 0 )
        goto LABEL_52;
      v21 = 1;
    }
    else
    {
      if ( (int)v15 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v15 < 0 )
        goto LABEL_52;
      v21 = 5;
    }
    if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v3) )
      goto LABEL_52;
    v22 = *(_WORD *)(v3 + 80);
    v23 = 1LL;
    if ( v22 >= 1 && v22 <= v19 )
    {
      v23 = v22 - 1;
      if ( (int)v15 >= v21 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2 * v23) )
        goto LABEL_52;
    }
    if ( v3 != v20 && *(_BYTE *)(v13 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v13 + 452) & 2) != 0 )
    {
      if ( word_1C0327D06 == -1
        || (v23 = (unsigned __int16)word_1C0327D08, word_1C0327D08 == -1)
        || !InterAlign(qword_1C0327C58, word_1C0327D06, v15, word_1C0327D08) )
      {
        AddDistance(v23, v3, qword_1C0327CA0, v15, 3);
      }
      else
      {
        AddProportion(v23, v3, v25, v15, v24);
      }
    }
    v26 = InvokeProject(
            dword_1C0327CC0,
            *(_DWORD *)(*(_QWORD *)v3 + 4 * v15) - v29,
            *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v15) - v28);
    InvokeMovePoint(dword_1C0327CBC, (_QWORD *)v3, v15, -v26);
  }
  dword_1C0327CB0 = 0;
  return a1;
}

/*
 * XREFs of itrp_MSIRP @ 0x1C02D05B0
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02C8B60 (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     DoubleCheckLinkColor @ 0x1C02C8F20 (DoubleCheckLinkColor.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 */

__int64 __fastcall itrp_MSIRP(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rsi
  _WORD *v9; // rcx
  unsigned __int16 v10; // r12
  unsigned __int16 v11; // bp
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  __int16 v14; // ax
  unsigned __int16 v15; // ax
  int v16; // ebp
  __int16 v17; // ax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ebp
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  int v24; // eax
  int v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  _WORD *v28; // [rsp+40h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp+18h]
  int v32; // [rsp+B0h] [rbp+18h]
  int v33; // [rsp+B8h] [rbp+20h]

  v2 = qword_1C0327C90;
  v3 = LocalGS;
  v4 = qword_1C0327C58;
  v5 = (int)qword_1C0327CA0;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v6 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v7 = *(_DWORD *)(v6 - 4);
  qword_1C0327C78 = v6 - 8;
  v26 = v7;
  v8 = *(int *)(v6 - 8);
  v9 = *(_WORD **)(qword_1C0327C90 + 344);
  v28 = v9;
  v10 = v9[4];
  v11 = v9[6];
  v12 = v11;
  if ( v10 > v11 )
    v12 = v9[4];
  if ( v12 <= 1u )
  {
    v31 = 1;
  }
  else
  {
    v13 = v9[6];
    if ( v10 > v11 )
      v13 = v9[4];
    v31 = v13;
  }
  v27 = qword_1C0327C88;
  if ( qword_1C0327C88 == LocalGS )
  {
    if ( (int)qword_1C0327CA0 >= (unsigned __int16)v9[8] || (int)qword_1C0327CA0 < 0 )
      goto LABEL_14;
    v33 = 1;
  }
  else
  {
    if ( (int)qword_1C0327CA0 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)qword_1C0327CA0 < 0 )
      goto LABEL_14;
    v33 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v14 = *(_WORD *)(v3 + 80);
  if ( v14 >= 1 && v14 <= v31 && (int)v5 >= v33 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v14 - 1)) )
    goto LABEL_14;
  v15 = v11;
  if ( v10 > v11 )
    v15 = v10;
  if ( v15 <= 1u )
  {
    v32 = 1;
  }
  else
  {
    if ( v10 > v11 )
      v11 = v10;
    v32 = v11;
  }
  if ( v27 == v4 )
  {
    if ( (int)v8 >= (unsigned __int16)v28[8] || (int)v8 < 0 )
      goto LABEL_14;
    v16 = 1;
  }
  else
  {
    if ( (int)v8 >= *(_DWORD *)(v2 + 440) || (int)v8 < 0 )
      goto LABEL_14;
    v16 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v17 = *(_WORD *)(v4 + 80), v17 >= 1)
    && v17 <= v32
    && (int)v8 >= v16 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v17 - 1)) )
  {
LABEL_14:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  if ( v4 == v27 )
    goto LABEL_46;
  if ( *(_BYTE *)(v2 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v18 = DoubleCheckLinkColor((_QWORD *)v4, v5, v8, 1u);
    AddDistance(v19, v4, v5, v8, v18);
  }
  if ( v4 == qword_1C0327C88 )
  {
LABEL_46:
    v20 = v26;
    *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v8) = ((unsigned __int64)(v26 * (__int64)(__int16)dword_1C0327C68) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v5)
                                               + ((((unsigned int)(v26 * (__int16)dword_1C0327C68) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v8) = ((unsigned __int64)(v26 * (__int64)SHIWORD(dword_1C0327C68)) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v5)
                                               + ((((unsigned int)(v26 * SHIWORD(dword_1C0327C68)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)v4 + 4 * v8) = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v8);
    *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v8) = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v8);
  }
  else
  {
    v20 = v26;
  }
  if ( (*(_BYTE *)(qword_1C0327C90 + 120) & 4) == 0 )
  {
    if ( word_1C0327D04 )
    {
      v21 = InvokeProject(
              dword_1C0327CC4,
              *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v5),
              *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v5));
      if ( v21 )
      {
        v22 = 16 * (v20 - v21);
        v23 = *(_DWORD *)(qword_1C0327C90 + 104);
        if ( v22 > v23 || v22 < -v23 )
          v20 = v21;
      }
    }
  }
  v24 = InvokeProject(
          dword_1C0327CC0,
          *(_DWORD *)(*(_QWORD *)v4 + 4 * v8) - *(_DWORD *)(*(_QWORD *)v3 + 4 * v5),
          *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v5));
  InvokeMovePoint(dword_1C0327CBC, (_QWORD *)v4, v8, v20 - v24);
  HIDWORD(qword_1C0327CA0) = v5;
  dword_1C0327CA8 = v8;
  if ( (a2 & 1) != 0 )
    LODWORD(qword_1C0327CA0) = v8;
  return a1;
}

/*
 * XREFs of itrp_MDRP @ 0x1C02CF350
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02B7B40 (InvokeGlobalGSScale.c)
 *     AddDistance @ 0x1C02C8B60 (AddDistance.c)
 *     AddProportion @ 0x1C02C8CB0 (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InterAlign @ 0x1C02C92A4 (InterAlign.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02C94DC (InvokeRoundValue.c)
 *     itrp_CheckSingleWidth @ 0x1C02CA66C (itrp_CheckSingleWidth.c)
 *     itrp_RoundOff @ 0x1C02D1CFC (itrp_RoundOff.c)
 */

__int64 __fastcall itrp_MDRP(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbp
  _WORD *v8; // rcx
  unsigned __int16 v9; // r15
  int v10; // ebx
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  __int16 v13; // ax
  unsigned __int16 v14; // ax
  int v15; // r15d
  __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // edx
  unsigned int v26; // r8d
  int v27; // r15d
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v34; // [rsp+30h] [rbp-58h]
  _WORD *v35; // [rsp+38h] [rbp-50h]
  int v38; // [rsp+A0h] [rbp+18h]
  __int64 v39; // [rsp+A0h] [rbp+18h]
  int v40; // [rsp+A8h] [rbp+20h]
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v2 = qword_1C0327C90;
  v3 = (int)qword_1C0327CA0;
  v4 = LocalGS;
  v5 = qword_1C0327C58;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v6 = qword_1C0327C78, !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2)) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v7 = *(int *)(v6 - 4);
  v8 = *(_WORD **)(qword_1C0327C90 + 344);
  v35 = v8;
  v9 = v8[4];
  LOWORD(v10) = v8[6];
  v11 = v10;
  if ( v9 > (unsigned __int16)v10 )
    v11 = v8[4];
  if ( v11 <= 1u )
  {
    v38 = 1;
  }
  else
  {
    v12 = v8[6];
    if ( v9 > (unsigned __int16)v10 )
      v12 = v8[4];
    v38 = v12;
  }
  v34 = qword_1C0327C88;
  if ( qword_1C0327C88 == LocalGS )
  {
    if ( (int)qword_1C0327CA0 >= (unsigned __int16)v8[8] || (int)qword_1C0327CA0 < 0 )
      goto LABEL_14;
    v40 = 1;
  }
  else
  {
    if ( (int)qword_1C0327CA0 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)qword_1C0327CA0 < 0 )
      goto LABEL_14;
    v40 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v13 = *(_WORD *)(v4 + 80);
  if ( v13 >= 1 && v13 <= v38 && (int)v3 >= v40 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v13 - 1)) )
    goto LABEL_14;
  v14 = v10;
  if ( v9 > (unsigned __int16)v10 )
    v14 = v9;
  if ( v14 <= 1u )
  {
    v10 = 1;
  }
  else
  {
    if ( v9 > (unsigned __int16)v10 )
      LOWORD(v10) = v9;
    v10 = (unsigned __int16)v10;
  }
  if ( v34 == v5 )
  {
    if ( (int)v7 >= (unsigned __int16)v35[8] || (int)v7 < 0 )
      goto LABEL_14;
    v15 = 1;
  }
  else
  {
    if ( (int)v7 >= *(_DWORD *)(v2 + 440) || (int)v7 < 0 )
      goto LABEL_14;
    v15 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5)
    || (v16 = *(_WORD *)(v5 + 80), v16 >= 1)
    && v16 <= v10
    && (int)v7 >= v15 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v16 - 1)) )
  {
LABEL_14:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  v17 = 2LL;
  if ( v5 != v34 && *(_BYTE *)(v2 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    if ( word_1C0327D06 == -1
      || (v17 = (unsigned __int16)word_1C0327D08, word_1C0327D08 == -1)
      || !InterAlign(v5, word_1C0327D06, v7, word_1C0327D08) )
    {
      AddDistance(v17, v5, v3, v7, 3);
    }
    else
    {
      AddProportion(v17, v5, v19, v7, v18);
    }
  }
  if ( v4 == qword_1C0327C88 || v5 == qword_1C0327C88 || *(_BYTE *)(qword_1C0327C90 + 397) )
  {
    v39 = 4 * v3;
    v41 = 4 * v7;
    v26 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v3);
    v25 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v3);
    goto LABEL_56;
  }
  v20 = *(_QWORD *)(v4 + 40);
  v21 = *(_QWORD *)(v5 + 40);
  if ( !*(_BYTE *)(v2 + 340) )
  {
    v39 = 4 * v3;
    v41 = 4 * v7;
    v24 = InvokeGlobalGSScale(
            *(_DWORD *)(v2 + 188),
            (int *)(v2 + 280),
            *(_DWORD *)(v21 + 4 * v7) - *(_DWORD *)(v20 + 4 * v3));
    v25 = InvokeGlobalGSScale(
            *(_DWORD *)(v2 + 184),
            (int *)(v2 + 264),
            *(_DWORD *)(*(_QWORD *)(v5 + 32) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v3));
    v26 = v24;
LABEL_56:
    v23 = InvokeProject(dword_1C0327CC4, v25, v26);
    goto LABEL_57;
  }
  v39 = 4 * v3;
  v41 = 4 * v7;
  v22 = InvokeProject(
          dword_1C0327CC4,
          *(_DWORD *)(*(_QWORD *)(v5 + 32) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v3),
          *(_DWORD *)(v21 + 4 * v7) - *(_DWORD *)(v20 + 4 * v3));
  v23 = InvokeGlobalGSScale(*(_DWORD *)(v2 + 192), (int *)(v2 + 296), v22);
LABEL_57:
  v27 = v23;
  if ( *(_DWORD *)(v2 + 108) )
    v27 = itrp_CheckSingleWidth(v23);
  if ( (a2 & 4) != 0 )
    v28 = InvokeRoundValue(*(_DWORD *)(v2 + 128), v27, *(_DWORD *)(v2 + 4LL * (a2 & 3) + 32));
  else
    v28 = itrp_RoundOff((unsigned int)v27, *(unsigned int *)(v2 + 4LL * (a2 & 3) + 32));
  v29 = v28;
  if ( (a2 & 8) != 0 )
  {
    v30 = *(_DWORD *)(v2 + 124);
    if ( word_1C0327D04 )
      v30 /= 2;
    if ( v27 < 0 )
    {
      v31 = -v30;
      if ( v29 > v31 )
        v29 = v31;
    }
    else if ( v29 < v30 )
    {
      v29 = v30;
    }
  }
  v32 = InvokeProject(
          dword_1C0327CC0,
          *(_DWORD *)(*(_QWORD *)v5 + v41) - *(_DWORD *)(*(_QWORD *)v4 + v39),
          *(_DWORD *)(*(_QWORD *)(v5 + 8) + v41) - *(_DWORD *)(*(_QWORD *)(v4 + 8) + v39));
  InvokeMovePoint(dword_1C0327CBC, (_QWORD *)v5, v7, v29 - v32);
  HIDWORD(qword_1C0327CA0) = v3;
  dword_1C0327CA8 = v7;
  if ( (a2 & 0x10) != 0 )
    LODWORD(qword_1C0327CA0) = v7;
  return a1;
}

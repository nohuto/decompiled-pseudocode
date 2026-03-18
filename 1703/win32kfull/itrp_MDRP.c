/*
 * XREFs of itrp_MDRP @ 0x1C02D5580
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02BDD44 (InvokeGlobalGSScale.c)
 *     AddDistance @ 0x1C02CEDAC (AddDistance.c)
 *     AddProportion @ 0x1C02CEEFC (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InterAlign @ 0x1C02CF504 (InterAlign.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 *     itrp_CheckSingleWidth @ 0x1C02D091C (itrp_CheckSingleWidth.c)
 *     itrp_RoundOff @ 0x1C02D7FF4 (itrp_RoundOff.c)
 */

__int64 __fastcall itrp_MDRP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbp
  _WORD *v7; // rcx
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax
  __int64 v12; // r12
  __int16 v13; // ax
  unsigned __int16 v14; // ax
  int v15; // r15d
  int v16; // r14d
  __int16 v17; // ax
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // r11d
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // r12
  int v24; // r8d
  int v25; // eax
  int v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // edx
  unsigned int v29; // r8d
  int v30; // r14d
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h]
  _WORD *v39; // [rsp+40h] [rbp-58h]
  int v42; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B8h] [rbp+20h]
  __int64 v44; // [rsp+B8h] [rbp+20h]

  v2 = qword_1C032CA00;
  v3 = qword_1C032CA00;
  v4 = qword_1C032C9C8;
  v42 = qword_1C032CA10;
  v38 = LocalGS;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v5 = qword_1C032C9E8, !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2)) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v6 = *(int *)(v5 - 4);
  v7 = *(_WORD **)(qword_1C032CA00 + 344);
  v39 = v7;
  v8 = v7[4];
  v9 = v7[6];
  v10 = v9;
  if ( v8 > v9 )
    v10 = v7[4];
  if ( v10 <= 1u )
  {
    v43 = 1;
  }
  else
  {
    v11 = v7[6];
    if ( v8 > v9 )
      v11 = v7[4];
    v43 = v11;
  }
  v12 = qword_1C032C9F8;
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( (int)qword_1C032CA10 >= (unsigned __int16)v7[8] || (int)qword_1C032CA10 < 0 )
      goto LABEL_14;
    v37 = 0;
  }
  else
  {
    if ( (int)qword_1C032CA10 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)qword_1C032CA10 < 0 )
      goto LABEL_14;
    v37 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v13 = *(_WORD *)(v38 + 80);
  if ( v13 >= 1 && v13 <= v43 && v42 >= *(__int16 *)(*(_QWORD *)(v38 + 64) + 2LL * (v13 - 1)) + v37 + 1 )
    goto LABEL_14;
  v14 = v9;
  if ( v8 > v9 )
    v14 = v8;
  if ( v14 <= 1u )
  {
    v15 = 1;
  }
  else
  {
    if ( v8 > v9 )
      v9 = v8;
    v15 = v9;
  }
  if ( v12 == v4 )
  {
    if ( (int)v6 >= (unsigned __int16)v39[8] || (int)v6 < 0 )
      goto LABEL_14;
    v16 = 0;
  }
  else
  {
    if ( (int)v6 >= *(_DWORD *)(v2 + 440) || (int)v6 < 0 )
      goto LABEL_14;
    v16 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v17 = *(_WORD *)(v4 + 80), v17 >= 1)
    && v17 <= v15
    && (int)v6 >= v16 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v17 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  v18 = 2LL;
  if ( v4 != v12 && *(_BYTE *)(v2 + 333) == 2 && word_1C032CA74 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    if ( word_1C032CA76 == -1
      || (v18 = (unsigned __int16)word_1C032CA78, word_1C032CA78 == -1)
      || !InterAlign(v4, word_1C032CA76, v6, word_1C032CA78) )
    {
      v21 = v42;
      AddDistance(v18, v4, v42, v6, 3);
      v2 = qword_1C032CA00;
      v12 = qword_1C032C9F8;
      goto LABEL_49;
    }
    AddProportion(v18, v4, v20, v6, v19);
    v2 = qword_1C032CA00;
    v12 = qword_1C032C9F8;
  }
  v21 = v42;
LABEL_49:
  if ( v38 == v12 || v4 == v12 || *(_BYTE *)(v2 + 397) )
  {
    v23 = 4 * v6;
    v44 = 4LL * v21;
    v29 = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v38 + 24) + v44);
    v28 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v38 + 16) + v44);
    goto LABEL_57;
  }
  v22 = *(_QWORD *)(v38 + 40);
  v23 = 4 * v6;
  v24 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 4 * v6);
  if ( !*(_BYTE *)(v3 + 340) )
  {
    v44 = 4LL * v21;
    v27 = InvokeGlobalGSScale(*(_DWORD *)(v3 + 188), (int *)(v3 + 280), v24 - *(_DWORD *)(v22 + v44));
    v28 = InvokeGlobalGSScale(
            *(_DWORD *)(v3 + 184),
            (int *)(v3 + 264),
            *(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v38 + 32) + v44));
    v29 = v27;
LABEL_57:
    v26 = InvokeProject(dword_1C032CA34, v28, v29);
    goto LABEL_58;
  }
  v44 = 4LL * v21;
  v25 = InvokeProject(
          dword_1C032CA34,
          *(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v38 + 32) + v44),
          v24 - *(_DWORD *)(v22 + v44));
  v26 = InvokeGlobalGSScale(*(_DWORD *)(v3 + 192), (int *)(v3 + 296), v25);
LABEL_58:
  v30 = v26;
  if ( *(_DWORD *)(v3 + 108) )
    v30 = itrp_CheckSingleWidth(v26);
  if ( (a2 & 4) != 0 )
    v31 = InvokeRoundValue(*(_DWORD *)(v3 + 128), v30, *(_DWORD *)(v3 + 4LL * (a2 & 3) + 32));
  else
    v31 = itrp_RoundOff((unsigned int)v30, *(unsigned int *)(v3 + 4LL * (a2 & 3) + 32));
  v32 = v31;
  if ( (a2 & 8) != 0 )
  {
    v33 = *(_DWORD *)(v3 + 124);
    if ( word_1C032CA74 )
      v33 /= 2;
    if ( v30 < 0 )
    {
      v34 = -v33;
      if ( v32 > v34 )
        v32 = v34;
    }
    else if ( v32 < v33 )
    {
      v32 = v33;
    }
  }
  v35 = InvokeProject(
          dword_1C032CA30,
          *(_DWORD *)(*(_QWORD *)v4 + v23) - *(_DWORD *)(*(_QWORD *)v38 + v44),
          *(_DWORD *)(*(_QWORD *)(v4 + 8) + v23) - *(_DWORD *)(*(_QWORD *)(v38 + 8) + v44));
  InvokeMovePoint(dword_1C032CA2C, (_QWORD *)v4, v6, v32 - v35);
  HIDWORD(qword_1C032CA10) = v42;
  dword_1C032CA18 = v6;
  if ( (a2 & 0x10) != 0 )
    LODWORD(qword_1C032CA10) = v6;
  return a1;
}

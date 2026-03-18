/*
 * XREFs of itrp_ALIGNRP @ 0x1C02CFFF0
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02CEDAC (AddDistance.c)
 *     AddProportion @ 0x1C02CEEFC (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InterAlign @ 0x1C02CF504 (InterAlign.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 */

__int64 __fastcall itrp_ALIGNRP(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  _WORD *v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // r14
  int v10; // edi
  int v11; // r12d
  __int16 v12; // ax
  __int64 v13; // rdx
  _WORD *v14; // r8
  __int64 v15; // rbp
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  int v19; // r12d
  int v20; // r14d
  __int16 v21; // ax
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // r11d
  int v25; // eax
  __int64 result; // rax
  __int64 v27; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+98h] [rbp+20h]

  v1 = qword_1C032CA00;
  v2 = qword_1C032C9C8;
  v27 = qword_1C032C9C8;
  v3 = *(_WORD **)(qword_1C032CA00 + 344);
  v4 = v3[4];
  v5 = v3[6];
  v6 = v5;
  if ( v4 > v5 )
    v6 = v3[4];
  if ( v6 <= 1u )
  {
    v7 = 1;
  }
  else
  {
    if ( v4 > v5 )
      v5 = v3[4];
    v7 = v5;
  }
  v8 = qword_1C032C9F8;
  v9 = LocalGS;
  v10 = qword_1C032CA10;
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( (int)qword_1C032CA10 >= (unsigned __int16)v3[8] || (int)qword_1C032CA10 < 0 )
      goto LABEL_53;
    v11 = 0;
  }
  else
  {
    if ( (int)qword_1C032CA10 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)qword_1C032CA10 < 0 )
      goto LABEL_53;
    v11 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v12 = *(_WORD *)(v9 + 80), v12 >= 1)
    && v12 <= v7
    && v10 >= v11 + *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v12 - 1)) + 1 )
  {
LABEL_53:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  v30 = *(_DWORD *)(*(_QWORD *)v9 + 4LL * v10);
  v29 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 4LL * v10);
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || (v13 = qword_1C032C9E8, dword_1C032CA20 + 1LL > (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)v1) >> 2)) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  if ( dword_1C032CA20 >= 0 )
  {
    while ( 1 )
    {
      qword_1C032C9E8 = v13 - 4;
      v14 = *(_WORD **)(v1 + 344);
      v15 = *(int *)(v13 - 4);
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
      if ( v8 == v2 )
      {
        if ( (int)v15 >= (unsigned __int16)v14[8] || (int)v15 < 0 )
          goto LABEL_53;
        v20 = 0;
      }
      else
      {
        if ( (int)v15 >= *(_DWORD *)(v1 + 440) || (int)v15 < 0 )
          goto LABEL_53;
        v20 = 4;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2) )
        goto LABEL_53;
      v21 = *(_WORD *)(v2 + 80);
      v22 = 1LL;
      if ( v21 >= 1 && v21 <= v19 )
      {
        v22 = v21 - 1;
        if ( (int)v15 >= v20 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2 * v22) + 1 )
          goto LABEL_53;
      }
      if ( v2 != v8 && *(_BYTE *)(v1 + 333) == 2 && word_1C032CA74 && (*(_BYTE *)(v1 + 452) & 2) != 0 )
      {
        if ( word_1C032CA76 == -1 || word_1C032CA78 == -1 || !InterAlign(v27, word_1C032CA76, v15, word_1C032CA78) )
          AddDistance(v22, v2, v10, v15, 3);
        else
          AddProportion(v22, v2, v24, v15, v23);
      }
      v25 = InvokeProject(
              dword_1C032CA30,
              *(_DWORD *)(*(_QWORD *)v2 + 4 * v15) - v30,
              *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4 * v15) - v29);
      InvokeMovePoint(dword_1C032CA2C, (_QWORD *)v2, v15, -v25);
      if ( --dword_1C032CA20 < 0 )
        break;
      v10 = qword_1C032CA10;
      v1 = qword_1C032CA00;
      v8 = qword_1C032C9F8;
      v13 = qword_1C032C9E8;
      v27 = qword_1C032C9C8;
    }
  }
  result = a1;
  dword_1C032CA20 = 0;
  return result;
}

/*
 * XREFs of itrp_MIRP @ 0x1C02D5EC0
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02CEDAC (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     DoubleCheckLinkColor @ 0x1C02CF16C (DoubleCheckLinkColor.c)
 *     InvokeGetCVTEntry @ 0x1C02CF540 (InvokeGetCVTEntry.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 *     itrp_CheckSingleWidth @ 0x1C02D091C (itrp_CheckSingleWidth.c)
 *     itrp_RoundOff @ 0x1C02D7FF4 (itrp_RoundOff.c)
 *     itrp_RoundOffSP @ 0x1C02D801C (itrp_RoundOffSP.c)
 */

__int64 __fastcall itrp_MIRP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  char v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  int *v6; // rdx
  _WORD *v7; // rcx
  __int64 v8; // r13
  int v9; // edx
  unsigned __int16 v10; // r14
  unsigned __int16 v11; // di
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // ebp
  __int16 v15; // ax
  __int64 v16; // rbp
  unsigned __int16 v17; // ax
  int v18; // r14d
  int v19; // edi
  __int16 v20; // ax
  __int16 v21; // r10
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edi
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // ebp
  unsigned int v30; // r8d
  __int16 v31; // r9
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  __int16 v37; // r10
  int v38; // r11d
  int v39; // edi
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  signed int v45; // r8d
  int v46; // r9d
  __int16 v47; // dx
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  unsigned int v52; // r8d
  int v53; // ecx
  signed int v54; // eax
  int v55; // eax
  int v56; // r9d
  __int16 v57; // dx
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  unsigned int v62; // r8d
  int v63; // ecx
  signed int v64; // eax
  int v65; // eax
  __int64 v67; // [rsp+30h] [rbp-58h]
  _WORD *v68; // [rsp+38h] [rbp-50h]
  int v71; // [rsp+A0h] [rbp+18h]
  int v72; // [rsp+A8h] [rbp+20h]

  v2 = qword_1C032CA00;
  v3 = a2;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2 )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v4 = LocalGS;
  v5 = qword_1C032C9C8;
  v6 = (int *)(qword_1C032C9E8 - 4);
  qword_1C032C9E8 = (__int64)v6;
  v71 = *v6;
  if ( *v6 >= *(unsigned __int16 *)(qword_1C032CA00 + 360)
    || *v6 < 0
    || (qword_1C032CA00 ^ *(_QWORD *)(qword_1C032CA00 + 16) ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C032CA00 + 360)) != *(_QWORD *)(qword_1C032CA00 + 368) )
  {
    dword_1C032CA50 = 4379;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 = (__int64)(v6 - 1);
  v7 = *(_WORD **)(qword_1C032CA00 + 344);
  v68 = v7;
  v8 = *(v6 - 1);
  v9 = 1;
  v10 = v7[4];
  v11 = v7[6];
  v12 = v11;
  if ( v10 > v11 )
    v12 = v7[4];
  if ( v12 > 1u )
  {
    v13 = v7[6];
    if ( v10 > v11 )
      v13 = v7[4];
    v9 = v13;
  }
  v72 = v9;
  v67 = qword_1C032C9F8;
  if ( qword_1C032C9F8 == qword_1C032C9C8 )
  {
    if ( (int)v8 >= (unsigned __int16)v7[8] || (int)v8 < 0 )
      goto LABEL_16;
    v14 = 0;
  }
  else
  {
    if ( (int)v8 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v8 < 0 )
      goto LABEL_16;
    v14 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9C8) )
    goto LABEL_16;
  v15 = *(_WORD *)(v5 + 80);
  if ( v15 >= 1 && v15 <= v72 && (int)v8 >= v14 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v15 - 1)) + 1 )
    goto LABEL_16;
  v16 = (int)qword_1C032CA10;
  v17 = v11;
  if ( v10 > v11 )
    v17 = v10;
  if ( v17 <= 1u )
  {
    v18 = 1;
  }
  else
  {
    if ( v10 > v11 )
      v11 = v10;
    v18 = v11;
  }
  if ( v67 == v4 )
  {
    if ( (int)qword_1C032CA10 >= (unsigned __int16)v68[8] || (int)qword_1C032CA10 < 0 )
      goto LABEL_16;
    v19 = 0;
  }
  else
  {
    if ( (int)qword_1C032CA10 >= *(_DWORD *)(v2 + 440) || (int)qword_1C032CA10 < 0 )
      goto LABEL_16;
    v19 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v20 = *(_WORD *)(v4 + 80), v20 >= 1)
    && v20 <= v18
    && (int)v16 >= v19 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v20 - 1)) + 1 )
  {
LABEL_16:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  HIDWORD(qword_1C032CA10) = v16;
  dword_1C032CA18 = v8;
  if ( v5 == v67 || *(_BYTE *)(v2 + 333) != 2 )
    goto LABEL_47;
  v21 = word_1C032CA74;
  if ( word_1C032CA74 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v22 = DoubleCheckLinkColor((_QWORD *)v5, v16, v8, v3 & 3);
    AddDistance(v23, v5, v16, v8, v22);
LABEL_47:
    v21 = word_1C032CA74;
  }
  if ( word_1C032CA4C )
  {
    v45 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4LL * v71);
    if ( word_1C032CA4C == 1 )
    {
      v46 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16);
      if ( (v45 ^ v46) < 0 && *(_BYTE *)(v2 + 156) )
        v45 = -v45;
      if ( v21 )
      {
        v47 = *(_WORD *)(v2 + 120) & 4;
        if ( !v47 )
        {
          v48 = *(_DWORD *)(v2 + 104);
          v49 = 16 * (v45 - v46);
          if ( v49 > v48 || v49 < -v48 )
            v45 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16);
        }
        if ( (v3 & 4) == 0 )
          goto LABEL_118;
        if ( v47 )
        {
          v50 = *(_DWORD *)(v2 + 104);
          v51 = 16 * (v45 - v46);
          if ( v51 > v50 || v51 < -v50 )
            v45 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16);
        }
        if ( v45 >= 0 )
        {
          v45 = (v45 + 2) & 0xFFFFFFFC;
LABEL_118:
          if ( (v3 & 8) != 0 )
          {
            v54 = *(_DWORD *)(v2 + 124);
            if ( v21 )
              v54 /= 2;
            if ( v46 < 0 )
            {
              v55 = -v54;
              if ( v45 > v55 )
                v45 = v55;
            }
            else if ( v45 < v54 )
            {
              v45 = v54;
            }
          }
          *(_DWORD *)(*(_QWORD *)v5 + 4 * v8) = v45 + *(_DWORD *)(*(_QWORD *)v4 + 4 * v16);
          *(_BYTE *)(*(_QWORD *)(v5 + 72) + v8) |= 1u;
          goto LABEL_160;
        }
        v52 = (2 - v45) & 0xFFFFFFFC;
      }
      else
      {
        if ( (v3 & 4) == 0 )
          goto LABEL_118;
        v53 = *(_DWORD *)(v2 + 104);
        if ( v45 - v46 > v53 || v45 - v46 < -v53 )
          v45 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16);
        if ( v45 >= 0 )
        {
          v45 = (v45 + 32) & 0xFFFFFFC0;
          goto LABEL_118;
        }
        v52 = (32 - v45) & 0xFFFFFFC0;
      }
      v45 = -v52;
      goto LABEL_118;
    }
    v56 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16);
    if ( (v45 ^ v56) < 0 && *(_BYTE *)(v2 + 156) )
      v45 = -v45;
    if ( v21 )
    {
      v57 = *(_WORD *)(v2 + 120) & 4;
      if ( !v57 )
      {
        v58 = *(_DWORD *)(v2 + 104);
        v59 = 16 * (v45 - v56);
        if ( v59 > v58 || v59 < -v58 )
          v45 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16);
      }
      if ( (v3 & 4) == 0 )
        goto LABEL_151;
      if ( v57 )
      {
        v60 = *(_DWORD *)(v2 + 104);
        v61 = 16 * (v45 - v56);
        if ( v61 > v60 || v61 < -v60 )
          v45 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16);
      }
      if ( v45 >= 0 )
      {
        v45 = (v45 + 2) & 0xFFFFFFFC;
LABEL_151:
        if ( (v3 & 8) != 0 )
        {
          v64 = *(_DWORD *)(v2 + 124);
          if ( v21 )
            v64 /= 2;
          if ( v56 < 0 )
          {
            v65 = -v64;
            if ( v45 > v65 )
              v45 = v65;
          }
          else if ( v45 < v64 )
          {
            v45 = v64;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v8) = v45 + *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v16);
        *(_BYTE *)(*(_QWORD *)(v5 + 72) + v8) |= 2u;
        goto LABEL_160;
      }
      v62 = (2 - v45) & 0xFFFFFFFC;
    }
    else
    {
      if ( (v3 & 4) == 0 )
        goto LABEL_151;
      v63 = *(_DWORD *)(v2 + 104);
      if ( v45 - v56 > v63 || v45 - v56 < -v63 )
        v45 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16);
      if ( v45 >= 0 )
      {
        v45 = (v45 + 32) & 0xFFFFFFC0;
        goto LABEL_151;
      }
      v62 = (32 - v45) & 0xFFFFFFC0;
    }
    v45 = -v62;
    goto LABEL_151;
  }
  v24 = InvokeGetCVTEntry(dword_1C032CA3C, v71);
  v25 = v24;
  if ( *(_DWORD *)(v2 + 108) )
    v25 = itrp_CheckSingleWidth(v24);
  if ( v5 == qword_1C032C9F8 )
  {
    *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) = ((unsigned __int64)(v25 * (__int64)(__int16)dword_1C032C9D8) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16)
                                               + ((((unsigned int)(v25 * (__int16)dword_1C032C9D8) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)v5 + 4 * v8) = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8);
    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) = ((unsigned __int64)(v25 * (__int64)SHIWORD(dword_1C032C9D8)) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16)
                                               + ((((unsigned int)(v25 * SHIWORD(dword_1C032C9D8)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v8) = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8);
  }
  v26 = 4 * v16;
  if ( dword_1C032CA34 == 3 )
  {
    v27 = *(_QWORD *)(v5 + 16);
    v28 = *(_QWORD *)(v4 + 16);
  }
  else
  {
    v28 = *(_QWORD *)(v4 + 24);
    if ( dword_1C032CA34 != 4 )
    {
      v29 = InvokeProject(
              dword_1C032CA34,
              *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16),
              *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v8) - *(_DWORD *)(v28 + 4 * v16));
      goto LABEL_59;
    }
    v27 = *(_QWORD *)(v5 + 24);
  }
  v29 = *(_DWORD *)(v27 + 4 * v8) - *(_DWORD *)(v28 + 4 * v16);
LABEL_59:
  if ( (v25 ^ v29) < 0 && *(_BYTE *)(v2 + 156) )
    v25 = -v25;
  v30 = *(_DWORD *)(v2 + 4LL * (a2 & 3) + 32);
  if ( word_1C032CA74 )
  {
    v31 = *(_WORD *)(v2 + 120) & 4;
    if ( !v31 )
    {
      v32 = *(_DWORD *)(v2 + 104);
      v33 = 16 * (v25 - v29);
      if ( v33 > v32 || v33 < -v32 )
        v25 = v29;
    }
    if ( (a2 & 4) != 0 )
    {
      if ( !v31 )
      {
LABEL_73:
        v36 = InvokeRoundValue(*(_DWORD *)(v2 + 128), v25, v30);
        v37 = 0;
        v38 = 4;
        goto LABEL_78;
      }
      v34 = 16 * (v25 - v29);
LABEL_70:
      v35 = *(_DWORD *)(v2 + 104);
      if ( v34 > v35 || v34 < -v35 )
        v25 = v29;
      goto LABEL_73;
    }
    v36 = itrp_RoundOffSP((unsigned int)v25, v30);
  }
  else
  {
    if ( (a2 & 4) != 0 )
    {
      v34 = v25 - v29;
      goto LABEL_70;
    }
    v36 = itrp_RoundOff((unsigned int)v25, v30);
  }
LABEL_78:
  v39 = v36;
  if ( (a2 & 8) != 0 )
  {
    v40 = *(_DWORD *)(v2 + 124);
    if ( word_1C032CA74 != v37 )
      v40 /= 2;
    if ( v29 < 0 )
    {
      v41 = -v40;
      if ( v39 > v41 )
        v39 = v41;
    }
    else if ( v39 < v40 )
    {
      v39 = v40;
    }
  }
  if ( dword_1C032CA30 == 3 )
  {
    v42 = *(_QWORD *)v5;
    v43 = *(_QWORD *)v4;
  }
  else
  {
    v43 = *(_QWORD *)(v4 + 8);
    if ( dword_1C032CA30 != v38 )
    {
      v44 = InvokeProject(
              dword_1C032CA30,
              *(_DWORD *)(*(_QWORD *)v5 + 4 * v8) - *(_DWORD *)(*(_QWORD *)v4 + v26),
              *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v8) - *(_DWORD *)(v43 + v26));
      goto LABEL_92;
    }
    v42 = *(_QWORD *)(v5 + 8);
  }
  v44 = *(_DWORD *)(v42 + 4 * v8) - *(_DWORD *)(v43 + v26);
LABEL_92:
  InvokeMovePoint(dword_1C032CA2C, (_QWORD *)v5, v8, v39 - v44);
  v3 = a2;
LABEL_160:
  if ( (v3 & 0x10) != 0 )
    LODWORD(qword_1C032CA10) = v8;
  return a1;
}

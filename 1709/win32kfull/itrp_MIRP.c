/*
 * XREFs of itrp_MIRP @ 0x1C02CFC80
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02C8B60 (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     DoubleCheckLinkColor @ 0x1C02C8F20 (DoubleCheckLinkColor.c)
 *     InvokeGetCVTEntry @ 0x1C02C92E0 (InvokeGetCVTEntry.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02C94DC (InvokeRoundValue.c)
 *     itrp_CheckSingleWidth @ 0x1C02CA66C (itrp_CheckSingleWidth.c)
 *     itrp_RoundOff @ 0x1C02D1CFC (itrp_RoundOff.c)
 *     itrp_RoundOffSP @ 0x1C02D1D24 (itrp_RoundOffSP.c)
 */

__int64 __fastcall itrp_MIRP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  char v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  int *v6; // rdx
  unsigned __int64 v7; // rcx
  _WORD *v8; // rcx
  __int64 v9; // r13
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
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ebp
  unsigned int v29; // r8d
  __int16 v30; // r9
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  __int16 v36; // r10
  int v37; // r11d
  int v38; // edi
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  signed int v44; // r8d
  int v45; // r9d
  __int16 v46; // dx
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  unsigned int v51; // r8d
  int v52; // ecx
  signed int v53; // eax
  int v54; // eax
  int v55; // r9d
  __int16 v56; // dx
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  unsigned int v61; // r8d
  int v62; // ecx
  signed int v63; // eax
  int v64; // eax
  __int64 v66; // [rsp+30h] [rbp-58h]
  _WORD *v67; // [rsp+38h] [rbp-50h]
  int v70; // [rsp+A0h] [rbp+18h]
  int v71; // [rsp+A8h] [rbp+20h]

  v2 = qword_1C0327C90;
  v3 = a2;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2 )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  v4 = LocalGS;
  v5 = qword_1C0327C58;
  v6 = (int *)(qword_1C0327C78 - 4);
  qword_1C0327C78 = (__int64)v6;
  v7 = *(unsigned __int16 *)(qword_1C0327C90 + 360);
  v70 = *v6;
  if ( *v6 >= (int)v7
    || *v6 < 0
    || (qword_1C0327C90 ^ *(_QWORD *)(qword_1C0327C90 + 16) ^ MEMORY[0xFFFFF78000000330] ^ v7) != *(_QWORD *)(qword_1C0327C90 + 368) )
  {
    dword_1C0327CE0 = 4379;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 = (__int64)(v6 - 1);
  v8 = *(_WORD **)(qword_1C0327C90 + 344);
  v67 = v8;
  v9 = *(v6 - 1);
  v10 = v8[4];
  v11 = v8[6];
  v12 = v11;
  if ( v10 > v11 )
    v12 = v8[4];
  if ( v12 <= 1u )
  {
    v71 = 1;
  }
  else
  {
    v13 = v8[6];
    if ( v10 > v11 )
      v13 = v8[4];
    v71 = v13;
  }
  v66 = qword_1C0327C88;
  if ( qword_1C0327C88 == qword_1C0327C58 )
  {
    if ( (int)v9 >= (unsigned __int16)v8[8] || (int)v9 < 0 )
      goto LABEL_17;
    v14 = 1;
  }
  else
  {
    if ( (int)v9 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v9 < 0 )
      goto LABEL_17;
    v14 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C58) )
    goto LABEL_17;
  v15 = *(_WORD *)(v5 + 80);
  if ( v15 >= 1 && v15 <= v71 && (int)v9 >= v14 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v15 - 1)) )
    goto LABEL_17;
  v16 = (int)qword_1C0327CA0;
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
  if ( v66 == v4 )
  {
    if ( (int)qword_1C0327CA0 >= (unsigned __int16)v67[8] || (int)qword_1C0327CA0 < 0 )
      goto LABEL_17;
    v19 = 1;
  }
  else
  {
    if ( (int)qword_1C0327CA0 >= *(_DWORD *)(v2 + 440) || (int)qword_1C0327CA0 < 0 )
      goto LABEL_17;
    v19 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v20 = *(_WORD *)(v4 + 80), v20 >= 1)
    && v20 <= v18
    && (int)v16 >= v19 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v20 - 1)) )
  {
LABEL_17:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  HIDWORD(qword_1C0327CA0) = v16;
  dword_1C0327CA8 = v9;
  if ( v5 != v66 && *(_BYTE *)(v2 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v21 = DoubleCheckLinkColor((_QWORD *)v5, v16, v9, v3 & 3);
    AddDistance(v22, v5, v16, v9, v21);
  }
  if ( word_1C0327CDC )
  {
    v44 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4LL * v70);
    if ( word_1C0327CDC == 1 )
    {
      v45 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16);
      if ( (v44 ^ v45) < 0 && *(_BYTE *)(v2 + 156) )
        v44 = -v44;
      if ( word_1C0327D04 )
      {
        v46 = *(_WORD *)(v2 + 120) & 4;
        if ( !v46 )
        {
          v47 = *(_DWORD *)(v2 + 104);
          v48 = 16 * (v44 - v45);
          if ( v48 > v47 || v48 < -v47 )
            v44 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16);
        }
        if ( (v3 & 4) == 0 )
          goto LABEL_118;
        if ( v46 )
        {
          v49 = *(_DWORD *)(v2 + 104);
          v50 = 16 * (v44 - v45);
          if ( v50 > v49 || v50 < -v49 )
            v44 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16);
        }
        if ( v44 >= 0 )
        {
          v44 = (v44 + 2) & 0xFFFFFFFC;
LABEL_118:
          if ( (v3 & 8) != 0 )
          {
            v53 = *(_DWORD *)(v2 + 124);
            if ( word_1C0327D04 )
              v53 /= 2;
            if ( v45 < 0 )
            {
              v54 = -v53;
              if ( v44 > v54 )
                v44 = v54;
            }
            else if ( v44 < v53 )
            {
              v44 = v53;
            }
          }
          *(_DWORD *)(*(_QWORD *)v5 + 4 * v9) = v44 + *(_DWORD *)(*(_QWORD *)v4 + 4 * v16);
          *(_BYTE *)(*(_QWORD *)(v5 + 72) + v9) |= 1u;
          goto LABEL_160;
        }
        v51 = (2 - v44) & 0xFFFFFFFC;
      }
      else
      {
        if ( (v3 & 4) == 0 )
          goto LABEL_118;
        v52 = *(_DWORD *)(v2 + 104);
        if ( v44 - v45 > v52 || v44 - v45 < -v52 )
          v44 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16);
        if ( v44 >= 0 )
        {
          v44 = (v44 + 32) & 0xFFFFFFC0;
          goto LABEL_118;
        }
        v51 = (32 - v44) & 0xFFFFFFC0;
      }
      v44 = -v51;
      goto LABEL_118;
    }
    v55 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16);
    if ( (v44 ^ v55) < 0 && *(_BYTE *)(v2 + 156) )
      v44 = -v44;
    if ( word_1C0327D04 )
    {
      v56 = *(_WORD *)(v2 + 120) & 4;
      if ( !v56 )
      {
        v57 = *(_DWORD *)(v2 + 104);
        v58 = 16 * (v44 - v55);
        if ( v58 > v57 || v58 < -v57 )
          v44 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16);
      }
      if ( (v3 & 4) == 0 )
        goto LABEL_151;
      if ( v56 )
      {
        v59 = *(_DWORD *)(v2 + 104);
        v60 = 16 * (v44 - v55);
        if ( v60 > v59 || v60 < -v59 )
          v44 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16);
      }
      if ( v44 >= 0 )
      {
        v44 = (v44 + 2) & 0xFFFFFFFC;
LABEL_151:
        if ( (v3 & 8) != 0 )
        {
          v63 = *(_DWORD *)(v2 + 124);
          if ( word_1C0327D04 )
            v63 /= 2;
          if ( v55 < 0 )
          {
            v64 = -v63;
            if ( v44 > v64 )
              v44 = v64;
          }
          else if ( v44 < v63 )
          {
            v44 = v63;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v9) = v44 + *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v16);
        *(_BYTE *)(*(_QWORD *)(v5 + 72) + v9) |= 2u;
        goto LABEL_160;
      }
      v61 = (2 - v44) & 0xFFFFFFFC;
    }
    else
    {
      if ( (v3 & 4) == 0 )
        goto LABEL_151;
      v62 = *(_DWORD *)(v2 + 104);
      if ( v44 - v55 > v62 || v44 - v55 < -v62 )
        v44 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16);
      if ( v44 >= 0 )
      {
        v44 = (v44 + 32) & 0xFFFFFFC0;
        goto LABEL_151;
      }
      v61 = (32 - v44) & 0xFFFFFFC0;
    }
    v44 = -v61;
    goto LABEL_151;
  }
  v23 = InvokeGetCVTEntry(dword_1C0327CCC, v70);
  v24 = v23;
  if ( *(_DWORD *)(v2 + 108) )
    v24 = itrp_CheckSingleWidth(v23);
  if ( v5 == qword_1C0327C88 )
  {
    *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v9) = ((unsigned __int64)(v24 * (__int64)(__int16)dword_1C0327C68) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16)
                                               + ((((unsigned int)(v24 * (__int16)dword_1C0327C68) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)v5 + 4 * v9) = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v9);
    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v9) = ((unsigned __int64)(v24 * (__int64)SHIWORD(dword_1C0327C68)) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v16)
                                               + ((((unsigned int)(v24 * SHIWORD(dword_1C0327C68)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v9) = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v9);
  }
  v25 = 4 * v16;
  if ( dword_1C0327CC4 == 3 )
  {
    v26 = *(_QWORD *)(v5 + 16);
    v27 = *(_QWORD *)(v4 + 16);
  }
  else
  {
    v27 = *(_QWORD *)(v4 + 24);
    if ( dword_1C0327CC4 != 4 )
    {
      v28 = InvokeProject(
              dword_1C0327CC4,
              *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v16),
              *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v9) - *(_DWORD *)(v27 + 4 * v16));
      goto LABEL_59;
    }
    v26 = *(_QWORD *)(v5 + 24);
  }
  v28 = *(_DWORD *)(v26 + 4 * v9) - *(_DWORD *)(v27 + 4 * v16);
LABEL_59:
  if ( (v24 ^ v28) < 0 && *(_BYTE *)(v2 + 156) )
    v24 = -v24;
  v29 = *(_DWORD *)(v2 + 4LL * (a2 & 3) + 32);
  if ( word_1C0327D04 )
  {
    v30 = *(_WORD *)(v2 + 120) & 4;
    if ( !v30 )
    {
      v31 = *(_DWORD *)(v2 + 104);
      v32 = 16 * (v24 - v28);
      if ( v32 > v31 || v32 < -v31 )
        v24 = v28;
    }
    if ( (a2 & 4) != 0 )
    {
      if ( !v30 )
      {
LABEL_73:
        v35 = InvokeRoundValue(*(_DWORD *)(v2 + 128), v24, v29);
        v36 = 0;
        v37 = 4;
        goto LABEL_78;
      }
      v33 = 16 * (v24 - v28);
LABEL_70:
      v34 = *(_DWORD *)(v2 + 104);
      if ( v33 > v34 || v33 < -v34 )
        v24 = v28;
      goto LABEL_73;
    }
    v35 = itrp_RoundOffSP((unsigned int)v24, v29);
  }
  else
  {
    if ( (a2 & 4) != 0 )
    {
      v33 = v24 - v28;
      goto LABEL_70;
    }
    v35 = itrp_RoundOff((unsigned int)v24, v29);
  }
LABEL_78:
  v38 = v35;
  if ( (a2 & 8) != 0 )
  {
    v39 = *(_DWORD *)(v2 + 124);
    if ( word_1C0327D04 != v36 )
      v39 /= 2;
    if ( v28 < 0 )
    {
      v40 = -v39;
      if ( v38 > v40 )
        v38 = v40;
    }
    else if ( v38 < v39 )
    {
      v38 = v39;
    }
  }
  if ( dword_1C0327CC0 == 3 )
  {
    v41 = *(_QWORD *)v5;
    v42 = *(_QWORD *)v4;
  }
  else
  {
    v42 = *(_QWORD *)(v4 + 8);
    if ( dword_1C0327CC0 != v37 )
    {
      v43 = InvokeProject(
              dword_1C0327CC0,
              *(_DWORD *)(*(_QWORD *)v5 + 4 * v9) - *(_DWORD *)(*(_QWORD *)v4 + v25),
              *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v9) - *(_DWORD *)(v42 + v25));
      goto LABEL_92;
    }
    v41 = *(_QWORD *)(v5 + 8);
  }
  v43 = *(_DWORD *)(v41 + 4 * v9) - *(_DWORD *)(v42 + v25);
LABEL_92:
  InvokeMovePoint(dword_1C0327CBC, (_QWORD *)v5, v9, v38 - v43);
  v3 = a2;
LABEL_160:
  if ( (v3 & 0x10) != 0 )
    LODWORD(qword_1C0327CA0) = v9;
  return a1;
}

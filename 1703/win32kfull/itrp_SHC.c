/*
 * XREFs of itrp_SHC @ 0x1C02D8B20
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     ExecutePhaseControl @ 0x1C02CF308 (ExecutePhaseControl.c)
 *     itrp_SH_Common @ 0x1C02D9A4C (itrp_SH_Common.c)
 */

__int64 __fastcall itrp_SHC(__int64 a1, unsigned int a2)
{
  _WORD *v3; // r10
  unsigned __int16 v4; // r9
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax
  int v7; // r15d
  __int64 v8; // rsi
  int v9; // ebp
  int v10; // edi
  int v11; // eax
  int v12; // r14d
  bool v13; // cc
  __int16 v14; // ax
  _WORD *v16; // r8
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r14
  int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  char v27; // dl
  __int64 v28; // rdi
  _WORD *v29; // r8
  __int64 v30; // r13
  unsigned __int16 v31; // dx
  unsigned __int16 v32; // cx
  int v33; // esi
  unsigned __int16 v34; // ax
  int v35; // r15d
  int v36; // r12d
  __int16 v37; // ax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  __int16 v41; // r10
  __int16 v42; // r11
  int v43; // [rsp+20h] [rbp-58h]
  int v44; // [rsp+24h] [rbp-54h] BYREF
  __int64 v45; // [rsp+28h] [rbp-50h]
  int v47; // [rsp+88h] [rbp+10h] BYREF
  __int16 v48; // [rsp+90h] [rbp+18h]
  int v49; // [rsp+98h] [rbp+20h] BYREF

  if ( (a2 & 1) != 0 )
  {
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
    v8 = LocalGS;
    v9 = 4;
    v10 = HIDWORD(qword_1C032CA10);
    if ( qword_1C032C9F8 == LocalGS )
    {
      v11 = (unsigned __int16)v3[8];
      goto LABEL_11;
    }
    v13 = SHIDWORD(qword_1C032CA10) < *(_DWORD *)(qword_1C032CA00 + 440);
LABEL_15:
    if ( !v13 || v10 < 0 )
      goto LABEL_22;
    v12 = 4;
    goto LABEL_18;
  }
  v16 = *(_WORD **)(qword_1C032CA00 + 344);
  v17 = v16[4];
  v18 = v16[6];
  v19 = v18;
  if ( v17 > v18 )
    v19 = v16[4];
  if ( v19 <= 1u )
  {
    v7 = 1;
  }
  else
  {
    if ( v17 > v18 )
      v18 = v16[4];
    v7 = v18;
  }
  v8 = qword_1C032C9C8;
  v9 = 4;
  v10 = dword_1C032CA18;
  if ( qword_1C032C9F8 != qword_1C032C9C8 )
  {
    v13 = dword_1C032CA18 < *(_DWORD *)(qword_1C032CA00 + 440);
    goto LABEL_15;
  }
  v11 = (unsigned __int16)v16[8];
LABEL_11:
  if ( v10 >= v11 || v10 < 0 )
    goto LABEL_22;
  v12 = 0;
LABEL_18:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v8) )
    goto LABEL_22;
  v14 = *(_WORD *)(v8 + 80);
  if ( v14 >= 1 && v14 <= v7 && v10 >= v12 + *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * (v14 - 1)) + 1 )
    goto LABEL_22;
  v20 = itrp_SH_Common(&v47, &v44, &v49, a2);
  v21 = qword_1C032CA00;
  v22 = v20;
  v23 = v47;
  v43 = v47;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v24 = qword_1C032C9E8, !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2)) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v25 = *(int *)(v24 - 4);
  v26 = qword_1C032C9F8;
  if ( v20 != qword_1C032C9F8
    && *(_BYTE *)(qword_1C032CA00 + 333) == 2
    && (*(_BYTE *)(qword_1C032CA00 + 452) & 7) == 3
    && !*(_DWORD *)(v20 + 96) )
  {
    ExecutePhaseControl((__int64)&LocalGS, v20);
    v21 = qword_1C032CA00;
    v26 = qword_1C032C9F8;
    v43 = *(_DWORD *)(*(_QWORD *)(v22 + 104) + 12LL * v49 + 8) + v23;
  }
  v27 = *(_BYTE *)(v21 + 333);
  if ( v27 != 2 && (v27 || v26 != qword_1C032C9D0) )
  {
    dword_1C032CA50 = 4380;
    return qword_1C032CA58;
  }
  if ( (int)v25 < 0 || (int)v25 >= *(__int16 *)(qword_1C032C9D0 + 80) )
  {
    dword_1C032CA50 = 4378;
    return qword_1C032CA58;
  }
  _mm_lfence();
  v28 = qword_1C032C9D0;
  v48 = HIWORD(dword_1C032C9DC);
  LOWORD(v47) = dword_1C032C9DC;
  v29 = *(_WORD **)(qword_1C032CA00 + 344);
  v30 = *(__int16 *)(*(_QWORD *)(qword_1C032C9D0 + 56) + 2 * v25);
  v31 = v29[4];
  v32 = v29[6];
  v45 = *(_QWORD *)(qword_1C032C9D0 + 64);
  v33 = *(__int16 *)(v45 + 2 * v25);
  v34 = v32;
  v35 = v33 - v30;
  if ( v31 > v32 )
    v34 = v31;
  if ( v34 <= 1u )
  {
    v36 = 1;
  }
  else
  {
    if ( v31 > v32 )
      v32 = v31;
    v36 = v32;
  }
  if ( qword_1C032C9F8 == qword_1C032C9D0 )
  {
    if ( v33 >= (unsigned __int16)v29[8] || v33 < 0 )
      goto LABEL_22;
    v9 = 0;
  }
  else if ( v33 >= *(_DWORD *)(qword_1C032CA00 + 440) || v33 < 0 )
  {
    goto LABEL_22;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9D0)
    || (v37 = *(_WORD *)(v28 + 80), v37 >= 1) && v37 <= v36 && v33 >= v9 + *(__int16 *)(v45 + 2LL * (v37 - 1)) + 1 )
  {
LABEL_22:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  if ( v35 >= 0 )
  {
    v38 = v49;
    v39 = v30;
    v40 = v44;
    v41 = v47;
    v42 = v48;
    do
    {
      if ( v39 != v38 || v22 != v28 )
      {
        if ( v41 )
        {
          *(_DWORD *)(*(_QWORD *)v28 + 4 * v39) += v43;
          *(_BYTE *)(*(_QWORD *)(v28 + 72) + v39) |= 1u;
        }
        if ( v42 )
        {
          *(_DWORD *)(*(_QWORD *)(v28 + 8) + 4 * v39) += v40;
          *(_BYTE *)(*(_QWORD *)(v28 + 72) + v39) |= 2u;
        }
      }
      ++v39;
      --v35;
    }
    while ( v35 >= 0 );
  }
  return a1;
}

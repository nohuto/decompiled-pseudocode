/*
 * XREFs of itrp_SHE @ 0x1C02D8F60
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_SH_Common @ 0x1C02D9A4C (itrp_SH_Common.c)
 */

__int64 __fastcall itrp_SHE(__int64 a1, unsigned int a2)
{
  _WORD *v3; // r10
  unsigned __int16 v4; // r9
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax
  int v7; // ebp
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // eax
  int v11; // esi
  bool v12; // cc
  __int16 v13; // ax
  _WORD *v15; // r8
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  __int64 v19; // r13
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rsi
  _WORD *v23; // r9
  unsigned __int16 v24; // dx
  int v25; // ebp
  __int64 v26; // r15
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // ax
  int v29; // edi
  int v30; // ebx
  __int64 v31; // rbx
  __int64 v32; // rdi
  _WORD *v33; // r8
  unsigned __int16 v34; // dx
  unsigned __int16 v35; // cx
  __int64 v36; // rbp
  unsigned __int16 v37; // ax
  int v38; // r12d
  int v39; // r14d
  __int16 v40; // ax
  int v41; // r9d
  int v42; // r10d
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  _DWORD *v46; // r8
  unsigned __int64 v47; // rcx
  int v48; // edx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  _DWORD *v52; // r8
  unsigned __int64 v53; // rcx
  int v54; // edx
  __int64 v55; // rdx
  int v56; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v57[21]; // [rsp+24h] [rbp-54h] BYREF
  int v59; // [rsp+88h] [rbp+10h] BYREF

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
    v9 = HIDWORD(qword_1C032CA10);
    if ( qword_1C032C9F8 == LocalGS )
    {
      v10 = (unsigned __int16)v3[8];
      goto LABEL_11;
    }
    v12 = SHIDWORD(qword_1C032CA10) < *(_DWORD *)(qword_1C032CA00 + 440);
  }
  else
  {
    v15 = *(_WORD **)(qword_1C032CA00 + 344);
    v16 = v15[4];
    v17 = v15[6];
    v18 = v17;
    if ( v16 > v17 )
      v18 = v15[4];
    if ( v18 <= 1u )
    {
      v7 = 1;
    }
    else
    {
      if ( v16 > v17 )
        v17 = v15[4];
      v7 = v17;
    }
    v8 = qword_1C032C9C8;
    v9 = dword_1C032CA18;
    if ( qword_1C032C9F8 == qword_1C032C9C8 )
    {
      v10 = (unsigned __int16)v15[8];
LABEL_11:
      if ( v9 >= v10 || v9 < 0 )
        goto LABEL_22;
      v11 = 0;
      goto LABEL_18;
    }
    v12 = dword_1C032CA18 < *(_DWORD *)(qword_1C032CA00 + 440);
  }
  if ( !v12 || v9 < 0 )
    goto LABEL_22;
  v11 = 4;
LABEL_18:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v8) )
    goto LABEL_22;
  v13 = *(_WORD *)(v8 + 80);
  if ( v13 >= 1 && v13 <= v7 && v9 >= v11 + *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * (v13 - 1)) + 1 )
    goto LABEL_22;
  v19 = itrp_SH_Common(&v56, v57, &v59, a2);
  if ( (*(_QWORD *)qword_1C032CA00 ^ qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v20 = *(int *)qword_1C032C9E8;
  if ( (unsigned int)v20 > 1 )
  {
    dword_1C032CA50 = 4374;
    return qword_1C032CA58;
  }
  v21 = *(_BYTE *)(qword_1C032CA00 + 333);
  if ( v21 != 2 && (v21 || qword_1C032C9F8 != qword_1C032C9F8 + 112 * v20) )
  {
    dword_1C032CA50 = 4380;
    return qword_1C032CA58;
  }
  _mm_lfence();
  v22 = 112 * v20;
  v23 = *(_WORD **)(qword_1C032CA00 + 344);
  v24 = v23[4];
  v25 = *(__int16 *)(v22 + qword_1C032C9F8 + 80);
  v26 = *(__int16 *)(*(_QWORD *)(v22 + qword_1C032C9F8 + 64) + 2LL * (v25 - 1));
  v27 = v23[6];
  v28 = v27;
  if ( v24 > v27 )
    v28 = v23[4];
  if ( v28 <= 1u )
  {
    v29 = 1;
  }
  else
  {
    if ( v24 > v27 )
      v27 = v23[4];
    v29 = v27;
  }
  if ( qword_1C032C9F8 == v22 + qword_1C032C9F8 )
  {
    if ( (int)v26 >= (unsigned __int16)v23[8] || (int)v26 < 0 )
      goto LABEL_22;
    v30 = 0;
  }
  else
  {
    if ( (int)v26 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v26 < 0 )
      goto LABEL_22;
    v30 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v22 + qword_1C032C9F8) )
    goto LABEL_22;
  if ( (__int16)v25 >= 1 && v25 <= v29 )
  {
    _mm_lfence();
    if ( (int)v26 >= v30
                   + *(__int16 *)(*(_QWORD *)(v22 + qword_1C032C9F8 + 64)
                                + 2LL * (*(__int16 *)(v22 + qword_1C032C9F8 + 80) - 1))
                   + 1 )
      goto LABEL_22;
  }
  _mm_lfence();
  v31 = qword_1C032C9F8;
  v32 = v22 + qword_1C032C9F8;
  v33 = *(_WORD **)(qword_1C032CA00 + 344);
  v34 = v33[4];
  v35 = v33[6];
  v36 = **(__int16 **)(v22 + qword_1C032C9F8 + 56);
  v37 = v35;
  if ( v34 > v35 )
    v37 = v33[4];
  if ( v37 <= 1u )
  {
    v38 = 1;
  }
  else
  {
    if ( v34 > v35 )
      v35 = v33[4];
    v38 = v35;
  }
  if ( qword_1C032C9F8 == v32 )
  {
    if ( (int)v36 >= (unsigned __int16)v33[8] || (int)v36 < 0 )
      goto LABEL_22;
    v39 = 0;
  }
  else
  {
    if ( (int)v36 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v36 < 0 )
      goto LABEL_22;
    v39 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v22 + qword_1C032C9F8)
    || (v40 = *(_WORD *)(v32 + 80), v40 >= 1)
    && v40 <= v38
    && (_mm_lfence(),
        v31 = qword_1C032C9F8,
        v32 = v22 + qword_1C032C9F8,
        (int)v36 >= v39
                  + *(__int16 *)(*(_QWORD *)(v22 + qword_1C032C9F8 + 64)
                               + 2LL * (*(__int16 *)(v22 + qword_1C032C9F8 + 80) - 1))
                  + 1) )
  {
LABEL_22:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  if ( v19 == v32 )
  {
    _mm_lfence();
    v31 = qword_1C032C9F8;
    v41 = *(_DWORD *)(*(_QWORD *)(v22 + qword_1C032C9F8) + 4LL * v59);
    v42 = *(_DWORD *)(*(_QWORD *)(v22 + qword_1C032C9F8 + 8) + 4LL * v59);
  }
  else
  {
    v41 = 0;
    v42 = 0;
  }
  if ( (_WORD)dword_1C032C9DC )
  {
    _mm_lfence();
    v31 = qword_1C032C9F8;
    v43 = 1LL;
    v44 = *(_QWORD *)(v22 + qword_1C032C9F8);
    v45 = v44 + 4 * v26;
    v46 = (_DWORD *)(v44 + 4 * v36);
    v47 = (unsigned __int64)(4 * v26 - 4 * v36 + 4) >> 2;
    if ( (unsigned __int64)v46 > v45 )
      v47 = 0LL;
    if ( v47 )
    {
      v48 = v56;
      do
      {
        *v46 += v48;
        ++v43;
        ++v46;
      }
      while ( v43 <= v47 );
      v31 = qword_1C032C9F8;
    }
  }
  if ( HIWORD(dword_1C032C9DC) )
  {
    _mm_lfence();
    v31 = qword_1C032C9F8;
    v49 = 1LL;
    v50 = *(_QWORD *)(v22 + qword_1C032C9F8 + 8);
    v51 = v50 + 4 * v26;
    v52 = (_DWORD *)(v50 + 4 * v36);
    v53 = (unsigned __int64)(4 * v26 - 4 * v36 + 4) >> 2;
    if ( (unsigned __int64)v52 > v51 )
      v53 = 0LL;
    if ( v53 )
    {
      v54 = v57[0];
      do
      {
        *v52 += v54;
        ++v49;
        ++v52;
      }
      while ( v49 <= v53 );
      v31 = qword_1C032C9F8;
    }
  }
  if ( v19 == v22 + v31 )
  {
    v55 = v59;
    *(_DWORD *)(*(_QWORD *)(v22 + v31) + 4LL * v59) = v41;
    *(_DWORD *)(*(_QWORD *)(v22 + qword_1C032C9F8 + 8) + 4 * v55) = v42;
  }
  return a1;
}

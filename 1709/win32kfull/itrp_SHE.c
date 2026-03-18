/*
 * XREFs of itrp_SHE @ 0x1C02D2C60
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_SH_Common @ 0x1C02D3718 (itrp_SH_Common.c)
 */

__int64 __fastcall itrp_SHE(__int64 a1, unsigned int a2)
{
  _WORD *v3; // r10
  unsigned __int16 v4; // r9
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax
  int v7; // ebp
  __int64 v8; // rdi
  int v9; // r14d
  int v10; // ebx
  int v11; // eax
  int v12; // esi
  bool v13; // cc
  __int16 v14; // ax
  _WORD *v16; // r8
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  __int64 v20; // r12
  __int64 v21; // rdx
  char v22; // al
  int v23; // ebx
  __int64 v24; // rdi
  _WORD *v25; // r9
  unsigned __int16 v26; // dx
  int v27; // r15d
  __int64 v28; // rbp
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // ax
  int v31; // esi
  __int64 v32; // rbx
  _WORD *v33; // r9
  unsigned __int16 v34; // r8
  unsigned __int16 v35; // cx
  __int64 v36; // rsi
  unsigned __int16 v37; // ax
  int v38; // r15d
  __int16 v39; // ax
  int v40; // r9d
  int v41; // r10d
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  _DWORD *v44; // r8
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  int v47; // edx
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  _DWORD *v51; // r8
  unsigned __int64 v52; // rcx
  int v53; // edx
  __int64 v54; // rdx
  int v55; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v56[21]; // [rsp+24h] [rbp-54h] BYREF
  int v58; // [rsp+88h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v3 = *(_WORD **)(qword_1C0327C90 + 344);
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
    v9 = 5;
    v10 = HIDWORD(qword_1C0327CA0);
    if ( qword_1C0327C88 == LocalGS )
    {
      v11 = (unsigned __int16)v3[8];
      goto LABEL_11;
    }
    v13 = SHIDWORD(qword_1C0327CA0) < *(_DWORD *)(qword_1C0327C90 + 440);
  }
  else
  {
    v16 = *(_WORD **)(qword_1C0327C90 + 344);
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
    v8 = qword_1C0327C58;
    v9 = 5;
    v10 = dword_1C0327CA8;
    if ( qword_1C0327C88 == qword_1C0327C58 )
    {
      v11 = (unsigned __int16)v16[8];
LABEL_11:
      if ( v10 >= v11 || v10 < 0 )
        goto LABEL_22;
      v12 = 1;
      goto LABEL_18;
    }
    v13 = dword_1C0327CA8 < *(_DWORD *)(qword_1C0327C90 + 440);
  }
  if ( !v13 || v10 < 0 )
    goto LABEL_22;
  v12 = 5;
LABEL_18:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v8) )
    goto LABEL_22;
  v14 = *(_WORD *)(v8 + 80);
  if ( v14 >= 1 && v14 <= v7 && v10 >= v12 + *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * (v14 - 1)) )
    goto LABEL_22;
  v20 = itrp_SH_Common(&v55, v56, &v58, a2);
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v21 = *(int *)qword_1C0327C78;
  if ( (unsigned int)v21 > 1 )
  {
    dword_1C0327CE0 = 4374;
    return qword_1C0327CE8;
  }
  v22 = *(_BYTE *)(qword_1C0327C90 + 333);
  if ( v22 != 2 && (v22 || qword_1C0327C88 != qword_1C0327C88 + 112 * v21) )
  {
    dword_1C0327CE0 = 4380;
    return qword_1C0327CE8;
  }
  _mm_lfence();
  v23 = 1;
  v24 = 112 * v21;
  v25 = *(_WORD **)(qword_1C0327C90 + 344);
  v26 = v25[4];
  v27 = *(__int16 *)(v24 + qword_1C0327C88 + 80);
  v28 = *(__int16 *)(*(_QWORD *)(v24 + qword_1C0327C88 + 64) + 2LL * (v27 - 1));
  v29 = v25[6];
  v30 = v29;
  if ( v26 > v29 )
    v30 = v25[4];
  if ( v30 <= 1u )
  {
    v31 = 1;
  }
  else
  {
    if ( v26 > v29 )
      v29 = v25[4];
    v31 = v29;
  }
  if ( qword_1C0327C88 == v24 + qword_1C0327C88 )
  {
    if ( (int)v28 >= (unsigned __int16)v25[8] || (int)v28 < 0 )
      goto LABEL_22;
  }
  else
  {
    if ( (int)v28 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v28 < 0 )
      goto LABEL_22;
    v23 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v24 + qword_1C0327C88) )
    goto LABEL_22;
  if ( (__int16)v27 >= 1 && v27 <= v31 )
  {
    _mm_lfence();
    if ( (int)v28 >= v23
                   + *(__int16 *)(*(_QWORD *)(v24 + qword_1C0327C88 + 64)
                                + 2LL * (*(__int16 *)(v24 + qword_1C0327C88 + 80) - 1)) )
      goto LABEL_22;
  }
  _mm_lfence();
  v32 = v24 + qword_1C0327C88;
  v33 = *(_WORD **)(qword_1C0327C90 + 344);
  v34 = v33[4];
  v35 = v33[6];
  v36 = **(__int16 **)(v24 + qword_1C0327C88 + 56);
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
  if ( qword_1C0327C88 == v32 )
  {
    if ( (int)v36 >= (unsigned __int16)v33[8] || (int)v36 < 0 )
      goto LABEL_22;
    v9 = 1;
  }
  else if ( (int)v36 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v36 < 0 )
  {
    goto LABEL_22;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v24 + qword_1C0327C88)
    || (v39 = *(_WORD *)(v32 + 80), v39 >= 1)
    && v39 <= v38
    && (_mm_lfence(),
        v32 = v24 + qword_1C0327C88,
        (int)v36 >= v9
                  + *(__int16 *)(*(_QWORD *)(v24 + qword_1C0327C88 + 64)
                               + 2LL * (*(__int16 *)(v24 + qword_1C0327C88 + 80) - 1))) )
  {
LABEL_22:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  if ( v20 == v32 )
  {
    _mm_lfence();
    v40 = *(_DWORD *)(*(_QWORD *)(v24 + qword_1C0327C88) + 4LL * v58);
    v41 = *(_DWORD *)(*(_QWORD *)(v24 + qword_1C0327C88 + 8) + 4LL * v58);
  }
  else
  {
    v40 = 0;
    v41 = 0;
  }
  if ( (_WORD)dword_1C0327C6C )
  {
    _mm_lfence();
    v42 = *(_QWORD *)(v24 + qword_1C0327C88);
    v43 = v42 + 4 * v28;
    v44 = (_DWORD *)(v42 + 4 * v36);
    v45 = 1LL;
    v46 = (unsigned __int64)(4 * v28 - 4 * v36 + 4) >> 2;
    if ( (unsigned __int64)v44 > v43 )
      v46 = 0LL;
    if ( v46 )
    {
      v47 = v55;
      do
      {
        *v44 += v47;
        ++v45;
        ++v44;
      }
      while ( v45 <= v46 );
    }
  }
  if ( HIWORD(dword_1C0327C6C) )
  {
    _mm_lfence();
    v48 = *(_QWORD *)(v24 + qword_1C0327C88 + 8);
    v49 = 1LL;
    v50 = v48 + 4 * v28;
    v51 = (_DWORD *)(v48 + 4 * v36);
    v52 = (unsigned __int64)(4 * v28 - 4 * v36 + 4) >> 2;
    if ( (unsigned __int64)v51 > v50 )
      v52 = 0LL;
    if ( v52 )
    {
      v53 = v56[0];
      do
      {
        *v51 += v53;
        ++v49;
        ++v51;
      }
      while ( v49 <= v52 );
    }
  }
  if ( v20 == v24 + qword_1C0327C88 )
  {
    v54 = v58;
    *(_DWORD *)(*(_QWORD *)(v24 + qword_1C0327C88) + 4LL * v58) = v40;
    *(_DWORD *)(*(_QWORD *)(v24 + qword_1C0327C88 + 8) + 4 * v54) = v41;
  }
  return a1;
}

/*
 * XREFs of itrp_SHC @ 0x1C02D2810
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     ExecutePhaseControl @ 0x1C02C90A8 (ExecutePhaseControl.c)
 *     itrp_SH_Common @ 0x1C02D3718 (itrp_SH_Common.c)
 */

__int64 __fastcall itrp_SHC(__int64 a1, unsigned int a2)
{
  _WORD *v3; // r10
  unsigned __int16 v4; // r9
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax
  int v7; // r14d
  __int64 v8; // rsi
  int v9; // r15d
  int v10; // edi
  int v11; // eax
  int v12; // ebp
  bool v13; // cc
  __int16 v14; // ax
  _WORD *v16; // r8
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  __int64 v20; // rbp
  int v21; // edi
  __int64 v22; // rsi
  __int16 v23; // ax
  char v24; // cl
  __int64 v25; // rdi
  __int64 v26; // r13
  _WORD *v27; // r8
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // cx
  int v30; // eax
  int v31; // esi
  int v32; // r14d
  unsigned __int16 v33; // ax
  int v34; // r12d
  __int16 v35; // ax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r8d
  __int16 v39; // r10
  __int16 v40; // r11
  int v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+24h] [rbp-54h]
  _DWORD v43[20]; // [rsp+28h] [rbp-50h] BYREF
  int v45; // [rsp+88h] [rbp+10h] BYREF
  __int16 v46; // [rsp+90h] [rbp+18h]
  int v47; // [rsp+98h] [rbp+20h] BYREF

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
LABEL_15:
    if ( !v13 || v10 < 0 )
      goto LABEL_22;
    v12 = 5;
    goto LABEL_18;
  }
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
  if ( qword_1C0327C88 != qword_1C0327C58 )
  {
    v13 = dword_1C0327CA8 < *(_DWORD *)(qword_1C0327C90 + 440);
    goto LABEL_15;
  }
  v11 = (unsigned __int16)v16[8];
LABEL_11:
  if ( v10 >= v11 || v10 < 0 )
    goto LABEL_22;
  v12 = 1;
LABEL_18:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v8) )
    goto LABEL_22;
  v14 = *(_WORD *)(v8 + 80);
  if ( v14 >= 1 && v14 <= v7 && v10 >= v12 + *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * (v14 - 1)) )
    goto LABEL_22;
  v20 = itrp_SH_Common(&v45, v43, &v47, a2);
  v21 = v45;
  v41 = v45;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v22 = *(int *)qword_1C0327C78;
  if ( v20 != qword_1C0327C88 && *(_BYTE *)(qword_1C0327C90 + 333) == 2 )
  {
    v23 = *(_WORD *)(qword_1C0327C90 + 452);
    if ( (v23 & 1) != 0 && (v23 & 2) != 0 && (v23 & 4) == 0 && !*(_DWORD *)(v20 + 96) )
    {
      ExecutePhaseControl((__int64)&LocalGS, v20);
      v41 = *(_DWORD *)(*(_QWORD *)(v20 + 104) + 12LL * v47 + 8) + v21;
    }
  }
  v24 = *(_BYTE *)(qword_1C0327C90 + 333);
  if ( v24 != 2 && (v24 || qword_1C0327C88 != qword_1C0327C60) )
  {
    dword_1C0327CE0 = 4380;
    return qword_1C0327CE8;
  }
  if ( (int)v22 < 0 || (int)v22 >= *(__int16 *)(qword_1C0327C60 + 80) )
  {
    dword_1C0327CE0 = 4378;
    return qword_1C0327CE8;
  }
  _mm_lfence();
  v25 = qword_1C0327C60;
  LOWORD(v45) = dword_1C0327C6C;
  v26 = *(_QWORD *)(qword_1C0327C60 + 64);
  v27 = *(_WORD **)(qword_1C0327C90 + 344);
  v46 = HIWORD(dword_1C0327C6C);
  v28 = v27[4];
  v29 = v27[6];
  v30 = *(__int16 *)(*(_QWORD *)(qword_1C0327C60 + 56) + 2 * v22);
  v31 = *(__int16 *)(v26 + 2 * v22);
  v42 = v30;
  v32 = v31 - v30;
  v33 = v29;
  if ( v28 > v29 )
    v33 = v27[4];
  if ( v33 <= 1u )
  {
    v34 = 1;
  }
  else
  {
    if ( v28 > v29 )
      v29 = v27[4];
    v34 = v29;
  }
  if ( qword_1C0327C88 == qword_1C0327C60 )
  {
    if ( v31 >= (unsigned __int16)v27[8] || v31 < 0 )
      goto LABEL_22;
    v9 = 1;
  }
  else if ( v31 >= *(_DWORD *)(qword_1C0327C90 + 440) || v31 < 0 )
  {
    goto LABEL_22;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C60)
    || (v35 = *(_WORD *)(v25 + 80), v35 >= 1) && v35 <= v34 && v31 >= v9 + *(__int16 *)(v26 + 2LL * (v35 - 1)) )
  {
LABEL_22:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  if ( v32 >= 0 )
  {
    v36 = v42;
    v37 = v47;
    v38 = v43[0];
    v39 = v45;
    v40 = v46;
    do
    {
      if ( v36 != v37 || v20 != v25 )
      {
        if ( v39 )
        {
          *(_DWORD *)(*(_QWORD *)v25 + 4 * v36) += v41;
          *(_BYTE *)(*(_QWORD *)(v25 + 72) + v36) |= 1u;
        }
        if ( v40 )
        {
          *(_DWORD *)(*(_QWORD *)(v25 + 8) + 4 * v36) += v38;
          *(_BYTE *)(*(_QWORD *)(v25 + 72) + v36) |= 2u;
        }
      }
      ++v36;
      --v32;
    }
    while ( v32 >= 0 );
  }
  return a1;
}

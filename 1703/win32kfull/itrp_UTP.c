/*
 * XREFs of itrp_UTP @ 0x1C02DAA30
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_UTP(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // r14d
  _WORD *v6; // r9
  __int64 v7; // rdi
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  int v11; // r15d
  __int16 v12; // ax

  v1 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 72);
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v4 = qword_1C032C9E8, !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2)) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v5 = 4;
  qword_1C032C9E8 -= 4LL;
  v6 = *(_WORD **)(qword_1C032CA00 + 344);
  v7 = *(int *)(v4 - 4);
  v8 = v6[4];
  v9 = v6[6];
  v10 = v9;
  if ( v8 > v9 )
    v10 = v6[4];
  if ( v10 <= 1u )
  {
    v11 = 1;
  }
  else
  {
    if ( v8 > v9 )
      v9 = v6[4];
    v11 = v9;
  }
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_14;
    v5 = 0;
  }
  else if ( (int)v7 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v7 < 0 )
  {
    goto LABEL_14;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v12 = *(_WORD *)(v1 + 80), v12 >= 1)
    && v12 <= v11
    && (int)v7 >= v5 + *(__int16 *)(*(_QWORD *)(v1 + 64) + 2LL * (v12 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  if ( (_WORD)dword_1C032C9DC )
    *(_BYTE *)(v7 + v3) &= ~1u;
  if ( HIWORD(dword_1C032C9DC) )
    *(_BYTE *)(v7 + v3) &= ~2u;
  return a1;
}

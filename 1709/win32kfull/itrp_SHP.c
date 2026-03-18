/*
 * XREFs of itrp_SHP @ 0x1C02D3180
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_SHP_Common @ 0x1C02D3484 (itrp_SHP_Common.c)
 *     itrp_SH_Common @ 0x1C02D3718 (itrp_SH_Common.c)
 */

__int64 __fastcall itrp_SHP(int a1, unsigned int a2)
{
  _WORD *v4; // r10
  unsigned __int16 v5; // r9
  unsigned __int16 v6; // r8
  unsigned __int16 v7; // ax
  int v8; // ebp
  __int64 v9; // rsi
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  bool v13; // cc
  __int16 v14; // ax
  _WORD *v16; // r8
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  int v22; // [rsp+88h] [rbp+20h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v4 = *(_WORD **)(qword_1C0327C90 + 344);
    v5 = v4[4];
    v6 = v4[6];
    v7 = v6;
    if ( v5 > v6 )
      v7 = v4[4];
    if ( v7 <= 1u )
    {
      v8 = 1;
    }
    else
    {
      if ( v5 > v6 )
        v6 = v4[4];
      v8 = v6;
    }
    v9 = LocalGS;
    v10 = HIDWORD(qword_1C0327CA0);
    if ( qword_1C0327C88 == LocalGS )
    {
      v11 = (unsigned __int16)v4[8];
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
    v8 = 1;
  }
  else
  {
    if ( v17 > v18 )
      v18 = v16[4];
    v8 = v18;
  }
  v9 = qword_1C0327C58;
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
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v9)
    || (v14 = *(_WORD *)(v9 + 80), v14 >= 1)
    && v14 <= v8
    && v10 >= v12 + *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v14 - 1)) )
  {
LABEL_22:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  itrp_SH_Common(&v21, &v20, &v22, a2);
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || dword_1C0327CB0 + 1LL > (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  return itrp_SHP_Common(a1, v22, 0, v21, v20);
}

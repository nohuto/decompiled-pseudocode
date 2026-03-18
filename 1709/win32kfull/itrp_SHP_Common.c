/*
 * XREFs of itrp_SHP_Common @ 0x1C02D3484
 * Callers:
 *     itrp_SHP @ 0x1C02D3180 (itrp_SHP.c)
 *     itrp_SHPIX @ 0x1C02D3390 (itrp_SHPIX.c)
 * Callees:
 *     AddDistance @ 0x1C02C8B60 (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_SHP_Common(__int64 a1, int a2, char a3, int a4, int a5)
{
  _QWORD *v5; // r12
  int v6; // r13d
  __int64 v7; // rbp
  _WORD *v8; // r8
  __int64 v9; // rbx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // ax
  int v13; // r15d
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // esi
  __int64 v17; // rcx
  __int16 v18; // ax
  __int16 v19; // r8
  __int16 v20; // ax
  __int64 result; // rax

  v5 = (_QWORD *)qword_1C0327C60;
  v6 = dword_1C0327CB0 + 1;
  if ( dword_1C0327CB0 == -1 )
  {
LABEL_44:
    result = a1;
    dword_1C0327CB0 = 0;
    return result;
  }
  while ( 1 )
  {
    v7 = qword_1C0327C90;
    qword_1C0327C78 -= 4LL;
    v8 = *(_WORD **)(qword_1C0327C90 + 344);
    v9 = *(int *)qword_1C0327C78;
    v10 = v8[4];
    v11 = v8[6];
    v12 = v11;
    if ( v10 > v11 )
      v12 = v8[4];
    if ( v12 <= 1u )
    {
      v13 = 1;
    }
    else
    {
      if ( v10 > v11 )
        v11 = v8[4];
      v13 = v11;
    }
    v14 = qword_1C0327C88;
    v15 = qword_1C0327C60;
    if ( qword_1C0327C88 != qword_1C0327C60 )
      break;
    if ( (int)v9 >= (unsigned __int16)v8[8] || (int)v9 < 0 )
      goto LABEL_45;
    v16 = 1;
LABEL_16:
    if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C60) )
      goto LABEL_45;
    v18 = *(_WORD *)(v15 + 80);
    if ( v18 >= 1 && v18 <= v13 )
    {
      v17 = v18 - 1;
      if ( (int)v9 >= v16 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2 * v17) )
        goto LABEL_45;
    }
    if ( v5 != (_QWORD *)v14 && *(_BYTE *)(v7 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v7 + 452) & 2) != 0 )
      AddDistance(v17, (__int64)v5, a2, v9, 3);
    if ( !a3 || (v19 = *(_WORD *)(qword_1C0327C90 + 454), (v19 & 0x10) == 0) )
    {
LABEL_39:
      if ( (_WORD)dword_1C0327C6C )
      {
        *(_DWORD *)(*v5 + 4 * v9) += a4;
        *(_BYTE *)(v5[9] + v9) |= 1u;
      }
      if ( HIWORD(dword_1C0327C6C) )
      {
        *(_DWORD *)(v5[1] + 4 * v9) += a5;
        *(_BYTE *)(v5[9] + v9) |= 2u;
      }
      goto LABEL_43;
    }
    if ( (*(_BYTE *)(qword_1C0327C90 + 452) & 4) != 0 )
    {
      if ( dword_1C0327C68 == 0x4000
        && (*(_BYTE *)(qword_1C0327C90 + 341)
         || (*(_BYTE *)(v9 + *(_QWORD *)(qword_1C0327C60 + 72)) & 1) != 0 && (v19 & 1) == 0) )
      {
        goto LABEL_39;
      }
    }
    else if ( dword_1C0327C68 == 0x40000000
           && (*(_BYTE *)(qword_1C0327C90 + 341)
            || (*(_BYTE *)(v9 + *(_QWORD *)(qword_1C0327C60 + 72)) & 2) != 0 && (v19 & 2) == 0) )
    {
      v20 = 1;
      goto LABEL_38;
    }
    v20 = 0;
LABEL_38:
    if ( v20 )
      goto LABEL_39;
LABEL_43:
    if ( !--v6 )
      goto LABEL_44;
  }
  if ( (int)v9 < *(_DWORD *)(qword_1C0327C90 + 440) && (int)v9 >= 0 )
  {
    v16 = 5;
    goto LABEL_16;
  }
LABEL_45:
  result = qword_1C0327CE8;
  dword_1C0327CE0 = 4370;
  return result;
}

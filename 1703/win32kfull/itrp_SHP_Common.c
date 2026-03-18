/*
 * XREFs of itrp_SHP_Common @ 0x1C02D9794
 * Callers:
 *     itrp_SHP @ 0x1C02D9490 (itrp_SHP.c)
 *     itrp_SHPIX @ 0x1C02D96A0 (itrp_SHPIX.c)
 * Callees:
 *     AddDistance @ 0x1C02CEDAC (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_SHP_Common(__int64 a1, int a2, char a3, int a4, int a5)
{
  __int64 v5; // rsi
  _QWORD *v7; // r15
  int v8; // r12d
  __int64 v9; // rbx
  _WORD *v10; // r8
  __int64 v11; // rdi
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // ax
  int v15; // r14d
  int v16; // ebp
  __int64 v17; // rcx
  __int16 v18; // ax
  __int16 v19; // r8
  bool v20; // zf
  __int64 result; // rax

  v5 = qword_1C032C9D0;
  v7 = (_QWORD *)qword_1C032C9D0;
  v8 = dword_1C032CA20 + 1;
  if ( dword_1C032CA20 == -1 )
  {
LABEL_41:
    dword_1C032CA20 = 0;
    return a1;
  }
  v9 = qword_1C032CA00;
  while ( 1 )
  {
    qword_1C032C9E8 -= 4LL;
    v10 = *(_WORD **)(v9 + 344);
    v11 = *(int *)qword_1C032C9E8;
    v12 = v10[4];
    v13 = v10[6];
    v14 = v13;
    if ( v12 > v13 )
      v14 = v10[4];
    if ( v14 <= 1u )
    {
      v15 = 1;
    }
    else
    {
      if ( v12 > v13 )
        v13 = v10[4];
      v15 = v13;
    }
    if ( qword_1C032C9F8 != v5 )
      break;
    if ( (int)v11 >= (unsigned __int16)v10[8] || (int)v11 < 0 )
      goto LABEL_42;
    v16 = 0;
LABEL_17:
    if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
      goto LABEL_42;
    v18 = *(_WORD *)(v5 + 80);
    if ( v18 >= 1 && v18 <= v15 )
    {
      v17 = (unsigned int)*(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v18 - 1));
      if ( (int)v11 >= (int)v17 + v16 + 1 )
        goto LABEL_42;
    }
    if ( v7 != (_QWORD *)qword_1C032C9F8
      && *(_BYTE *)(v9 + 333) == 2
      && word_1C032CA74
      && (*(_BYTE *)(v9 + 452) & 2) != 0 )
    {
      AddDistance(v17, (__int64)v7, a2, v11, 3);
      v9 = qword_1C032CA00;
      v5 = qword_1C032C9D0;
    }
    if ( !a3 || (v19 = *(_WORD *)(v9 + 454), (v19 & 0x10) == 0) )
    {
LABEL_36:
      if ( (_WORD)dword_1C032C9DC )
      {
        *(_DWORD *)(*v7 + 4 * v11) += a4;
        *(_BYTE *)(v7[9] + v11) |= 1u;
        v9 = qword_1C032CA00;
        v5 = qword_1C032C9D0;
      }
      if ( HIWORD(dword_1C032C9DC) )
      {
        *(_DWORD *)(v7[1] + 4 * v11) += a5;
        *(_BYTE *)(v7[9] + v11) |= 2u;
        v9 = qword_1C032CA00;
        v5 = qword_1C032C9D0;
      }
      goto LABEL_40;
    }
    if ( (~*(_BYTE *)(v9 + 452) & 4) != 0 )
    {
      if ( dword_1C032C9D8 != 0x40000000 )
        goto LABEL_40;
      if ( *(_BYTE *)(v9 + 341) )
        goto LABEL_36;
      v20 = (!_bittest16(&v19, 1u) & (*(_BYTE *)(v11 + *(_QWORD *)(v5 + 72)) >> 1)) == 0;
    }
    else
    {
      if ( dword_1C032C9D8 != 0x4000 )
        goto LABEL_40;
      if ( *(_BYTE *)(v9 + 341) )
        goto LABEL_36;
      v20 = (((*(_WORD *)(v9 + 454) & 1) == 0) & *(_BYTE *)(v11 + *(_QWORD *)(v5 + 72))) == 0;
    }
    if ( !v20 )
      goto LABEL_36;
LABEL_40:
    if ( !--v8 )
      goto LABEL_41;
  }
  if ( (int)v11 < *(_DWORD *)(v9 + 440) && (int)v11 >= 0 )
  {
    v16 = 4;
    goto LABEL_17;
  }
LABEL_42:
  result = qword_1C032CA58;
  dword_1C032CA50 = 4370;
  return result;
}

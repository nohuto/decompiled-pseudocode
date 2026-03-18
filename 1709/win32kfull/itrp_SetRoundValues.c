/*
 * XREFs of itrp_SetRoundValues @ 0x1C02D4378
 * Callers:
 *     itrp_S45ROUND @ 0x1C02D1D90 (itrp_S45ROUND.c)
 *     itrp_SROUND @ 0x1C02D3D70 (itrp_SROUND.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall itrp_SetRoundValues(char a1, int a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int16 v4; // ax
  int v5; // r9d
  int v6; // r9d
  __int16 v7; // ax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v2 = qword_1C0327C90;
  v3 = a1 & 0xC0;
  if ( a2 )
  {
    if ( (a1 & 0xC0) == 0 )
    {
      *(_WORD *)(qword_1C0327C90 + 142) = 32;
      goto LABEL_9;
    }
    v4 = 64;
    v5 = v3 - 64;
    if ( v5 )
    {
      if ( v5 == 64 )
      {
        *(_WORD *)(qword_1C0327C90 + 142) = 128;
        goto LABEL_9;
      }
      v4 = 999;
    }
    *(_WORD *)(qword_1C0327C90 + 142) = v4;
LABEL_9:
    *(_DWORD *)(v2 + 136) = ~(*(__int16 *)(v2 + 142) - 1);
    goto LABEL_18;
  }
  *(_WORD *)(qword_1C0327C90 + 140) = 11591;
  if ( (a1 & 0xC0) == 0 )
  {
    v7 = 5795;
LABEL_16:
    *(_WORD *)(v2 + 140) = v7;
    goto LABEL_17;
  }
  v6 = v3 - 64;
  if ( v6 )
  {
    if ( v6 == 64 )
      v7 = 23182;
    else
      v7 = 999;
    goto LABEL_16;
  }
LABEL_17:
  *(_WORD *)(v2 + 142) = (*(__int16 *)(v2 + 140) + 128) >> 8;
LABEL_18:
  v8 = a1 & 0x30;
  if ( (a1 & 0x30) == 0 )
  {
    *(_WORD *)(v2 + 144) = 0;
    goto LABEL_27;
  }
  switch ( v8 )
  {
    case 16:
      v9 = (*(__int16 *)(v2 + 142) + 2) >> 2;
      goto LABEL_25;
    case 32:
      v9 = (*(__int16 *)(v2 + 142) + 1) >> 1;
LABEL_25:
      *(_WORD *)(v2 + 144) = v9;
      break;
    case 48:
      *(_WORD *)(v2 + 144) = (*(__int16 *)(v2 + 142) + 2 * (*(__int16 *)(v2 + 142) + 1)) >> 2;
      break;
  }
LABEL_27:
  if ( (a1 & 0xF) != 0 )
  {
    v10 = *(__int16 *)(v2 + 142);
    *(_WORD *)(v2 + 146) = (v10 * ((a1 & 0xF) - 4) + 4) >> 3;
  }
  else
  {
    LOWORD(v10) = *(_WORD *)(v2 + 142) - 1;
    *(_WORD *)(v2 + 146) = v10;
  }
  return v10;
}

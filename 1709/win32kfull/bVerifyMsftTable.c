/*
 * XREFs of bVerifyMsftTable @ 0x1C022A17C
 * Callers:
 *     bComputeIDs @ 0x1C022783C (bComputeIDs.c)
 * Callees:
 *     IsValidFormat4TableSize @ 0x1C022762C (IsValidFormat4TableSize.c)
 */

__int64 __fastcall bVerifyMsftTable(
        _WORD *a1,
        _DWORD *a2,
        int *a3,
        _DWORD *a4,
        __int16 a5,
        int *a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  char *v14; // r8
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // bp
  char *v17; // r11
  char *v18; // rsi
  int v19; // r9d
  int v20; // eax
  int v21; // eax
  int v22; // r10d
  signed __int64 v23; // rsi
  unsigned __int16 v24; // dx
  unsigned __int16 v25; // r9

  if ( !(unsigned int)IsValidFormat4TableSize(a1, a9, a8, a7) )
    return 0LL;
  v14 = (char *)(a1 + 7);
  v15 = __ROR2__(a1[3], 8) >> 1;
  if ( a1[v15 + 6] != 0xFFFF )
    return 0LL;
  v16 = 0;
  *a2 = 3;
  v17 = &v14[2 * v15];
  v18 = &v14[2 * v15 + 2];
  v19 = (unsigned __int16)__ROR2__(*(_WORD *)v18, 8);
  *a3 = v19;
  *a6 = v19;
  if ( a5 == 1 )
  {
    v20 = 0;
    if ( (v19 & 0xFF00) == 0xF000 )
      v20 = 61440;
  }
  else
  {
    v21 = v19 & 0xFF00;
    if ( (v19 & 0xFF00) == 0 || v21 == 57344 )
    {
      *a3 = 0;
      goto LABEL_14;
    }
    if ( v21 == 61440 )
    {
      *a3 = 61440;
      goto LABEL_14;
    }
    v20 = v19 - 32;
  }
  *a3 = v20;
LABEL_14:
  if ( *(_WORD *)&v18[2 * v15 - 2] == 0xFFFF && v15 > 1u )
  {
    --v15;
    v17 -= 2;
  }
  v22 = v15;
  a4[1] = v15;
  *a4 = 0;
  a4[3] = 0;
  if ( v14 < v17 )
  {
    v23 = v18 - v14;
    do
    {
      v24 = __ROR2__(*(_WORD *)&v14[v23], 8);
      v25 = __ROR2__(*(_WORD *)v14, 8);
      if ( v25 < v24 || v16 > v24 || !v24 && v25 == 0xFFFF )
        return 0LL;
      a4[3] += v25 - v24 + 1;
      if ( v16 < 0xB7u && v24 > 0xB7u )
        *a4 |= 2u;
      if ( v24 <= 0x2219u && v25 >= 0x2219u )
        *a4 |= 1u;
      v14 += 2;
      v16 = v25;
    }
    while ( v14 < v17 );
  }
  if ( (*(_BYTE *)a4 & 3) == 3 )
  {
    ++a4[3];
    a4[1] = v22 + 1;
  }
  return 1LL;
}

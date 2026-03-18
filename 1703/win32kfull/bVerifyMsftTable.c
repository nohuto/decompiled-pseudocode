/*
 * XREFs of bVerifyMsftTable @ 0x1C0228BE8
 * Callers:
 *     bComputeIDs @ 0x1C02262C4 (bComputeIDs.c)
 * Callees:
 *     IsValidFormat4TableSize @ 0x1C02260AC (IsValidFormat4TableSize.c)
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
  unsigned __int16 v14; // cx
  _WORD *v15; // rsi
  unsigned __int16 v16; // cx
  __int64 v17; // r9
  unsigned __int16 v18; // bp
  _WORD *v19; // r10
  _WORD *v20; // r11
  int v21; // r8d
  int v22; // eax
  int v23; // eax
  unsigned __int16 v24; // dx
  unsigned __int16 v25; // r8

  if ( !(unsigned int)IsValidFormat4TableSize(a1, a9, a8, a7) )
    return 0LL;
  v14 = __ROR2__(a1[3], 8);
  v15 = a1 + 7;
  v16 = v14 >> 1;
  v17 = v16 - 1;
  if ( v15[v17] != 0xFFFF )
    return 0LL;
  v18 = 0;
  *a2 = 3;
  v19 = &v15[v16];
  v20 = &v15[v16 + 1];
  v21 = (unsigned __int16)__ROR2__(*v20, 8);
  *a3 = v21;
  *a6 = v21;
  if ( a5 == 1 )
  {
    v22 = 0;
    if ( (v21 & 0xFF00) == 0xF000 )
      v22 = 61440;
  }
  else
  {
    v23 = v21 & 0xFF00;
    if ( (v21 & 0xFF00) == 0 || v23 == 57344 )
    {
      *a3 = 0;
      goto LABEL_14;
    }
    if ( v23 == 61440 )
    {
      *a3 = 61440;
      goto LABEL_14;
    }
    v22 = v21 - 32;
  }
  *a3 = v22;
LABEL_14:
  if ( v20[v17] == 0xFFFF && v16 > 1u )
  {
    --v16;
    --v19;
  }
  a4[1] = v16;
  *a4 = 0;
  for ( a4[3] = 0; v15 < v19; v18 = v25 )
  {
    v24 = __ROR2__(*v20, 8);
    v25 = __ROR2__(*v15, 8);
    if ( v25 < v24 || v18 > v24 || !v24 && v25 == 0xFFFF )
      return 0LL;
    a4[3] += v25 - v24 + 1;
    if ( v18 < 0xB7u && v24 > 0xB7u )
      *a4 |= 2u;
    if ( v24 <= 0x2219u && v25 >= 0x2219u )
      *a4 |= 1u;
    ++v20;
    ++v15;
  }
  if ( (*(_BYTE *)a4 & 3) == 3 )
  {
    ++a4[3];
    a4[1] = v16 + 1;
  }
  return 1LL;
}

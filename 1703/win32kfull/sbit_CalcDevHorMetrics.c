/*
 * XREFs of sbit_CalcDevHorMetrics @ 0x1C02C2D9C
 * Callers:
 *     fs__Contour @ 0x1C02BC2C8 (fs__Contour.c)
 * Callees:
 *     SubstituteHorMetrics @ 0x1C02C2BF0 (SubstituteHorMetrics.c)
 *     UScaleX @ 0x1C02C2D20 (UScaleX.c)
 *     sbit_ValidateScaleX @ 0x1C02C4E6C (sbit_ValidateScaleX.c)
 *     sfac_GetSbitMetrics @ 0x1C02CA2A8 (sfac_GetSbitMetrics.c)
 */

__int64 __fastcall sbit_CalcDevHorMetrics(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int16 *v6; // r14
  unsigned __int16 *v7; // r15
  unsigned __int16 *v9; // r12
  __int64 result; // rax
  _WORD *v12; // rcx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // dx
  _WORD *v15; // rcx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  _WORD *v18; // rcx
  unsigned __int16 v19; // ax
  int v20; // r10d
  int v21; // r11d
  _WORD *v22; // rcx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // dx
  _WORD *v25; // rcx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // dx
  _WORD *v28; // rcx
  unsigned __int16 v29; // ax
  int v30; // r11d
  int v31; // r10d
  _BYTE v32[72]; // [rsp+70h] [rbp-48h] BYREF
  int v33; // [rsp+C0h] [rbp+8h] BYREF
  _DWORD *v34; // [rsp+D0h] [rbp+18h]

  v34 = a3;
  v6 = (unsigned __int16 *)(a1 + 50);
  v7 = (unsigned __int16 *)(a1 + 74);
  v9 = (unsigned __int16 *)(a1 + 48);
  result = sfac_GetSbitMetrics(
             a2,
             *(unsigned __int16 *)(a1 + 40),
             *(unsigned __int16 *)(a1 + 42),
             *(_DWORD *)(a1 + 4),
             a1 + 46,
             a1 + 48,
             a1 + 74,
             a1 + 76,
             a1 + 78,
             a1 + 80,
             a1 + 50,
             a1 + 52,
             (__int64)&v33,
             (__int64)v32);
  if ( !(_DWORD)result )
  {
    if ( v33 || (result = SubstituteHorMetrics((_WORD *)a1, a2), !(_DWORD)result) )
    {
      if ( !*(_WORD *)(a1 + 38) )
      {
        result = sbit_ValidateScaleX(a1);
        if ( (_DWORD)result )
          return result;
        v23 = UScaleX(v22, *v6);
        v24 = *v7;
        *v34 = v23 << 6;
        v26 = UScaleX(v25, v24);
        v27 = *v9;
        *a4 = v26 << 6;
        v29 = UScaleX(v28, v27);
        *a5 = v30 - (v29 << 6) - v31;
        return 0LL;
      }
      if ( *(_WORD *)(a1 + 38) != 2 )
        return 6146LL;
      result = sbit_ValidateScaleX(a1);
      if ( !(_DWORD)result )
      {
        v13 = UScaleX(v12, *v6);
        v14 = *v7;
        *v34 = -64 * v13;
        v16 = UScaleX(v15, v14);
        v17 = *v9;
        *a4 = -64 * v16;
        v19 = UScaleX(v18, v17);
        *a5 = v21 + (v19 << 6) - v20;
        return 0LL;
      }
    }
  }
  return result;
}

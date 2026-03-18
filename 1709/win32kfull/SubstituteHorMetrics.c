/*
 * XREFs of SubstituteHorMetrics @ 0x1C02BCA28
 * Callers:
 *     GetSbitMetrics @ 0x1C02BC100 (GetSbitMetrics.c)
 *     sbit_CalcDevHorMetrics @ 0x1C02BCBD4 (sbit_CalcDevHorMetrics.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C02BE43C (sbit_GetDevAdvanceWidth.c)
 * Callees:
 *     SEmScaleY @ 0x1C02BC37C (SEmScaleY.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C02C4A7C (sfac_ReadGlyphHorMetrics.c)
 */

__int64 __fastcall SubstituteHorMetrics(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v4; // ax
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned __int16 v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int16 v8; // [rsp+40h] [rbp+18h] BYREF

  result = sfac_ReadGlyphHorMetrics(a2, *(unsigned __int16 *)(a2 + 216), &v7, &v8);
  if ( !(_DWORD)result )
  {
    if ( a1[14] == 3 )
      v4 = a1[17];
    else
      v4 = a1[15];
    v5 = ((unsigned __int16)a1[46] + v7 * 2 * (unsigned int)v4) / (2 * (unsigned int)(unsigned __int16)a1[46]);
    if ( a1[48] )
    {
      if ( (_WORD)v5 )
        LOWORD(v5) = v5 + 1;
    }
    v6 = v8;
    a1[25] = v5;
    a1[37] = a1[39];
    a1[38] = SEmScaleY((__int64)a1, v6);
    return 0LL;
  }
  return result;
}

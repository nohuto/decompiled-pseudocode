/*
 * XREFs of UScaleX @ 0x1C02BCB58
 * Callers:
 *     SScaleX @ 0x1C02BC3A4 (SScaleX.c)
 *     sbit_CalcDevHorMetrics @ 0x1C02BCBD4 (sbit_CalcDevHorMetrics.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C02BE43C (sbit_GetDevAdvanceWidth.c)
 *     sbit_GetMetrics @ 0x1C02BE560 (sbit_GetMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UScaleX(_WORD *a1, unsigned __int16 a2)
{
  unsigned int v2; // r9d

  LOWORD(v2) = a2;
  if ( a1[14] == 3 )
    v2 = ((unsigned __int16)a1[17] + a2 * 2 * (unsigned int)(unsigned __int16)a1[15])
       / (2
        * (unsigned int)(unsigned __int16)a1[17]);
  if ( a1[48] && (_WORD)v2 )
    LOWORD(v2) = v2 + 1;
  return (unsigned __int16)v2;
}

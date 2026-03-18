/*
 * XREFs of UScaleY @ 0x1C02C2D68
 * Callers:
 *     SScaleY @ 0x1C02C25A4 (SScaleY.c)
 *     sbit_GetDevAdvanceHeight @ 0x1C02C44B0 (sbit_GetDevAdvanceHeight.c)
 *     sbit_GetMetrics @ 0x1C02C4708 (sbit_GetMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UScaleY(_WORD *a1, unsigned __int16 a2)
{
  int v2; // r8d

  LOWORD(v2) = a2;
  if ( a1[14] == 3 )
    return (unsigned __int16)(((unsigned __int16)a1[18] + a2 * 2 * (unsigned int)(unsigned __int16)a1[16])
                            / (2
                             * (unsigned int)(unsigned __int16)a1[18]));
  return (unsigned __int16)v2;
}

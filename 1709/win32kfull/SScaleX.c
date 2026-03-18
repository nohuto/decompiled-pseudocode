/*
 * XREFs of SScaleX @ 0x1C02BC3A4
 * Callers:
 *     sbit_GetMetrics @ 0x1C02BE560 (sbit_GetMetrics.c)
 * Callees:
 *     UScaleX @ 0x1C02BCB58 (UScaleX.c)
 */

__int16 __fastcall SScaleX(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(a1 + 28) != 3 )
    return a2;
  if ( (a2 & 0x8000u) == 0LL )
    return UScaleX(a1, a2);
  LOWORD(a2) = -(__int16)a2;
  return -(__int16)UScaleX(a1, a2);
}

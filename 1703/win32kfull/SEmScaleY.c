/*
 * XREFs of SEmScaleY @ 0x1C02C2548
 * Callers:
 *     SubstituteHorMetrics @ 0x1C02C2BF0 (SubstituteHorMetrics.c)
 *     SubstituteVertMetrics @ 0x1C02C2C84 (SubstituteVertMetrics.c)
 * Callees:
 *     UEmScaleY @ 0x1C02C2CE8 (UEmScaleY.c)
 */

__int16 __fastcall SEmScaleY(__int64 a1, __int64 a2)
{
  if ( (a2 & 0x8000u) == 0LL )
    return UEmScaleY(a1, a2);
  LOWORD(a2) = -(__int16)a2;
  return -(__int16)UEmScaleY(a1, a2);
}

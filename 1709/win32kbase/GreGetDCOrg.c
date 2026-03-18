/*
 * XREFs of GreGetDCOrg @ 0x1C005CAF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCPoint @ 0x1C005B500 (GreGetDCPoint.c)
 */

__int64 __fastcall GreGetDCOrg(struct HOBJ__ *a1, __int64 a2)
{
  return GreGetDCPoint(a1, 32, a2);
}

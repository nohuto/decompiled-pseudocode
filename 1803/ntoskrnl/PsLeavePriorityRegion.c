/*
 * XREFs of PsLeavePriorityRegion @ 0x1400FE280
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall PsLeavePriorityRegion(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return PsBoostThreadIoEx(KeGetCurrentThread(), a2, 0LL, 0LL);
}

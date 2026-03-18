/*
 * XREFs of PsLeavePriorityRegion @ 0x14008D1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsLeavePriorityRegion(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return PsBoostThreadIoEx(KeGetCurrentThread(), a2, 0LL, 0LL);
}

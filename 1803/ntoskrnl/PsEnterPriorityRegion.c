/*
 * XREFs of PsEnterPriorityRegion @ 0x1400FE250
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}

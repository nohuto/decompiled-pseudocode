/*
 * XREFs of PsEnterPriorityRegion @ 0x14008D1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}

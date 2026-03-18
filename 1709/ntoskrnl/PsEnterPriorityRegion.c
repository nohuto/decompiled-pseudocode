/*
 * XREFs of PsEnterPriorityRegion @ 0x14010EDD0
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}

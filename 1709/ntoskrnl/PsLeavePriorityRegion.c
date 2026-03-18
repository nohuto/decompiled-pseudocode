/*
 * XREFs of PsLeavePriorityRegion @ 0x140081740
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 */

void PsLeavePriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
}

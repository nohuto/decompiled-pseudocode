/*
 * XREFs of IoEnqueueIrp @ 0x14071C230
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}

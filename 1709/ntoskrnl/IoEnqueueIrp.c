/*
 * XREFs of IoEnqueueIrp @ 0x1406B75A0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}

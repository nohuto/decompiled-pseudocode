/*
 * XREFs of IoQueueThreadIrp @ 0x140131A50
 * Callers:
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}

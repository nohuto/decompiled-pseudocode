/*
 * XREFs of IoQueueThreadIrp @ 0x14014D660
 * Callers:
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}

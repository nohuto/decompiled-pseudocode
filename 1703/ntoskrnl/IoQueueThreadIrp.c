/*
 * XREFs of IoQueueThreadIrp @ 0x140136450
 * Callers:
 *     PiPagePathSetState @ 0x1405D3A60 (PiPagePathSetState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}

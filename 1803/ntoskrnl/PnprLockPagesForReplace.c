/*
 * XREFs of PnprLockPagesForReplace @ 0x140734A00
 * Callers:
 *     PnprQuiesce @ 0x14023CF5C (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x140484180 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}

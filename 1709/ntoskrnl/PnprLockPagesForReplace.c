/*
 * XREFs of PnprLockPagesForReplace @ 0x1406CD060
 * Callers:
 *     PnprQuiesce @ 0x14020017C (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x14042D5E0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}

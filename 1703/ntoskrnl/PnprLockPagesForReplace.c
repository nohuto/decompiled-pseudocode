/*
 * XREFs of PnprLockPagesForReplace @ 0x1406A27C0
 * Callers:
 *     PnprQuiesce @ 0x1401FA43C (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x1404185D0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}

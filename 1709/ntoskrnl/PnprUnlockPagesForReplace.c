/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1406CD954
 * Callers:
 *     PnprCompleteWake @ 0x1401FFC10 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1400BC610 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}

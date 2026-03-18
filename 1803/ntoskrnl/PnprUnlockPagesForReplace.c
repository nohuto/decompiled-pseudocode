/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1407352F0
 * Callers:
 *     PnprCompleteWake @ 0x14023C958 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1400C1700 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}

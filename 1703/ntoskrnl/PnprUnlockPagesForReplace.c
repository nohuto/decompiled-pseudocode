/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1406A30B0
 * Callers:
 *     PnprCompleteWake @ 0x1401F9EA0 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14006CCE0 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}

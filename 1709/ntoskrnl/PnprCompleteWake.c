/*
 * XREFs of PnprCompleteWake @ 0x1401FFC10
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x14042C2C0 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x14042D5E0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1406CD954 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}

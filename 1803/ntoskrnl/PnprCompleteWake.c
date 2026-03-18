/*
 * XREFs of PnprCompleteWake @ 0x14023C958
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140482E4C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140484180 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1407352F0 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}

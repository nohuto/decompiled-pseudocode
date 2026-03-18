/*
 * XREFs of PnprCompleteWake @ 0x1401F9EA0
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140417290 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1404185D0 (PnprQuiesceWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}

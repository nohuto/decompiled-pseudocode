/*
 * XREFs of ?Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ @ 0x1C01932F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTDR_SUBMIT_REPORT_THREAD::Worker(struct _TDR_RECOVERY_CONTEXT **this)
{
  TdrDereferenceRecoveryContext(this[3], 0);
}

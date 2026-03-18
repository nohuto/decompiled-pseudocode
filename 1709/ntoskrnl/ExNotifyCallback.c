/*
 * XREFs of ExNotifyCallback @ 0x1400AEAB0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140438EC0 (PopUnlockAfterSleepWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     sub_1404F34C8 @ 0x1404F34C8 (sub_1404F34C8.c)
 *     NtNotifyChangeSession @ 0x1405E12D0 (NtNotifyChangeSession.c)
 *     PopDispatchCallback @ 0x1405F0630 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1406CD060 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1406CD954 (PnprUnlockPagesForReplace.c)
 *     PdcPoReportLidState @ 0x1406FF320 (PdcPoReportLidState.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407012F8 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchAcDcCallback @ 0x140706B70 (PopDispatchAcDcCallback.c)
 *     KiFilterFiberContext @ 0x14080CBA0 (KiFilterFiberContext.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400AEAC8 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

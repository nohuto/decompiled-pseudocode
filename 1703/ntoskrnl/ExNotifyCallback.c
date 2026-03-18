/*
 * XREFs of ExNotifyCallback @ 0x14006EEC0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140409EF0 (PopUnlockAfterSleepWorker.c)
 *     NtNotifyChangeSession @ 0x14045AEA4 (NtNotifyChangeSession.c)
 *     sub_14045EE78 @ 0x14045EE78 (sub_14045EE78.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     PopNotifyCallbacksPreSleep @ 0x1405763B8 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x1405D4540 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1406A27C0 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1406A30B0 (PnprUnlockPagesForReplace.c)
 *     PdcPoReportLidState @ 0x1406CB360 (PdcPoReportLidState.c)
 *     PopDispatchAcDcCallback @ 0x1406CF3C0 (PopDispatchAcDcCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

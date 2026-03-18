/*
 * XREFs of ExNotifyCallback @ 0x140072E00
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140476810 (PopUnlockAfterSleepWorker.c)
 *     PnpWinlogonExternalDmaNotification @ 0x140489874 (PnpWinlogonExternalDmaNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     sub_14054B65C @ 0x14054B65C (sub_14054B65C.c)
 *     NtNotifyChangeSession @ 0x140582640 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x1405EC638 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x140652710 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x140734A00 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1407352F0 (PnprUnlockPagesForReplace.c)
 *     PopNotifyLidStateChange @ 0x140762E00 (PopNotifyLidStateChange.c)
 *     PopDispatchAcDcCallback @ 0x14076B000 (PopDispatchAcDcCallback.c)
 *     KiFilterFiberContext @ 0x14087CBB0 (KiFilterFiberContext.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140072E18 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}

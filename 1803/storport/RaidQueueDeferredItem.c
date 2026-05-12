/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0003D6C
 * Callers:
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     StorPortPauseDevice @ 0x1C0003880 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0003C30 (StorPortResumeDevice.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C00268E0 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0027520 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002775C (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C002F904 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C002FEF0 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C00302A0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0030440 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0030B10 (StorPortPause.c)
 *     StorPortReady @ 0x1C0030DD0 (StorPortReady.c)
 *     StorPortResume @ 0x1C0031140 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}

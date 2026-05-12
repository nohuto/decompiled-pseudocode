/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0001F0C
 * Callers:
 *     StorPortPauseDevice @ 0x1C0001C50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001DD0 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C001ECF0 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C002D894 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002E088 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C0033440 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0033970 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0033C50 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0033DF0 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0034070 (StorPortPause.c)
 *     StorPortReady @ 0x1C0034310 (StorPortReady.c)
 *     StorPortResume @ 0x1C0034540 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}

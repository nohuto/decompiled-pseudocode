/*
 * XREFs of RaidQueueDeferredItem @ 0x1C000D0E0
 * Callers:
 *     StorPortNotification @ 0x1C0005A70 (StorPortNotification.c)
 *     StorPortPauseDevice @ 0x1C000CE20 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C000CFA0 (StorPortResumeDevice.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C001E0E4 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C002C914 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002D100 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C0032368 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0032880 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0032B60 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0032D00 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0032F20 (StorPortPause.c)
 *     StorPortReady @ 0x1C00331C0 (StorPortReady.c)
 *     StorPortResume @ 0x1C00333F0 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(__int64 a1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), a2);
  return KeInsertQueueDpc((PRKDPC)(a1 + 8), (PVOID)a1, 0LL);
}

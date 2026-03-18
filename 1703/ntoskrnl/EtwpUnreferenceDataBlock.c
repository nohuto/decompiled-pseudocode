/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140553DE0
 * Callers:
 *     EtwpQueueReply @ 0x140429088 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x14045BE80 (EtwpReceiveReplyDataBlock.c)
 *     EtwpDeleteRegistrationObject @ 0x140480960 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1404825D0 (EtwpRundownNotifications.c)
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140552860 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x140553BEC (EtwpReceiveNotification.c)
 *     SendCaptureStateNotificationsWorker @ 0x140711F20 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}

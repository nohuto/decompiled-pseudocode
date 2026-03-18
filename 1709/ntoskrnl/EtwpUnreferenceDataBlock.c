/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1404EFD38
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140491B40 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1404920B0 (EtwpRundownNotifications.c)
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404EF2A8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpReceiveNotification @ 0x1404EFB68 (EtwpReceiveNotification.c)
 *     EtwpQueueReply @ 0x140744924 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1407449C0 (EtwpReceiveReplyDataBlock.c)
 *     SendCaptureStateNotificationsWorker @ 0x14074FA80 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}

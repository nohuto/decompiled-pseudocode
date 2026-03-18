/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x14058DCB4
 * Callers:
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14058DD40 (EtwpReceiveNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x140590460 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x140590C14 (EtwpRundownNotifications.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140591B34 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpQueueReply @ 0x1405C30D4 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1405C3328 (EtwpReceiveReplyDataBlock.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407B0900 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}

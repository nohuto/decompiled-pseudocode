/*
 * XREFs of EtwpReleaseQueueEntry @ 0x14058DCDC
 * Callers:
 *     EtwpReceiveNotification @ 0x14058DD40 (EtwpReceiveNotification.c)
 *     EtwpQueueNotification @ 0x14058E080 (EtwpQueueNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x140590460 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x140590C14 (EtwpRundownNotifications.c)
 *     EtwpSendReplyDataBlock @ 0x1405C2FF4 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 */

void __fastcall EtwpReleaseQueueEntry(char *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(*((PVOID *)P + 4));
    v4 = *((_QWORD *)P + 5);
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, *((_QWORD *)P + 3));
  }
  _m_prefetchw(P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}

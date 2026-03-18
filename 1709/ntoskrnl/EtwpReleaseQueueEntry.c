/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1404EFCEC
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140491B40 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1404920B0 (EtwpRundownNotifications.c)
 *     EtwpQueueNotification @ 0x1404EF84C (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1404EFB68 (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x140744AD8 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x140467EE0 (PsReleaseProcessWakeCounter.c)
 */

void __fastcall EtwpReleaseQueueEntry(PVOID *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = (__int64)P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}

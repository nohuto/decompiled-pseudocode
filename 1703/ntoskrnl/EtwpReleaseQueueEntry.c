/*
 * XREFs of EtwpReleaseQueueEntry @ 0x140553D7C
 * Callers:
 *     EtwpSendReplyDataBlock @ 0x140428FA0 (EtwpSendReplyDataBlock.c)
 *     EtwpDeleteRegistrationObject @ 0x140480960 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1404825D0 (EtwpRundownNotifications.c)
 *     EtwpQueueNotification @ 0x140553790 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x140553BEC (EtwpReceiveNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 */

void __fastcall EtwpReleaseQueueEntry(PVOID *P, int a2)
{
  PVOID v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter((int)v4, (int)P[3]);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}

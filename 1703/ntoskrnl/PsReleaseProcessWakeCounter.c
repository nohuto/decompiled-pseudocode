/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1404307E0
 * Callers:
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140474350 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     AlpcMessageDestroyProcedure @ 0x14047EF00 (AlpcMessageDestroyProcedure.c)
 *     PopDisablePowerExecutionRequest @ 0x1404C7214 (PopDisablePowerExecutionRequest.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     EtwpReleaseQueueEntry @ 0x140553D7C (EtwpReleaseQueueEntry.c)
 *     PspCloseActivityReference @ 0x14056E250 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1406C57EC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1406C5970 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1405263E0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(int a1, int a2)
{
  int v2; // eax
  unsigned int v4; // ecx
  int v5; // r8d
  int v6; // edx

  v2 = a1 & 7;
  v4 = a1 & 0xFFFFFFF8;
  v5 = v2;
  v6 = 2;
  if ( v2 == 7 )
    v5 = 0;
  else
    v6 = 0;
  return PspChargeProcessWakeCounter(v4, v6, v5, a2, -1, 1, 0LL);
}

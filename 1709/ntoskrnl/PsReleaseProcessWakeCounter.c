/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140467EE0
 * Callers:
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140464F28 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcMessageDestroyProcedure @ 0x14049FFA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1404E79C8 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x1404EFCEC (EtwpReleaseQueueEntry.c)
 *     PopClearSpecialRequest @ 0x1406F5ACC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1406F5C08 (PopSetSpecialRequest.c)
 *     PspCloseActivityReference @ 0x14071C9B0 (PspCloseActivityReference.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1404A2250 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}

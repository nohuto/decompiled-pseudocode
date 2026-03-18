/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1404DE130
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x1404CC1C0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14051D604 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x14058DCDC (EtwpReleaseQueueEntry.c)
 *     PspCloseActivityReference @ 0x1405C4580 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x14075D6EC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x14075D828 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1404CE250 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // r8d
  int v5; // edx

  v2 = a1 & 7;
  v4 = 0;
  if ( v2 != 7 )
    v4 = a1 & 7;
  v5 = 2;
  if ( v2 != 7 )
    v5 = 0;
  return PspChargeProcessWakeCounter(a1 & 0xFFFFFFFFFFFFFFF8uLL, v5, v4, a2, -1, 1, 0LL);
}

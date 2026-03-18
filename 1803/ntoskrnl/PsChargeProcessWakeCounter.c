/*
 * XREFs of PsChargeProcessWakeCounter @ 0x14057FFB0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14051D604 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpQueueNotification @ 0x14058E080 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x1405C3548 (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x14075D828 (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x140060450 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1404CE250 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}

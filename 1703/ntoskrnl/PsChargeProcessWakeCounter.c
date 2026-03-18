/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1404C80E0
 * Callers:
 *     PopEnablePowerExecutionRequest @ 0x1404C8074 (PopEnablePowerExecutionRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     EtwpQueueNotification @ 0x140553790 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x14056CB48 (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x1406C5970 (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1400E7A10 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1405263E0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(__int64 a1, int a2, int a3, int a4)
{
  int v7; // ebx
  __int64 result; // rax

  v7 = a1;
  result = PsGetProcessInheritedFromUniqueProcessId(a1);
  if ( result )
    return PspChargeProcessWakeCounter(v7, a2, a3, a4, 1, 1, 0LL);
  return result;
}

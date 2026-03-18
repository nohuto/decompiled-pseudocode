/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14017E9E0
 * Callers:
 *     PopUmpoProcessMessages @ 0x1400AEC90 (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x1400B0618 (PopUmpoSendPowerMessage.c)
 *     PopMonitorProcessLoop @ 0x1405EEEC8 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}

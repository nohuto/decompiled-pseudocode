/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1401A8600
 * Callers:
 *     PopUmpoProcessMessages @ 0x140072FE0 (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x1400760DC (PopUmpoSendPowerMessage.c)
 *     PopMonitorProcessLoop @ 0x140652608 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}

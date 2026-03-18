/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14017F060
 * Callers:
 *     PopUmpoProcessMessages @ 0x14006F080 (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x14007210C (PopUmpoSendPowerMessage.c)
 *     PopMonitorProcessLoop @ 0x1405D3174 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}

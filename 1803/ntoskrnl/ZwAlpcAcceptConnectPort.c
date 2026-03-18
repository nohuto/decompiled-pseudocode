/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1401A8360
 * Callers:
 *     PopUmpoProcessMessage @ 0x140518A1C (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x140652608 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}

/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14017E740
 * Callers:
 *     PopUmpoProcessMessage @ 0x1404DF2D0 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x1405EEEC8 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}

/*
 * XREFs of ZwAlpcSetInformation @ 0x14017F080
 * Callers:
 *     PopUmpoInitializeChannel @ 0x140822E64 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140823D88 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}

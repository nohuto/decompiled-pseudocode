/*
 * XREFs of ZwAlpcSetInformation @ 0x14017EA00
 * Callers:
 *     PopUmpoInitializeChannel @ 0x1408542AC (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408551FC (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}

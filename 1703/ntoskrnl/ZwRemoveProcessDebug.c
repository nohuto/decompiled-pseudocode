/*
 * XREFs of ZwRemoveProcessDebug @ 0x140180BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Process, DebugObject, v2);
}

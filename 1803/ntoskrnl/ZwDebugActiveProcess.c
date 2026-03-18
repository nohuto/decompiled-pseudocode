/*
 * XREFs of ZwDebugActiveProcess @ 0x1401A8DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Process, DebugObject, v2);
}

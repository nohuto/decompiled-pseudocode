/*
 * XREFs of ZwDebugActiveProcess @ 0x14017F7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Process);
}

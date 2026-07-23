/*
 * XREFs of ZwMakePermanentObject @ 0x14017F9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakePermanentObject(HANDLE Object)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Object);
}

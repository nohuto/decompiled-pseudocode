/*
 * XREFs of ZwMakePermanentObject @ 0x1401A95C0
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

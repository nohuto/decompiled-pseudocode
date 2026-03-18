/*
 * XREFs of ZwMakePermanentObject @ 0x1401A95C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakePermanentObject(HANDLE Object)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Object, v1, v2);
}

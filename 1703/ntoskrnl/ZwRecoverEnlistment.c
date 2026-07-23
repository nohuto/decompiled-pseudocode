/*
 * XREFs of ZwRecoverEnlistment @ 0x140180AC0
 * Callers:
 *     CmpRecoverEnlistment @ 0x14066B97C (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

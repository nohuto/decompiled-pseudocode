/*
 * XREFs of ZwRecoverEnlistment @ 0x1401804A0
 * Callers:
 *     CmpRecoverEnlistment @ 0x140695FE8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

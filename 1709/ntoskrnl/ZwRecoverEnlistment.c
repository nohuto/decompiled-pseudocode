/*
 * XREFs of ZwRecoverEnlistment @ 0x1401804A0
 * Callers:
 *     CmpRecoverEnlistment @ 0x140695FE8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, EnlistmentKey, v2);
}

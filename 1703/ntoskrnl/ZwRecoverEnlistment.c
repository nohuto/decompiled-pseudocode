/*
 * XREFs of ZwRecoverEnlistment @ 0x140180AC0
 * Callers:
 *     CmpRecoverEnlistment @ 0x14066B97C (CmpRecoverEnlistment.c)
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

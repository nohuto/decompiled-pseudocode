/*
 * XREFs of ZwCallbackReturn @ 0x14017D960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCallbackReturn(PVOID Result, ULONG ResultLength, NTSTATUS Status)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Result);
}

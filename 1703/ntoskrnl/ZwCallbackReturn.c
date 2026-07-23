/*
 * XREFs of ZwCallbackReturn @ 0x14017DFE0
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

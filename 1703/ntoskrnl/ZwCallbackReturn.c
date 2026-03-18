/*
 * XREFs of ZwCallbackReturn @ 0x14017DFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCallbackReturn(PVOID Result, ULONG ResultLength, NTSTATUS Status)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Result, *(_QWORD *)&ResultLength, *(_QWORD *)&Status);
}

/*
 * XREFs of ZwQuerySystemEnvironmentValue @ 0x140180980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySystemEnvironmentValue(PUNICODE_STRING Name, PWSTR Value, ULONG Length, PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Name, Value, *(_QWORD *)&Length);
}

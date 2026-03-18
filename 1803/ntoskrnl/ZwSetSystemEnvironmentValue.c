/*
 * XREFs of ZwSetSystemEnvironmentValue @ 0x1401AA8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING Value)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(VariableName, Value, v2);
}

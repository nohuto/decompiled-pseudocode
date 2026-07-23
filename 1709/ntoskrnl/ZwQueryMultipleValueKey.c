/*
 * XREFs of ZwQueryMultipleValueKey @ 0x140180200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueList,
        ULONG NumberOfValues,
        PVOID Buffer,
        PULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}

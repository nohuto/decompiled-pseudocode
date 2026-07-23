/*
 * XREFs of ZwQueryOpenSubKeysEx @ 0x140180260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}

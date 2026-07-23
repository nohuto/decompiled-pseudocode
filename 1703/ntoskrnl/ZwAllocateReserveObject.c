/*
 * XREFs of ZwAllocateReserveObject @ 0x14017ED60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MemoryReserveHandle);
}

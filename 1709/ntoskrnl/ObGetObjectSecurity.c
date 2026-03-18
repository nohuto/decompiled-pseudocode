/*
 * XREFs of ObGetObjectSecurity @ 0x14059B9A0
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetObjectSecurity @ 0x140484F30 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}

/*
 * XREFs of ObGetObjectSecurity @ 0x140455EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity(Object, SecurityDescriptor, MemoryAllocated, 0LL);
}

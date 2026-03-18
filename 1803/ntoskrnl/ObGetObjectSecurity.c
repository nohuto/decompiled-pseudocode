/*
 * XREFs of ObGetObjectSecurity @ 0x140581AB0
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetObjectSecurity @ 0x1404C1DAC (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}

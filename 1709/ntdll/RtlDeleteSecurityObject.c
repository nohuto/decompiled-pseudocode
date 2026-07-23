/*
 * XREFs of RtlDeleteSecurityObject @ 0x18007F5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDeleteSecurityObject(PSECURITY_DESCRIPTOR *ObjectDescriptor)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *ObjectDescriptor);
  return 0;
}

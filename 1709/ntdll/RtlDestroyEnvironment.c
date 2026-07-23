/*
 * XREFs of RtlDestroyEnvironment @ 0x180082200
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  return 0;
}

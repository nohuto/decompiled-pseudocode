/*
 * XREFs of RtlDestroyProcessParameters @ 0x18007F6D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyProcessParameters(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessParameters);
  return 0;
}

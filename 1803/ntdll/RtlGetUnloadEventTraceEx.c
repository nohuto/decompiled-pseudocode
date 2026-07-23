/*
 * XREFs of RtlGetUnloadEventTraceEx @ 0x1800862B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetUnloadEventTraceEx(PULONG *ElementSize, PULONG *ElementCount, PVOID *EventTrace)
{
  *ElementSize = (PULONG)&unk_18015971C;
  *ElementCount = (PULONG)&dword_180159720;
  *EventTrace = &qword_18015CF88;
}

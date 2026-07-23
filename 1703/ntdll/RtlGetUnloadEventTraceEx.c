/*
 * XREFs of RtlGetUnloadEventTraceEx @ 0x180004D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetUnloadEventTraceEx(PULONG *ElementSize, PULONG *ElementCount, PVOID *EventTrace)
{
  *ElementSize = (PULONG)&unk_1801586A0;
  *ElementCount = (PULONG)&dword_180158690;
  *EventTrace = &qword_18015BF28;
}

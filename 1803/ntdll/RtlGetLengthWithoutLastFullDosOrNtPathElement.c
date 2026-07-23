/*
 * XREFs of RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x18006CAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetLengthWithoutLastFullDosOrNtPathElement(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  return sub_18006CAEC(Flags, PathString, PathString, Length);
}

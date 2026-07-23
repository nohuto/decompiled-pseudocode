/*
 * XREFs of RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x180071B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetLengthWithoutLastFullDosOrNtPathElement(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  return sub_180071B6C(Flags, PathString, PathString, Length);
}

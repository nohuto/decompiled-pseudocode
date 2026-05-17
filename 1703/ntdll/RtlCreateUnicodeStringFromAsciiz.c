/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x180076C80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitAnsiStringEx @ 0x180076CC0 (RtlInitAnsiStringEx.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}

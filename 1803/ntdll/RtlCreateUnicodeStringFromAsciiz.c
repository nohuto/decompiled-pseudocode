/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x18006DBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitAnsiStringEx @ 0x18006DC10 (RtlInitAnsiStringEx.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationStringa, SourceString) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}

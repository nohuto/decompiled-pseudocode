/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1405A3744
 * Callers:
 *     IopInitializeBootLogging @ 0x140689284 (IopInitializeBootLogging.c)
 *     CmpSetSystemValues @ 0x1408075C8 (CmpSetSystemValues.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x1408365E0 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140154D20 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING Destination, PCSZ Source)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationString, Source) >= 0
      && RtlAnsiStringToUnicodeString(Destination, &DestinationString, 1u) >= 0;
}

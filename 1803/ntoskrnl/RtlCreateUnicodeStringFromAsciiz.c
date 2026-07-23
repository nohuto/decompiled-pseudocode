/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x140630F30
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1401775A8 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140719F14 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x1408E2570 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140177650 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING Destination, PCSZ Source)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationString, Source) >= 0
      && RtlAnsiStringToUnicodeString(Destination, &DestinationString, 1u) >= 0;
}

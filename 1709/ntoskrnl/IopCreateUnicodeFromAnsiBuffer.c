/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1401467A0
 * Callers:
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140844A20 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}

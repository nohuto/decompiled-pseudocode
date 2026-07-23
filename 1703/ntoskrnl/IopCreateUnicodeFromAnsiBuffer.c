/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x140153C34
 * Callers:
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x1407FA5A0 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}

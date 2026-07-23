/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x140179850
 * Callers:
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x1408B6F50 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}

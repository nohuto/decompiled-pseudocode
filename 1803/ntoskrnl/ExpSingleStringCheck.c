/*
 * XREFs of ExpSingleStringCheck @ 0x14089E838
 * Callers:
 *     ExpStringCheck @ 0x14089E554 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x140147C40 (RtlComputeCrc32.c)
 */

ULONG __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (PUCHAR)DestinationString.Buffer, DestinationString.Length);
}

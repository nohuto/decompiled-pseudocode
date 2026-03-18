/*
 * XREFs of ExpSingleStringCheck @ 0x14084FE44
 * Callers:
 *     ExpStringCheck @ 0x14084FB60 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x140113980 (RtlComputeCrc32.c)
 */

ULONG __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (PUCHAR)DestinationString.Buffer, DestinationString.Length);
}

/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1800F7FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18004E6E4 (RtlpNameprepAsciiWorker.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           SourceString,
           *(__int64 *)&SourceStringLength,
           DestinationString,
           DestinationStringLength,
           0);
}

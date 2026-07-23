/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1800F6AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return sub_180069CA0(
           Flags,
           (WCHAR *)SourceString,
           *(__int64 *)&SourceStringLength,
           DestinationString,
           DestinationStringLength,
           0);
}
